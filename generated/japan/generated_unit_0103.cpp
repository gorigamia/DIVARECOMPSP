#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0103[4095] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 8, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0,
    0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 36, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 59, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 70, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95,
    0, 96, 0, 97, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 142, 0, 143, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 174, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 0, 197, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 262,
    0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295,
    0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0,
    317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 321, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0,
    0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0,
    0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0,
    385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 407, 0, 408,
    0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 425, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 436,
    0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0,
    0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 457, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 483, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0,
    490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 508, 0, 0, 509, 0, 510, 0, 0,
    0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 532, 0, 0, 533, 0, 534, 0, 0, 0, 535,
    0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 542,
    0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0,
    0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0,
    556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0,
    0, 563, 0, 0, 564, 0, 0, 565, 0, 566, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574,
    0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 583, 0, 0, 584, 0,
    585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 0,
    597, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0,
    606, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0,
    0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 627, 0, 628,
    0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644,
    0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657, 0,
    658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 665, 0,
    0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0,
    0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 679, 0,
    0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0,
    702, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 707, 708, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0,
    0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734,
    0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 740, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0,
    0, 744, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0,
    0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0,
    0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 769, 0, 0, 770, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0,
    0, 777, 0, 778, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0,
    0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0,
    0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 799, 0, 0, 800, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 806, 0, 0, 807, 0,
    0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 813, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 817, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0,
    820, 0, 821, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 0,
    829, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0,
    0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850,
    0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 860, 0, 0,
    861, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0,
    0, 872, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0,
    0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0,
    0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 892, 0,
    0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 897, 0, 0, 0,
    0, 0, 0, 898, 0, 899, 900, 0, 0, 901, 0, 902, 903, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 906, 907,
    0, 0, 908, 0, 909, 910, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 913, 914, 0, 0, 915, 0, 916, 917,
};
void recomp_unit_0103_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0103[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A0000;
    case 2u: goto L_089A0004;
    case 3u: goto L_089A0034;
    case 4u: goto L_089A0048;
    case 5u: goto L_089A0060;
    case 6u: goto L_089A006C;
    case 7u: goto L_089A007C;
    case 8u: goto L_089A0094;
    case 9u: goto L_089A0098;
    case 10u: goto L_089A00A0;
    case 11u: goto L_089A00D4;
    case 12u: goto L_089A00EC;
    case 13u: goto L_089A00F8;
    case 14u: goto L_089A0104;
    case 15u: goto L_089A011C;
    case 16u: goto L_089A0128;
    case 17u: goto L_089A0140;
    case 18u: goto L_089A0148;
    case 19u: goto L_089A015C;
    case 20u: goto L_089A0160;
    case 21u: goto L_089A0174;
    case 22u: goto L_089A0194;
    case 23u: goto L_089A019C;
    case 24u: goto L_089A01B0;
    case 25u: goto L_089A01B4;
    case 26u: goto L_089A01D4;
    case 27u: goto L_089A0204;
    case 28u: goto L_089A021C;
    case 29u: goto L_089A0224;
    case 30u: goto L_089A0228;
    case 31u: goto L_089A0234;
    case 32u: goto L_089A0244;
    case 33u: goto L_089A0258;
    case 34u: goto L_089A0264;
    case 35u: goto L_089A027C;
    case 36u: goto L_089A0294;
    case 37u: goto L_089A029C;
    case 38u: goto L_089A02A0;
    case 39u: goto L_089A02AC;
    case 40u: goto L_089A02BC;
    case 41u: goto L_089A02D0;
    case 42u: goto L_089A02DC;
    case 43u: goto L_089A02F4;
    case 44u: goto L_089A0308;
    case 45u: goto L_089A0328;
    case 46u: goto L_089A0348;
    case 47u: goto L_089A0358;
    case 48u: goto L_089A0364;
    case 49u: goto L_089A0380;
    case 50u: goto L_089A038C;
    case 51u: goto L_089A0398;
    case 52u: goto L_089A03A0;
    case 53u: goto L_089A03A8;
    case 54u: goto L_089A03B0;
    case 55u: goto L_089A03CC;
    case 56u: goto L_089A03D4;
    case 57u: goto L_089A03DC;
    case 58u: goto L_089A03EC;
    case 59u: goto L_089A0404;
    case 60u: goto L_089A0408;
    case 61u: goto L_089A0410;
    case 62u: goto L_089A0428;
    case 63u: goto L_089A0434;
    case 64u: goto L_089A0440;
    case 65u: goto L_089A0448;
    case 66u: goto L_089A0450;
    case 67u: goto L_089A0454;
    case 68u: goto L_089A0468;
    case 69u: goto L_089A0478;
    case 70u: goto L_089A0490;
    case 71u: goto L_089A0494;
    case 72u: goto L_089A049C;
    case 73u: goto L_089A04B4;
    case 74u: goto L_089A04C0;
    case 75u: goto L_089A04C4;
    case 76u: goto L_089A04DC;
    case 77u: goto L_089A04FC;
    case 78u: goto L_089A050C;
    case 79u: goto L_089A0518;
    case 80u: goto L_089A0534;
    case 81u: goto L_089A0540;
    case 82u: goto L_089A054C;
    case 83u: goto L_089A0560;
    case 84u: goto L_089A0568;
    case 85u: goto L_089A0570;
    case 86u: goto L_089A0584;
    case 87u: goto L_089A0590;
    case 88u: goto L_089A0598;
    case 89u: goto L_089A05A8;
    case 90u: goto L_089A05C0;
    case 91u: goto L_089A05C4;
    case 92u: goto L_089A05CC;
    case 93u: goto L_089A05E4;
    case 94u: goto L_089A05F0;
    case 95u: goto L_089A05FC;
    case 96u: goto L_089A0604;
    case 97u: goto L_089A060C;
    case 98u: goto L_089A0610;
    case 99u: goto L_089A0624;
    case 100u: goto L_089A0630;
    case 101u: goto L_089A0658;
    case 102u: goto L_089A0660;
    case 103u: goto L_089A0680;
    case 104u: goto L_089A0698;
    case 105u: goto L_089A069C;
    case 106u: goto L_089A06A4;
    case 107u: goto L_089A06BC;
    case 108u: goto L_089A06C8;
    case 109u: goto L_089A06D4;
    case 110u: goto L_089A06D8;
    case 111u: goto L_089A06E4;
    case 112u: goto L_089A06F4;
    case 113u: goto L_089A070C;
    case 114u: goto L_089A0710;
    case 115u: goto L_089A0718;
    case 116u: goto L_089A0730;
    case 117u: goto L_089A073C;
    case 118u: goto L_089A0740;
    case 119u: goto L_089A0758;
    case 120u: goto L_089A0764;
    case 121u: goto L_089A0770;
    case 122u: goto L_089A077C;
    case 123u: goto L_089A079C;
    case 124u: goto L_089A07A0;
    case 125u: goto L_089A07A8;
    case 126u: goto L_089A07B8;
    case 127u: goto L_089A07C0;
    case 128u: goto L_089A07CC;
    case 129u: goto L_089A07D8;
    case 130u: goto L_089A07EC;
    case 131u: goto L_089A07F4;
    case 132u: goto L_089A080C;
    case 133u: goto L_089A0824;
    case 134u: goto L_089A0834;
    case 135u: goto L_089A0850;
    case 136u: goto L_089A0860;
    case 137u: goto L_089A087C;
    case 138u: goto L_089A0884;
    case 139u: goto L_089A0894;
    case 140u: goto L_089A08BC;
    case 141u: goto L_089A08D4;
    case 142u: goto L_089A08D8;
    case 143u: goto L_089A08E0;
    case 144u: goto L_089A08EC;
    case 145u: goto L_089A08FC;
    case 146u: goto L_089A0914;
    case 147u: goto L_089A0918;
    case 148u: goto L_089A0920;
    case 149u: goto L_089A0938;
    case 150u: goto L_089A0944;
    case 151u: goto L_089A0964;
    case 152u: goto L_089A0990;
    case 153u: goto L_089A099C;
    case 154u: goto L_089A09A4;
    case 155u: goto L_089A09B0;
    case 156u: goto L_089A09B8;
    case 157u: goto L_089A09C4;
    case 158u: goto L_089A09E0;
    case 159u: goto L_089A09EC;
    case 160u: goto L_089A0A00;
    case 161u: goto L_089A0A14;
    case 162u: goto L_089A0A20;
    case 163u: goto L_089A0A2C;
    case 164u: goto L_089A0A78;
    case 165u: goto L_089A0A84;
    case 166u: goto L_089A0A94;
    case 167u: goto L_089A0AA0;
    case 168u: goto L_089A0AA8;
    case 169u: goto L_089A0AB4;
    case 170u: goto L_089A0ABC;
    case 171u: goto L_089A0AD0;
    case 172u: goto L_089A0AE4;
    case 173u: goto L_089A0AF4;
    case 174u: goto L_089A0B0C;
    case 175u: goto L_089A0B10;
    case 176u: goto L_089A0B18;
    case 177u: goto L_089A0B30;
    case 178u: goto L_089A0B3C;
    case 179u: goto L_089A0B90;
    case 180u: goto L_089A0B9C;
    case 181u: goto L_089A0BA4;
    case 182u: goto L_089A0BB4;
    case 183u: goto L_089A0BC4;
    case 184u: goto L_089A0BCC;
    case 185u: goto L_089A0BD8;
    case 186u: goto L_089A0BE0;
    case 187u: goto L_089A0BEC;
    case 188u: goto L_089A0C08;
    case 189u: goto L_089A0C14;
    case 190u: goto L_089A0C30;
    case 191u: goto L_089A0C38;
    case 192u: goto L_089A0C44;
    case 193u: goto L_089A0C50;
    case 194u: goto L_089A0C5C;
    case 195u: goto L_089A0C68;
    case 196u: goto L_089A0C78;
    case 197u: goto L_089A0C8C;
    case 198u: goto L_089A0C90;
    case 199u: goto L_089A0CB0;
    case 200u: goto L_089A0CF8;
    case 201u: goto L_089A0D04;
    case 202u: goto L_089A0D48;
    case 203u: goto L_089A0D54;
    case 204u: goto L_089A0D60;
    case 205u: goto L_089A0D70;
    case 206u: goto L_089A0D80;
    case 207u: goto L_089A0D94;
    case 208u: goto L_089A0DA0;
    case 209u: goto L_089A0DAC;
    case 210u: goto L_089A0DB4;
    case 211u: goto L_089A0DC0;
    case 212u: goto L_089A0DC8;
    case 213u: goto L_089A0DD0;
    case 214u: goto L_089A0DEC;
    case 215u: goto L_089A0DF4;
    case 216u: goto L_089A0E10;
    case 217u: goto L_089A0E20;
    case 218u: goto L_089A0E24;
    case 219u: goto L_089A0E4C;
    case 220u: goto L_089A0E6C;
    case 221u: goto L_089A0E78;
    case 222u: goto L_089A0E94;
    case 223u: goto L_089A0F08;
    case 224u: goto L_089A0F1C;
    case 225u: goto L_089A0F30;
    case 226u: goto L_089A0F3C;
    case 227u: goto L_089A0F48;
    case 228u: goto L_089A0F54;
    case 229u: goto L_089A0F60;
    case 230u: goto L_089A0F70;
    case 231u: goto L_089A0F84;
    case 232u: goto L_089A0FC4;
    case 233u: goto L_089A0FD8;
    case 234u: goto L_089A0FE4;
    case 235u: goto L_089A0FEC;
    case 236u: goto L_089A0FF8;
    case 237u: goto L_089A1000;
    case 238u: goto L_089A102C;
    case 239u: goto L_089A1058;
    case 240u: goto L_089A105C;
    case 241u: goto L_089A1064;
    case 242u: goto L_089A1078;
    case 243u: goto L_089A1088;
    case 244u: goto L_089A10D4;
    case 245u: goto L_089A10E0;
    case 246u: goto L_089A10EC;
    case 247u: goto L_089A10F8;
    case 248u: goto L_089A1114;
    case 249u: goto L_089A1174;
    case 250u: goto L_089A117C;
    case 251u: goto L_089A1188;
    case 252u: goto L_089A11AC;
    case 253u: goto L_089A11B4;
    case 254u: goto L_089A11C0;
    case 255u: goto L_089A11DC;
    case 256u: goto L_089A1200;
    case 257u: goto L_089A1224;
    case 258u: goto L_089A1248;
    case 259u: goto L_089A1250;
    case 260u: goto L_089A125C;
    case 261u: goto L_089A1278;
    case 262u: goto L_089A127C;
    case 263u: goto L_089A1284;
    case 264u: goto L_089A1294;
    case 265u: goto L_089A12AC;
    case 266u: goto L_089A12C0;
    case 267u: goto L_089A12D0;
    case 268u: goto L_089A12E8;
    case 269u: goto L_089A131C;
    case 270u: goto L_089A133C;
    case 271u: goto L_089A1348;
    case 272u: goto L_089A1364;
    case 273u: goto L_089A1378;
    case 274u: goto L_089A138C;
    case 275u: goto L_089A1398;
    case 276u: goto L_089A13C4;
    case 277u: goto L_089A13CC;
    case 278u: goto L_089A13E4;
    case 279u: goto L_089A13F0;
    case 280u: goto L_089A1404;
    case 281u: goto L_089A1430;
    case 282u: goto L_089A1434;
    case 283u: goto L_089A1440;
    case 284u: goto L_089A144C;
    case 285u: goto L_089A1464;
    case 286u: goto L_089A1480;
    case 287u: goto L_089A1490;
    case 288u: goto L_089A149C;
    case 289u: goto L_089A14A4;
    case 290u: goto L_089A14AC;
    case 291u: goto L_089A14B8;
    case 292u: goto L_089A14D0;
    case 293u: goto L_089A14D8;
    case 294u: goto L_089A14E4;
    case 295u: goto L_089A14FC;
    case 296u: goto L_089A1508;
    case 297u: goto L_089A1514;
    case 298u: goto L_089A151C;
    case 299u: goto L_089A1538;
    case 300u: goto L_089A1540;
    case 301u: goto L_089A1548;
    case 302u: goto L_089A1554;
    case 303u: goto L_089A1560;
    case 304u: goto L_089A156C;
    case 305u: goto L_089A1584;
    case 306u: goto L_089A1594;
    case 307u: goto L_089A15A0;
    case 308u: goto L_089A15A8;
    case 309u: goto L_089A15B4;
    case 310u: goto L_089A15BC;
    case 311u: goto L_089A15F8;
    case 312u: goto L_089A1624;
    case 313u: goto L_089A1630;
    case 314u: goto L_089A1658;
    case 315u: goto L_089A1660;
    case 316u: goto L_089A1674;
    case 317u: goto L_089A1680;
    case 318u: goto L_089A168C;
    case 319u: goto L_089A1698;
    case 320u: goto L_089A16A8;
    case 321u: goto L_089A16AC;
    case 322u: goto L_089A16B0;
    case 323u: goto L_089A16CC;
    case 324u: goto L_089A16EC;
    case 325u: goto L_089A16F8;
    case 326u: goto L_089A1708;
    case 327u: goto L_089A1714;
    case 328u: goto L_089A1728;
    case 329u: goto L_089A1738;
    case 330u: goto L_089A1740;
    case 331u: goto L_089A174C;
    case 332u: goto L_089A1754;
    case 333u: goto L_089A1770;
    case 334u: goto L_089A17A4;
    case 335u: goto L_089A17A8;
    case 336u: goto L_089A17B0;
    case 337u: goto L_089A17BC;
    case 338u: goto L_089A17C8;
    case 339u: goto L_089A17DC;
    case 340u: goto L_089A17E8;
    case 341u: goto L_089A17F4;
    case 342u: goto L_089A1804;
    case 343u: goto L_089A1810;
    case 344u: goto L_089A181C;
    case 345u: goto L_089A1828;
    case 346u: goto L_089A1834;
    case 347u: goto L_089A1844;
    case 348u: goto L_089A1850;
    case 349u: goto L_089A1870;
    case 350u: goto L_089A187C;
    case 351u: goto L_089A1898;
    case 352u: goto L_089A18B4;
    case 353u: goto L_089A18BC;
    case 354u: goto L_089A18D0;
    case 355u: goto L_089A18D8;
    case 356u: goto L_089A18E4;
    case 357u: goto L_089A18EC;
    case 358u: goto L_089A18F8;
    case 359u: goto L_089A1904;
    case 360u: goto L_089A1914;
    case 361u: goto L_089A192C;
    case 362u: goto L_089A1934;
    case 363u: goto L_089A1944;
    case 364u: goto L_089A194C;
    case 365u: goto L_089A195C;
    case 366u: goto L_089A196C;
    case 367u: goto L_089A1988;
    case 368u: goto L_089A1990;
    case 369u: goto L_089A199C;
    case 370u: goto L_089A19A8;
    case 371u: goto L_089A19B4;
    case 372u: goto L_089A19C0;
    case 373u: goto L_089A19E0;
    case 374u: goto L_089A19F0;
    case 375u: goto L_089A1A00;
    case 376u: goto L_089A1A0C;
    case 377u: goto L_089A1A14;
    case 378u: goto L_089A1A28;
    case 379u: goto L_089A1A2C;
    case 380u: goto L_089A1A34;
    case 381u: goto L_089A1A40;
    case 382u: goto L_089A1A48;
    case 383u: goto L_089A1A5C;
    case 384u: goto L_089A1A64;
    case 385u: goto L_089A1A80;
    case 386u: goto L_089A1A88;
    case 387u: goto L_089A1A94;
    case 388u: goto L_089A1A9C;
    case 389u: goto L_089A1AA8;
    case 390u: goto L_089A1AB0;
    case 391u: goto L_089A1ABC;
    case 392u: goto L_089A1AC4;
    case 393u: goto L_089A1AD0;
    case 394u: goto L_089A1AD8;
    case 395u: goto L_089A1AE4;
    case 396u: goto L_089A1AF0;
    case 397u: goto L_089A1B0C;
    case 398u: goto L_089A1B18;
    case 399u: goto L_089A1B20;
    case 400u: goto L_089A1B2C;
    case 401u: goto L_089A1B34;
    case 402u: goto L_089A1B40;
    case 403u: goto L_089A1B48;
    case 404u: goto L_089A1B54;
    case 405u: goto L_089A1B5C;
    case 406u: goto L_089A1B68;
    case 407u: goto L_089A1B74;
    case 408u: goto L_089A1B7C;
    case 409u: goto L_089A1B88;
    case 410u: goto L_089A1B90;
    case 411u: goto L_089A1B9C;
    case 412u: goto L_089A1BA4;
    case 413u: goto L_089A1BA8;
    case 414u: goto L_089A1BCC;
    case 415u: goto L_089A1BD8;
    case 416u: goto L_089A1C00;
    case 417u: goto L_089A1C18;
    case 418u: goto L_089A1C38;
    case 419u: goto L_089A1C58;
    case 420u: goto L_089A1C60;
    case 421u: goto L_089A1C88;
    case 422u: goto L_089A1CE0;
    case 423u: goto L_089A1CE8;
    case 424u: goto L_089A1CFC;
    case 425u: goto L_089A1D1C;
    case 426u: goto L_089A1D20;
    case 427u: goto L_089A1D2C;
    case 428u: goto L_089A1D34;
    case 429u: goto L_089A1D50;
    case 430u: goto L_089A1D58;
    case 431u: goto L_089A1D74;
    case 432u: goto L_089A1D8C;
    case 433u: goto L_089A1DCC;
    case 434u: goto L_089A1DD8;
    case 435u: goto L_089A1DF8;
    case 436u: goto L_089A1DFC;
    case 437u: goto L_089A1E04;
    case 438u: goto L_089A1E20;
    case 439u: goto L_089A1E2C;
    case 440u: goto L_089A1E30;
    case 441u: goto L_089A1E78;
    case 442u: goto L_089A1E80;
    case 443u: goto L_089A1E8C;
    case 444u: goto L_089A1EB0;
    case 445u: goto L_089A1EB8;
    case 446u: goto L_089A1EC4;
    case 447u: goto L_089A1EE0;
    case 448u: goto L_089A1EEC;
    case 449u: goto L_089A1EF8;
    case 450u: goto L_089A1F14;
    case 451u: goto L_089A1F38;
    case 452u: goto L_089A1F5C;
    case 453u: goto L_089A1F80;
    case 454u: goto L_089A1F88;
    case 455u: goto L_089A1F94;
    case 456u: goto L_089A1FB0;
    case 457u: goto L_089A1FB4;
    case 458u: goto L_089A1FC0;
    case 459u: goto L_089A1FC8;
    case 460u: goto L_089A1FD0;
    case 461u: goto L_089A1FD8;
    case 462u: goto L_089A1FE4;
    case 463u: goto L_089A2000;
    case 464u: goto L_089A2020;
    case 465u: goto L_089A2028;
    case 466u: goto L_089A2034;
    case 467u: goto L_089A2040;
    case 468u: goto L_089A2068;
    case 469u: goto L_089A2088;
    case 470u: goto L_089A2090;
    case 471u: goto L_089A209C;
    case 472u: goto L_089A20B8;
    case 473u: goto L_089A20C4;
    case 474u: goto L_089A20D4;
    case 475u: goto L_089A20E0;
    case 476u: goto L_089A20F8;
    case 477u: goto L_089A2118;
    case 478u: goto L_089A2120;
    case 479u: goto L_089A2134;
    case 480u: goto L_089A2140;
    case 481u: goto L_089A214C;
    case 482u: goto L_089A2178;
    case 483u: goto L_089A2188;
    case 484u: goto L_089A218C;
    case 485u: goto L_089A2198;
    case 486u: goto L_089A21A4;
    case 487u: goto L_089A21BC;
    case 488u: goto L_089A21E4;
    case 489u: goto L_089A21F8;
    case 490u: goto L_089A2200;
    case 491u: goto L_089A220C;
    case 492u: goto L_089A2218;
    case 493u: goto L_089A2248;
    case 494u: goto L_089A2268;
    case 495u: goto L_089A2270;
    case 496u: goto L_089A227C;
    case 497u: goto L_089A2298;
    case 498u: goto L_089A22A4;
    case 499u: goto L_089A22B0;
    case 500u: goto L_089A22C8;
    case 501u: goto L_089A22D0;
    case 502u: goto L_089A22D8;
    case 503u: goto L_089A22E8;
    case 504u: goto L_089A2310;
    case 505u: goto L_089A231C;
    case 506u: goto L_089A2348;
    case 507u: goto L_089A235C;
    case 508u: goto L_089A2360;
    case 509u: goto L_089A236C;
    case 510u: goto L_089A2374;
    case 511u: goto L_089A2384;
    case 512u: goto L_089A2390;
    case 513u: goto L_089A23A8;
    case 514u: goto L_089A23B0;
    case 515u: goto L_089A23E0;
    case 516u: goto L_089A2400;
    case 517u: goto L_089A2408;
    case 518u: goto L_089A2414;
    case 519u: goto L_089A2430;
    case 520u: goto L_089A243C;
    case 521u: goto L_089A244C;
    case 522u: goto L_089A2458;
    case 523u: goto L_089A2470;
    case 524u: goto L_089A2490;
    case 525u: goto L_089A2498;
    case 526u: goto L_089A24AC;
    case 527u: goto L_089A24BC;
    case 528u: goto L_089A24F0;
    case 529u: goto L_089A24FC;
    case 530u: goto L_089A2540;
    case 531u: goto L_089A2554;
    case 532u: goto L_089A2558;
    case 533u: goto L_089A2564;
    case 534u: goto L_089A256C;
    case 535u: goto L_089A257C;
    case 536u: goto L_089A2588;
    case 537u: goto L_089A25A0;
    case 538u: goto L_089A25C8;
    case 539u: goto L_089A25DC;
    case 540u: goto L_089A25EC;
    case 541u: goto L_089A25F4;
    case 542u: goto L_089A25FC;
    case 543u: goto L_089A2608;
    case 544u: goto L_089A2620;
    case 545u: goto L_089A2628;
    case 546u: goto L_089A2634;
    case 547u: goto L_089A264C;
    case 548u: goto L_089A2654;
    case 549u: goto L_089A2660;
    case 550u: goto L_089A2678;
    case 551u: goto L_089A2684;
    case 552u: goto L_089A268C;
    case 553u: goto L_089A26C0;
    case 554u: goto L_089A26EC;
    case 555u: goto L_089A26F8;
    case 556u: goto L_089A2700;
    case 557u: goto L_089A2714;
    case 558u: goto L_089A2734;
    case 559u: goto L_089A2744;
    case 560u: goto L_089A2750;
    case 561u: goto L_089A2770;
    case 562u: goto L_089A2778;
    case 563u: goto L_089A2784;
    case 564u: goto L_089A2790;
    case 565u: goto L_089A279C;
    case 566u: goto L_089A27A4;
    case 567u: goto L_089A27A8;
    case 568u: goto L_089A27B8;
    case 569u: goto L_089A27C4;
    case 570u: goto L_089A27D0;
    case 571u: goto L_089A27DC;
    case 572u: goto L_089A27E8;
    case 573u: goto L_089A27F4;
    case 574u: goto L_089A27FC;
    case 575u: goto L_089A2804;
    case 576u: goto L_089A2828;
    case 577u: goto L_089A2860;
    case 578u: goto L_089A28A0;
    case 579u: goto L_089A28B8;
    case 580u: goto L_089A28D4;
    case 581u: goto L_089A28E0;
    case 582u: goto L_089A28E8;
    case 583u: goto L_089A28EC;
    case 584u: goto L_089A28F8;
    case 585u: goto L_089A2900;
    case 586u: goto L_089A290C;
    case 587u: goto L_089A2928;
    case 588u: goto L_089A2948;
    case 589u: goto L_089A29B4;
    case 590u: goto L_089A29C4;
    case 591u: goto L_089A29E8;
    case 592u: goto L_089A29FC;
    case 593u: goto L_089A2A18;
    case 594u: goto L_089A2A58;
    case 595u: goto L_089A2A70;
    case 596u: goto L_089A2A78;
    case 597u: goto L_089A2A80;
    case 598u: goto L_089A2A8C;
    case 599u: goto L_089A2A98;
    case 600u: goto L_089A2ABC;
    case 601u: goto L_089A2ACC;
    case 602u: goto L_089A2AD4;
    case 603u: goto L_089A2ADC;
    case 604u: goto L_089A2AF0;
    case 605u: goto L_089A2AF8;
    case 606u: goto L_089A2B00;
    case 607u: goto L_089A2B0C;
    case 608u: goto L_089A2B18;
    case 609u: goto L_089A2B3C;
    case 610u: goto L_089A2B4C;
    case 611u: goto L_089A2B54;
    case 612u: goto L_089A2B7C;
    case 613u: goto L_089A2BA0;
    case 614u: goto L_089A2BAC;
    case 615u: goto L_089A2BB4;
    case 616u: goto L_089A2BDC;
    case 617u: goto L_089A2BE8;
    case 618u: goto L_089A2BF8;
    case 619u: goto L_089A2C04;
    case 620u: goto L_089A2C0C;
    case 621u: goto L_089A2C18;
    case 622u: goto L_089A2C20;
    case 623u: goto L_089A2C34;
    case 624u: goto L_089A2C48;
    case 625u: goto L_089A2C58;
    case 626u: goto L_089A2C70;
    case 627u: goto L_089A2C74;
    case 628u: goto L_089A2C7C;
    case 629u: goto L_089A2C94;
    case 630u: goto L_089A2CA0;
    case 631u: goto L_089A2CB0;
    case 632u: goto L_089A2CB8;
    case 633u: goto L_089A2CC4;
    case 634u: goto L_089A2CDC;
    case 635u: goto L_089A2CE4;
    case 636u: goto L_089A2CF0;
    case 637u: goto L_089A2CFC;
    case 638u: goto L_089A2D28;
    case 639u: goto L_089A2D34;
    case 640u: goto L_089A2D38;
    case 641u: goto L_089A2D50;
    case 642u: goto L_089A2D5C;
    case 643u: goto L_089A2D74;
    case 644u: goto L_089A2D7C;
    case 645u: goto L_089A2D88;
    case 646u: goto L_089A2D94;
    case 647u: goto L_089A2DA8;
    case 648u: goto L_089A2DB8;
    case 649u: goto L_089A2DD8;
    case 650u: goto L_089A2DEC;
    case 651u: goto L_089A2E04;
    case 652u: goto L_089A2E1C;
    case 653u: goto L_089A2E44;
    case 654u: goto L_089A2E50;
    case 655u: goto L_089A2E58;
    case 656u: goto L_089A2E6C;
    case 657u: goto L_089A2E78;
    case 658u: goto L_089A2E80;
    case 659u: goto L_089A2E8C;
    case 660u: goto L_089A2E9C;
    case 661u: goto L_089A2EBC;
    case 662u: goto L_089A2EDC;
    case 663u: goto L_089A2EE8;
    case 664u: goto L_089A2EF4;
    case 665u: goto L_089A2EF8;
    case 666u: goto L_089A2F18;
    case 667u: goto L_089A2F30;
    case 668u: goto L_089A2F40;
    case 669u: goto L_089A2F58;
    case 670u: goto L_089A2F68;
    case 671u: goto L_089A2F88;
    case 672u: goto L_089A2FA8;
    case 673u: goto L_089A2FC0;
    case 674u: goto L_089A2FC8;
    case 675u: goto L_089A2FD0;
    case 676u: goto L_089A2FD8;
    case 677u: goto L_089A2FE4;
    case 678u: goto L_089A2FF0;
    case 679u: goto L_089A2FF8;
    case 680u: goto L_089A3008;
    case 681u: goto L_089A3010;
    case 682u: goto L_089A301C;
    case 683u: goto L_089A3028;
    case 684u: goto L_089A3030;
    case 685u: goto L_089A3048;
    case 686u: goto L_089A3060;
    case 687u: goto L_089A3074;
    case 688u: goto L_089A3088;
    case 689u: goto L_089A309C;
    case 690u: goto L_089A30B4;
    case 691u: goto L_089A30CC;
    case 692u: goto L_089A30D8;
    case 693u: goto L_089A30E4;
    case 694u: goto L_089A3120;
    case 695u: goto L_089A312C;
    case 696u: goto L_089A3134;
    case 697u: goto L_089A3144;
    case 698u: goto L_089A3150;
    case 699u: goto L_089A3158;
    case 700u: goto L_089A316C;
    case 701u: goto L_089A3174;
    case 702u: goto L_089A3180;
    case 703u: goto L_089A3190;
    case 704u: goto L_089A319C;
    case 705u: goto L_089A31AC;
    case 706u: goto L_089A31D0;
    case 707u: goto L_089A320C;
    case 708u: goto L_089A3210;
    case 709u: goto L_089A321C;
    case 710u: goto L_089A3224;
    case 711u: goto L_089A3250;
    case 712u: goto L_089A3258;
    case 713u: goto L_089A3284;
    case 714u: goto L_089A328C;
    case 715u: goto L_089A3298;
    case 716u: goto L_089A32A4;
    case 717u: goto L_089A32B0;
    case 718u: goto L_089A32C0;
    case 719u: goto L_089A32E4;
    case 720u: goto L_089A32F0;
    case 721u: goto L_089A331C;
    case 722u: goto L_089A332C;
    case 723u: goto L_089A3334;
    case 724u: goto L_089A3340;
    case 725u: goto L_089A3360;
    case 726u: goto L_089A3374;
    case 727u: goto L_089A3384;
    case 728u: goto L_089A338C;
    case 729u: goto L_089A33A4;
    case 730u: goto L_089A33B0;
    case 731u: goto L_089A33DC;
    case 732u: goto L_089A33E4;
    case 733u: goto L_089A33F0;
    case 734u: goto L_089A33FC;
    case 735u: goto L_089A3420;
    case 736u: goto L_089A3428;
    case 737u: goto L_089A3454;
    case 738u: goto L_089A3464;
    case 739u: goto L_089A346C;
    case 740u: goto L_089A3478;
    case 741u: goto L_089A34B8;
    case 742u: goto L_089A34C4;
    case 743u: goto L_089A34F4;
    case 744u: goto L_089A3504;
    case 745u: goto L_089A350C;
    case 746u: goto L_089A3518;
    case 747u: goto L_089A3524;
    case 748u: goto L_089A3530;
    case 749u: goto L_089A3560;
    case 750u: goto L_089A3570;
    case 751u: goto L_089A3578;
    case 752u: goto L_089A3584;
    case 753u: goto L_089A3590;
    case 754u: goto L_089A359C;
    case 755u: goto L_089A35CC;
    case 756u: goto L_089A35DC;
    case 757u: goto L_089A35E4;
    case 758u: goto L_089A35F0;
    case 759u: goto L_089A3610;
    case 760u: goto L_089A363C;
    case 761u: goto L_089A3650;
    case 762u: goto L_089A3658;
    case 763u: goto L_089A3684;
    case 764u: goto L_089A369C;
    case 765u: goto L_089A36A8;
    case 766u: goto L_089A36B0;
    case 767u: goto L_089A36C4;
    case 768u: goto L_089A36D4;
    case 769u: goto L_089A370C;
    case 770u: goto L_089A3718;
    case 771u: goto L_089A371C;
    case 772u: goto L_089A3728;
    case 773u: goto L_089A3730;
    case 774u: goto L_089A3760;
    case 775u: goto L_089A3770;
    case 776u: goto L_089A3778;
    case 777u: goto L_089A3784;
    case 778u: goto L_089A378C;
    case 779u: goto L_089A37A4;
    case 780u: goto L_089A37AC;
    case 781u: goto L_089A37C8;
    case 782u: goto L_089A37D8;
    case 783u: goto L_089A37F8;
    case 784u: goto L_089A3818;
    case 785u: goto L_089A3820;
    case 786u: goto L_089A382C;
    case 787u: goto L_089A3834;
    case 788u: goto L_089A3848;
    case 789u: goto L_089A3854;
    case 790u: goto L_089A385C;
    case 791u: goto L_089A3868;
    case 792u: goto L_089A3874;
    case 793u: goto L_089A3884;
    case 794u: goto L_089A3894;
    case 795u: goto L_089A38A4;
    case 796u: goto L_089A38B4;
    case 797u: goto L_089A38C0;
    case 798u: goto L_089A38E0;
    case 799u: goto L_089A3908;
    case 800u: goto L_089A3914;
    case 801u: goto L_089A391C;
    case 802u: goto L_089A3928;
    case 803u: goto L_089A3944;
    case 804u: goto L_089A3954;
    case 805u: goto L_089A395C;
    case 806u: goto L_089A396C;
    case 807u: goto L_089A3978;
    case 808u: goto L_089A3988;
    case 809u: goto L_089A3998;
    case 810u: goto L_089A39C8;
    case 811u: goto L_089A39D8;
    case 812u: goto L_089A39E0;
    case 813u: goto L_089A39E4;
    case 814u: goto L_089A3A18;
    case 815u: goto L_089A3A34;
    case 816u: goto L_089A3A40;
    case 817u: goto L_089A3A48;
    case 818u: goto L_089A3A4C;
    case 819u: goto L_089A3A60;
    case 820u: goto L_089A3A80;
    case 821u: goto L_089A3A88;
    case 822u: goto L_089A3A98;
    case 823u: goto L_089A3AB0;
    case 824u: goto L_089A3AC0;
    case 825u: goto L_089A3AD0;
    case 826u: goto L_089A3ADC;
    case 827u: goto L_089A3AE8;
    case 828u: goto L_089A3AF4;
    case 829u: goto L_089A3B00;
    case 830u: goto L_089A3B0C;
    case 831u: goto L_089A3B18;
    case 832u: goto L_089A3B24;
    case 833u: goto L_089A3B30;
    case 834u: goto L_089A3B3C;
    case 835u: goto L_089A3B48;
    case 836u: goto L_089A3B54;
    case 837u: goto L_089A3B60;
    case 838u: goto L_089A3B6C;
    case 839u: goto L_089A3B78;
    case 840u: goto L_089A3B84;
    case 841u: goto L_089A3B90;
    case 842u: goto L_089A3B9C;
    case 843u: goto L_089A3BA8;
    case 844u: goto L_089A3BB4;
    case 845u: goto L_089A3BC0;
    case 846u: goto L_089A3BCC;
    case 847u: goto L_089A3BD8;
    case 848u: goto L_089A3BE4;
    case 849u: goto L_089A3BF0;
    case 850u: goto L_089A3BFC;
    case 851u: goto L_089A3C08;
    case 852u: goto L_089A3C14;
    case 853u: goto L_089A3C20;
    case 854u: goto L_089A3C30;
    case 855u: goto L_089A3C3C;
    case 856u: goto L_089A3C48;
    case 857u: goto L_089A3C54;
    case 858u: goto L_089A3C60;
    case 859u: goto L_089A3C68;
    case 860u: goto L_089A3C74;
    case 861u: goto L_089A3C80;
    case 862u: goto L_089A3C8C;
    case 863u: goto L_089A3C98;
    case 864u: goto L_089A3CA4;
    case 865u: goto L_089A3CB0;
    case 866u: goto L_089A3CBC;
    case 867u: goto L_089A3CC8;
    case 868u: goto L_089A3CD4;
    case 869u: goto L_089A3CE0;
    case 870u: goto L_089A3CEC;
    case 871u: goto L_089A3CF8;
    case 872u: goto L_089A3D04;
    case 873u: goto L_089A3D10;
    case 874u: goto L_089A3D1C;
    case 875u: goto L_089A3D28;
    case 876u: goto L_089A3D34;
    case 877u: goto L_089A3D3C;
    case 878u: goto L_089A3D44;
    case 879u: goto L_089A3D54;
    case 880u: goto L_089A3D64;
    case 881u: goto L_089A3D74;
    case 882u: goto L_089A3D8C;
    case 883u: goto L_089A3DA0;
    case 884u: goto L_089A3DBC;
    case 885u: goto L_089A3DD0;
    case 886u: goto L_089A3DE8;
    case 887u: goto L_089A3E04;
    case 888u: goto L_089A3E1C;
    case 889u: goto L_089A3E30;
    case 890u: goto L_089A3E48;
    case 891u: goto L_089A3E60;
    case 892u: goto L_089A3E78;
    case 893u: goto L_089A3E90;
    case 894u: goto L_089A3EA8;
    case 895u: goto L_089A3EBC;
    case 896u: goto L_089A3ED8;
    case 897u: goto L_089A3EF0;
    case 898u: goto L_089A3F0C;
    case 899u: goto L_089A3F14;
    case 900u: goto L_089A3F18;
    case 901u: goto L_089A3F24;
    case 902u: goto L_089A3F2C;
    case 903u: goto L_089A3F30;
    case 904u: goto L_089A3F54;
    case 905u: goto L_089A3F70;
    case 906u: goto L_089A3F78;
    case 907u: goto L_089A3F7C;
    case 908u: goto L_089A3F88;
    case 909u: goto L_089A3F90;
    case 910u: goto L_089A3F94;
    case 911u: goto L_089A3FB8;
    case 912u: goto L_089A3FD4;
    case 913u: goto L_089A3FDC;
    case 914u: goto L_089A3FE0;
    case 915u: goto L_089A3FEC;
    case 916u: goto L_089A3FF4;
    case 917u: goto L_089A3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A0000:
    // nop
    goto L_089A0004;
L_089A0004:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089A0034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0060;
      }
      goto L_089A0048;
    }
L_089A0048:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A006C;
      }
      goto L_089A0060;
    }
L_089A0060:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0098;
      }
      goto L_089A006C;
    }
L_089A006C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0094;
      }
      goto L_089A007C;
    }
L_089A007C:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0098;
      }
      goto L_089A0094;
    }
L_089A0094:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A0098;
L_089A0098:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A00A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A00EC;
      }
      goto L_089A00D4;
    }
L_089A00D4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A00F8;
      }
      goto L_089A00EC;
    }
L_089A00EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A01B4;
      }
      goto L_089A00F8;
    }
L_089A00F8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0160;
      }
      goto L_089A0104;
    }
L_089A0104:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A015C;
      }
      goto L_089A011C;
    }
L_089A011C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A015C;
      }
      goto L_089A0128;
    }
L_089A0128:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0148;
      }
      goto L_089A0140;
    }
L_089A0140:
    ctx.set_gpr(31, 0x089A0148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0148u) goto L_089A0148;
    return;
L_089A0148:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089A015Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089A015Cu) goto L_089A015C;
    return;
L_089A015C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089A0160;
L_089A0160:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0104;
      }
      goto L_089A0174;
    }
L_089A0174:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A019C;
      }
      goto L_089A0194;
    }
L_089A0194:
    ctx.set_gpr(31, 0x089A019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A019Cu) goto L_089A019C;
    return;
L_089A019C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089A01B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089A01B0u) goto L_089A01B0;
    return;
L_089A01B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A01B4;
L_089A01B4:
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
L_089A01D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0228;
      }
      goto L_089A0204;
    }
L_089A0204:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0224;
      }
      goto L_089A021C;
    }
L_089A021C:
    ctx.set_gpr(31, 0x089A0224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0224u) goto L_089A0224;
    return;
L_089A0224:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089A0228;
L_089A0228:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0204;
      }
      goto L_089A0234;
    }
L_089A0234:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0258;
      }
      goto L_089A0244;
    }
L_089A0244:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089A0258;
L_089A0258:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0244;
      }
      goto L_089A0264;
    }
L_089A0264:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A02A0;
      }
      goto L_089A027C;
    }
L_089A027C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A029C;
      }
      goto L_089A0294;
    }
L_089A0294:
    ctx.set_gpr(31, 0x089A029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A029Cu) goto L_089A029C;
    return;
L_089A029C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089A02A0;
L_089A02A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A027C;
      }
      goto L_089A02AC;
    }
L_089A02AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A02D0;
      }
      goto L_089A02BC;
    }
L_089A02BC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089A02D0;
L_089A02D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A02BC;
      }
      goto L_089A02DC;
    }
L_089A02DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A02F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A02F4u) goto L_089A02F4;
    return;
L_089A02F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A0308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0308u) goto L_089A0308;
    return;
L_089A0308:
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
L_089A0328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089A0348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 704u, 0x0899F9A4u>(ctx, &aot_mem) && ctx.pc == 0x089A0348u) goto L_089A0348;
    return;
L_089A0348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A0468;
      }
      goto L_089A0358;
    }
L_089A0358:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0454;
      }
      goto L_089A0364;
    }
L_089A0364:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A038C;
      }
      goto L_089A0380;
    }
L_089A0380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089A038C;
L_089A038C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A03B0;
      }
      goto L_089A0398;
    }
L_089A0398:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0450;
      }
      goto L_089A03A0;
    }
L_089A03A0:
    ctx.set_gpr(31, 0x089A03A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A03A8u) goto L_089A03A8;
    return;
L_089A03A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0450;
      }
      goto L_089A03B0;
    }
L_089A03B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A0440;
      }
      goto L_089A03CC;
    }
L_089A03CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A03DC;
      }
      goto L_089A03D4;
    }
L_089A03D4:
    ctx.set_gpr(31, 0x089A03DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A03DCu) goto L_089A03DC;
    return;
L_089A03DC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0408;
      }
      goto L_089A03EC;
    }
L_089A03EC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0408;
      }
      goto L_089A0404;
    }
L_089A0404:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0408;
L_089A0408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0434;
      }
      goto L_089A0410;
    }
L_089A0410:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0434;
      }
      goto L_089A0428;
    }
L_089A0428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0434u) goto L_089A0434;
    return;
L_089A0434:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A04C4;
      }
      goto L_089A0440;
    }
L_089A0440:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0450;
      }
      goto L_089A0448;
    }
L_089A0448:
    ctx.set_gpr(31, 0x089A0450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0450u) goto L_089A0450;
    return;
L_089A0450:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089A0454;
L_089A0454:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0364;
      }
      goto L_089A0468;
    }
L_089A0468:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0494;
      }
      goto L_089A0478;
    }
L_089A0478:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0494;
      }
      goto L_089A0490;
    }
L_089A0490:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0494;
L_089A0494:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A04C0;
      }
      goto L_089A049C;
    }
L_089A049C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A04C0;
      }
      goto L_089A04B4;
    }
L_089A04B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A04C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A04C0u) goto L_089A04C0;
    return;
L_089A04C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A04C4;
L_089A04C4:
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
L_089A04DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089A04FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 704u, 0x0899F9A4u>(ctx, &aot_mem) && ctx.pc == 0x089A04FCu) goto L_089A04FC;
    return;
L_089A04FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A0624;
      }
      goto L_089A050C;
    }
L_089A050C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0610;
      }
      goto L_089A0518;
    }
L_089A0518:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0540;
      }
      goto L_089A0534;
    }
L_089A0534:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089A0540;
L_089A0540:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A05FC;
      }
      goto L_089A054C;
    }
L_089A054C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0568;
      }
      goto L_089A0560;
    }
L_089A0560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0570;
      }
      goto L_089A0568;
    }
L_089A0568:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_089A0570;
L_089A0570:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A05FC;
      }
      goto L_089A0584;
    }
L_089A0584:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0598;
      }
      goto L_089A0590;
    }
L_089A0590:
    ctx.set_gpr(31, 0x089A0598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0598u) goto L_089A0598;
    return;
L_089A0598:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A05C4;
      }
      goto L_089A05A8;
    }
L_089A05A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A05C4;
      }
      goto L_089A05C0;
    }
L_089A05C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A05C4;
L_089A05C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A05F0;
      }
      goto L_089A05CC;
    }
L_089A05CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A05F0;
      }
      goto L_089A05E4;
    }
L_089A05E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A05F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A05F0u) goto L_089A05F0;
    return;
L_089A05F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0740;
      }
      goto L_089A05FC;
    }
L_089A05FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A060C;
      }
      goto L_089A0604;
    }
L_089A0604:
    ctx.set_gpr(31, 0x089A060Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A060Cu) goto L_089A060C;
    return;
L_089A060C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089A0610;
L_089A0610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0518;
      }
      goto L_089A0624;
    }
L_089A0624:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A06D8;
      }
      goto L_089A0630;
    }
L_089A0630:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16752));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089A0658u) goto L_089A0658;
    return;
L_089A0658:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A06D4;
      }
      goto L_089A0660;
    }
L_089A0660:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16748));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A069C;
      }
      goto L_089A0680;
    }
L_089A0680:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A069C;
      }
      goto L_089A0698;
    }
L_089A0698:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A069C;
L_089A069C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A06C8;
      }
      goto L_089A06A4;
    }
L_089A06A4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A06C8;
      }
      goto L_089A06BC;
    }
L_089A06BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A06C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A06C8u) goto L_089A06C8;
    return;
L_089A06C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0740;
      }
      goto L_089A06D4;
    }
L_089A06D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089A06D8;
L_089A06D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0630;
      }
      goto L_089A06E4;
    }
L_089A06E4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0710;
      }
      goto L_089A06F4;
    }
L_089A06F4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0710;
      }
      goto L_089A070C;
    }
L_089A070C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0710;
L_089A0710:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A073C;
      }
      goto L_089A0718;
    }
L_089A0718:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A073C;
      }
      goto L_089A0730;
    }
L_089A0730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A073Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A073Cu) goto L_089A073C;
    return;
L_089A073C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A0740;
L_089A0740:
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
L_089A0758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0770:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A079C;
      }
      goto L_089A077C;
    }
L_089A077C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-188)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A07A0;
      }
      goto L_089A079C;
    }
L_089A079C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A07A0;
L_089A07A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A07A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089A07B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 568u, 0x08993180u>(ctx, &aot_mem) && ctx.pc == 0x089A07B8u) goto L_089A07B8;
    return;
L_089A07B8:
    ctx.set_gpr(31, 0x089A07C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089A07C0u) goto L_089A07C0;
    return;
L_089A07C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A07CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A07CCu) goto L_089A07CC;
    return;
L_089A07CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A07D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 552u, 0x08993058u>(ctx, &aot_mem) && ctx.pc == 0x089A07D8u) goto L_089A07D8;
    return;
L_089A07D8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30856));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A07ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A07ECu) goto L_089A07EC;
    return;
L_089A07EC:
    ctx.set_gpr(31, 0x089A07F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089A07F4u) goto L_089A07F4;
    return;
L_089A07F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16376));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089A080Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x089A080Cu) goto L_089A080C;
    return;
L_089A080C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32072)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16376));
    ctx.set_gpr(31, 0x089A0824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x089A0824u) goto L_089A0824;
    return;
L_089A0824:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30856));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A0850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A0850u) goto L_089A0850;
    return;
L_089A0850:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0884;
      }
      goto L_089A0860;
    }
L_089A0860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0884;
      }
      goto L_089A087C;
    }
L_089A087C:
    ctx.set_gpr(31, 0x089A0884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089A0884u) goto L_089A0884;
    return;
L_089A0884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08D8;
      }
      goto L_089A08BC;
    }
L_089A08BC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08D8;
      }
      goto L_089A08D4;
    }
L_089A08D4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_089A08D8;
L_089A08D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08EC;
      }
      goto L_089A08E0;
    }
L_089A08E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_089A08EC;
L_089A08EC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0918;
      }
      goto L_089A08FC;
    }
L_089A08FC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0918;
      }
      goto L_089A0914;
    }
L_089A0914:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0918;
L_089A0918:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0944;
      }
      goto L_089A0920;
    }
L_089A0920:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0944;
      }
      goto L_089A0938;
    }
L_089A0938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0944u) goto L_089A0944;
    return;
L_089A0944:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
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
L_089A0964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A0A2C;
      }
      goto L_089A0990;
    }
L_089A0990:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A20;
      }
      goto L_089A099C;
    }
L_089A099C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A20;
      }
      goto L_089A09A4;
    }
L_089A09A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A20;
      }
      goto L_089A09B0;
    }
L_089A09B0:
    ctx.set_gpr(31, 0x089A09B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A09B8u) goto L_089A09B8;
    return;
L_089A09B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A09C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A09C4u) goto L_089A09C4;
    return;
L_089A09C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A09E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A09E0u) goto L_089A09E0;
    return;
L_089A09E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A14;
      }
      goto L_089A09EC;
    }
L_089A09EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089A0A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A0A00u) goto L_089A0A00;
    return;
L_089A0A00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A20;
      }
      goto L_089A0A14;
    }
L_089A0A14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C90;
      }
      goto L_089A0A20;
    }
L_089A0A20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C90;
      }
      goto L_089A0A2C;
    }
L_089A0A2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0A84;
      }
      goto L_089A0A78;
    }
L_089A0A78:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0AD0;
      }
      goto L_089A0A84;
    }
L_089A0A84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0ABC;
      }
      goto L_089A0A94;
    }
L_089A0A94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089A0AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089A0AA0u) goto L_089A0AA0;
    return;
L_089A0AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0AB4;
      }
      goto L_089A0AA8;
    }
L_089A0AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089A0AB4u) goto L_089A0AB4;
    return;
L_089A0AB4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089A0ABC;
L_089A0ABC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A0AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089A0AD0u) goto L_089A0AD0;
    return;
L_089A0AD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089A0AE4u);
    // nop
    goto L_089A0894;
L_089A0AE4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B10;
      }
      goto L_089A0AF4;
    }
L_089A0AF4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B10;
      }
      goto L_089A0B0C;
    }
L_089A0B0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0B10;
L_089A0B10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B3C;
      }
      goto L_089A0B18;
    }
L_089A0B18:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B3C;
      }
      goto L_089A0B30;
    }
L_089A0B30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0B3Cu) goto L_089A0B3C;
    return;
L_089A0B3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0BA4;
      }
      goto L_089A0B90;
    }
L_089A0B90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0BA4;
      }
      goto L_089A0B9C;
    }
L_089A0B9C:
    ctx.set_gpr(31, 0x089A0BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A0BA4u) goto L_089A0BA4;
    return;
L_089A0BA4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0BC4;
      }
      goto L_089A0BB4;
    }
L_089A0BB4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A0BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A0BC4u) goto L_089A0BC4;
    return;
L_089A0BC4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C8C;
      }
      goto L_089A0BCC;
    }
L_089A0BCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C44;
      }
      goto L_089A0BD8;
    }
L_089A0BD8:
    ctx.set_gpr(31, 0x089A0BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0BE0u) goto L_089A0BE0;
    return;
L_089A0BE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A0BECu) goto L_089A0BEC;
    return;
L_089A0BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A0C08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0C08u) goto L_089A0C08;
    return;
L_089A0C08:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C38;
      }
      goto L_089A0C14;
    }
L_089A0C14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089A0C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A0C30u) goto L_089A0C30;
    return;
L_089A0C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C44;
      }
      goto L_089A0C38;
    }
L_089A0C38:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C90;
      }
      goto L_089A0C44;
    }
L_089A0C44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C8C;
      }
      goto L_089A0C50;
    }
L_089A0C50:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A0C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0C5Cu) goto L_089A0C5C;
    return;
L_089A0C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089A0C68u) goto L_089A0C68;
    return;
L_089A0C68:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0C78u) goto L_089A0C78;
    return;
L_089A0C78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A0C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 573u, 0x0899F05Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0C8Cu) goto L_089A0C8C;
    return;
L_089A0C8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089A0C90;
L_089A0C90:
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
L_089A0CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x089A0CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0CF8u) goto L_089A0CF8;
    return;
L_089A0CF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089A0D04u) goto L_089A0D04;
    return;
L_089A0D04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & 7u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0DF4;
      }
      goto L_089A0D48;
    }
L_089A0D48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A0D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0D54u) goto L_089A0D54;
    return;
L_089A0D54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089A0D60u) goto L_089A0D60;
    return;
L_089A0D60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0D70u) goto L_089A0D70;
    return;
L_089A0D70:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A0D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 581u, 0x089AF1DCu>(ctx, &aot_mem) && ctx.pc == 0x089A0D80u) goto L_089A0D80;
    return;
L_089A0D80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089A0D94u);
    // nop
    goto L_089A1BD8;
L_089A0D94:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0DD0;
      }
      goto L_089A0DA0;
    }
L_089A0DA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0DB4;
      }
      goto L_089A0DAC;
    }
L_089A0DAC:
    ctx.set_gpr(31, 0x089A0DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0DB4u) goto L_089A0DB4;
    return;
L_089A0DB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0DC8;
      }
      goto L_089A0DC0;
    }
L_089A0DC0:
    ctx.set_gpr(31, 0x089A0DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0DC8u) goto L_089A0DC8;
    return;
L_089A0DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1000;
      }
      goto L_089A0DD0;
    }
L_089A0DD0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A0DECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0DECu) goto L_089A0DEC;
    return;
L_089A0DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E10;
      }
      goto L_089A0DF4;
    }
L_089A0DF4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A0E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0E10u) goto L_089A0E10;
    return;
L_089A0E10:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E24;
      }
      goto L_089A0E20;
    }
L_089A0E20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_089A0E24;
L_089A0E24:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089A0E4Cu);
    // nop
    goto L_089A3AD0;
L_089A0E4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089A0E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0E6Cu) goto L_089A0E6C;
    return;
L_089A0E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A0E78u) goto L_089A0E78;
    return;
L_089A0E78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A0E94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0E94u) goto L_089A0E94;
    return;
L_089A0E94:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F30;
      }
      goto L_089A0F08;
    }
L_089A0F08:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A0F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A0F1Cu) goto L_089A0F1C;
    return;
L_089A0F1C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    goto L_089A0F30;
L_089A0F30:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F08;
      }
      goto L_089A0F3C;
    }
L_089A0F3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F84;
      }
      goto L_089A0F48;
    }
L_089A0F48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A0F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0F54u) goto L_089A0F54;
    return;
L_089A0F54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089A0F60u) goto L_089A0F60;
    return;
L_089A0F60:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A0F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0F70u) goto L_089A0F70;
    return;
L_089A0F70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A0F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 573u, 0x0899F05Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0F84u) goto L_089A0F84;
    return;
L_089A0F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] & 7u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0FD8;
      }
      goto L_089A0FC4;
    }
L_089A0FC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A0FD8u);
    // nop
    goto L_089A1BD8;
L_089A0FD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0FEC;
      }
      goto L_089A0FE4;
    }
L_089A0FE4:
    ctx.set_gpr(31, 0x089A0FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A0FECu) goto L_089A0FEC;
    return;
L_089A0FEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1000;
      }
      goto L_089A0FF8;
    }
L_089A0FF8:
    ctx.set_gpr(31, 0x089A1000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1000u) goto L_089A1000;
    return;
L_089A1000:
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
L_089A102C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A105C;
      }
      goto L_089A1058;
    }
L_089A1058:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089A105C;
L_089A105C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1064:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x089A1078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A1078u) goto L_089A1078;
    return;
L_089A1078:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1088:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089A10D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A10D4u) goto L_089A10D4;
    return;
L_089A10D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A10E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089A10E0u) goto L_089A10E0;
    return;
L_089A10E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A10F8;
      }
      goto L_089A10EC;
    }
L_089A10EC:
    ctx.set_gpr(18, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1114;
      }
      goto L_089A10F8;
    }
L_089A10F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1114u) goto L_089A1114;
    return;
L_089A1114:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A1174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A1174u) goto L_089A1174;
    return;
L_089A1174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A127C;
      }
      goto L_089A117C;
    }
L_089A117C:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089A1188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 581u, 0x089AF1DCu>(ctx, &aot_mem) && ctx.pc == 0x089A1188u) goto L_089A1188;
    return;
L_089A1188:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089A11ACu);
    // nop
    goto L_089A3AD0;
L_089A11AC:
    ctx.set_gpr(31, 0x089A11B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A11B4u) goto L_089A11B4;
    return;
L_089A11B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A11C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A11C0u) goto L_089A11C0;
    return;
L_089A11C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A11DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A11DCu) goto L_089A11DC;
    return;
L_089A11DC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1200u) goto L_089A1200;
    return;
L_089A1200:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1224u) goto L_089A1224;
    return;
L_089A1224:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089A1248u);
    // nop
    goto L_089A3AD0;
L_089A1248:
    ctx.set_gpr(31, 0x089A1250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1250u) goto L_089A1250;
    return;
L_089A1250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A125Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A125Cu) goto L_089A125C;
    return;
L_089A125C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1278u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1278u) goto L_089A1278;
    return;
L_089A1278:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    goto L_089A127C;
L_089A127C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A1294;
      }
      goto L_089A1284;
    }
L_089A1284:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A12AC;
      }
      goto L_089A1294;
    }
L_089A1294:
    ctx.set_gpr(3, ctx.gpr[17] >> 1u);
    ctx.set_gpr(2, ctx.gpr[17] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A12AC;
L_089A12AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A12D0;
      }
      goto L_089A12C0;
    }
L_089A12C0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A12E8;
      }
      goto L_089A12D0;
    }
L_089A12D0:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A12E8;
L_089A12E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089A131Cu);
    // nop
    goto L_089A3AD0;
L_089A131C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089A133Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A133Cu) goto L_089A133C;
    return;
L_089A133C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A1348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A1348u) goto L_089A1348;
    return;
L_089A1348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1364u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1364u) goto L_089A1364;
    return;
L_089A1364:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1480;
      }
      goto L_089A1378;
    }
L_089A1378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A138Cu);
    // nop
    goto L_089A102C;
L_089A138C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A13CC;
      }
      goto L_089A1398;
    }
L_089A1398:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A13C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A13C4u) goto L_089A13C4;
    return;
L_089A13C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A13E4;
      }
      goto L_089A13CC;
    }
L_089A13CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_089A13E4;
L_089A13E4:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1434;
      }
      goto L_089A13F0;
    }
L_089A13F0:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A1404u);
    // nop
    goto L_089A102C;
L_089A1404:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089A1430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A1430u) goto L_089A1430;
    return;
L_089A1430:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_089A1434;
L_089A1434:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A13F0;
      }
      goto L_089A1440;
    }
L_089A1440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1464;
      }
      goto L_089A144C;
    }
L_089A144C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A1464u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1464u) goto L_089A1464;
    return;
L_089A1464:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089A1480;
L_089A1480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1378;
      }
      goto L_089A1490;
    }
L_089A1490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A149Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A149Cu) goto L_089A149C;
    return;
L_089A149C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A14FC;
      }
      goto L_089A14A4;
    }
L_089A14A4:
    ctx.set_gpr(31, 0x089A14ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A14ACu) goto L_089A14AC;
    return;
L_089A14AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A14B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A14B8u) goto L_089A14B8;
    return;
L_089A14B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A14D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A14D0u) goto L_089A14D0;
    return;
L_089A14D0:
    ctx.set_gpr(31, 0x089A14D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A14D8u) goto L_089A14D8;
    return;
L_089A14D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A14E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A14E4u) goto L_089A14E4;
    return;
L_089A14E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A14FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A14FCu) goto L_089A14FC;
    return;
L_089A14FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A151C;
      }
      goto L_089A1508;
    }
L_089A1508:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A151C;
      }
      goto L_089A1514;
    }
L_089A1514:
    ctx.set_gpr(31, 0x089A151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A151Cu) goto L_089A151C;
    return;
L_089A151C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A1538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1538u) goto L_089A1538;
    return;
L_089A1538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15A8;
      }
      goto L_089A1540;
    }
L_089A1540:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A15A8;
      }
      goto L_089A1548;
    }
L_089A1548:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15A8;
      }
      goto L_089A1554;
    }
L_089A1554:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A1560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1560u) goto L_089A1560;
    return;
L_089A1560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A156Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089A156Cu) goto L_089A156C;
    return;
L_089A156C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A1584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 573u, 0x0899F05Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1584u) goto L_089A1584;
    return;
L_089A1584:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x089A1594u);
    // nop
    goto L_089A1064;
L_089A1594:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15A8;
      }
      goto L_089A15A0;
    }
L_089A15A0:
    ctx.set_gpr(31, 0x089A15A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A15A8u) goto L_089A15A8;
    return;
L_089A15A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15BC;
      }
      goto L_089A15B4;
    }
L_089A15B4:
    ctx.set_gpr(31, 0x089A15BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A15BCu) goto L_089A15BC;
    return;
L_089A15BC:
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
L_089A15F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1630;
      }
      goto L_089A1624;
    }
L_089A1624:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16B0;
      }
      goto L_089A1630;
    }
L_089A1630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1658u) goto L_089A1658;
    return;
L_089A1658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16AC;
      }
      goto L_089A1660;
    }
L_089A1660:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 1u << 16u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A16AC;
      }
      goto L_089A1674;
    }
L_089A1674:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A16AC;
      }
      goto L_089A1680;
    }
L_089A1680:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1698;
      }
      goto L_089A168C;
    }
L_089A168C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16AC;
      }
      goto L_089A1698;
    }
L_089A1698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A16AC;
      }
      goto L_089A16A8;
    }
L_089A16A8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089A16AC;
L_089A16AC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089A16B0;
L_089A16B0:
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
L_089A16CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089A16ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A16ECu) goto L_089A16EC;
    return;
L_089A16EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A16F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089A16F8u) goto L_089A16F8;
    return;
L_089A16F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1714;
      }
      goto L_089A1708;
    }
L_089A1708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089A1714;
L_089A1714:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089A1728u);
    // nop
    goto L_089A15F8;
L_089A1728:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1740;
      }
      goto L_089A1738;
    }
L_089A1738:
    ctx.set_gpr(31, 0x089A1740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1740u) goto L_089A1740;
    return;
L_089A1740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1754;
      }
      goto L_089A174C;
    }
L_089A174C:
    ctx.set_gpr(31, 0x089A1754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1754u) goto L_089A1754;
    return;
L_089A1754:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089A1770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A17A8;
      }
      goto L_089A17A4;
    }
L_089A17A4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_089A17A8;
L_089A17A8:
    ctx.set_gpr(31, 0x089A17B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A17B0u) goto L_089A17B0;
    return;
L_089A17B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A17BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A17BCu) goto L_089A17BC;
    return;
L_089A17BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A17C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 552u, 0x08993058u>(ctx, &aot_mem) && ctx.pc == 0x089A17C8u) goto L_089A17C8;
    return;
L_089A17C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A17DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 485u, 0x089A6210u>(ctx, &aot_mem) && ctx.pc == 0x089A17DCu) goto L_089A17DC;
    return;
L_089A17DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A17F4;
      }
      goto L_089A17E8;
    }
L_089A17E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089A17F4;
L_089A17F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A1804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 485u, 0x089A6210u>(ctx, &aot_mem) && ctx.pc == 0x089A1804u) goto L_089A1804;
    return;
L_089A1804:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A181C;
      }
      goto L_089A1810;
    }
L_089A1810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089A181C;
L_089A181C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B68;
      }
      goto L_089A1828;
    }
L_089A1828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B68;
      }
      goto L_089A1834;
    }
L_089A1834:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A1844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1844u) goto L_089A1844;
    return;
L_089A1844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A1850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089A1850u) goto L_089A1850;
    return;
L_089A1850:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1870u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1870u) goto L_089A1870;
    return;
L_089A1870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1898;
      }
      goto L_089A187C;
    }
L_089A187C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1898u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1898u) goto L_089A1898;
    return;
L_089A1898:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A18B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A18B4u) goto L_089A18B4;
    return;
L_089A18B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AE4;
      }
      goto L_089A18BC;
    }
L_089A18BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A18D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A18D0u) goto L_089A18D0;
    return;
L_089A18D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A194C;
      }
      goto L_089A18D8;
    }
L_089A18D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1934;
      }
      goto L_089A18E4;
    }
L_089A18E4:
    ctx.set_gpr(31, 0x089A18ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 230u, 0x0893CEBCu>(ctx, &aot_mem) && ctx.pc == 0x089A18ECu) goto L_089A18EC;
    return;
L_089A18EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A18F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A18F8u) goto L_089A18F8;
    return;
L_089A18F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A1904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089A1904u) goto L_089A1904;
    return;
L_089A1904:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A1914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1914u) goto L_089A1914;
    return;
L_089A1914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 573u, 0x0899F05Cu>(ctx, &aot_mem) && ctx.pc == 0x089A192Cu) goto L_089A192C;
    return;
L_089A192C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A195C;
      }
      goto L_089A1934;
    }
L_089A1934:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A1944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A1944u) goto L_089A1944;
    return;
L_089A1944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A195C;
      }
      goto L_089A194C;
    }
L_089A194C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A195Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A195Cu) goto L_089A195C;
    return;
L_089A195C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A1990;
      }
      goto L_089A196C;
    }
L_089A196C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1988u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1988u) goto L_089A1988;
    return;
L_089A1988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AE4;
      }
      goto L_089A1990;
    }
L_089A1990:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089A199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 494u, 0x089A62BCu>(ctx, &aot_mem) && ctx.pc == 0x089A199Cu) goto L_089A199C;
    return;
L_089A199C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A2C;
      }
      goto L_089A19A8;
    }
L_089A19A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A19B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A19B4u) goto L_089A19B4;
    return;
L_089A19B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A19C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089A19C0u) goto L_089A19C0;
    return;
L_089A19C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A19E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 507u, 0x089A639Cu>(ctx, &aot_mem) && ctx.pc == 0x089A19E0u) goto L_089A19E0;
    return;
L_089A19E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A19F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A19F0u) goto L_089A19F0;
    return;
L_089A19F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A1A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A1A00u) goto L_089A1A00;
    return;
L_089A1A00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A14;
      }
      goto L_089A1A0C;
    }
L_089A1A0C:
    ctx.set_gpr(31, 0x089A1A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1A14u) goto L_089A1A14;
    return;
L_089A1A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089A1A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 494u, 0x089A62BCu>(ctx, &aot_mem) && ctx.pc == 0x089A1A28u) goto L_089A1A28;
    return;
L_089A1A28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089A1A2C;
L_089A1A2C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A40;
      }
      goto L_089A1A34;
    }
L_089A1A34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A19A8;
      }
      goto L_089A1A40;
    }
L_089A1A40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A88;
      }
      goto L_089A1A48;
    }
L_089A1A48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1A5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1A5Cu) goto L_089A1A5C;
    return;
L_089A1A5C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1A88;
      }
      goto L_089A1A64;
    }
L_089A1A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A1A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 507u, 0x089A639Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1A80u) goto L_089A1A80;
    return;
L_089A1A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AE4;
      }
      goto L_089A1A88;
    }
L_089A1A88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A9C;
      }
      goto L_089A1A94;
    }
L_089A1A94:
    ctx.set_gpr(31, 0x089A1A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1A9Cu) goto L_089A1A9C;
    return;
L_089A1A9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AB0;
      }
      goto L_089A1AA8;
    }
L_089A1AA8:
    ctx.set_gpr(31, 0x089A1AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1AB0u) goto L_089A1AB0;
    return;
L_089A1AB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AC4;
      }
      goto L_089A1ABC;
    }
L_089A1ABC:
    ctx.set_gpr(31, 0x089A1AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1AC4u) goto L_089A1AC4;
    return;
L_089A1AC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AD8;
      }
      goto L_089A1AD0;
    }
L_089A1AD0:
    ctx.set_gpr(31, 0x089A1AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1AD8u) goto L_089A1AD8;
    return;
L_089A1AD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BA8;
      }
      goto L_089A1AE4;
    }
L_089A1AE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1B0C;
      }
      goto L_089A1AF0;
    }
L_089A1AF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1B0Cu) goto L_089A1B0C;
    return;
L_089A1B0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B20;
      }
      goto L_089A1B18;
    }
L_089A1B18:
    ctx.set_gpr(31, 0x089A1B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B20u) goto L_089A1B20;
    return;
L_089A1B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B34;
      }
      goto L_089A1B2C;
    }
L_089A1B2C:
    ctx.set_gpr(31, 0x089A1B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B34u) goto L_089A1B34;
    return;
L_089A1B34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B48;
      }
      goto L_089A1B40;
    }
L_089A1B40:
    ctx.set_gpr(31, 0x089A1B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B48u) goto L_089A1B48;
    return;
L_089A1B48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B5C;
      }
      goto L_089A1B54;
    }
L_089A1B54:
    ctx.set_gpr(31, 0x089A1B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B5Cu) goto L_089A1B5C;
    return;
L_089A1B5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BA8;
      }
      goto L_089A1B68;
    }
L_089A1B68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B7C;
      }
      goto L_089A1B74;
    }
L_089A1B74:
    ctx.set_gpr(31, 0x089A1B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B7Cu) goto L_089A1B7C;
    return;
L_089A1B7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B90;
      }
      goto L_089A1B88;
    }
L_089A1B88:
    ctx.set_gpr(31, 0x089A1B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1B90u) goto L_089A1B90;
    return;
L_089A1B90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BA4;
      }
      goto L_089A1B9C;
    }
L_089A1B9C:
    ctx.set_gpr(31, 0x089A1BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A1BA4u) goto L_089A1BA4;
    return;
L_089A1BA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A1BA8;
L_089A1BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089A1BCC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1BD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089A1C00u);
    // nop
    goto L_089A2744;
L_089A1C00:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A1C18u);
    // nop
    goto L_089A1770;
L_089A1C18:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
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
L_089A1C38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089A1C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 241u, 0x089A4F50u>(ctx, &aot_mem) && ctx.pc == 0x089A1C58u) goto L_089A1C58;
    return;
L_089A1C58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1CE8;
      }
      goto L_089A1C60;
    }
L_089A1C60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089A1C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 65u, 0x089A4404u>(ctx, &aot_mem) && ctx.pc == 0x089A1C88u) goto L_089A1C88;
    return;
L_089A1C88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089A1CE0u);
    // nop
    goto L_089A3AD0;
L_089A1CE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_089A1CE8;
L_089A1CE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1D20;
      }
      goto L_089A1D1C;
    }
L_089A1D1C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_089A1D20;
L_089A1D20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A1D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1D2Cu) goto L_089A1D2C;
    return;
L_089A1D2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1D58;
      }
      goto L_089A1D34;
    }
L_089A1D34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1D50u) goto L_089A1D50;
    return;
L_089A1D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1D74;
      }
      goto L_089A1D58;
    }
L_089A1D58:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1D74u) goto L_089A1D74;
    return;
L_089A1D74:
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
L_089A1D8C:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(31, 0x089A1DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1DCCu) goto L_089A1DCC;
    return;
L_089A1DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A1DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089A1DD8u) goto L_089A1DD8;
    return;
L_089A1DD8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DFC;
      }
      goto L_089A1DF8;
    }
L_089A1DF8:
    ctx.set_gpr(20, ctx.gpr[21] + 0u);
    goto L_089A1DFC;
L_089A1DFC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A1E2C;
      }
      goto L_089A1E04;
    }
L_089A1E04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1E20u) goto L_089A1E20;
    return;
L_089A1E20:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E30;
      }
      goto L_089A1E2C;
    }
L_089A1E2C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    goto L_089A1E30;
L_089A1E30:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A1E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A1E78u) goto L_089A1E78;
    return;
L_089A1E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1FB4;
      }
      goto L_089A1E80;
    }
L_089A1E80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x089A1E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 581u, 0x089AF1DCu>(ctx, &aot_mem) && ctx.pc == 0x089A1E8Cu) goto L_089A1E8C;
    return;
L_089A1E8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089A1EB0u);
    // nop
    goto L_089A3AD0;
L_089A1EB0:
    ctx.set_gpr(31, 0x089A1EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1EB8u) goto L_089A1EB8;
    return;
L_089A1EB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A1EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A1EC4u) goto L_089A1EC4;
    return;
L_089A1EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1EE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1EE0u) goto L_089A1EE0;
    return;
L_089A1EE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A1EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1EECu) goto L_089A1EEC;
    return;
L_089A1EEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A1EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A1EF8u) goto L_089A1EF8;
    return;
L_089A1EF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1F14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1F14u) goto L_089A1F14;
    return;
L_089A1F14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1F38u) goto L_089A1F38;
    return;
L_089A1F38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1F5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1F5Cu) goto L_089A1F5C;
    return;
L_089A1F5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[23] >> 1u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089A1F80u);
    // nop
    goto L_089A3AD0;
L_089A1F80:
    ctx.set_gpr(31, 0x089A1F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1F88u) goto L_089A1F88;
    return;
L_089A1F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A1F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A1F94u) goto L_089A1F94;
    return;
L_089A1F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A1FB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A1FB0u) goto L_089A1FB0;
    return;
L_089A1FB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089A1FB4;
L_089A1FB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A2028;
      }
      goto L_089A1FC0;
    }
L_089A1FC0:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A2028;
      }
      goto L_089A1FC8;
    }
L_089A1FC8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A1FD0;
    }
L_089A1FD0:
    ctx.set_gpr(31, 0x089A1FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1FD8u) goto L_089A1FD8;
    return;
L_089A1FD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A1FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A1FE4u) goto L_089A1FE4;
    return;
L_089A1FE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2000u) goto L_089A2000;
    return;
L_089A2000:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089A2020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A2020u) goto L_089A2020;
    return;
L_089A2020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A2028;
    }
L_089A2028:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A2200;
      }
      goto L_089A2034;
    }
L_089A2034:
    ctx.set_gpr(1, ctx.gpr[23] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2200;
      }
      goto L_089A2040;
    }
L_089A2040:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[23] >> 1u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089A2068u);
    // nop
    goto L_089A3AD0;
L_089A2068:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A20C4;
      }
      goto L_089A2088;
    }
L_089A2088:
    ctx.set_gpr(31, 0x089A2090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2090u) goto L_089A2090;
    return;
L_089A2090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A209Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A209Cu) goto L_089A209C;
    return;
L_089A209C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A20B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A20B8u) goto L_089A20B8;
    return;
L_089A20B8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A20C4;
L_089A20C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A21E4;
      }
      goto L_089A20D4;
    }
L_089A20D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2120;
      }
      goto L_089A20E0;
    }
L_089A20E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A20F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A20F8u) goto L_089A20F8;
    return;
L_089A20F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A2118u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2118u) goto L_089A2118;
    return;
L_089A2118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2134;
      }
      goto L_089A2120;
    }
L_089A2120:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089A2134;
L_089A2134:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A218C;
      }
      goto L_089A2140;
    }
L_089A2140:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2178;
      }
      goto L_089A214C;
    }
L_089A214C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2188;
      }
      goto L_089A2178;
    }
L_089A2178:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089A2188;
L_089A2188:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089A218C;
L_089A218C:
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2140;
      }
      goto L_089A2198;
    }
L_089A2198:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A21BC;
      }
      goto L_089A21A4;
    }
L_089A21A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A21BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A21BCu) goto L_089A21BC;
    return;
L_089A21BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    goto L_089A21E4;
L_089A21E4:
    ctx.set_gpr(3, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A20D4;
      }
      goto L_089A21F8;
    }
L_089A21F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A2200;
    }
L_089A2200:
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A23B0;
      }
      goto L_089A220C;
    }
L_089A220C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A23B0;
      }
      goto L_089A2218;
    }
L_089A2218:
    ctx.set_gpr(2, ctx.gpr[16] >> 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089A2248u);
    // nop
    goto L_089A3AD0;
L_089A2248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A22A4;
      }
      goto L_089A2268;
    }
L_089A2268:
    ctx.set_gpr(31, 0x089A2270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2270u) goto L_089A2270;
    return;
L_089A2270:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A227Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A227Cu) goto L_089A227C;
    return;
L_089A227C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2298u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2298u) goto L_089A2298;
    return;
L_089A2298:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A22A4;
L_089A22A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A22D0;
      }
      goto L_089A22B0;
    }
L_089A22B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A22C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A22C8u) goto L_089A22C8;
    return;
L_089A22C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A22D8;
      }
      goto L_089A22D0;
    }
L_089A22D0:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + 0u);
    goto L_089A22D8;
L_089A22D8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2374;
      }
      goto L_089A22E8;
    }
L_089A22E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2360;
      }
      goto L_089A2310;
    }
L_089A2310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2348;
      }
      goto L_089A231C;
    }
L_089A231C:
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] >> 1u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A235C;
      }
      goto L_089A2348;
    }
L_089A2348:
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089A235C;
L_089A235C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089A2360;
L_089A2360:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2310;
      }
      goto L_089A236C;
    }
L_089A236C:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[30]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_089A2374;
L_089A2374:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A22E8;
      }
      goto L_089A2384;
    }
L_089A2384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A2390;
    }
L_089A2390:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A23A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A23A8u) goto L_089A23A8;
    return;
L_089A23A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A23B0;
    }
L_089A23B0:
    ctx.set_gpr(2, ctx.gpr[16] >> 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[23] >> 1u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089A23E0u);
    // nop
    goto L_089A3AD0;
L_089A23E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A243C;
      }
      goto L_089A2400;
    }
L_089A2400:
    ctx.set_gpr(31, 0x089A2408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2408u) goto L_089A2408;
    return;
L_089A2408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2414u) goto L_089A2414;
    return;
L_089A2414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2430u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2430u) goto L_089A2430;
    return;
L_089A2430:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A243C;
L_089A243C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25C8;
      }
      goto L_089A244C;
    }
L_089A244C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2498;
      }
      goto L_089A2458;
    }
L_089A2458:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A2470u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2470u) goto L_089A2470;
    return;
L_089A2470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A2490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2490u) goto L_089A2490;
    return;
L_089A2490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A24AC;
      }
      goto L_089A2498;
    }
L_089A2498:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089A24AC;
L_089A24AC:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A256C;
      }
      goto L_089A24BC;
    }
L_089A24BC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2558;
      }
      goto L_089A24F0;
    }
L_089A24F0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2540;
      }
      goto L_089A24FC;
    }
L_089A24FC:
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[9] >> 2u);
    ctx.set_gpr(9, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2554;
      }
      goto L_089A2540;
    }
L_089A2540:
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_089A2554;
L_089A2554:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089A2558;
L_089A2558:
    ctx.set_gpr(9, ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A24F0;
      }
      goto L_089A2564;
    }
L_089A2564:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[30]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_089A256C;
L_089A256C:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A24BC;
      }
      goto L_089A257C;
    }
L_089A257C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25A0;
      }
      goto L_089A2588;
    }
L_089A2588:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A25A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A25A0u) goto L_089A25A0;
    return;
L_089A25A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    goto L_089A25C8;
L_089A25C8:
    ctx.set_gpr(3, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A244C;
      }
      goto L_089A25DC;
    }
L_089A25DC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A25ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A25ECu) goto L_089A25EC;
    return;
L_089A25EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2678;
      }
      goto L_089A25F4;
    }
L_089A25F4:
    ctx.set_gpr(31, 0x089A25FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A25FCu) goto L_089A25FC;
    return;
L_089A25FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2608u) goto L_089A2608;
    return;
L_089A2608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2620u) goto L_089A2620;
    return;
L_089A2620:
    ctx.set_gpr(31, 0x089A2628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2628u) goto L_089A2628;
    return;
L_089A2628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2634u) goto L_089A2634;
    return;
L_089A2634:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A264Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A264Cu) goto L_089A264C;
    return;
L_089A264C:
    ctx.set_gpr(31, 0x089A2654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2654u) goto L_089A2654;
    return;
L_089A2654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2660u) goto L_089A2660;
    return;
L_089A2660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2678u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2678u) goto L_089A2678;
    return;
L_089A2678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A268C;
      }
      goto L_089A2684;
    }
L_089A2684:
    ctx.set_gpr(31, 0x089A268Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A268Cu) goto L_089A268C;
    return;
L_089A268C:
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
L_089A26C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2700;
      }
      goto L_089A26EC;
    }
L_089A26EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2700;
      }
      goto L_089A26F8;
    }
L_089A26F8:
    ctx.set_gpr(31, 0x089A2700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A2700u) goto L_089A2700;
    return;
L_089A2700:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A2714u);
    // nop
    goto L_089A2750;
L_089A2714:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
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
L_089A2734:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(104));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(104));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A2770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 241u, 0x089A4F50u>(ctx, &aot_mem) && ctx.pc == 0x089A2770u) goto L_089A2770;
    return;
L_089A2770:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A28A0;
      }
      goto L_089A2778;
    }
L_089A2778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089A27A8;
      }
      goto L_089A2784;
    }
L_089A2784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A27A8;
      }
      goto L_089A2790;
    }
L_089A2790:
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A27A8;
      }
      goto L_089A279C;
    }
L_089A279C:
    ctx.set_gpr(31, 0x089A27A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 151u, 0x089A49ECu>(ctx, &aot_mem) && ctx.pc == 0x089A27A4u) goto L_089A27A4;
    return;
L_089A27A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089A27A8;
L_089A27A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27B8;
    }
L_089A27B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27C4;
    }
L_089A27C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27D0;
    }
L_089A27D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27DC;
    }
L_089A27DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27E8;
    }
L_089A27E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A27FC;
      }
      goto L_089A27F4;
    }
L_089A27F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2804;
      }
      goto L_089A27FC;
    }
L_089A27FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A2804;
L_089A2804:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089A2828u);
    // nop
    goto L_089A3AD0;
L_089A2828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089A2860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 65u, 0x089A4404u>(ctx, &aot_mem) && ctx.pc == 0x089A2860u) goto L_089A2860;
    return;
L_089A2860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_089A28A0;
L_089A28A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A28B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A28EC;
      }
      goto L_089A28D4;
    }
L_089A28D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A28EC;
      }
      goto L_089A28E0;
    }
L_089A28E0:
    ctx.set_gpr(31, 0x089A28E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A28E8u) goto L_089A28E8;
    return;
L_089A28E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_089A28EC;
L_089A28EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A28F8u);
    // nop
    goto L_089A2750;
L_089A28F8:
    ctx.set_gpr(31, 0x089A2900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2900u) goto L_089A2900;
    return;
L_089A2900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A290Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A290Cu) goto L_089A290C;
    return;
L_089A290C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2928u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2928u) goto L_089A2928;
    return;
L_089A2928:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2948:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089A29B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A29B4u) goto L_089A29B4;
    return;
L_089A29B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A29C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30856)));
    ctx.set_gpr(31, 0x089A29E8u);
    // nop
    goto L_089A2744;
L_089A29E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A29FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 509u, 0x089A63D4u>(ctx, &aot_mem) && ctx.pc == 0x089A29FCu) goto L_089A29FC;
    return;
L_089A29FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_089A2A18:
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
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089A2A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 611u, 0x089AF338u>(ctx, &aot_mem) && ctx.pc == 0x089A2A58u) goto L_089A2A58;
    return;
L_089A2A58:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16364));
    ctx.set_gpr(31, 0x089A2A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089A2A70u) goto L_089A2A70;
    return;
L_089A2A70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2ADC;
      }
      goto L_089A2A78;
    }
L_089A2A78:
    ctx.set_gpr(31, 0x089A2A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2A80u) goto L_089A2A80;
    return;
L_089A2A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2A8Cu) goto L_089A2A8C;
    return;
L_089A2A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A2A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 382u, 0x0899A320u>(ctx, &aot_mem) && ctx.pc == 0x089A2A98u) goto L_089A2A98;
    return;
L_089A2A98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2ABCu) goto L_089A2ABC;
    return;
L_089A2ABC:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B54;
      }
      goto L_089A2ACC;
    }
L_089A2ACC:
    ctx.set_gpr(31, 0x089A2AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A2AD4u) goto L_089A2AD4;
    return;
L_089A2AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B54;
      }
      goto L_089A2ADC;
    }
L_089A2ADC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16360));
    ctx.set_gpr(31, 0x089A2AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089A2AF0u) goto L_089A2AF0;
    return;
L_089A2AF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B54;
      }
      goto L_089A2AF8;
    }
L_089A2AF8:
    ctx.set_gpr(31, 0x089A2B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2B00u) goto L_089A2B00;
    return;
L_089A2B00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2B0Cu) goto L_089A2B0C;
    return;
L_089A2B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A2B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 317u, 0x08999D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2B18u) goto L_089A2B18;
    return;
L_089A2B18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2B3Cu) goto L_089A2B3C;
    return;
L_089A2B3C:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B54;
      }
      goto L_089A2B4C;
    }
L_089A2B4C:
    ctx.set_gpr(31, 0x089A2B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A2B54u) goto L_089A2B54;
    return;
L_089A2B54:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_089A2B7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2BB4;
      }
      goto L_089A2BA0;
    }
L_089A2BA0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2BB4;
      }
      goto L_089A2BAC;
    }
L_089A2BAC:
    ctx.set_gpr(31, 0x089A2BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A2BB4u) goto L_089A2BB4;
    return;
L_089A2BB4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2BE8;
      }
      goto L_089A2BDC;
    }
L_089A2BDC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C34;
      }
      goto L_089A2BE8;
    }
L_089A2BE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C20;
      }
      goto L_089A2BF8;
    }
L_089A2BF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089A2C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089A2C04u) goto L_089A2C04;
    return;
L_089A2C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C18;
      }
      goto L_089A2C0C;
    }
L_089A2C0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A2C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089A2C18u) goto L_089A2C18;
    return;
L_089A2C18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089A2C20;
L_089A2C20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A2C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089A2C34u) goto L_089A2C34;
    return;
L_089A2C34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089A2C48u);
    // nop
    goto L_089A0894;
L_089A2C48:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C74;
      }
      goto L_089A2C58;
    }
L_089A2C58:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C74;
      }
      goto L_089A2C70;
    }
L_089A2C70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A2C74;
L_089A2C74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C7C;
    }
L_089A2C7C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C94;
    }
L_089A2C94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2CA0u) goto L_089A2CA0;
    return;
L_089A2CA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A2CB0u);
    // nop
    goto L_089A2E1C;
L_089A2CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2CC4;
      }
      goto L_089A2CB8;
    }
L_089A2CB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D38;
      }
      goto L_089A2CC4;
    }
L_089A2CC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2CDCu) goto L_089A2CDC;
    return;
L_089A2CDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D34;
      }
      goto L_089A2CE4;
    }
L_089A2CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089A2D28;
      }
      goto L_089A2CF0;
    }
L_089A2CF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089A2CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 151u, 0x089A49ECu>(ctx, &aot_mem) && ctx.pc == 0x089A2CFCu) goto L_089A2CFC;
    return;
L_089A2CFC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(10, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089A2D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 65u, 0x089A4404u>(ctx, &aot_mem) && ctx.pc == 0x089A2D28u) goto L_089A2D28;
    return;
L_089A2D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D38;
      }
      goto L_089A2D34;
    }
L_089A2D34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A2D38;
L_089A2D38:
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
L_089A2D50:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2D5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30852)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2DA8;
      }
      goto L_089A2D74;
    }
L_089A2D74:
    ctx.set_gpr(31, 0x089A2D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2D7Cu) goto L_089A2D7C;
    return;
L_089A2D7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2D88u) goto L_089A2D88;
    return;
L_089A2D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A2D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 82u, 0x088EC730u>(ctx, &aot_mem) && ctx.pc == 0x089A2D94u) goto L_089A2D94;
    return;
L_089A2D94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30852), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x089A2DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 270u, 0x08995874u>(ctx, &aot_mem) && ctx.pc == 0x089A2DA8u) goto L_089A2DA8;
    return;
L_089A2DA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089A2DD8u);
    // nop
    goto L_089A2D5C;
L_089A2DD8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30852)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A2DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 830u, 0x0894BC10u>(ctx, &aot_mem) && ctx.pc == 0x089A2DECu) goto L_089A2DEC;
    return;
L_089A2DEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30852)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A2E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 774u, 0x0894B850u>(ctx, &aot_mem) && ctx.pc == 0x089A2E04u) goto L_089A2E04;
    return;
L_089A2E04:
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
L_089A2E1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089A2E44u);
    // nop
    goto L_089A2D5C;
L_089A2E44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A2E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 611u, 0x089AF338u>(ctx, &aot_mem) && ctx.pc == 0x089A2E50u) goto L_089A2E50;
    return;
L_089A2E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2EF4;
      }
      goto L_089A2E58;
    }
L_089A2E58:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30852)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A2E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x089A2E6Cu) goto L_089A2E6C;
    return;
L_089A2E6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2EF4;
      }
      goto L_089A2E78;
    }
L_089A2E78:
    ctx.set_gpr(31, 0x089A2E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2E80u) goto L_089A2E80;
    return;
L_089A2E80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A2E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A2E8Cu) goto L_089A2E8C;
    return;
L_089A2E8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A2E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089A2E9Cu) goto L_089A2E9C;
    return;
L_089A2E9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2EBCu) goto L_089A2EBC;
    return;
L_089A2EBC:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2EE8;
      }
      goto L_089A2EDC;
    }
L_089A2EDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A2EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089A2EE8u) goto L_089A2EE8;
    return;
L_089A2EE8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2EF8;
      }
      goto L_089A2EF4;
    }
L_089A2EF4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A2EF8;
L_089A2EF8:
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
L_089A2F18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30848)));
    ctx.set_gpr(31, 0x089A2F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089A2F30u) goto L_089A2F30;
    return;
L_089A2F30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2F40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30848)));
    ctx.set_gpr(31, 0x089A2F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A2F58u) goto L_089A2F58;
    return;
L_089A2F58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089A2F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 156u, 0x08820A80u>(ctx, &aot_mem) && ctx.pc == 0x089A2F88u) goto L_089A2F88;
    return;
L_089A2F88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A2FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2FA8u) goto L_089A2FA8;
    return;
L_089A2FA8:
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
L_089A2FC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2FC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2FD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2FD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A30B4;
      }
      goto L_089A2FE4;
    }
L_089A2FE4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A309C;
      }
      goto L_089A2FF0;
    }
L_089A2FF0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3088;
      }
      goto L_089A2FF8;
    }
L_089A2FF8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A3074;
      }
      goto L_089A3008;
    }
L_089A3008:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3060;
      }
      goto L_089A3010;
    }
L_089A3010:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3048;
      }
      goto L_089A301C;
    }
L_089A301C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3030;
      }
      goto L_089A3028;
    }
L_089A3028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30CC;
      }
      goto L_089A3030;
    }
L_089A3030:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A3048;
    }
L_089A3048:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A3060;
    }
L_089A3060:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A3074;
    }
L_089A3074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A3088;
    }
L_089A3088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A309C;
    }
L_089A309C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A30B4;
    }
L_089A30B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A30D8;
      }
      goto L_089A30CC;
    }
L_089A30CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089A30D8;
L_089A30D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A30E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A312C;
      }
      goto L_089A3120;
    }
L_089A3120:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089A312Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A312Cu) goto L_089A312C;
    return;
L_089A312C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3144;
      }
      goto L_089A3134;
    }
L_089A3134:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A3144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A3144u) goto L_089A3144;
    return;
L_089A3144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3190;
      }
      goto L_089A3150;
    }
L_089A3150:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3174;
      }
      goto L_089A3158;
    }
L_089A3158:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089A316Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 624u, 0x088227E4u>(ctx, &aot_mem) && ctx.pc == 0x089A316Cu) goto L_089A316C;
    return;
L_089A316C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3190;
      }
      goto L_089A3174;
    }
L_089A3174:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089A3180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 65u, 0x08820460u>(ctx, &aot_mem) && ctx.pc == 0x089A3180u) goto L_089A3180;
    return;
L_089A3180:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089A3190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 66u, 0x08830524u>(ctx, &aot_mem) && ctx.pc == 0x089A3190u) goto L_089A3190;
    return;
L_089A3190:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A31AC;
      }
      goto L_089A319C;
    }
L_089A319C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A31ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A31ACu) goto L_089A31AC;
    return;
L_089A31AC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089A31D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
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
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3210;
      }
      goto L_089A320C;
    }
L_089A320C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    goto L_089A3210;
L_089A3210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A321Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 241u, 0x089A4F50u>(ctx, &aot_mem) && ctx.pc == 0x089A321Cu) goto L_089A321C;
    return;
L_089A321C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3258;
      }
      goto L_089A3224;
    }
L_089A3224:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A3250u);
    // nop
    goto L_089A30E4;
L_089A3250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3258;
    }
L_089A3258:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A3284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A3284u) goto L_089A3284;
    return;
L_089A3284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A338C;
      }
      goto L_089A328C;
    }
L_089A328C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A338C;
      }
      goto L_089A3298;
    }
L_089A3298:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A32A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A32A4u) goto L_089A32A4;
    return;
L_089A32A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A32B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089A32B0u) goto L_089A32B0;
    return;
L_089A32B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A32C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 581u, 0x089AF1DCu>(ctx, &aot_mem) && ctx.pc == 0x089A32C0u) goto L_089A32C0;
    return;
L_089A32C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A32E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A32E4u) goto L_089A32E4;
    return;
L_089A32E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3340;
      }
      goto L_089A32F0;
    }
L_089A32F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A331Cu);
    // nop
    goto L_089A30E4;
L_089A331C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3334;
      }
      goto L_089A332C;
    }
L_089A332C:
    ctx.set_gpr(31, 0x089A3334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A3334u) goto L_089A3334;
    return;
L_089A3334:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3340;
    }
L_089A3340:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089A3360u);
    // nop
    goto L_089A3AD0;
L_089A3360:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089A3374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3374u) goto L_089A3374;
    return;
L_089A3374:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A338C;
      }
      goto L_089A3384;
    }
L_089A3384:
    ctx.set_gpr(31, 0x089A338Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A338Cu) goto L_089A338C;
    return;
L_089A338C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x089A33A4u);
    // nop
    goto L_089A2FD8;
L_089A33A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089A33E4;
      }
      goto L_089A33B0;
    }
L_089A33B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A33DCu);
    // nop
    goto L_089A30E4;
L_089A33DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A33E4;
    }
L_089A33E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089A33F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089A33F0u) goto L_089A33F0;
    return;
L_089A33F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A33FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x089A33FCu) goto L_089A33FC;
    return;
L_089A33FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17852));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A3420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A3420u) goto L_089A3420;
    return;
L_089A3420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3478;
      }
      goto L_089A3428;
    }
L_089A3428:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A3454u);
    // nop
    goto L_089A30E4;
L_089A3454:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A346C;
      }
      goto L_089A3464;
    }
L_089A3464:
    ctx.set_gpr(31, 0x089A346Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A346Cu) goto L_089A346C;
    return;
L_089A346C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3478;
    }
L_089A3478:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30848), ctx.gpr[21]);
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16356));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12232));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12240));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 2202u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12056));
    ctx.set_gpr(10, 2202u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(12096));
    ctx.set_gpr(31, 0x089A34B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 15u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x089A34B8u) goto L_089A34B8;
    return;
L_089A34B8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3518;
      }
      goto L_089A34C4;
    }
L_089A34C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A34F4u);
    // nop
    goto L_089A30E4;
L_089A34F4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A350C;
      }
      goto L_089A3504;
    }
L_089A3504:
    ctx.set_gpr(31, 0x089A350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A350Cu) goto L_089A350C;
    return;
L_089A350C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3518;
    }
L_089A3518:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A3524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 58u, 0x088203FCu>(ctx, &aot_mem) && ctx.pc == 0x089A3524u) goto L_089A3524;
    return;
L_089A3524:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3584;
      }
      goto L_089A3530;
    }
L_089A3530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A3560u);
    // nop
    goto L_089A30E4;
L_089A3560:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3578;
      }
      goto L_089A3570;
    }
L_089A3570:
    ctx.set_gpr(31, 0x089A3578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A3578u) goto L_089A3578;
    return;
L_089A3578:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3584;
    }
L_089A3584:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A3590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 58u, 0x088203FCu>(ctx, &aot_mem) && ctx.pc == 0x089A3590u) goto L_089A3590;
    return;
L_089A3590:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A35F0;
      }
      goto L_089A359C;
    }
L_089A359C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A35CCu);
    // nop
    goto L_089A30E4;
L_089A35CC:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A35E4;
      }
      goto L_089A35DC;
    }
L_089A35DC:
    ctx.set_gpr(31, 0x089A35E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A35E4u) goto L_089A35E4;
    return;
L_089A35E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A35F0;
    }
L_089A35F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12136));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12224));
    ctx.set_gpr(31, 0x089A3610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 764u, 0x0882F6DCu>(ctx, &aot_mem) && ctx.pc == 0x089A3610u) goto L_089A3610;
    return;
L_089A3610:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A363Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 495u, 0x0882E2B8u>(ctx, &aot_mem) && ctx.pc == 0x089A363Cu) goto L_089A363C;
    return;
L_089A363C:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A3650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3650u) goto L_089A3650;
    return;
L_089A3650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A37C8;
      }
      goto L_089A3658;
    }
L_089A3658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A3684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089A3684u) goto L_089A3684;
    return;
L_089A3684:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A369Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089A369Cu) goto L_089A369C;
    return;
L_089A369C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A36B0;
      }
      goto L_089A36A8;
    }
L_089A36A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3730;
      }
      goto L_089A36B0;
    }
L_089A36B0:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A36C4u);
    // nop
    goto L_089A2F18;
L_089A36C4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A371C;
      }
      goto L_089A36D4;
    }
L_089A36D4:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3718;
      }
      goto L_089A370C;
    }
L_089A370C:
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089A3718;
L_089A3718:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089A371C;
L_089A371C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A36D4;
      }
      goto L_089A3728;
    }
L_089A3728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3784;
      }
      goto L_089A3730;
    }
L_089A3730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A3760u);
    // nop
    goto L_089A30E4;
L_089A3760:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3778;
      }
      goto L_089A3770;
    }
L_089A3770:
    ctx.set_gpr(31, 0x089A3778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A3778u) goto L_089A3778;
    return;
L_089A3778:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E4;
      }
      goto L_089A3784;
    }
L_089A3784:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A37A4;
      }
      goto L_089A378C;
    }
L_089A378C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A37A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 543u, 0x0882E654u>(ctx, &aot_mem) && ctx.pc == 0x089A37A4u) goto L_089A37A4;
    return;
L_089A37A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A37C8;
      }
      goto L_089A37AC;
    }
L_089A37AC:
    ctx.set_gpr(7, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089A37C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882EC24u>(ctx, &aot_mem) && ctx.pc == 0x089A37C8u) goto L_089A37C8;
    return;
L_089A37C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3848;
      }
      goto L_089A37D8;
    }
L_089A37D8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3818;
      }
      goto L_089A37F8;
    }
L_089A37F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3820;
      }
      goto L_089A3818;
    }
L_089A3818:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A3820;
L_089A3820:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3834;
      }
      goto L_089A382C;
    }
L_089A382C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089A3834;
L_089A3834:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089A3848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 548u, 0x0882E688u>(ctx, &aot_mem) && ctx.pc == 0x089A3848u) goto L_089A3848;
    return;
L_089A3848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A3854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A3854u) goto L_089A3854;
    return;
L_089A3854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3874;
      }
      goto L_089A385C;
    }
L_089A385C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3874;
      }
      goto L_089A3868;
    }
L_089A3868:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A3874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 657u, 0x0882EFECu>(ctx, &aot_mem) && ctx.pc == 0x089A3874u) goto L_089A3874;
    return;
L_089A3874:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A3884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 808u, 0x0882FA74u>(ctx, &aot_mem) && ctx.pc == 0x089A3884u) goto L_089A3884;
    return;
L_089A3884:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089A3894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A3894u) goto L_089A3894;
    return;
L_089A3894:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089A38A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A38A4u) goto L_089A38A4;
    return;
L_089A38A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A38C0;
      }
      goto L_089A38B4;
    }
L_089A38B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A38C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 653u, 0x0882EFACu>(ctx, &aot_mem) && ctx.pc == 0x089A38C0u) goto L_089A38C0;
    return;
L_089A38C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089A38E0u);
    // nop
    goto L_089A3AD0;
L_089A38E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3978;
      }
      goto L_089A3908;
    }
L_089A3908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A3914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089A3914u) goto L_089A3914;
    return;
L_089A3914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A395C;
      }
      goto L_089A391C;
    }
L_089A391C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A395C;
      }
      goto L_089A3928;
    }
L_089A3928:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A3944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A3944u) goto L_089A3944;
    return;
L_089A3944:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089A3954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x089A3954u) goto L_089A3954;
    return;
L_089A3954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A396C;
      }
      goto L_089A395C;
    }
L_089A395C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A396Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x089A396Cu) goto L_089A396C;
    return;
L_089A396C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    goto L_089A3978;
L_089A3978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3908;
      }
      goto L_089A3988;
    }
L_089A3988:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A3998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 867u, 0x0882FEA4u>(ctx, &aot_mem) && ctx.pc == 0x089A3998u) goto L_089A3998;
    return;
L_089A3998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089A39C8u);
    // nop
    goto L_089A30E4;
L_089A39C8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39E0;
      }
      goto L_089A39D8;
    }
L_089A39D8:
    ctx.set_gpr(31, 0x089A39E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A39E0u) goto L_089A39E0;
    return;
L_089A39E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089A39E4;
L_089A39E4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A4C;
      }
      goto L_089A3A34;
    }
L_089A3A34:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A4C;
      }
      goto L_089A3A40;
    }
L_089A3A40:
    ctx.set_gpr(31, 0x089A3A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A3A48u) goto L_089A3A48;
    return;
L_089A3A48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_089A3A4C;
L_089A3A4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A88;
      }
      goto L_089A3A80;
    }
L_089A3A80:
    ctx.set_gpr(31, 0x089A3A88u);
    // nop
    goto L_089A3A18;
L_089A3A88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A3A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x089A3A98u) goto L_089A3A98;
    return;
L_089A3A98:
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
L_089A3AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089A3AC0u);
    // nop
    goto L_089A3A18;
L_089A3AC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3AD0:
    ctx.set_gpr(2, 0u | 32768u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3AE8;
      }
      goto L_089A3ADC;
    }
L_089A3ADC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 64u, 0x089A43FCu>(ctx, &aot_mem); return;
      }
      goto L_089A3AE8;
    }
L_089A3AE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 61u, 0x089A43C8u>(ctx, &aot_mem); return;
      }
      goto L_089A3AF4;
    }
L_089A3AF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 60u, 0x089A43B0u>(ctx, &aot_mem); return;
      }
      goto L_089A3B00;
    }
L_089A3B00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 59u, 0x089A4398u>(ctx, &aot_mem); return;
      }
      goto L_089A3B0C;
    }
L_089A3B0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(38));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 58u, 0x089A4380u>(ctx, &aot_mem); return;
      }
      goto L_089A3B18;
    }
L_089A3B18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 57u, 0x089A4368u>(ctx, &aot_mem); return;
      }
      goto L_089A3B24;
    }
L_089A3B24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4350u>(ctx, &aot_mem); return;
      }
      goto L_089A3B30;
    }
L_089A3B30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(33));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 55u, 0x089A4338u>(ctx, &aot_mem); return;
      }
      goto L_089A3B3C;
    }
L_089A3B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 54u, 0x089A4320u>(ctx, &aot_mem); return;
      }
      goto L_089A3B48;
    }
L_089A3B48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 53u, 0x089A4308u>(ctx, &aot_mem); return;
      }
      goto L_089A3B54;
    }
L_089A3B54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 52u, 0x089A42F0u>(ctx, &aot_mem); return;
      }
      goto L_089A3B60;
    }
L_089A3B60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(29));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 51u, 0x089A42D8u>(ctx, &aot_mem); return;
      }
      goto L_089A3B6C;
    }
L_089A3B6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 44u, 0x089A4274u>(ctx, &aot_mem); return;
      }
      goto L_089A3B78;
    }
L_089A3B78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 44u, 0x089A4274u>(ctx, &aot_mem); return;
      }
      goto L_089A3B84;
    }
L_089A3B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 44u, 0x089A4274u>(ctx, &aot_mem); return;
      }
      goto L_089A3B90;
    }
L_089A3B90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 37u, 0x089A4210u>(ctx, &aot_mem); return;
      }
      goto L_089A3B9C;
    }
L_089A3B9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 37u, 0x089A4210u>(ctx, &aot_mem); return;
      }
      goto L_089A3BA8;
    }
L_089A3BA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 37u, 0x089A4210u>(ctx, &aot_mem); return;
      }
      goto L_089A3BB4;
    }
L_089A3BB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 30u, 0x089A41ACu>(ctx, &aot_mem); return;
      }
      goto L_089A3BC0;
    }
L_089A3BC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 23u, 0x089A4148u>(ctx, &aot_mem); return;
      }
      goto L_089A3BCC;
    }
L_089A3BCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 16u, 0x089A40E4u>(ctx, &aot_mem); return;
      }
      goto L_089A3BD8;
    }
L_089A3BD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 9u, 0x089A4080u>(ctx, &aot_mem); return;
      }
      goto L_089A3BE4;
    }
L_089A3BE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 2u, 0x089A401Cu>(ctx, &aot_mem); return;
      }
      goto L_089A3BF0;
    }
L_089A3BF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3FB8;
      }
      goto L_089A3BFC;
    }
L_089A3BFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3F54;
      }
      goto L_089A3C08;
    }
L_089A3C08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EF0;
      }
      goto L_089A3C14;
    }
L_089A3C14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EF0;
      }
      goto L_089A3C20;
    }
L_089A3C20:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3ED8;
      }
      goto L_089A3C30;
    }
L_089A3C30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EBC;
      }
      goto L_089A3C3C;
    }
L_089A3C3C:
    ctx.set_gpr(2, ctx.gpr[3] | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EBC;
      }
      goto L_089A3C48;
    }
L_089A3C48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EBC;
      }
      goto L_089A3C54;
    }
L_089A3C54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EA8;
      }
      goto L_089A3C60;
    }
L_089A3C60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A3EA8;
      }
      goto L_089A3C68;
    }
L_089A3C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3EA8;
      }
      goto L_089A3C74;
    }
L_089A3C74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E90;
      }
      goto L_089A3C80;
    }
L_089A3C80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E78;
      }
      goto L_089A3C8C;
    }
L_089A3C8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E60;
      }
      goto L_089A3C98;
    }
L_089A3C98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E48;
      }
      goto L_089A3CA4;
    }
L_089A3CA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E30;
      }
      goto L_089A3CB0;
    }
L_089A3CB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E30;
      }
      goto L_089A3CBC;
    }
L_089A3CBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E1C;
      }
      goto L_089A3CC8;
    }
L_089A3CC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E04;
      }
      goto L_089A3CD4;
    }
L_089A3CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3DE8;
      }
      goto L_089A3CE0;
    }
L_089A3CE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3DD0;
      }
      goto L_089A3CEC;
    }
L_089A3CEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3DBC;
      }
      goto L_089A3CF8;
    }
L_089A3CF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3DA0;
      }
      goto L_089A3D04;
    }
L_089A3D04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3D8C;
      }
      goto L_089A3D10;
    }
L_089A3D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3D1C;
    }
L_089A3D1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3D64;
      }
      goto L_089A3D28;
    }
L_089A3D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3D54;
      }
      goto L_089A3D34;
    }
L_089A3D34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D44;
      }
      goto L_089A3D3C;
    }
L_089A3D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 62u, 0x089A43E0u>(ctx, &aot_mem); return;
      }
      goto L_089A3D44;
    }
L_089A3D44:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3D54;
    }
L_089A3D54:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3D64;
    }
L_089A3D64:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3D74;
    }
L_089A3D74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3D8C;
    }
L_089A3D8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3DA0;
    }
L_089A3DA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3DBC;
    }
L_089A3DBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3DD0;
    }
L_089A3DD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3DE8;
    }
L_089A3DE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E04;
    }
L_089A3E04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E1C;
    }
L_089A3E1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E30;
    }
L_089A3E30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E48;
    }
L_089A3E48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E60;
    }
L_089A3E60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E78;
    }
L_089A3E78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3E90;
    }
L_089A3E90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3EA8;
    }
L_089A3EA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3EBC;
    }
L_089A3EBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] >> 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3ED8;
    }
L_089A3ED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A43ECu>(ctx, &aot_mem); return;
      }
      goto L_089A3EF0;
    }
L_089A3EF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F14;
      }
      goto L_089A3F0C;
    }
L_089A3F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F18;
      }
      goto L_089A3F14;
    }
L_089A3F14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A3F18;
L_089A3F18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F2C;
      }
      goto L_089A3F24;
    }
L_089A3F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F30;
      }
      goto L_089A3F2C;
    }
L_089A3F2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A3F30;
L_089A3F30:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 64u, 0x089A43FCu>(ctx, &aot_mem); return;
      }
      goto L_089A3F54;
    }
L_089A3F54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F78;
      }
      goto L_089A3F70;
    }
L_089A3F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F7C;
      }
      goto L_089A3F78;
    }
L_089A3F78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A3F7C;
L_089A3F7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F90;
      }
      goto L_089A3F88;
    }
L_089A3F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F94;
      }
      goto L_089A3F90;
    }
L_089A3F90:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A3F94;
L_089A3F94:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 64u, 0x089A43FCu>(ctx, &aot_mem); return;
      }
      goto L_089A3FB8;
    }
L_089A3FB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 3u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FDC;
      }
      goto L_089A3FD4;
    }
L_089A3FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FE0;
      }
      goto L_089A3FDC;
    }
L_089A3FDC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089A3FE0;
L_089A3FE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FF4;
      }
      goto L_089A3FEC;
    }
L_089A3FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FF8;
      }
      goto L_089A3FF4;
    }
L_089A3FF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A3FF8;
L_089A3FF8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.pc = 0x089A4000u; return;
}

void recomp_unit_0103(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0103_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_103(Runtime &runtime) {
    runtime.register_generated_unit(103u, 0x089A0000u, 16384u, &recomp_unit_0103, &recomp_unit_0103_entry);
    runtime.register_function(0x089A0000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0004u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0034u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0048u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0060u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A006Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A007Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0094u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0098u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0104u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A011Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0128u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0140u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0148u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A015Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0160u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0174u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0194u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A019Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0204u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A021Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0224u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0228u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0234u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0244u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0258u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0264u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A027Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0294u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A029Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0308u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0328u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0358u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0364u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0380u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A038Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0398u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0404u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0408u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0410u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0428u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0434u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0448u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0450u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0468u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0478u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0490u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0494u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A049Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A050Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0518u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0534u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0540u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A054Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0568u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0570u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0590u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0598u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0604u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A060Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0610u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0624u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0630u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0658u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0680u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0698u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A069Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A070Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0718u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0730u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A073Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0740u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0758u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0764u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0770u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A077Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A079Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A080Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0824u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0850u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0860u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A087Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0884u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0894u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0914u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0918u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0920u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0938u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0944u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0964u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0990u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A099Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0ABCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A102Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1058u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A105Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1064u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1078u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1174u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A117Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1188u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1200u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1224u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1248u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1250u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A125Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1278u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A127Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1284u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1294u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A131Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A133Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1364u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1378u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A138Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1398u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1404u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1430u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1434u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A144Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1464u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1480u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1490u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A149Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1508u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1514u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A151Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1538u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1540u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1548u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1554u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A156Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1594u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1624u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1630u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1658u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1674u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1680u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A168Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1698u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1708u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1714u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1738u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1740u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A174Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1754u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1770u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1810u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A181Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1844u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1850u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A187Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1898u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1904u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1914u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A192Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1934u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1944u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A194Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A195Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A196Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1988u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1990u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A199Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1ABCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2020u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2028u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2034u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2040u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2068u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2090u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A209Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2118u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2140u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A214Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2178u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2188u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A218Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2198u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2200u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A220Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2218u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2248u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2268u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2270u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A227Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2298u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2310u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A231Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A235Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2360u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A236Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2374u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2384u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2390u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2400u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2408u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2414u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2430u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A243Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A244Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2458u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2470u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2490u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2498u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2540u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2554u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2558u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2564u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A256Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A257Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2588u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2608u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2620u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2628u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2634u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A264Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2654u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2678u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A268Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2700u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2714u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2734u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2744u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2750u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2770u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2778u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2784u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2790u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A279Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2860u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2900u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A290Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2948u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ABCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ACCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3008u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3010u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A301Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3028u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3030u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3048u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3060u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3074u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A309Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A312Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3144u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3150u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3158u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A316Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3174u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3180u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3190u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A319Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A320Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3210u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A321Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3224u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3250u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3258u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3284u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A328Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3298u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A331Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A332Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3334u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3340u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3360u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3374u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3384u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A338Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3420u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3428u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3464u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A346Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3478u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3504u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A350Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3518u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3524u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3530u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3570u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3578u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3590u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A359Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3610u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A363Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3650u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3658u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A369Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A370Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3718u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A371Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3730u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3760u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3770u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3778u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3784u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A378Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3818u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3820u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A382Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3848u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3854u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A385Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3868u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3874u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3884u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3894u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3908u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3914u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A391Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3944u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3954u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A395Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A396Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3978u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3988u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3998u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FF8u, &recomp_unit_0103, "recomp_unit_0103");
}
} // namespace psprecomp
