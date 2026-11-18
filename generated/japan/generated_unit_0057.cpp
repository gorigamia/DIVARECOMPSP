#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0057[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57,
    0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0,
    0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0,
    198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 224, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0,
    239, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 247, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    290, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298,
    0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0,
    0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 393, 0, 394, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411,
    0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    423, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 433, 0, 0, 434,
    0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 446,
    0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458,
    0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0,
    0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479,
    0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0,
    0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0,
    522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 533,
    0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0,
    0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0,
    0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0,
    0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0,
    0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0,
    0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573,
    0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 581,
    0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0,
    601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0,
    0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0,
    625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630,
    0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0,
    0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643,
    0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0,
    0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 692,
    0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0,
    0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0,
    709, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0,
    723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0,
    0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734,
    0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0,
    741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0,
    0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0,
    0, 765, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 778, 0,
    0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0,
    0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0,
    798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0,
    0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 0, 0, 811,
    0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0,
    0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830,
};
void recomp_unit_0057_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0057[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E8000;
    case 2u: goto L_088E8014;
    case 3u: goto L_088E8028;
    case 4u: goto L_088E803C;
    case 5u: goto L_088E8058;
    case 6u: goto L_088E8070;
    case 7u: goto L_088E8080;
    case 8u: goto L_088E8090;
    case 9u: goto L_088E80E4;
    case 10u: goto L_088E80F4;
    case 11u: goto L_088E8104;
    case 12u: goto L_088E8114;
    case 13u: goto L_088E8138;
    case 14u: goto L_088E8154;
    case 15u: goto L_088E8164;
    case 16u: goto L_088E8178;
    case 17u: goto L_088E8188;
    case 18u: goto L_088E8198;
    case 19u: goto L_088E81A8;
    case 20u: goto L_088E81D0;
    case 21u: goto L_088E81E8;
    case 22u: goto L_088E8200;
    case 23u: goto L_088E8214;
    case 24u: goto L_088E8228;
    case 25u: goto L_088E8240;
    case 26u: goto L_088E8248;
    case 27u: goto L_088E8254;
    case 28u: goto L_088E8260;
    case 29u: goto L_088E8268;
    case 30u: goto L_088E8280;
    case 31u: goto L_088E8298;
    case 32u: goto L_088E82AC;
    case 33u: goto L_088E82B4;
    case 34u: goto L_088E82CC;
    case 35u: goto L_088E82E0;
    case 36u: goto L_088E82F4;
    case 37u: goto L_088E8310;
    case 38u: goto L_088E8328;
    case 39u: goto L_088E8338;
    case 40u: goto L_088E8348;
    case 41u: goto L_088E839C;
    case 42u: goto L_088E83AC;
    case 43u: goto L_088E83BC;
    case 44u: goto L_088E83CC;
    case 45u: goto L_088E83F4;
    case 46u: goto L_088E8410;
    case 47u: goto L_088E8420;
    case 48u: goto L_088E842C;
    case 49u: goto L_088E8468;
    case 50u: goto L_088E8484;
    case 51u: goto L_088E849C;
    case 52u: goto L_088E84B0;
    case 53u: goto L_088E84C4;
    case 54u: goto L_088E84DC;
    case 55u: goto L_088E84E4;
    case 56u: goto L_088E84F0;
    case 57u: goto L_088E84FC;
    case 58u: goto L_088E8504;
    case 59u: goto L_088E851C;
    case 60u: goto L_088E8534;
    case 61u: goto L_088E8548;
    case 62u: goto L_088E8550;
    case 63u: goto L_088E8568;
    case 64u: goto L_088E857C;
    case 65u: goto L_088E8590;
    case 66u: goto L_088E85AC;
    case 67u: goto L_088E85C4;
    case 68u: goto L_088E85D4;
    case 69u: goto L_088E85E4;
    case 70u: goto L_088E8638;
    case 71u: goto L_088E8648;
    case 72u: goto L_088E8658;
    case 73u: goto L_088E8668;
    case 74u: goto L_088E8680;
    case 75u: goto L_088E8694;
    case 76u: goto L_088E86A8;
    case 77u: goto L_088E86C0;
    case 78u: goto L_088E86D4;
    case 79u: goto L_088E86DC;
    case 80u: goto L_088E86F4;
    case 81u: goto L_088E8710;
    case 82u: goto L_088E874C;
    case 83u: goto L_088E8758;
    case 84u: goto L_088E877C;
    case 85u: goto L_088E8784;
    case 86u: goto L_088E87A0;
    case 87u: goto L_088E87AC;
    case 88u: goto L_088E87B4;
    case 89u: goto L_088E87C0;
    case 90u: goto L_088E87C8;
    case 91u: goto L_088E87D4;
    case 92u: goto L_088E87DC;
    case 93u: goto L_088E87F4;
    case 94u: goto L_088E8814;
    case 95u: goto L_088E8820;
    case 96u: goto L_088E883C;
    case 97u: goto L_088E8844;
    case 98u: goto L_088E8850;
    case 99u: goto L_088E885C;
    case 100u: goto L_088E8878;
    case 101u: goto L_088E8888;
    case 102u: goto L_088E88A0;
    case 103u: goto L_088E88B0;
    case 104u: goto L_088E88C0;
    case 105u: goto L_088E891C;
    case 106u: goto L_088E892C;
    case 107u: goto L_088E893C;
    case 108u: goto L_088E894C;
    case 109u: goto L_088E8974;
    case 110u: goto L_088E8990;
    case 111u: goto L_088E89A0;
    case 112u: goto L_088E89AC;
    case 113u: goto L_088E89C0;
    case 114u: goto L_088E89D4;
    case 115u: goto L_088E89E8;
    case 116u: goto L_088E89F4;
    case 117u: goto L_088E8A0C;
    case 118u: goto L_088E8A18;
    case 119u: goto L_088E8A30;
    case 120u: goto L_088E8A44;
    case 121u: goto L_088E8A50;
    case 122u: goto L_088E8A6C;
    case 123u: goto L_088E8A78;
    case 124u: goto L_088E8A8C;
    case 125u: goto L_088E8AA4;
    case 126u: goto L_088E8AB8;
    case 127u: goto L_088E8AE4;
    case 128u: goto L_088E8B00;
    case 129u: goto L_088E8B18;
    case 130u: goto L_088E8B3C;
    case 131u: goto L_088E8B44;
    case 132u: goto L_088E8B5C;
    case 133u: goto L_088E8B74;
    case 134u: goto L_088E8B88;
    case 135u: goto L_088E8B90;
    case 136u: goto L_088E8BA8;
    case 137u: goto L_088E8BC0;
    case 138u: goto L_088E8BD8;
    case 139u: goto L_088E8BFC;
    case 140u: goto L_088E8C18;
    case 141u: goto L_088E8C30;
    case 142u: goto L_088E8C48;
    case 143u: goto L_088E8C58;
    case 144u: goto L_088E8C68;
    case 145u: goto L_088E8CBC;
    case 146u: goto L_088E8CCC;
    case 147u: goto L_088E8CDC;
    case 148u: goto L_088E8CEC;
    case 149u: goto L_088E8D08;
    case 150u: goto L_088E8D10;
    case 151u: goto L_088E8D1C;
    case 152u: goto L_088E8D30;
    case 153u: goto L_088E8D44;
    case 154u: goto L_088E8D4C;
    case 155u: goto L_088E8D5C;
    case 156u: goto L_088E8D80;
    case 157u: goto L_088E8D88;
    case 158u: goto L_088E8D90;
    case 159u: goto L_088E8DB4;
    case 160u: goto L_088E8DC8;
    case 161u: goto L_088E8DE0;
    case 162u: goto L_088E8DE8;
    case 163u: goto L_088E8E00;
    case 164u: goto L_088E8E0C;
    case 165u: goto L_088E8E20;
    case 166u: goto L_088E8E30;
    case 167u: goto L_088E8E4C;
    case 168u: goto L_088E8E58;
    case 169u: goto L_088E8E64;
    case 170u: goto L_088E8E78;
    case 171u: goto L_088E8E84;
    case 172u: goto L_088E8E94;
    case 173u: goto L_088E8EA0;
    case 174u: goto L_088E8EA8;
    case 175u: goto L_088E8EB4;
    case 176u: goto L_088E8EBC;
    case 177u: goto L_088E8ED4;
    case 178u: goto L_088E8EE8;
    case 179u: goto L_088E8EF8;
    case 180u: goto L_088E8F10;
    case 181u: goto L_088E8F14;
    case 182u: goto L_088E8F1C;
    case 183u: goto L_088E8F34;
    case 184u: goto L_088E8F40;
    case 185u: goto L_088E8F50;
    case 186u: goto L_088E8F60;
    case 187u: goto L_088E8F7C;
    case 188u: goto L_088E8F88;
    case 189u: goto L_088E8F90;
    case 190u: goto L_088E8F9C;
    case 191u: goto L_088E8FA8;
    case 192u: goto L_088E8FBC;
    case 193u: goto L_088E8FC8;
    case 194u: goto L_088E8FD8;
    case 195u: goto L_088E8FE4;
    case 196u: goto L_088E8FEC;
    case 197u: goto L_088E8FF8;
    case 198u: goto L_088E9000;
    case 199u: goto L_088E9018;
    case 200u: goto L_088E902C;
    case 201u: goto L_088E903C;
    case 202u: goto L_088E9054;
    case 203u: goto L_088E9058;
    case 204u: goto L_088E9060;
    case 205u: goto L_088E9078;
    case 206u: goto L_088E9084;
    case 207u: goto L_088E9098;
    case 208u: goto L_088E90A8;
    case 209u: goto L_088E90C4;
    case 210u: goto L_088E90D0;
    case 211u: goto L_088E90D8;
    case 212u: goto L_088E90E4;
    case 213u: goto L_088E90F0;
    case 214u: goto L_088E9104;
    case 215u: goto L_088E9110;
    case 216u: goto L_088E9120;
    case 217u: goto L_088E912C;
    case 218u: goto L_088E9134;
    case 219u: goto L_088E9140;
    case 220u: goto L_088E9148;
    case 221u: goto L_088E9160;
    case 222u: goto L_088E9174;
    case 223u: goto L_088E9184;
    case 224u: goto L_088E919C;
    case 225u: goto L_088E91A0;
    case 226u: goto L_088E91A8;
    case 227u: goto L_088E91C0;
    case 228u: goto L_088E91CC;
    case 229u: goto L_088E91EC;
    case 230u: goto L_088E91FC;
    case 231u: goto L_088E9218;
    case 232u: goto L_088E9224;
    case 233u: goto L_088E922C;
    case 234u: goto L_088E9238;
    case 235u: goto L_088E9244;
    case 236u: goto L_088E9258;
    case 237u: goto L_088E9264;
    case 238u: goto L_088E9274;
    case 239u: goto L_088E9280;
    case 240u: goto L_088E9288;
    case 241u: goto L_088E9294;
    case 242u: goto L_088E929C;
    case 243u: goto L_088E92B4;
    case 244u: goto L_088E92C8;
    case 245u: goto L_088E92D8;
    case 246u: goto L_088E92F0;
    case 247u: goto L_088E92F4;
    case 248u: goto L_088E92FC;
    case 249u: goto L_088E9314;
    case 250u: goto L_088E9320;
    case 251u: goto L_088E9334;
    case 252u: goto L_088E9344;
    case 253u: goto L_088E9360;
    case 254u: goto L_088E936C;
    case 255u: goto L_088E9374;
    case 256u: goto L_088E9380;
    case 257u: goto L_088E938C;
    case 258u: goto L_088E93A0;
    case 259u: goto L_088E93AC;
    case 260u: goto L_088E93BC;
    case 261u: goto L_088E93C8;
    case 262u: goto L_088E93D0;
    case 263u: goto L_088E93DC;
    case 264u: goto L_088E93E4;
    case 265u: goto L_088E93FC;
    case 266u: goto L_088E9410;
    case 267u: goto L_088E9420;
    case 268u: goto L_088E9438;
    case 269u: goto L_088E943C;
    case 270u: goto L_088E9444;
    case 271u: goto L_088E945C;
    case 272u: goto L_088E9468;
    case 273u: goto L_088E947C;
    case 274u: goto L_088E948C;
    case 275u: goto L_088E94A8;
    case 276u: goto L_088E94B4;
    case 277u: goto L_088E94BC;
    case 278u: goto L_088E94C8;
    case 279u: goto L_088E94D4;
    case 280u: goto L_088E94E8;
    case 281u: goto L_088E94F4;
    case 282u: goto L_088E9504;
    case 283u: goto L_088E9510;
    case 284u: goto L_088E9518;
    case 285u: goto L_088E9524;
    case 286u: goto L_088E952C;
    case 287u: goto L_088E9544;
    case 288u: goto L_088E9558;
    case 289u: goto L_088E9568;
    case 290u: goto L_088E9580;
    case 291u: goto L_088E9584;
    case 292u: goto L_088E958C;
    case 293u: goto L_088E95A4;
    case 294u: goto L_088E95B0;
    case 295u: goto L_088E95C4;
    case 296u: goto L_088E95D4;
    case 297u: goto L_088E95F0;
    case 298u: goto L_088E95FC;
    case 299u: goto L_088E9604;
    case 300u: goto L_088E9610;
    case 301u: goto L_088E961C;
    case 302u: goto L_088E9630;
    case 303u: goto L_088E963C;
    case 304u: goto L_088E964C;
    case 305u: goto L_088E9658;
    case 306u: goto L_088E9660;
    case 307u: goto L_088E966C;
    case 308u: goto L_088E9674;
    case 309u: goto L_088E968C;
    case 310u: goto L_088E96A0;
    case 311u: goto L_088E96B0;
    case 312u: goto L_088E96C8;
    case 313u: goto L_088E96CC;
    case 314u: goto L_088E96D4;
    case 315u: goto L_088E96EC;
    case 316u: goto L_088E96F8;
    case 317u: goto L_088E970C;
    case 318u: goto L_088E971C;
    case 319u: goto L_088E9738;
    case 320u: goto L_088E9744;
    case 321u: goto L_088E975C;
    case 322u: goto L_088E9774;
    case 323u: goto L_088E9788;
    case 324u: goto L_088E979C;
    case 325u: goto L_088E97B4;
    case 326u: goto L_088E97BC;
    case 327u: goto L_088E97C8;
    case 328u: goto L_088E97D4;
    case 329u: goto L_088E97DC;
    case 330u: goto L_088E97F4;
    case 331u: goto L_088E980C;
    case 332u: goto L_088E9820;
    case 333u: goto L_088E9828;
    case 334u: goto L_088E9840;
    case 335u: goto L_088E9854;
    case 336u: goto L_088E9868;
    case 337u: goto L_088E9884;
    case 338u: goto L_088E989C;
    case 339u: goto L_088E98AC;
    case 340u: goto L_088E98BC;
    case 341u: goto L_088E9910;
    case 342u: goto L_088E9920;
    case 343u: goto L_088E9930;
    case 344u: goto L_088E9940;
    case 345u: goto L_088E9970;
    case 346u: goto L_088E9984;
    case 347u: goto L_088E99A0;
    case 348u: goto L_088E99AC;
    case 349u: goto L_088E99D4;
    case 350u: goto L_088E99F0;
    case 351u: goto L_088E99FC;
    case 352u: goto L_088E9A18;
    case 353u: goto L_088E9A30;
    case 354u: goto L_088E9A44;
    case 355u: goto L_088E9A58;
    case 356u: goto L_088E9A70;
    case 357u: goto L_088E9A78;
    case 358u: goto L_088E9A84;
    case 359u: goto L_088E9A90;
    case 360u: goto L_088E9A98;
    case 361u: goto L_088E9AB0;
    case 362u: goto L_088E9AC8;
    case 363u: goto L_088E9ADC;
    case 364u: goto L_088E9AE4;
    case 365u: goto L_088E9AFC;
    case 366u: goto L_088E9B10;
    case 367u: goto L_088E9B24;
    case 368u: goto L_088E9B40;
    case 369u: goto L_088E9B58;
    case 370u: goto L_088E9B68;
    case 371u: goto L_088E9B78;
    case 372u: goto L_088E9BCC;
    case 373u: goto L_088E9BDC;
    case 374u: goto L_088E9BEC;
    case 375u: goto L_088E9BFC;
    case 376u: goto L_088E9C14;
    case 377u: goto L_088E9C28;
    case 378u: goto L_088E9C30;
    case 379u: goto L_088E9C48;
    case 380u: goto L_088E9C60;
    case 381u: goto L_088E9C70;
    case 382u: goto L_088E9C80;
    case 383u: goto L_088E9CC8;
    case 384u: goto L_088E9CD8;
    case 385u: goto L_088E9CE8;
    case 386u: goto L_088E9CF8;
    case 387u: goto L_088E9D10;
    case 388u: goto L_088E9D24;
    case 389u: goto L_088E9D38;
    case 390u: goto L_088E9D50;
    case 391u: goto L_088E9D58;
    case 392u: goto L_088E9D64;
    case 393u: goto L_088E9D70;
    case 394u: goto L_088E9D78;
    case 395u: goto L_088E9D90;
    case 396u: goto L_088E9DA8;
    case 397u: goto L_088E9DBC;
    case 398u: goto L_088E9DC4;
    case 399u: goto L_088E9DDC;
    case 400u: goto L_088E9DF4;
    case 401u: goto L_088E9E04;
    case 402u: goto L_088E9E14;
    case 403u: goto L_088E9E64;
    case 404u: goto L_088E9E74;
    case 405u: goto L_088E9E84;
    case 406u: goto L_088E9E94;
    case 407u: goto L_088E9EB0;
    case 408u: goto L_088E9EC0;
    case 409u: goto L_088E9ED0;
    case 410u: goto L_088E9EE8;
    case 411u: goto L_088E9EFC;
    case 412u: goto L_088E9F04;
    case 413u: goto L_088E9F1C;
    case 414u: goto L_088E9F34;
    case 415u: goto L_088E9F4C;
    case 416u: goto L_088E9F70;
    case 417u: goto L_088E9F78;
    case 418u: goto L_088E9F88;
    case 419u: goto L_088E9FA0;
    case 420u: goto L_088E9FC0;
    case 421u: goto L_088E9FD8;
    case 422u: goto L_088E9FE8;
    case 423u: goto L_088EA000;
    case 424u: goto L_088EA004;
    case 425u: goto L_088EA00C;
    case 426u: goto L_088EA024;
    case 427u: goto L_088EA030;
    case 428u: goto L_088EA03C;
    case 429u: goto L_088EA048;
    case 430u: goto L_088EA050;
    case 431u: goto L_088EA05C;
    case 432u: goto L_088EA068;
    case 433u: goto L_088EA070;
    case 434u: goto L_088EA07C;
    case 435u: goto L_088EA088;
    case 436u: goto L_088EA090;
    case 437u: goto L_088EA09C;
    case 438u: goto L_088EA0A8;
    case 439u: goto L_088EA0B0;
    case 440u: goto L_088EA0BC;
    case 441u: goto L_088EA0C8;
    case 442u: goto L_088EA0D0;
    case 443u: goto L_088EA0DC;
    case 444u: goto L_088EA0E8;
    case 445u: goto L_088EA0F0;
    case 446u: goto L_088EA0FC;
    case 447u: goto L_088EA108;
    case 448u: goto L_088EA110;
    case 449u: goto L_088EA11C;
    case 450u: goto L_088EA128;
    case 451u: goto L_088EA130;
    case 452u: goto L_088EA13C;
    case 453u: goto L_088EA148;
    case 454u: goto L_088EA150;
    case 455u: goto L_088EA15C;
    case 456u: goto L_088EA168;
    case 457u: goto L_088EA170;
    case 458u: goto L_088EA17C;
    case 459u: goto L_088EA188;
    case 460u: goto L_088EA190;
    case 461u: goto L_088EA19C;
    case 462u: goto L_088EA1A8;
    case 463u: goto L_088EA1B0;
    case 464u: goto L_088EA1BC;
    case 465u: goto L_088EA1C8;
    case 466u: goto L_088EA1E4;
    case 467u: goto L_088EA1FC;
    case 468u: goto L_088EA254;
    case 469u: goto L_088EA26C;
    case 470u: goto L_088EA27C;
    case 471u: goto L_088EA28C;
    case 472u: goto L_088EA2E8;
    case 473u: goto L_088EA2F8;
    case 474u: goto L_088EA308;
    case 475u: goto L_088EA318;
    case 476u: goto L_088EA328;
    case 477u: goto L_088EA350;
    case 478u: goto L_088EA36C;
    case 479u: goto L_088EA37C;
    case 480u: goto L_088EA390;
    case 481u: goto L_088EA3A4;
    case 482u: goto L_088EA3B8;
    case 483u: goto L_088EA3C4;
    case 484u: goto L_088EA3DC;
    case 485u: goto L_088EA3F0;
    case 486u: goto L_088EA404;
    case 487u: goto L_088EA410;
    case 488u: goto L_088EA428;
    case 489u: goto L_088EA454;
    case 490u: goto L_088EA470;
    case 491u: goto L_088EA488;
    case 492u: goto L_088EA49C;
    case 493u: goto L_088EA4B0;
    case 494u: goto L_088EA4C8;
    case 495u: goto L_088EA4D0;
    case 496u: goto L_088EA4DC;
    case 497u: goto L_088EA4E8;
    case 498u: goto L_088EA4F0;
    case 499u: goto L_088EA508;
    case 500u: goto L_088EA520;
    case 501u: goto L_088EA534;
    case 502u: goto L_088EA53C;
    case 503u: goto L_088EA554;
    case 504u: goto L_088EA56C;
    case 505u: goto L_088EA5B8;
    case 506u: goto L_088EA5DC;
    case 507u: goto L_088EA5E4;
    case 508u: goto L_088EA5F0;
    case 509u: goto L_088EA5F8;
    case 510u: goto L_088EA604;
    case 511u: goto L_088EA60C;
    case 512u: goto L_088EA618;
    case 513u: goto L_088EA620;
    case 514u: goto L_088EA62C;
    case 515u: goto L_088EA634;
    case 516u: goto L_088EA640;
    case 517u: goto L_088EA648;
    case 518u: goto L_088EA654;
    case 519u: goto L_088EA65C;
    case 520u: goto L_088EA668;
    case 521u: goto L_088EA670;
    case 522u: goto L_088EA680;
    case 523u: goto L_088EA68C;
    case 524u: goto L_088EA694;
    case 525u: goto L_088EA69C;
    case 526u: goto L_088EA6AC;
    case 527u: goto L_088EA6BC;
    case 528u: goto L_088EA6C8;
    case 529u: goto L_088EA6D0;
    case 530u: goto L_088EA6D8;
    case 531u: goto L_088EA6E8;
    case 532u: goto L_088EA6F4;
    case 533u: goto L_088EA6FC;
    case 534u: goto L_088EA708;
    case 535u: goto L_088EA710;
    case 536u: goto L_088EA71C;
    case 537u: goto L_088EA724;
    case 538u: goto L_088EA730;
    case 539u: goto L_088EA738;
    case 540u: goto L_088EA750;
    case 541u: goto L_088EA768;
    case 542u: goto L_088EA778;
    case 543u: goto L_088EA788;
    case 544u: goto L_088EA7E4;
    case 545u: goto L_088EA7F4;
    case 546u: goto L_088EA804;
    case 547u: goto L_088EA814;
    case 548u: goto L_088EA83C;
    case 549u: goto L_088EA858;
    case 550u: goto L_088EA868;
    case 551u: goto L_088EA874;
    case 552u: goto L_088EA888;
    case 553u: goto L_088EA894;
    case 554u: goto L_088EA8B4;
    case 555u: goto L_088EA8C0;
    case 556u: goto L_088EA8E0;
    case 557u: goto L_088EA8EC;
    case 558u: goto L_088EA904;
    case 559u: goto L_088EA914;
    case 560u: goto L_088EA924;
    case 561u: goto L_088EA934;
    case 562u: goto L_088EA944;
    case 563u: goto L_088EA950;
    case 564u: goto L_088EA964;
    case 565u: goto L_088EA970;
    case 566u: goto L_088EA984;
    case 567u: goto L_088EA994;
    case 568u: goto L_088EA9A4;
    case 569u: goto L_088EA9B0;
    case 570u: goto L_088EA9C8;
    case 571u: goto L_088EA9D4;
    case 572u: goto L_088EA9EC;
    case 573u: goto L_088EA9FC;
    case 574u: goto L_088EAA0C;
    case 575u: goto L_088EAA18;
    case 576u: goto L_088EAA2C;
    case 577u: goto L_088EAA38;
    case 578u: goto L_088EAA4C;
    case 579u: goto L_088EAA58;
    case 580u: goto L_088EAA6C;
    case 581u: goto L_088EAA7C;
    case 582u: goto L_088EAA8C;
    case 583u: goto L_088EAA9C;
    case 584u: goto L_088EAAAC;
    case 585u: goto L_088EAABC;
    case 586u: goto L_088EAACC;
    case 587u: goto L_088EAAD8;
    case 588u: goto L_088EAB04;
    case 589u: goto L_088EAB20;
    case 590u: goto L_088EAB38;
    case 591u: goto L_088EAB4C;
    case 592u: goto L_088EAB54;
    case 593u: goto L_088EAB6C;
    case 594u: goto L_088EAB84;
    case 595u: goto L_088EABAC;
    case 596u: goto L_088EABD0;
    case 597u: goto L_088EABD8;
    case 598u: goto L_088EABE4;
    case 599u: goto L_088EABEC;
    case 600u: goto L_088EABF8;
    case 601u: goto L_088EAC00;
    case 602u: goto L_088EAC0C;
    case 603u: goto L_088EAC14;
    case 604u: goto L_088EAC24;
    case 605u: goto L_088EAC30;
    case 606u: goto L_088EAC38;
    case 607u: goto L_088EAC40;
    case 608u: goto L_088EAC50;
    case 609u: goto L_088EAC68;
    case 610u: goto L_088EAC80;
    case 611u: goto L_088EAC90;
    case 612u: goto L_088EACA0;
    case 613u: goto L_088EAD04;
    case 614u: goto L_088EAD14;
    case 615u: goto L_088EAD24;
    case 616u: goto L_088EAD34;
    case 617u: goto L_088EAD5C;
    case 618u: goto L_088EAD78;
    case 619u: goto L_088EAD88;
    case 620u: goto L_088EAD94;
    case 621u: goto L_088EADB0;
    case 622u: goto L_088EADBC;
    case 623u: goto L_088EADD8;
    case 624u: goto L_088EADE4;
    case 625u: goto L_088EAE00;
    case 626u: goto L_088EAE0C;
    case 627u: goto L_088EAE40;
    case 628u: goto L_088EAE5C;
    case 629u: goto L_088EAE6C;
    case 630u: goto L_088EAE7C;
    case 631u: goto L_088EAE94;
    case 632u: goto L_088EAEA8;
    case 633u: goto L_088EAEBC;
    case 634u: goto L_088EAED4;
    case 635u: goto L_088EAEE8;
    case 636u: goto L_088EAEF0;
    case 637u: goto L_088EAF08;
    case 638u: goto L_088EAF20;
    case 639u: goto L_088EAF3C;
    case 640u: goto L_088EAF60;
    case 641u: goto L_088EAF68;
    case 642u: goto L_088EAF74;
    case 643u: goto L_088EAF7C;
    case 644u: goto L_088EAF94;
    case 645u: goto L_088EAFAC;
    case 646u: goto L_088EAFBC;
    case 647u: goto L_088EAFCC;
    case 648u: goto L_088EB028;
    case 649u: goto L_088EB038;
    case 650u: goto L_088EB048;
    case 651u: goto L_088EB058;
    case 652u: goto L_088EB080;
    case 653u: goto L_088EB09C;
    case 654u: goto L_088EB0AC;
    case 655u: goto L_088EB0BC;
    case 656u: goto L_088EB0CC;
    case 657u: goto L_088EB0D8;
    case 658u: goto L_088EB0F4;
    case 659u: goto L_088EB100;
    case 660u: goto L_088EB134;
    case 661u: goto L_088EB150;
    case 662u: goto L_088EB168;
    case 663u: goto L_088EB17C;
    case 664u: goto L_088EB190;
    case 665u: goto L_088EB1A8;
    case 666u: goto L_088EB1BC;
    case 667u: goto L_088EB1C4;
    case 668u: goto L_088EB1DC;
    case 669u: goto L_088EB1F4;
    case 670u: goto L_088EB20C;
    case 671u: goto L_088EB234;
    case 672u: goto L_088EB240;
    case 673u: goto L_088EB248;
    case 674u: goto L_088EB250;
    case 675u: goto L_088EB260;
    case 676u: goto L_088EB278;
    case 677u: goto L_088EB290;
    case 678u: goto L_088EB2A0;
    case 679u: goto L_088EB2B0;
    case 680u: goto L_088EB30C;
    case 681u: goto L_088EB31C;
    case 682u: goto L_088EB32C;
    case 683u: goto L_088EB33C;
    case 684u: goto L_088EB360;
    case 685u: goto L_088EB37C;
    case 686u: goto L_088EB3A4;
    case 687u: goto L_088EB3BC;
    case 688u: goto L_088EB3D4;
    case 689u: goto L_088EB3DC;
    case 690u: goto L_088EB3E8;
    case 691u: goto L_088EB3F4;
    case 692u: goto L_088EB3FC;
    case 693u: goto L_088EB414;
    case 694u: goto L_088EB42C;
    case 695u: goto L_088EB440;
    case 696u: goto L_088EB448;
    case 697u: goto L_088EB460;
    case 698u: goto L_088EB474;
    case 699u: goto L_088EB488;
    case 700u: goto L_088EB4A4;
    case 701u: goto L_088EB4BC;
    case 702u: goto L_088EB4CC;
    case 703u: goto L_088EB4DC;
    case 704u: goto L_088EB530;
    case 705u: goto L_088EB540;
    case 706u: goto L_088EB550;
    case 707u: goto L_088EB560;
    case 708u: goto L_088EB578;
    case 709u: goto L_088EB580;
    case 710u: goto L_088EB58C;
    case 711u: goto L_088EB598;
    case 712u: goto L_088EB5A0;
    case 713u: goto L_088EB5B8;
    case 714u: goto L_088EB5D0;
    case 715u: goto L_088EB5E4;
    case 716u: goto L_088EB5EC;
    case 717u: goto L_088EB604;
    case 718u: goto L_088EB618;
    case 719u: goto L_088EB62C;
    case 720u: goto L_088EB648;
    case 721u: goto L_088EB660;
    case 722u: goto L_088EB670;
    case 723u: goto L_088EB680;
    case 724u: goto L_088EB6D4;
    case 725u: goto L_088EB6E4;
    case 726u: goto L_088EB6F4;
    case 727u: goto L_088EB704;
    case 728u: goto L_088EB71C;
    case 729u: goto L_088EB730;
    case 730u: goto L_088EB744;
    case 731u: goto L_088EB75C;
    case 732u: goto L_088EB764;
    case 733u: goto L_088EB770;
    case 734u: goto L_088EB77C;
    case 735u: goto L_088EB784;
    case 736u: goto L_088EB79C;
    case 737u: goto L_088EB7B4;
    case 738u: goto L_088EB7C8;
    case 739u: goto L_088EB7D0;
    case 740u: goto L_088EB7E8;
    case 741u: goto L_088EB800;
    case 742u: goto L_088EB824;
    case 743u: goto L_088EB848;
    case 744u: goto L_088EB850;
    case 745u: goto L_088EB85C;
    case 746u: goto L_088EB864;
    case 747u: goto L_088EB870;
    case 748u: goto L_088EB878;
    case 749u: goto L_088EB884;
    case 750u: goto L_088EB88C;
    case 751u: goto L_088EB8A4;
    case 752u: goto L_088EB8BC;
    case 753u: goto L_088EB8CC;
    case 754u: goto L_088EB8DC;
    case 755u: goto L_088EB938;
    case 756u: goto L_088EB948;
    case 757u: goto L_088EB958;
    case 758u: goto L_088EB968;
    case 759u: goto L_088EB990;
    case 760u: goto L_088EB9AC;
    case 761u: goto L_088EB9BC;
    case 762u: goto L_088EB9C8;
    case 763u: goto L_088EB9DC;
    case 764u: goto L_088EB9E8;
    case 765u: goto L_088EBA04;
    case 766u: goto L_088EBA10;
    case 767u: goto L_088EBA24;
    case 768u: goto L_088EBA34;
    case 769u: goto L_088EBA44;
    case 770u: goto L_088EBA50;
    case 771u: goto L_088EBA84;
    case 772u: goto L_088EBAA0;
    case 773u: goto L_088EBAB8;
    case 774u: goto L_088EBAC0;
    case 775u: goto L_088EBACC;
    case 776u: goto L_088EBAD8;
    case 777u: goto L_088EBAE0;
    case 778u: goto L_088EBAF8;
    case 779u: goto L_088EBB10;
    case 780u: goto L_088EBB24;
    case 781u: goto L_088EBB2C;
    case 782u: goto L_088EBB44;
    case 783u: goto L_088EBB5C;
    case 784u: goto L_088EBB6C;
    case 785u: goto L_088EBB7C;
    case 786u: goto L_088EBBD4;
    case 787u: goto L_088EBBE4;
    case 788u: goto L_088EBBF4;
    case 789u: goto L_088EBC04;
    case 790u: goto L_088EBC2C;
    case 791u: goto L_088EBC48;
    case 792u: goto L_088EBC58;
    case 793u: goto L_088EBC64;
    case 794u: goto L_088EBC98;
    case 795u: goto L_088EBCC8;
    case 796u: goto L_088EBCD8;
    case 797u: goto L_088EBCE8;
    case 798u: goto L_088EBD00;
    case 799u: goto L_088EBD14;
    case 800u: goto L_088EBD28;
    case 801u: goto L_088EBD40;
    case 802u: goto L_088EBD54;
    case 803u: goto L_088EBD5C;
    case 804u: goto L_088EBD74;
    case 805u: goto L_088EBD8C;
    case 806u: goto L_088EBDA8;
    case 807u: goto L_088EBDD0;
    case 808u: goto L_088EBDDC;
    case 809u: goto L_088EBDE4;
    case 810u: goto L_088EBDEC;
    case 811u: goto L_088EBDFC;
    case 812u: goto L_088EBE14;
    case 813u: goto L_088EBE2C;
    case 814u: goto L_088EBE44;
    case 815u: goto L_088EBE54;
    case 816u: goto L_088EBE64;
    case 817u: goto L_088EBEB8;
    case 818u: goto L_088EBEC8;
    case 819u: goto L_088EBED8;
    case 820u: goto L_088EBEE8;
    case 821u: goto L_088EBF0C;
    case 822u: goto L_088EBF28;
    case 823u: goto L_088EBF38;
    case 824u: goto L_088EBF6C;
    case 825u: goto L_088EBF84;
    case 826u: goto L_088EBF9C;
    case 827u: goto L_088EBFC0;
    case 828u: goto L_088EBFC8;
    case 829u: goto L_088EBFE0;
    case 830u: goto L_088EBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E8000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28428)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E8028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E8028u) goto L_088E8028;
    return;
L_088E8028:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E803Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E803Cu) goto L_088E803C;
    return;
L_088E803C:
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
L_088E8058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32640));
    ctx.set_gpr(31, 0x088E8070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E8070u) goto L_088E8070;
    return;
L_088E8070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E8090u) goto L_088E8090;
    return;
L_088E8090:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28428));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30560));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32748));
    ctx.set_gpr(31, 0x088E80E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E80E4u) goto L_088E80E4;
    return;
L_088E80E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 753u, 0x088E7FC8u>(ctx, &aot_mem) && ctx.pc == 0x088E8104u) goto L_088E8104;
    return;
L_088E8104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28428)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E8138u) goto L_088E8138;
    return;
L_088E8138:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088E8154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E8154u) goto L_088E8154;
    return;
L_088E8154:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E8164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8164u) goto L_088E8164;
    return;
L_088E8164:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8178u) goto L_088E8178;
    return;
L_088E8178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x088E8188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088E8188u) goto L_088E8188;
    return;
L_088E8188:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8198u) goto L_088E8198;
    return;
L_088E8198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x088E81A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088E81A8u) goto L_088E81A8;
    return;
L_088E81A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30488));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30476));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30464));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E81D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E81D0u) goto L_088E81D0;
    return;
L_088E81D0:
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
L_088E81E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E8200u);
    // nop
    goto L_088E8310;
L_088E8200:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E8214u) goto L_088E8214;
    return;
L_088E8214:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8268;
      }
      goto L_088E8240;
    }
L_088E8240:
    ctx.set_gpr(31, 0x088E8248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E8248u) goto L_088E8248;
    return;
L_088E8248:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E8254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8254u) goto L_088E8254;
    return;
L_088E8254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E8260u) goto L_088E8260;
    return;
L_088E8260:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28444), ctx.gpr[2]);
    goto L_088E8268;
L_088E8268:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E82AC;
      }
      goto L_088E8298;
    }
L_088E8298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E82B4;
      }
      goto L_088E82AC;
    }
L_088E82AC:
    ctx.set_gpr(31, 0x088E82B4u);
    // nop
    goto L_088E8310;
L_088E82B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E82CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E82E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E82E0u) goto L_088E82E0;
    return;
L_088E82E0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E82F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E82F4u) goto L_088E82F4;
    return;
L_088E82F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31944));
    ctx.set_gpr(31, 0x088E8328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E8328u) goto L_088E8328;
    return;
L_088E8328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E8348u) goto L_088E8348;
    return;
L_088E8348:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31796));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28444));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31828));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30452));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32052));
    ctx.set_gpr(31, 0x088E839Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E839Cu) goto L_088E839C;
    return;
L_088E839C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E83AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E83BCu);
    // nop
    goto L_088E8280;
L_088E83BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E83CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28444)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E83F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E83F4u) goto L_088E83F4;
    return;
L_088E83F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30440));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E8410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E8410u) goto L_088E8410;
    return;
L_088E8410:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E8420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8420u) goto L_088E8420;
    return;
L_088E8420:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E842Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E842Cu) goto L_088E842C;
    return;
L_088E842C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30424));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30416));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30408));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E8468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8468u) goto L_088E8468;
    return;
L_088E8468:
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
L_088E8484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E849Cu);
    // nop
    goto L_088E85AC;
L_088E849C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E84B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E84B0u) goto L_088E84B0;
    return;
L_088E84B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E84C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8504;
      }
      goto L_088E84DC;
    }
L_088E84DC:
    ctx.set_gpr(31, 0x088E84E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E84E4u) goto L_088E84E4;
    return;
L_088E84E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E84F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E84F0u) goto L_088E84F0;
    return;
L_088E84F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E84FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E84FCu) goto L_088E84FC;
    return;
L_088E84FC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28456), ctx.gpr[2]);
    goto L_088E8504;
L_088E8504:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E851C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8548;
      }
      goto L_088E8534;
    }
L_088E8534:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8550;
      }
      goto L_088E8548;
    }
L_088E8548:
    ctx.set_gpr(31, 0x088E8550u);
    // nop
    goto L_088E85AC;
L_088E8550:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28456)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E857Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E857Cu) goto L_088E857C;
    return;
L_088E857C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E8590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E8590u) goto L_088E8590;
    return;
L_088E8590:
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
L_088E85AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31276));
    ctx.set_gpr(31, 0x088E85C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E85C4u) goto L_088E85C4;
    return;
L_088E85C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E85D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E85E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E85E4u) goto L_088E85E4;
    return;
L_088E85E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28456));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31160));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30392));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31384));
    ctx.set_gpr(31, 0x088E8638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E8638u) goto L_088E8638;
    return;
L_088E8638:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8658u);
    // nop
    goto L_088E851C;
L_088E8658:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E8680u);
    // nop
    goto L_088E8888;
L_088E8680:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28460)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E8694u) goto L_088E8694;
    return;
L_088E8694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E86A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28460)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E86D4;
      }
      goto L_088E86C0;
    }
L_088E86C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E86DC;
      }
      goto L_088E86D4;
    }
L_088E86D4:
    ctx.set_gpr(31, 0x088E86DCu);
    // nop
    goto L_088E8888;
L_088E86DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28460)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E86F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E8710u) goto L_088E8710;
    return;
L_088E8710:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 2191u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30600));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30732));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E874Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x088E874Cu) goto L_088E874C;
    return;
L_088E874C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088E8758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E8758u) goto L_088E8758;
    return;
L_088E8758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8784;
      }
      goto L_088E877C;
    }
L_088E877C:
    ctx.set_gpr(31, 0x088E8784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E8784u) goto L_088E8784;
    return;
L_088E8784:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 2191u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30732));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E87A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088E87A0u) goto L_088E87A0;
    return;
L_088E87A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87B4;
      }
      goto L_088E87AC;
    }
L_088E87AC:
    ctx.set_gpr(31, 0x088E87B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E87B4u) goto L_088E87B4;
    return;
L_088E87B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87C8;
      }
      goto L_088E87C0;
    }
L_088E87C0:
    ctx.set_gpr(31, 0x088E87C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E87C8u) goto L_088E87C8;
    return;
L_088E87C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87DC;
      }
      goto L_088E87D4;
    }
L_088E87D4:
    ctx.set_gpr(31, 0x088E87DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E87DCu) goto L_088E87DC;
    return;
L_088E87DC:
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
L_088E87F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E885C;
      }
      goto L_088E8814;
    }
L_088E8814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8844;
      }
      goto L_088E8820;
    }
L_088E8820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8844;
      }
      goto L_088E883C;
    }
L_088E883C:
    ctx.set_gpr(31, 0x088E8844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E8844u) goto L_088E8844;
    return;
L_088E8844:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E885C;
      }
      goto L_088E8850;
    }
L_088E8850:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E885Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088E885Cu) goto L_088E885C;
    return;
L_088E885C:
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
L_088E8878:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30544));
    ctx.set_gpr(31, 0x088E88A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E88A0u) goto L_088E88A0;
    return;
L_088E88A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E88B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E88C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E88C0u) goto L_088E88C0;
    return;
L_088E88C0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28460));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30420));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30356));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30988));
    ctx.set_gpr(31, 0x088E891Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E891Cu) goto L_088E891C;
    return;
L_088E891C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E892C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E893Cu);
    // nop
    goto L_088E86A8;
L_088E893C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E894C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28460)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E8974u) goto L_088E8974;
    return;
L_088E8974:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088E8990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E8990u) goto L_088E8990;
    return;
L_088E8990:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E89A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E89A0u) goto L_088E89A0;
    return;
L_088E89A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E89ACu);
    // nop
    goto L_088E9A58;
L_088E89AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E89C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E89C0u) goto L_088E89C0;
    return;
L_088E89C0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E89D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E89D4u) goto L_088E89D4;
    return;
L_088E89D4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E89E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E89E8u) goto L_088E89E8;
    return;
L_088E89E8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E89F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x088E89F4u) goto L_088E89F4;
    return;
L_088E89F4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A0Cu) goto L_088E8A0C;
    return;
L_088E8A0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x088E8A18u) goto L_088E8A18;
    return;
L_088E8A18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A30u) goto L_088E8A30;
    return;
L_088E8A30:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A44u) goto L_088E8A44;
    return;
L_088E8A44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 571u, 0x088F7008u>(ctx, &aot_mem) && ctx.pc == 0x088E8A50u) goto L_088E8A50;
    return;
L_088E8A50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A6Cu) goto L_088E8A6C;
    return;
L_088E8A6C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 422u, 0x088F6330u>(ctx, &aot_mem) && ctx.pc == 0x088E8A78u) goto L_088E8A78;
    return;
L_088E8A78:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A8Cu) goto L_088E8A8C;
    return;
L_088E8A8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E8AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x088E8AA4u) goto L_088E8AA4;
    return;
L_088E8AA4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8AB8u) goto L_088E8AB8;
    return;
L_088E8AB8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30112));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30072));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30032));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E8AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8AE4u) goto L_088E8AE4;
    return;
L_088E8AE4:
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
L_088E8B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28504)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8B44;
      }
      goto L_088E8B18;
    }
L_088E8B18:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29596));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29684));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29640));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x088E8B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E8B3Cu) goto L_088E8B3C;
    return;
L_088E8B3C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28504), ctx.gpr[2]);
    goto L_088E8B44;
L_088E8B44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28504)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28508)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8B88;
      }
      goto L_088E8B74;
    }
L_088E8B74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8B90;
      }
      goto L_088E8B88;
    }
L_088E8B88:
    ctx.set_gpr(31, 0x088E8B90u);
    // nop
    goto L_088E8C30;
L_088E8B90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28508)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E8BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088E8BC0u) goto L_088E8BC0;
    return;
L_088E8BC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11840));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E8BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E8BD8u) goto L_088E8BD8;
    return;
L_088E8BD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x088E8BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8BFCu) goto L_088E8BFC;
    return;
L_088E8BFC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E8C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088E8C18u) goto L_088E8C18;
    return;
L_088E8C18:
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
L_088E8C30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29608));
    ctx.set_gpr(31, 0x088E8C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E8C48u) goto L_088E8C48;
    return;
L_088E8C48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E8C68u) goto L_088E8C68;
    return;
L_088E8C68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28508));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2684));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29492));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29568));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29784));
    ctx.set_gpr(31, 0x088E8CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E8CBCu) goto L_088E8CBC;
    return;
L_088E8CBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E8CDCu);
    // nop
    goto L_088E8B5C;
L_088E8CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28512)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DB4;
      }
      goto L_088E8D08;
    }
L_088E8D08:
    ctx.set_gpr(31, 0x088E8D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E8D10u) goto L_088E8D10;
    return;
L_088E8D10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E8D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8D1Cu) goto L_088E8D1C;
    return;
L_088E8D1C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28508)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E8D30u) goto L_088E8D30;
    return;
L_088E8D30:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28512), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DB4;
      }
      goto L_088E8D44;
    }
L_088E8D44:
    ctx.set_gpr(31, 0x088E8D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088E8D4Cu) goto L_088E8D4C;
    return;
L_088E8D4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E8D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088E8D5Cu) goto L_088E8D5C;
    return;
L_088E8D5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8D88;
      }
      goto L_088E8D80;
    }
L_088E8D80:
    ctx.set_gpr(31, 0x088E8D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E8D88u) goto L_088E8D88;
    return;
L_088E8D88:
    ctx.set_gpr(31, 0x088E8D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088E8D90u) goto L_088E8D90;
    return;
L_088E8D90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    ctx.set_gpr(31, 0x088E8DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E8DB4u) goto L_088E8DB4;
    return;
L_088E8DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8DC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DE8;
      }
      goto L_088E8DE0;
    }
L_088E8DE0:
    ctx.set_gpr(31, 0x088E8DE8u);
    // nop
    goto L_088E8C30;
L_088E8DE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28512)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8E00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8E0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088E8E20u);
    // nop
    goto L_088E8E30;
L_088E8E20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E8E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E8E4Cu) goto L_088E8E4C;
    return;
L_088E8E4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E8E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8E58u) goto L_088E8E58;
    return;
L_088E8E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 452u, 0x088DA55Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8E64u) goto L_088E8E64;
    return;
L_088E8E64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29540));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8E84;
      }
      goto L_088E8E78;
    }
L_088E8E78:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8ED4;
      }
      goto L_088E8E84;
    }
L_088E8E84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8EBC;
      }
      goto L_088E8E94;
    }
L_088E8E94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E8EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E8EA0u) goto L_088E8EA0;
    return;
L_088E8EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8EB4;
      }
      goto L_088E8EA8;
    }
L_088E8EA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E8EB4u) goto L_088E8EB4;
    return;
L_088E8EB4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E8EBC;
L_088E8EBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29540));
    ctx.set_gpr(31, 0x088E8ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E8ED4u) goto L_088E8ED4;
    return;
L_088E8ED4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088E8EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E8EE8u) goto L_088E8EE8;
    return;
L_088E8EE8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F14;
      }
      goto L_088E8EF8;
    }
L_088E8EF8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F14;
      }
      goto L_088E8F10;
    }
L_088E8F10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E8F14;
L_088E8F14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F40;
      }
      goto L_088E8F1C;
    }
L_088E8F1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F40;
      }
      goto L_088E8F34;
    }
L_088E8F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E8F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8F40u) goto L_088E8F40;
    return;
L_088E8F40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E8F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E8F50u) goto L_088E8F50;
    return;
L_088E8F50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E8F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E8F60u) goto L_088E8F60;
    return;
L_088E8F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F88;
      }
      goto L_088E8F7C;
    }
L_088E8F7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E8F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E8F88u) goto L_088E8F88;
    return;
L_088E8F88:
    ctx.set_gpr(31, 0x088E8F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E8F90u) goto L_088E8F90;
    return;
L_088E8F90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E8F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8F9Cu) goto L_088E8F9C;
    return;
L_088E8F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 38u, 0x088DC344u>(ctx, &aot_mem) && ctx.pc == 0x088E8FA8u) goto L_088E8FA8;
    return;
L_088E8FA8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29528));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8FC8;
      }
      goto L_088E8FBC;
    }
L_088E8FBC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9018;
      }
      goto L_088E8FC8;
    }
L_088E8FC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9000;
      }
      goto L_088E8FD8;
    }
L_088E8FD8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E8FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E8FE4u) goto L_088E8FE4;
    return;
L_088E8FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8FF8;
      }
      goto L_088E8FEC;
    }
L_088E8FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E8FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E8FF8u) goto L_088E8FF8;
    return;
L_088E8FF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E9000;
L_088E9000:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29528));
    ctx.set_gpr(31, 0x088E9018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E9018u) goto L_088E9018;
    return;
L_088E9018:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088E902Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E902Cu) goto L_088E902C;
    return;
L_088E902C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9058;
      }
      goto L_088E903C;
    }
L_088E903C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9058;
      }
      goto L_088E9054;
    }
L_088E9054:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E9058;
L_088E9058:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9084;
      }
      goto L_088E9060;
    }
L_088E9060:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9084;
      }
      goto L_088E9078;
    }
L_088E9078:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9084u) goto L_088E9084;
    return;
L_088E9084:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E9098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E9098u) goto L_088E9098;
    return;
L_088E9098:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E90A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E90A8u) goto L_088E90A8;
    return;
L_088E90A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E90D0;
      }
      goto L_088E90C4;
    }
L_088E90C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E90D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E90D0u) goto L_088E90D0;
    return;
L_088E90D0:
    ctx.set_gpr(31, 0x088E90D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E90D8u) goto L_088E90D8;
    return;
L_088E90D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E90E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E90E4u) goto L_088E90E4;
    return;
L_088E90E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E90F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 206u, 0x088D90E4u>(ctx, &aot_mem) && ctx.pc == 0x088E90F0u) goto L_088E90F0;
    return;
L_088E90F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29520));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9110;
      }
      goto L_088E9104;
    }
L_088E9104:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9160;
      }
      goto L_088E9110;
    }
L_088E9110:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9148;
      }
      goto L_088E9120;
    }
L_088E9120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E912Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E912Cu) goto L_088E912C;
    return;
L_088E912C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9140;
      }
      goto L_088E9134;
    }
L_088E9134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E9140u) goto L_088E9140;
    return;
L_088E9140:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E9148;
L_088E9148:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29520));
    ctx.set_gpr(31, 0x088E9160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E9160u) goto L_088E9160;
    return;
L_088E9160:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088E9174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9174u) goto L_088E9174;
    return;
L_088E9174:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E91A0;
      }
      goto L_088E9184;
    }
L_088E9184:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E91A0;
      }
      goto L_088E919C;
    }
L_088E919C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E91A0;
L_088E91A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E91CC;
      }
      goto L_088E91A8;
    }
L_088E91A8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E91CC;
      }
      goto L_088E91C0;
    }
L_088E91C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E91CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E91CCu) goto L_088E91CC;
    return;
L_088E91CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29952));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E91ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E91ECu) goto L_088E91EC;
    return;
L_088E91EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E91FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E91FCu) goto L_088E91FC;
    return;
L_088E91FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9224;
      }
      goto L_088E9218;
    }
L_088E9218:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E9224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E9224u) goto L_088E9224;
    return;
L_088E9224:
    ctx.set_gpr(31, 0x088E922Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E922Cu) goto L_088E922C;
    return;
L_088E922C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9238u) goto L_088E9238;
    return;
L_088E9238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x088E9244u) goto L_088E9244;
    return;
L_088E9244:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29512));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9264;
      }
      goto L_088E9258;
    }
L_088E9258:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E92B4;
      }
      goto L_088E9264;
    }
L_088E9264:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E929C;
      }
      goto L_088E9274;
    }
L_088E9274:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E9280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E9280u) goto L_088E9280;
    return;
L_088E9280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9294;
      }
      goto L_088E9288;
    }
L_088E9288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E9294u) goto L_088E9294;
    return;
L_088E9294:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E929C;
L_088E929C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29512));
    ctx.set_gpr(31, 0x088E92B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E92B4u) goto L_088E92B4;
    return;
L_088E92B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088E92C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E92C8u) goto L_088E92C8;
    return;
L_088E92C8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E92F4;
      }
      goto L_088E92D8;
    }
L_088E92D8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E92F4;
      }
      goto L_088E92F0;
    }
L_088E92F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E92F4;
L_088E92F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9320;
      }
      goto L_088E92FC;
    }
L_088E92FC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9320;
      }
      goto L_088E9314;
    }
L_088E9314:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9320u) goto L_088E9320;
    return;
L_088E9320:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E9334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E9334u) goto L_088E9334;
    return;
L_088E9334:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E9344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E9344u) goto L_088E9344;
    return;
L_088E9344:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E936C;
      }
      goto L_088E9360;
    }
L_088E9360:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E936Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E936Cu) goto L_088E936C;
    return;
L_088E936C:
    ctx.set_gpr(31, 0x088E9374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E9374u) goto L_088E9374;
    return;
L_088E9374:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9380u) goto L_088E9380;
    return;
L_088E9380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E938Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 853u, 0x088D79A4u>(ctx, &aot_mem) && ctx.pc == 0x088E938Cu) goto L_088E938C;
    return;
L_088E938C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29504));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E93AC;
      }
      goto L_088E93A0;
    }
L_088E93A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E93FC;
      }
      goto L_088E93AC;
    }
L_088E93AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E93E4;
      }
      goto L_088E93BC;
    }
L_088E93BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E93C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E93C8u) goto L_088E93C8;
    return;
L_088E93C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E93DC;
      }
      goto L_088E93D0;
    }
L_088E93D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E93DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E93DCu) goto L_088E93DC;
    return;
L_088E93DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E93E4;
L_088E93E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29504));
    ctx.set_gpr(31, 0x088E93FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E93FCu) goto L_088E93FC;
    return;
L_088E93FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E9410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9410u) goto L_088E9410;
    return;
L_088E9410:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E943C;
      }
      goto L_088E9420;
    }
L_088E9420:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E943C;
      }
      goto L_088E9438;
    }
L_088E9438:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E943C;
L_088E943C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9468;
      }
      goto L_088E9444;
    }
L_088E9444:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9468;
      }
      goto L_088E945C;
    }
L_088E945C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9468u) goto L_088E9468;
    return;
L_088E9468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E947Cu) goto L_088E947C;
    return;
L_088E947C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E948Cu) goto L_088E948C;
    return;
L_088E948C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E94B4;
      }
      goto L_088E94A8;
    }
L_088E94A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E94B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E94B4u) goto L_088E94B4;
    return;
L_088E94B4:
    ctx.set_gpr(31, 0x088E94BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E94BCu) goto L_088E94BC;
    return;
L_088E94BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E94C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E94C8u) goto L_088E94C8;
    return;
L_088E94C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E94D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 853u, 0x088D79A4u>(ctx, &aot_mem) && ctx.pc == 0x088E94D4u) goto L_088E94D4;
    return;
L_088E94D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29492));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E94F4;
      }
      goto L_088E94E8;
    }
L_088E94E8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9544;
      }
      goto L_088E94F4;
    }
L_088E94F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E952C;
      }
      goto L_088E9504;
    }
L_088E9504:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E9510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E9510u) goto L_088E9510;
    return;
L_088E9510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9524;
      }
      goto L_088E9518;
    }
L_088E9518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E9524u) goto L_088E9524;
    return;
L_088E9524:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E952C;
L_088E952C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29492));
    ctx.set_gpr(31, 0x088E9544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E9544u) goto L_088E9544;
    return;
L_088E9544:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E9558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9558u) goto L_088E9558;
    return;
L_088E9558:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9584;
      }
      goto L_088E9568;
    }
L_088E9568:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9584;
      }
      goto L_088E9580;
    }
L_088E9580:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E9584;
L_088E9584:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E95B0;
      }
      goto L_088E958C;
    }
L_088E958C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E95B0;
      }
      goto L_088E95A4;
    }
L_088E95A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E95B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E95B0u) goto L_088E95B0;
    return;
L_088E95B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E95C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E95C4u) goto L_088E95C4;
    return;
L_088E95C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E95D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E95D4u) goto L_088E95D4;
    return;
L_088E95D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E95FC;
      }
      goto L_088E95F0;
    }
L_088E95F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E95FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E95FCu) goto L_088E95FC;
    return;
L_088E95FC:
    ctx.set_gpr(31, 0x088E9604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E9604u) goto L_088E9604;
    return;
L_088E9604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9610u) goto L_088E9610;
    return;
L_088E9610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E961Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 853u, 0x088D79A4u>(ctx, &aot_mem) && ctx.pc == 0x088E961Cu) goto L_088E961C;
    return;
L_088E961C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29484));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E963C;
      }
      goto L_088E9630;
    }
L_088E9630:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E968C;
      }
      goto L_088E963C;
    }
L_088E963C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9674;
      }
      goto L_088E964C;
    }
L_088E964C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E9658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E9658u) goto L_088E9658;
    return;
L_088E9658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E966C;
      }
      goto L_088E9660;
    }
L_088E9660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E966Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E966Cu) goto L_088E966C;
    return;
L_088E966C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E9674;
L_088E9674:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29484));
    ctx.set_gpr(31, 0x088E968Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E968Cu) goto L_088E968C;
    return;
L_088E968C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E96A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E96A0u) goto L_088E96A0;
    return;
L_088E96A0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E96CC;
      }
      goto L_088E96B0;
    }
L_088E96B0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E96CC;
      }
      goto L_088E96C8;
    }
L_088E96C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E96CC;
L_088E96CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E96F8;
      }
      goto L_088E96D4;
    }
L_088E96D4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E96F8;
      }
      goto L_088E96EC;
    }
L_088E96EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E96F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E96F8u) goto L_088E96F8;
    return;
L_088E96F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E970Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E970Cu) goto L_088E970C;
    return;
L_088E970C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E971Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E971Cu) goto L_088E971C;
    return;
L_088E971C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9744;
      }
      goto L_088E9738;
    }
L_088E9738:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E9744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E9744u) goto L_088E9744;
    return;
L_088E9744:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E975C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E9774u);
    // nop
    goto L_088E9884;
L_088E9774:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E9788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E9788u) goto L_088E9788;
    return;
L_088E9788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E979C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E97DC;
      }
      goto L_088E97B4;
    }
L_088E97B4:
    ctx.set_gpr(31, 0x088E97BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E97BCu) goto L_088E97BC;
    return;
L_088E97BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E97C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E97C8u) goto L_088E97C8;
    return;
L_088E97C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E97D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E97D4u) goto L_088E97D4;
    return;
L_088E97D4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28516), ctx.gpr[2]);
    goto L_088E97DC;
L_088E97DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E97F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9820;
      }
      goto L_088E980C;
    }
L_088E980C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9828;
      }
      goto L_088E9820;
    }
L_088E9820:
    ctx.set_gpr(31, 0x088E9828u);
    // nop
    goto L_088E9884;
L_088E9828:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E9854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E9854u) goto L_088E9854;
    return;
L_088E9854:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11740));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E9868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E9868u) goto L_088E9868;
    return;
L_088E9868:
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
L_088E9884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26452));
    ctx.set_gpr(31, 0x088E989Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E989Cu) goto L_088E989C;
    return;
L_088E989C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E98AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E98BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E98BCu) goto L_088E98BC;
    return;
L_088E98BC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28516));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26336));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29472));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26560));
    ctx.set_gpr(31, 0x088E9910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E9910u) goto L_088E9910;
    return;
L_088E9910:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9930u);
    // nop
    goto L_088E97F4;
L_088E9930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28516)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088E9970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E9970u) goto L_088E9970;
    return;
L_088E9970:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E9984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E9984u) goto L_088E9984;
    return;
L_088E9984:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E99A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E99A0u) goto L_088E99A0;
    return;
L_088E99A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E99ACu);
    // nop
    goto L_088E8DC8;
L_088E99AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28520));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E99D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E99D4u) goto L_088E99D4;
    return;
L_088E99D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E99FC;
      }
      goto L_088E99F0;
    }
L_088E99F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E99FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E99FCu) goto L_088E99FC;
    return;
L_088E99FC:
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
L_088E9A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E9A30u);
    // nop
    goto L_088E9B40;
L_088E9A30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E9A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E9A44u) goto L_088E9A44;
    return;
L_088E9A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9A98;
      }
      goto L_088E9A70;
    }
L_088E9A70:
    ctx.set_gpr(31, 0x088E9A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E9A78u) goto L_088E9A78;
    return;
L_088E9A78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9A84u) goto L_088E9A84;
    return;
L_088E9A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E9A90u) goto L_088E9A90;
    return;
L_088E9A90:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28524), ctx.gpr[2]);
    goto L_088E9A98;
L_088E9A98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9ADC;
      }
      goto L_088E9AC8;
    }
L_088E9AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9AE4;
      }
      goto L_088E9ADC;
    }
L_088E9ADC:
    ctx.set_gpr(31, 0x088E9AE4u);
    // nop
    goto L_088E9B40;
L_088E9AE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E9B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E9B10u) goto L_088E9B10;
    return;
L_088E9B10:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E9B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E9B24u) goto L_088E9B24;
    return;
L_088E9B24:
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
L_088E9B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25752));
    ctx.set_gpr(31, 0x088E9B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E9B58u) goto L_088E9B58;
    return;
L_088E9B58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9B78u) goto L_088E9B78;
    return;
L_088E9B78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28524));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25636));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29444));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-25860));
    ctx.set_gpr(31, 0x088E9BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E9BCCu) goto L_088E9BCC;
    return;
L_088E9BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9BDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9BECu);
    // nop
    goto L_088E9AB0;
L_088E9BEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28528)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9C28;
      }
      goto L_088E9C14;
    }
L_088E9C14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9C30;
      }
      goto L_088E9C28;
    }
L_088E9C28:
    ctx.set_gpr(31, 0x088E9C30u);
    // nop
    goto L_088E9C48;
L_088E9C30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28528)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9C48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25488));
    ctx.set_gpr(31, 0x088E9C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E9C60u) goto L_088E9C60;
    return;
L_088E9C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9C80u) goto L_088E9C80;
    return;
L_088E9C80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28528));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25384));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29420));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E9CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E9CC8u) goto L_088E9CC8;
    return;
L_088E9CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9CE8u);
    // nop
    goto L_088E9BFC;
L_088E9CE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E9D10u);
    // nop
    goto L_088E9DDC;
L_088E9D10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28532)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E9D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E9D24u) goto L_088E9D24;
    return;
L_088E9D24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28532)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9D78;
      }
      goto L_088E9D50;
    }
L_088E9D50:
    ctx.set_gpr(31, 0x088E9D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E9D58u) goto L_088E9D58;
    return;
L_088E9D58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E9D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9D64u) goto L_088E9D64;
    return;
L_088E9D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E9D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E9D70u) goto L_088E9D70;
    return;
L_088E9D70:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28532), ctx.gpr[2]);
    goto L_088E9D78;
L_088E9D78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28532)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28532)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9DBC;
      }
      goto L_088E9DA8;
    }
L_088E9DA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9DC4;
      }
      goto L_088E9DBC;
    }
L_088E9DBC:
    ctx.set_gpr(31, 0x088E9DC4u);
    // nop
    goto L_088E9DDC;
L_088E9DC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28532)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25084));
    ctx.set_gpr(31, 0x088E9DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E9DF4u) goto L_088E9DF4;
    return;
L_088E9DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E9E14u) goto L_088E9E14;
    return;
L_088E9E14:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28532));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24972));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29404));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E9E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E9E64u) goto L_088E9E64;
    return;
L_088E9E64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9E84u);
    // nop
    goto L_088E9D90;
L_088E9E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9E94:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24912));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28532)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E9EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 645u, 0x088FB934u>(ctx, &aot_mem) && ctx.pc == 0x088E9EC0u) goto L_088E9EC0;
    return;
L_088E9EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28536)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9EFC;
      }
      goto L_088E9EE8;
    }
L_088E9EE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9F04;
      }
      goto L_088E9EFC;
    }
L_088E9EFC:
    ctx.set_gpr(31, 0x088E9F04u);
    // nop
    goto L_088EA254;
L_088E9F04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28536)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-9568));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E9F34u);
    // nop
    goto L_088EA1E4;
L_088E9F34:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(9560), 0u);
    ctx.set_gpr(31, 0x088E9F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E9F4Cu) goto L_088E9F4C;
    return;
L_088E9F4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(9560)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9F78;
      }
      goto L_088E9F70;
    }
L_088E9F70:
    ctx.set_gpr(31, 0x088E9F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E9F78u) goto L_088E9F78;
    return;
L_088E9F78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E9F88u);
    // nop
    goto L_088E9FA0;
L_088E9F88:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(9568));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9FA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA1C8;
      }
      goto L_088E9FC0;
    }
L_088E9FC0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-280));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(228));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA030;
      }
      goto L_088E9FD8;
    }
L_088E9FD8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA004;
      }
      goto L_088E9FE8;
    }
L_088E9FE8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA004;
      }
      goto L_088EA000;
    }
L_088EA000:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088EA004;
L_088EA004:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA030;
      }
      goto L_088EA00C;
    }
L_088EA00C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA030;
      }
      goto L_088EA024;
    }
L_088EA024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EA030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA030u) goto L_088EA030;
    return;
L_088EA030:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA050;
      }
      goto L_088EA03C;
    }
L_088EA03C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA050;
      }
      goto L_088EA048;
    }
L_088EA048:
    ctx.set_gpr(31, 0x088EA050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA050u) goto L_088EA050;
    return;
L_088EA050:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA070;
      }
      goto L_088EA05C;
    }
L_088EA05C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA070;
      }
      goto L_088EA068;
    }
L_088EA068:
    ctx.set_gpr(31, 0x088EA070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA070u) goto L_088EA070;
    return;
L_088EA070:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA090;
      }
      goto L_088EA07C;
    }
L_088EA07C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA090;
      }
      goto L_088EA088;
    }
L_088EA088:
    ctx.set_gpr(31, 0x088EA090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA090u) goto L_088EA090;
    return;
L_088EA090:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0B0;
      }
      goto L_088EA09C;
    }
L_088EA09C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0B0;
      }
      goto L_088EA0A8;
    }
L_088EA0A8:
    ctx.set_gpr(31, 0x088EA0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA0B0u) goto L_088EA0B0;
    return;
L_088EA0B0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0D0;
      }
      goto L_088EA0BC;
    }
L_088EA0BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0D0;
      }
      goto L_088EA0C8;
    }
L_088EA0C8:
    ctx.set_gpr(31, 0x088EA0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA0D0u) goto L_088EA0D0;
    return;
L_088EA0D0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0F0;
      }
      goto L_088EA0DC;
    }
L_088EA0DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA0F0;
      }
      goto L_088EA0E8;
    }
L_088EA0E8:
    ctx.set_gpr(31, 0x088EA0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA0F0u) goto L_088EA0F0;
    return;
L_088EA0F0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA110;
      }
      goto L_088EA0FC;
    }
L_088EA0FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA110;
      }
      goto L_088EA108;
    }
L_088EA108:
    ctx.set_gpr(31, 0x088EA110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA110u) goto L_088EA110;
    return;
L_088EA110:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA130;
      }
      goto L_088EA11C;
    }
L_088EA11C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA130;
      }
      goto L_088EA128;
    }
L_088EA128:
    ctx.set_gpr(31, 0x088EA130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA130u) goto L_088EA130;
    return;
L_088EA130:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA150;
      }
      goto L_088EA13C;
    }
L_088EA13C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA150;
      }
      goto L_088EA148;
    }
L_088EA148:
    ctx.set_gpr(31, 0x088EA150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA150u) goto L_088EA150;
    return;
L_088EA150:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA170;
      }
      goto L_088EA15C;
    }
L_088EA15C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA170;
      }
      goto L_088EA168;
    }
L_088EA168:
    ctx.set_gpr(31, 0x088EA170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA170u) goto L_088EA170;
    return;
L_088EA170:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA190;
      }
      goto L_088EA17C;
    }
L_088EA17C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA190;
      }
      goto L_088EA188;
    }
L_088EA188:
    ctx.set_gpr(31, 0x088EA190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA190u) goto L_088EA190;
    return;
L_088EA190:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA1B0;
      }
      goto L_088EA19C;
    }
L_088EA19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA1B0;
      }
      goto L_088EA1A8;
    }
L_088EA1A8:
    ctx.set_gpr(31, 0x088EA1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA1B0u) goto L_088EA1B0;
    return;
L_088EA1B0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088EA1C8;
      }
      goto L_088EA1BC;
    }
L_088EA1BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088EA1C8u) goto L_088EA1C8;
    return;
L_088EA1C8:
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
L_088EA1E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EA1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EA1FCu) goto L_088EA1FC;
    return;
L_088EA1FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-280));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
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
L_088EA254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23940));
    ctx.set_gpr(31, 0x088EA26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EA26Cu) goto L_088EA26C;
    return;
L_088EA26C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA27C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EA28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EA28Cu) goto L_088EA28C;
    return;
L_088EA28C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28536));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10744));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23784));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23816));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29384));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(9552));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24804));
    ctx.set_gpr(31, 0x088EA2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EA2E8u) goto L_088EA2E8;
    return;
L_088EA2E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EA308u);
    // nop
    goto L_088E9ED0;
L_088EA308:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA318:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28536)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EA350u) goto L_088EA350;
    return;
L_088EA350:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29364));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088EA36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EA36Cu) goto L_088EA36C;
    return;
L_088EA36C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EA37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA37Cu) goto L_088EA37C;
    return;
L_088EA37C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(31, 0x088EA390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EA390u) goto L_088EA390;
    return;
L_088EA390:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA3A4u) goto L_088EA3A4;
    return;
L_088EA3A4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA3B8u) goto L_088EA3B8;
    return;
L_088EA3B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x088EA3C4u) goto L_088EA3C4;
    return;
L_088EA3C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA3DCu) goto L_088EA3DC;
    return;
L_088EA3DC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA3F0u) goto L_088EA3F0;
    return;
L_088EA3F0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA404u) goto L_088EA404;
    return;
L_088EA404:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA410u);
    // nop
    goto L_088E8228;
L_088EA410:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA428u) goto L_088EA428;
    return;
L_088EA428:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29252));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29224));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29196));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EA454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA454u) goto L_088EA454;
    return;
L_088EA454:
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
L_088EA470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EA488u);
    // nop
    goto L_088EA750;
L_088EA488:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EA49Cu) goto L_088EA49C;
    return;
L_088EA49C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA4F0;
      }
      goto L_088EA4C8;
    }
L_088EA4C8:
    ctx.set_gpr(31, 0x088EA4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EA4D0u) goto L_088EA4D0;
    return;
L_088EA4D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EA4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA4DCu) goto L_088EA4DC;
    return;
L_088EA4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EA4E8u) goto L_088EA4E8;
    return;
L_088EA4E8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28568), ctx.gpr[2]);
    goto L_088EA4F0;
L_088EA4F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA534;
      }
      goto L_088EA520;
    }
L_088EA520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EA53C;
      }
      goto L_088EA534;
    }
L_088EA534:
    ctx.set_gpr(31, 0x088EA53Cu);
    // nop
    goto L_088EA750;
L_088EA53C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EA56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EA56Cu) goto L_088EA56C;
    return;
L_088EA56C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7616));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(31, 0x088EA5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EA5B8u) goto L_088EA5B8;
    return;
L_088EA5B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7616));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA5E4;
      }
      goto L_088EA5DC;
    }
L_088EA5DC:
    ctx.set_gpr(31, 0x088EA5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA5E4u) goto L_088EA5E4;
    return;
L_088EA5E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA5F8;
      }
      goto L_088EA5F0;
    }
L_088EA5F0:
    ctx.set_gpr(31, 0x088EA5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA5F8u) goto L_088EA5F8;
    return;
L_088EA5F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA60C;
      }
      goto L_088EA604;
    }
L_088EA604:
    ctx.set_gpr(31, 0x088EA60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA60Cu) goto L_088EA60C;
    return;
L_088EA60C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA620;
      }
      goto L_088EA618;
    }
L_088EA618:
    ctx.set_gpr(31, 0x088EA620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA620u) goto L_088EA620;
    return;
L_088EA620:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA634;
      }
      goto L_088EA62C;
    }
L_088EA62C:
    ctx.set_gpr(31, 0x088EA634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA634u) goto L_088EA634;
    return;
L_088EA634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA648;
      }
      goto L_088EA640;
    }
L_088EA640:
    ctx.set_gpr(31, 0x088EA648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA648u) goto L_088EA648;
    return;
L_088EA648:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA65C;
      }
      goto L_088EA654;
    }
L_088EA654:
    ctx.set_gpr(31, 0x088EA65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA65Cu) goto L_088EA65C;
    return;
L_088EA65C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA670;
      }
      goto L_088EA668;
    }
L_088EA668:
    ctx.set_gpr(31, 0x088EA670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA670u) goto L_088EA670;
    return;
L_088EA670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA694;
      }
      goto L_088EA680;
    }
L_088EA680:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088EA68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA68Cu) goto L_088EA68C;
    return;
L_088EA68C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EA694;
L_088EA694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA6AC;
      }
      goto L_088EA69C;
    }
L_088EA69C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EA6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EA6ACu) goto L_088EA6AC;
    return;
L_088EA6AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA6D0;
      }
      goto L_088EA6BC;
    }
L_088EA6BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088EA6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA6C8u) goto L_088EA6C8;
    return;
L_088EA6C8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EA6D0;
L_088EA6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA6E8;
      }
      goto L_088EA6D8;
    }
L_088EA6D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EA6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EA6E8u) goto L_088EA6E8;
    return;
L_088EA6E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA6FC;
      }
      goto L_088EA6F4;
    }
L_088EA6F4:
    ctx.set_gpr(31, 0x088EA6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA6FCu) goto L_088EA6FC;
    return;
L_088EA6FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA710;
      }
      goto L_088EA708;
    }
L_088EA708:
    ctx.set_gpr(31, 0x088EA710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA710u) goto L_088EA710;
    return;
L_088EA710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA724;
      }
      goto L_088EA71C;
    }
L_088EA71C:
    ctx.set_gpr(31, 0x088EA724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA724u) goto L_088EA724;
    return;
L_088EA724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA738;
      }
      goto L_088EA730;
    }
L_088EA730:
    ctx.set_gpr(31, 0x088EA738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EA738u) goto L_088EA738;
    return;
L_088EA738:
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
L_088EA750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22664));
    ctx.set_gpr(31, 0x088EA768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EA768u) goto L_088EA768;
    return;
L_088EA768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EA788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EA788u) goto L_088EA788;
    return;
L_088EA788:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28568));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22540));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-29128));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23212));
    ctx.set_gpr(31, 0x088EA7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EA7E4u) goto L_088EA7E4;
    return;
L_088EA7E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EA804u);
    // nop
    goto L_088EA508;
L_088EA804:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28568)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EA83Cu) goto L_088EA83C;
    return;
L_088EA83C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29116));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EA858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EA858u) goto L_088EA858;
    return;
L_088EA858:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EA868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA868u) goto L_088EA868;
    return;
L_088EA868:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 91u, 0x088F4848u>(ctx, &aot_mem) && ctx.pc == 0x088EA874u) goto L_088EA874;
    return;
L_088EA874:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA888u) goto L_088EA888;
    return;
L_088EA888:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 164u, 0x088F4D98u>(ctx, &aot_mem) && ctx.pc == 0x088EA894u) goto L_088EA894;
    return;
L_088EA894:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA8B4u) goto L_088EA8B4;
    return;
L_088EA8B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 164u, 0x088F4D98u>(ctx, &aot_mem) && ctx.pc == 0x088EA8C0u) goto L_088EA8C0;
    return;
L_088EA8C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA8E0u) goto L_088EA8E0;
    return;
L_088EA8E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA8ECu);
    // nop
    goto L_088E9D38;
L_088EA8EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA904u) goto L_088EA904;
    return;
L_088EA904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088EA914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088EA914u) goto L_088EA914;
    return;
L_088EA914:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA924u) goto L_088EA924;
    return;
L_088EA924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088EA934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088EA934u) goto L_088EA934;
    return;
L_088EA934:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA944u) goto L_088EA944;
    return;
L_088EA944:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA950u);
    // nop
    goto L_088EBAA0;
L_088EA950:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA964u) goto L_088EA964;
    return;
L_088EA964:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 566u, 0x088E6F08u>(ctx, &aot_mem) && ctx.pc == 0x088EA970u) goto L_088EA970;
    return;
L_088EA970:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA984u) goto L_088EA984;
    return;
L_088EA984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EA994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EA994u) goto L_088EA994;
    return;
L_088EA994:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA9A4u) goto L_088EA9A4;
    return;
L_088EA9A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA9B0u);
    // nop
    goto L_088E84C4;
L_088EA9B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA9C8u) goto L_088EA9C8;
    return;
L_088EA9C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EA9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EA9D4u) goto L_088EA9D4;
    return;
L_088EA9D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EA9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EA9ECu) goto L_088EA9EC;
    return;
L_088EA9EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EA9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EA9FCu) goto L_088EA9FC;
    return;
L_088EA9FC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA0Cu) goto L_088EAA0C;
    return;
L_088EAA0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA18u) goto L_088EAA18;
    return;
L_088EAA18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA2Cu) goto L_088EAA2C;
    return;
L_088EAA2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA38u) goto L_088EAA38;
    return;
L_088EAA38:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA4Cu) goto L_088EAA4C;
    return;
L_088EAA4C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA58u) goto L_088EAA58;
    return;
L_088EAA58:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA6Cu) goto L_088EAA6C;
    return;
L_088EAA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EAA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EAA7Cu) goto L_088EAA7C;
    return;
L_088EAA7C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAA8Cu) goto L_088EAA8C;
    return;
L_088EAA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(31, 0x088EAA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EAA9Cu) goto L_088EAA9C;
    return;
L_088EAA9C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAAACu) goto L_088EAAAC;
    return;
L_088EAAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EAABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EAABCu) goto L_088EAABC;
    return;
L_088EAABC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAACCu) goto L_088EAACC;
    return;
L_088EAACC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 515u, 0x088EEBF0u>(ctx, &aot_mem) && ctx.pc == 0x088EAAD8u) goto L_088EAAD8;
    return;
L_088EAAD8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28704));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28624));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28544));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EAB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAB04u) goto L_088EAB04;
    return;
L_088EAB04:
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
L_088EAB20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAB4C;
      }
      goto L_088EAB38;
    }
L_088EAB38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAB54;
      }
      goto L_088EAB4C;
    }
L_088EAB4C:
    ctx.set_gpr(31, 0x088EAB54u);
    // nop
    goto L_088EAC68;
L_088EAB54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28652)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAB6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EAB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EAB84u) goto L_088EAB84;
    return;
L_088EAB84:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088EABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EABACu) goto L_088EABAC;
    return;
L_088EABAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EABD8;
      }
      goto L_088EABD0;
    }
L_088EABD0:
    ctx.set_gpr(31, 0x088EABD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EABD8u) goto L_088EABD8;
    return;
L_088EABD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EABEC;
      }
      goto L_088EABE4;
    }
L_088EABE4:
    ctx.set_gpr(31, 0x088EABECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EABECu) goto L_088EABEC;
    return;
L_088EABEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAC00;
      }
      goto L_088EABF8;
    }
L_088EABF8:
    ctx.set_gpr(31, 0x088EAC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EAC00u) goto L_088EAC00;
    return;
L_088EAC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAC14;
      }
      goto L_088EAC0C;
    }
L_088EAC0C:
    ctx.set_gpr(31, 0x088EAC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EAC14u) goto L_088EAC14;
    return;
L_088EAC14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAC38;
      }
      goto L_088EAC24;
    }
L_088EAC24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088EAC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAC30u) goto L_088EAC30;
    return;
L_088EAC30:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EAC38;
L_088EAC38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAC50;
      }
      goto L_088EAC40;
    }
L_088EAC40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EAC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EAC50u) goto L_088EAC50;
    return;
L_088EAC50:
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
L_088EAC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21360));
    ctx.set_gpr(31, 0x088EAC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EAC80u) goto L_088EAC80;
    return;
L_088EAC80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAC90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EACA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EACA0u) goto L_088EACA0;
    return;
L_088EACA0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28652));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21228));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-28456));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-21652));
    ctx.set_gpr(31, 0x088EAD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EAD04u) goto L_088EAD04;
    return;
L_088EAD04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAD14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EAD24u);
    // nop
    goto L_088EAB20;
L_088EAD24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAD34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28652)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EAD5Cu) goto L_088EAD5C;
    return;
L_088EAD5C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28436));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088EAD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EAD78u) goto L_088EAD78;
    return;
L_088EAD78:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAD88u) goto L_088EAD88;
    return;
L_088EAD88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EAD94u) goto L_088EAD94;
    return;
L_088EAD94:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EADB0u) goto L_088EADB0;
    return;
L_088EADB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EADBCu) goto L_088EADBC;
    return;
L_088EADBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EADD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EADD8u) goto L_088EADD8;
    return;
L_088EADD8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EADE4u) goto L_088EADE4;
    return;
L_088EADE4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAE00u) goto L_088EAE00;
    return;
L_088EAE00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EAE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EAE0Cu) goto L_088EAE0C;
    return;
L_088EAE0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28264));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28236));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28208));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EAE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAE40u) goto L_088EAE40;
    return;
L_088EAE40:
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
L_088EAE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EAE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 302u, 0x0895528Cu>(ctx, &aot_mem) && ctx.pc == 0x088EAE6Cu) goto L_088EAE6C;
    return;
L_088EAE6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAE7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EAE94u);
    // nop
    goto L_088EAF94;
L_088EAE94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EAEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EAEA8u) goto L_088EAEA8;
    return;
L_088EAEA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAEE8;
      }
      goto L_088EAED4;
    }
L_088EAED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAEF0;
      }
      goto L_088EAEE8;
    }
L_088EAEE8:
    ctx.set_gpr(31, 0x088EAEF0u);
    // nop
    goto L_088EAF94;
L_088EAEF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAF08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EAF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EAF20u) goto L_088EAF20;
    return;
L_088EAF20:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EAF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EAF3Cu) goto L_088EAF3C;
    return;
L_088EAF3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAF68;
      }
      goto L_088EAF60;
    }
L_088EAF60:
    ctx.set_gpr(31, 0x088EAF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EAF68u) goto L_088EAF68;
    return;
L_088EAF68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAF7C;
      }
      goto L_088EAF74;
    }
L_088EAF74:
    ctx.set_gpr(31, 0x088EAF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EAF7Cu) goto L_088EAF7C;
    return;
L_088EAF7C:
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
L_088EAF94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20548));
    ctx.set_gpr(31, 0x088EAFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EAFACu) goto L_088EAFAC;
    return;
L_088EAFAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAFBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EAFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EAFCCu) goto L_088EAFCC;
    return;
L_088EAFCC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28684));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-20424));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-28172));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-20728));
    ctx.set_gpr(31, 0x088EB028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EB028u) goto L_088EB028;
    return;
L_088EB028:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB048u);
    // nop
    goto L_088EAEBC;
L_088EB048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28684)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EB080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EB080u) goto L_088EB080;
    return;
L_088EB080:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28156));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088EB09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EB09Cu) goto L_088EB09C;
    return;
L_088EB09C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EB0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB0ACu) goto L_088EB0AC;
    return;
L_088EB0AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EB0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EB0BCu) goto L_088EB0BC;
    return;
L_088EB0BC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EB0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB0CCu) goto L_088EB0CC;
    return;
L_088EB0CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB0D8u);
    // nop
    goto L_088E8228;
L_088EB0D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EB0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB0F4u) goto L_088EB0F4;
    return;
L_088EB0F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB100u);
    // nop
    goto L_088E8228;
L_088EB100:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28108));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28096));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EB134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB134u) goto L_088EB134;
    return;
L_088EB134:
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
L_088EB150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EB168u);
    // nop
    goto L_088EB278;
L_088EB168:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EB17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EB17Cu) goto L_088EB17C;
    return;
L_088EB17C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB1BC;
      }
      goto L_088EB1A8;
    }
L_088EB1A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB1C4;
      }
      goto L_088EB1BC;
    }
L_088EB1BC:
    ctx.set_gpr(31, 0x088EB1C4u);
    // nop
    goto L_088EB278;
L_088EB1C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EB1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EB1F4u) goto L_088EB1F4;
    return;
L_088EB1F4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088EB20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EB20Cu) goto L_088EB20C;
    return;
L_088EB20C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB248;
      }
      goto L_088EB234;
    }
L_088EB234:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088EB240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB240u) goto L_088EB240;
    return;
L_088EB240:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EB248;
L_088EB248:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB260;
      }
      goto L_088EB250;
    }
L_088EB250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EB260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EB260u) goto L_088EB260;
    return;
L_088EB260:
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
L_088EB278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19808));
    ctx.set_gpr(31, 0x088EB290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EB290u) goto L_088EB290;
    return;
L_088EB290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EB2B0u) goto L_088EB2B0;
    return;
L_088EB2B0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28700));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19684));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-28076));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-20004));
    ctx.set_gpr(31, 0x088EB30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EB30Cu) goto L_088EB30C;
    return;
L_088EB30C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB31C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB32Cu);
    // nop
    goto L_088EB190;
L_088EB32C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB33C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28700)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EB360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EB360u) goto L_088EB360;
    return;
L_088EB360:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28056));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088EB37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EB37Cu) goto L_088EB37C;
    return;
L_088EB37C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28040));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28032));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28024));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EB3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB3A4u) goto L_088EB3A4;
    return;
L_088EB3A4:
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
L_088EB3BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28712)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB3FC;
      }
      goto L_088EB3D4;
    }
L_088EB3D4:
    ctx.set_gpr(31, 0x088EB3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EB3DCu) goto L_088EB3DC;
    return;
L_088EB3DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EB3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EB3E8u) goto L_088EB3E8;
    return;
L_088EB3E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EB3F4u) goto L_088EB3F4;
    return;
L_088EB3F4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28712), ctx.gpr[2]);
    goto L_088EB3FC;
L_088EB3FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28712)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28712)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB440;
      }
      goto L_088EB42C;
    }
L_088EB42C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB448;
      }
      goto L_088EB440;
    }
L_088EB440:
    ctx.set_gpr(31, 0x088EB448u);
    // nop
    goto L_088EB4A4;
L_088EB448:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28712)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EB474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EB474u) goto L_088EB474;
    return;
L_088EB474:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EB488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EB488u) goto L_088EB488;
    return;
L_088EB488:
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
L_088EB4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19252));
    ctx.set_gpr(31, 0x088EB4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EB4BCu) goto L_088EB4BC;
    return;
L_088EB4BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB4CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EB4DCu) goto L_088EB4DC;
    return;
L_088EB4DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28016));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28712));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19136));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-28008));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-19360));
    ctx.set_gpr(31, 0x088EB530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EB530u) goto L_088EB530;
    return;
L_088EB530:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB550u);
    // nop
    goto L_088EB414;
L_088EB550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28716)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB5A0;
      }
      goto L_088EB578;
    }
L_088EB578:
    ctx.set_gpr(31, 0x088EB580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EB580u) goto L_088EB580;
    return;
L_088EB580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EB58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EB58Cu) goto L_088EB58C;
    return;
L_088EB58C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EB598u) goto L_088EB598;
    return;
L_088EB598:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28716), ctx.gpr[2]);
    goto L_088EB5A0;
L_088EB5A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28716)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB5E4;
      }
      goto L_088EB5D0;
    }
L_088EB5D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB5EC;
      }
      goto L_088EB5E4;
    }
L_088EB5E4:
    ctx.set_gpr(31, 0x088EB5ECu);
    // nop
    goto L_088EB648;
L_088EB5EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EB618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EB618u) goto L_088EB618;
    return;
L_088EB618:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EB62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EB62Cu) goto L_088EB62C;
    return;
L_088EB62C:
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
L_088EB648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18832));
    ctx.set_gpr(31, 0x088EB660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EB660u) goto L_088EB660;
    return;
L_088EB660:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EB680u) goto L_088EB680;
    return;
L_088EB680:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28716));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18716));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27976));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18940));
    ctx.set_gpr(31, 0x088EB6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EB6D4u) goto L_088EB6D4;
    return;
L_088EB6D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB6E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB6F4u);
    // nop
    goto L_088EB5B8;
L_088EB6F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EB71Cu);
    // nop
    goto L_088EB8A4;
L_088EB71C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EB730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EB730u) goto L_088EB730;
    return;
L_088EB730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB784;
      }
      goto L_088EB75C;
    }
L_088EB75C:
    ctx.set_gpr(31, 0x088EB764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EB764u) goto L_088EB764;
    return;
L_088EB764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EB770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EB770u) goto L_088EB770;
    return;
L_088EB770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EB77Cu) goto L_088EB77C;
    return;
L_088EB77C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28720), ctx.gpr[2]);
    goto L_088EB784;
L_088EB784:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB79C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB7C8;
      }
      goto L_088EB7B4;
    }
L_088EB7B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB7D0;
      }
      goto L_088EB7C8;
    }
L_088EB7C8:
    ctx.set_gpr(31, 0x088EB7D0u);
    // nop
    goto L_088EB8A4;
L_088EB7D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB7E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EB800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EB800u) goto L_088EB800;
    return;
L_088EB800:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EB824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EB824u) goto L_088EB824;
    return;
L_088EB824:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB850;
      }
      goto L_088EB848;
    }
L_088EB848:
    ctx.set_gpr(31, 0x088EB850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EB850u) goto L_088EB850;
    return;
L_088EB850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB864;
      }
      goto L_088EB85C;
    }
L_088EB85C:
    ctx.set_gpr(31, 0x088EB864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EB864u) goto L_088EB864;
    return;
L_088EB864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB878;
      }
      goto L_088EB870;
    }
L_088EB870:
    ctx.set_gpr(31, 0x088EB878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EB878u) goto L_088EB878;
    return;
L_088EB878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EB88C;
      }
      goto L_088EB884;
    }
L_088EB884:
    ctx.set_gpr(31, 0x088EB88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EB88Cu) goto L_088EB88C;
    return;
L_088EB88C:
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
L_088EB8A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18228));
    ctx.set_gpr(31, 0x088EB8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EB8BCu) goto L_088EB8BC;
    return;
L_088EB8BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB8CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EB8DCu) goto L_088EB8DC;
    return;
L_088EB8DC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28720));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18104));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27936));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18456));
    ctx.set_gpr(31, 0x088EB938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EB938u) goto L_088EB938;
    return;
L_088EB938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB948:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EB958u);
    // nop
    goto L_088EB79C;
L_088EB958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28720)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EB990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EB990u) goto L_088EB990;
    return;
L_088EB990:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27924));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088EB9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EB9ACu) goto L_088EB9AC;
    return;
L_088EB9AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EB9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB9BCu) goto L_088EB9BC;
    return;
L_088EB9BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB9C8u);
    // nop
    goto L_088EB560;
L_088EB9C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EB9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EB9DCu) goto L_088EB9DC;
    return;
L_088EB9DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EB9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 298u, 0x088F1964u>(ctx, &aot_mem) && ctx.pc == 0x088EB9E8u) goto L_088EB9E8;
    return;
L_088EB9E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBA04u) goto L_088EBA04;
    return;
L_088EBA04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EBA10u);
    // nop
    goto L_088E84C4;
L_088EBA10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBA24u) goto L_088EBA24;
    return;
L_088EBA24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EBA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EBA34u) goto L_088EBA34;
    return;
L_088EBA34:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBA44u) goto L_088EBA44;
    return;
L_088EBA44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EBA50u);
    // nop
    goto L_088EB3BC;
L_088EBA50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27792));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27768));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27744));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EBA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBA84u) goto L_088EBA84;
    return;
L_088EBA84:
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
L_088EBAA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBAE0;
      }
      goto L_088EBAB8;
    }
L_088EBAB8:
    ctx.set_gpr(31, 0x088EBAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EBAC0u) goto L_088EBAC0;
    return;
L_088EBAC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EBACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EBACCu) goto L_088EBACC;
    return;
L_088EBACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EBAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EBAD8u) goto L_088EBAD8;
    return;
L_088EBAD8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28748), ctx.gpr[2]);
    goto L_088EBAE0;
L_088EBAE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBAF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB24;
      }
      goto L_088EBB10;
    }
L_088EBB10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBB2C;
      }
      goto L_088EBB24;
    }
L_088EBB24:
    ctx.set_gpr(31, 0x088EBB2Cu);
    // nop
    goto L_088EBB44;
L_088EBB2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBB44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17556));
    ctx.set_gpr(31, 0x088EBB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EBB5Cu) goto L_088EBB5C;
    return;
L_088EBB5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBB6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EBB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EBB7Cu) goto L_088EBB7C;
    return;
L_088EBB7C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28748));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17436));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27712));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088EBBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EBBD4u) goto L_088EBBD4;
    return;
L_088EBBD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBBE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EBBF4u);
    // nop
    goto L_088EBAF8;
L_088EBBF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EBC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EBC2Cu) goto L_088EBC2C;
    return;
L_088EBC2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27704));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088EBC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EBC48u) goto L_088EBC48;
    return;
L_088EBC48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EBC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBC58u) goto L_088EBC58;
    return;
L_088EBC58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EBC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 520u, 0x088E6B40u>(ctx, &aot_mem) && ctx.pc == 0x088EBC64u) goto L_088EBC64;
    return;
L_088EBC64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27668));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27660));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27652));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EBC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBC98u) goto L_088EBC98;
    return;
L_088EBC98:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17208));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28748)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_088EBCC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EBCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 375u, 0x088FE1F4u>(ctx, &aot_mem) && ctx.pc == 0x088EBCD8u) goto L_088EBCD8;
    return;
L_088EBCD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBCE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EBD00u);
    // nop
    goto L_088EBE2C;
L_088EBD00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EBD14u) goto L_088EBD14;
    return;
L_088EBD14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD54;
      }
      goto L_088EBD40;
    }
L_088EBD40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBD5C;
      }
      goto L_088EBD54;
    }
L_088EBD54:
    ctx.set_gpr(31, 0x088EBD5Cu);
    // nop
    goto L_088EBE2C;
L_088EBD5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EBD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EBD8Cu) goto L_088EBD8C;
    return;
L_088EBD8C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11140));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088EBDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EBDA8u) goto L_088EBDA8;
    return;
L_088EBDA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11140));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBDE4;
      }
      goto L_088EBDD0;
    }
L_088EBDD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088EBDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBDDCu) goto L_088EBDDC;
    return;
L_088EBDDC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EBDE4;
L_088EBDE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EBDFC;
      }
      goto L_088EBDEC;
    }
L_088EBDEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EBDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EBDFCu) goto L_088EBDFC;
    return;
L_088EBDFC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088EBE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EBE14u) goto L_088EBE14;
    return;
L_088EBE14:
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
L_088EBE2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16812));
    ctx.set_gpr(31, 0x088EBE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EBE44u) goto L_088EBE44;
    return;
L_088EBE44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBE54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EBE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EBE64u) goto L_088EBE64;
    return;
L_088EBE64:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28760));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16696));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27644));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17036));
    ctx.set_gpr(31, 0x088EBEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EBEB8u) goto L_088EBEB8;
    return;
L_088EBEB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBEC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EBED8u);
    // nop
    goto L_088EBD28;
L_088EBED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28760)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EBF0Cu) goto L_088EBF0C;
    return;
L_088EBF0C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27624));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088EBF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EBF28u) goto L_088EBF28;
    return;
L_088EBF28:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EBF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBF38u) goto L_088EBF38;
    return;
L_088EBF38:
    ctx.set_gpr(3, 2191u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-16508));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27588));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27580));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27572));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EBF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EBF6Cu) goto L_088EBF6C;
    return;
L_088EBF6C:
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
L_088EBF84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28772)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBFC8;
      }
      goto L_088EBF9C;
    }
L_088EBF9C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27488));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27512));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27500));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088EBFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088EBFC0u) goto L_088EBFC0;
    return;
L_088EBFC0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28772), ctx.gpr[2]);
    goto L_088EBFC8;
L_088EBFC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28772)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 4u, 0x088EC020u>(ctx, &aot_mem); return;
      }
      goto L_088EBFF8;
    }
L_088EBFF8:
    ctx.set_gpr(31, 0x088EC000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0057(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0057_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_57(Runtime &runtime) {
    runtime.register_generated_unit(57u, 0x088E8000u, 16384u, &recomp_unit_0057, &recomp_unit_0057_entry);
    runtime.register_function(0x088E8000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8014u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8028u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E803Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8058u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8070u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8080u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8090u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8104u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8114u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8154u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8164u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8178u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8198u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8200u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8214u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8228u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8240u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8254u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8260u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8268u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8280u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8298u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8310u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8328u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8338u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8348u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E839Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8410u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8420u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E842Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8468u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8484u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E849Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8504u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E851Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8534u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8548u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8550u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8568u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E857Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8590u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8638u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8648u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8658u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8680u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8694u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8710u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E874Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E877Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8814u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8820u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E883Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8844u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8850u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E885Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8878u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8888u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E891Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E892Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E893Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E894Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8974u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8990u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8ED4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9018u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E902Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E903Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9054u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9058u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9060u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9078u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9084u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9098u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9104u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9110u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9120u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E912Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9134u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9140u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9148u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9160u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9174u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9184u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E919Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9218u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9224u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E922Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9238u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9244u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9258u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9264u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9274u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9280u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9288u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9294u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E929Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9314u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9320u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9334u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9344u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E936Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9374u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9380u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E938Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9410u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9420u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9438u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E943Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9444u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E945Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9468u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E947Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E948Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9504u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9510u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9518u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9524u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E952Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9544u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9558u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9568u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9580u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9584u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E958Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9604u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9610u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E961Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9630u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E963Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E964Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9658u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9660u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E966Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9674u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E968Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E970Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E971Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9738u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E975Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9774u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9788u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E979Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E980Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9820u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9828u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9840u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9854u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9884u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E989Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9910u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9920u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9930u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9940u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9970u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9984u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ADCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ED0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA004u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA00Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA024u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA030u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA03Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA048u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA050u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA05Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA068u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA070u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA07Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA088u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA090u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA09Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA108u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA110u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA11Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA128u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA130u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA13Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA148u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA150u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA15Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA168u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA170u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA17Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA190u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA19Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA254u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA26Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA27Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA28Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA308u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA318u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA328u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA350u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA36Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA37Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA390u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA404u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA410u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA428u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA454u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA470u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA488u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA49Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA508u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA520u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA534u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA53Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA554u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA56Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA5F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA604u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA60Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA618u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA620u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA62Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA634u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA640u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA648u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA654u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA65Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA670u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA680u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA68Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA694u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA69Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA708u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA710u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA71Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA724u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA738u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA750u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA768u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA778u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA788u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA804u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA814u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA83Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA874u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA888u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA894u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA904u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA914u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA924u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA934u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA944u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA950u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA964u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA970u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA984u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA994u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAABCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAACCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAED4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB028u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB038u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB048u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB058u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB080u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB09Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB100u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB134u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB150u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB168u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB17Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB190u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB20Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB234u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB240u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB250u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB260u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB278u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB290u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB30Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB31Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB32Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB33Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB37Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB414u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB42Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB440u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB448u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB460u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB474u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB488u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB530u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB540u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB550u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB560u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB578u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB580u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB58Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB598u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB604u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB618u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB62Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB648u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB660u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB670u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB680u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB704u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB71Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB75Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB764u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB770u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB77Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB79Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB800u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB824u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB848u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB850u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB85Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB864u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB870u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB878u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB884u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB88Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB938u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB948u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB958u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB968u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB990u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBACCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBED8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFF8u, &recomp_unit_0057, "recomp_unit_0057");
}
} // namespace psprecomp
