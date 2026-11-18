#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0072[4094] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 26, 0, 0, 27, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0,
    0, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 54, 0, 55, 0, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 89, 0, 0, 90, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0,
    98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 107, 0,
    108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 149, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 157,
    0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 189, 0, 190, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 232, 0,
    0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 244, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 271, 0, 272, 0, 0, 0, 0, 0, 273,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    282, 0, 283, 0, 284, 0, 0, 0, 285, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 317, 318, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0,
    0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393,
    0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 413, 0,
    0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425,
    0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435,
    0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0,
    447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 458,
    0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0,
    0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479,
    0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0,
    0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0,
    0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 504,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 511, 0, 0, 0, 0,
    0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 518, 0, 0, 519,
    0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 524, 0, 0, 525, 0, 526, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0,
    530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 536, 0, 0, 0,
    0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 542, 0, 0, 0, 543,
    0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0,
    0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 555, 556, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0,
    0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0,
    0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 595, 0, 0, 596, 0, 0, 597, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0,
    0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0,
    609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 624, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0,
    0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0,
    0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0,
    649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0,
    0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0,
    0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0,
    672, 0, 673, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 679, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 684, 0, 0, 685,
    0, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 697,
    0, 0, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 704, 0, 0, 705, 706, 0,
    707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 713, 0, 0, 714, 0, 0, 0, 0, 0, 715,
    0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0,
    721, 0, 0, 0, 722, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 729, 730, 0, 0, 0, 731,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0,
    0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0,
    0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0,
    0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 766, 767, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772,
    0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0,
    779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0,
    786, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0,
    0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0,
    0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0,
    814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0,
    0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 829, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0,
    0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 836, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 841, 0, 842, 843, 0,
    0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0,
    0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 852, 853, 0, 0, 0, 854, 855, 0, 0, 0, 0,
    0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 0,
    0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 865, 0, 866, 867,
    0, 0, 0, 868, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 871, 0, 872, 873, 0, 0, 0, 0, 874, 0, 0, 0, 875, 876, 0, 0, 0, 877,
    878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880,
    0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0,
    0, 890, 891, 0, 892, 0, 0, 893, 0, 0, 0, 894, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08924004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0072[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08924004;
    case 2u: goto L_08924020;
    case 3u: goto L_0892405C;
    case 4u: goto L_08924068;
    case 5u: goto L_08924074;
    case 6u: goto L_08924094;
    case 7u: goto L_0892409C;
    case 8u: goto L_089240C8;
    case 9u: goto L_089240E0;
    case 10u: goto L_089240EC;
    case 11u: goto L_089240F8;
    case 12u: goto L_08924108;
    case 13u: goto L_08924114;
    case 14u: goto L_08924120;
    case 15u: goto L_08924130;
    case 16u: goto L_08924148;
    case 17u: goto L_08924154;
    case 18u: goto L_0892416C;
    case 19u: goto L_08924178;
    case 20u: goto L_08924184;
    case 21u: goto L_08924198;
    case 22u: goto L_089241BC;
    case 23u: goto L_089241D4;
    case 24u: goto L_089241DC;
    case 25u: goto L_089241E8;
    case 26u: goto L_089241EC;
    case 27u: goto L_089241F8;
    case 28u: goto L_08924200;
    case 29u: goto L_0892420C;
    case 30u: goto L_08924220;
    case 31u: goto L_08924230;
    case 32u: goto L_08924238;
    case 33u: goto L_08924244;
    case 34u: goto L_08924254;
    case 35u: goto L_08924260;
    case 36u: goto L_08924268;
    case 37u: goto L_08924274;
    case 38u: goto L_0892427C;
    case 39u: goto L_08924290;
    case 40u: goto L_089242AC;
    case 41u: goto L_089242C8;
    case 42u: goto L_089242D4;
    case 43u: goto L_089242DC;
    case 44u: goto L_089242E4;
    case 45u: goto L_089242F0;
    case 46u: goto L_089242FC;
    case 47u: goto L_0892430C;
    case 48u: goto L_08924318;
    case 49u: goto L_08924320;
    case 50u: goto L_08924328;
    case 51u: goto L_08924338;
    case 52u: goto L_08924350;
    case 53u: goto L_08924368;
    case 54u: goto L_0892436C;
    case 55u: goto L_08924374;
    case 56u: goto L_0892438C;
    case 57u: goto L_08924398;
    case 58u: goto L_089243B4;
    case 59u: goto L_089243C4;
    case 60u: goto L_089243CC;
    case 61u: goto L_08924400;
    case 62u: goto L_08924408;
    case 63u: goto L_0892441C;
    case 64u: goto L_08924428;
    case 65u: goto L_08924438;
    case 66u: goto L_08924440;
    case 67u: goto L_08924460;
    case 68u: goto L_08924470;
    case 69u: goto L_08924480;
    case 70u: goto L_08924494;
    case 71u: goto L_089244E0;
    case 72u: goto L_089244EC;
    case 73u: goto L_089244F8;
    case 74u: goto L_08924504;
    case 75u: goto L_08924520;
    case 76u: goto L_0892453C;
    case 77u: goto L_08924548;
    case 78u: goto L_0892456C;
    case 79u: goto L_08924578;
    case 80u: goto L_08924584;
    case 81u: goto L_08924594;
    case 82u: goto L_089245B0;
    case 83u: goto L_089245C4;
    case 84u: goto L_089245D4;
    case 85u: goto L_089245E0;
    case 86u: goto L_089245E8;
    case 87u: goto L_089245F8;
    case 88u: goto L_08924604;
    case 89u: goto L_08924610;
    case 90u: goto L_0892461C;
    case 91u: goto L_08924620;
    case 92u: goto L_0892462C;
    case 93u: goto L_08924638;
    case 94u: goto L_0892464C;
    case 95u: goto L_08924658;
    case 96u: goto L_08924660;
    case 97u: goto L_08924678;
    case 98u: goto L_08924684;
    case 99u: goto L_08924690;
    case 100u: goto L_089246A4;
    case 101u: goto L_089246C4;
    case 102u: goto L_089246CC;
    case 103u: goto L_089246D8;
    case 104u: goto L_089246E0;
    case 105u: goto L_089246EC;
    case 106u: goto L_089246F0;
    case 107u: goto L_089246FC;
    case 108u: goto L_08924704;
    case 109u: goto L_08924718;
    case 110u: goto L_08924730;
    case 111u: goto L_08924744;
    case 112u: goto L_08924758;
    case 113u: goto L_0892477C;
    case 114u: goto L_0892478C;
    case 115u: goto L_0892479C;
    case 116u: goto L_089247A4;
    case 117u: goto L_089247B0;
    case 118u: goto L_089247B8;
    case 119u: goto L_089247BC;
    case 120u: goto L_089247EC;
    case 121u: goto L_08924834;
    case 122u: goto L_08924840;
    case 123u: goto L_0892484C;
    case 124u: goto L_0892485C;
    case 125u: goto L_0892487C;
    case 126u: goto L_08924884;
    case 127u: goto L_08924894;
    case 128u: goto L_089248AC;
    case 129u: goto L_089248B0;
    case 130u: goto L_089248BC;
    case 131u: goto L_089248C8;
    case 132u: goto L_089248D8;
    case 133u: goto L_089248F0;
    case 134u: goto L_08924904;
    case 135u: goto L_08924910;
    case 136u: goto L_0892491C;
    case 137u: goto L_0892493C;
    case 138u: goto L_08924944;
    case 139u: goto L_08924978;
    case 140u: goto L_08924994;
    case 141u: goto L_08924998;
    case 142u: goto L_089249A4;
    case 143u: goto L_089249AC;
    case 144u: goto L_089249BC;
    case 145u: goto L_089249C8;
    case 146u: goto L_089249E8;
    case 147u: goto L_089249F0;
    case 148u: goto L_08924A00;
    case 149u: goto L_08924A18;
    case 150u: goto L_08924A1C;
    case 151u: goto L_08924A28;
    case 152u: goto L_08924A30;
    case 153u: goto L_08924A3C;
    case 154u: goto L_08924A5C;
    case 155u: goto L_08924A64;
    case 156u: goto L_08924A74;
    case 157u: goto L_08924A80;
    case 158u: goto L_08924A8C;
    case 159u: goto L_08924AA4;
    case 160u: goto L_08924AB0;
    case 161u: goto L_08924AB8;
    case 162u: goto L_08924ABC;
    case 163u: goto L_08924AC8;
    case 164u: goto L_08924AE0;
    case 165u: goto L_08924B0C;
    case 166u: goto L_08924B1C;
    case 167u: goto L_08924B34;
    case 168u: goto L_08924B4C;
    case 169u: goto L_08924B70;
    case 170u: goto L_08924B80;
    case 171u: goto L_08924B98;
    case 172u: goto L_08924BB0;
    case 173u: goto L_08924BB4;
    case 174u: goto L_08924BDC;
    case 175u: goto L_08924BFC;
    case 176u: goto L_08924C1C;
    case 177u: goto L_08924C2C;
    case 178u: goto L_08924C3C;
    case 179u: goto L_08924C54;
    case 180u: goto L_08924C58;
    case 181u: goto L_08924C68;
    case 182u: goto L_08924C78;
    case 183u: goto L_08924C84;
    case 184u: goto L_08924CA4;
    case 185u: goto L_08924CB4;
    case 186u: goto L_08924CC4;
    case 187u: goto L_08924CDC;
    case 188u: goto L_08924CE0;
    case 189u: goto L_08924CF0;
    case 190u: goto L_08924CF8;
    case 191u: goto L_08924D04;
    case 192u: goto L_08924D24;
    case 193u: goto L_08924D34;
    case 194u: goto L_08924D44;
    case 195u: goto L_08924D5C;
    case 196u: goto L_08924D60;
    case 197u: goto L_08924D70;
    case 198u: goto L_08924D8C;
    case 199u: goto L_08924DA0;
    case 200u: goto L_08924DA8;
    case 201u: goto L_08924DB8;
    case 202u: goto L_08924DD8;
    case 203u: goto L_08924DF4;
    case 204u: goto L_08924DFC;
    case 205u: goto L_08924E08;
    case 206u: goto L_08924E24;
    case 207u: goto L_08924E2C;
    case 208u: goto L_08924E3C;
    case 209u: goto L_08924E4C;
    case 210u: goto L_08924E5C;
    case 211u: goto L_08924E6C;
    case 212u: goto L_08924E8C;
    case 213u: goto L_08924EA0;
    case 214u: goto L_08924EAC;
    case 215u: goto L_08924EC4;
    case 216u: goto L_08924ED8;
    case 217u: goto L_08924EE4;
    case 218u: goto L_08924EFC;
    case 219u: goto L_08924F00;
    case 220u: goto L_08924F10;
    case 221u: goto L_08924F28;
    case 222u: goto L_08924F50;
    case 223u: goto L_08924F60;
    case 224u: goto L_08924F90;
    case 225u: goto L_08924F94;
    case 226u: goto L_08924FA0;
    case 227u: goto L_08924FB0;
    case 228u: goto L_08924FC0;
    case 229u: goto L_08924FCC;
    case 230u: goto L_08924FE0;
    case 231u: goto L_08924FF8;
    case 232u: goto L_08924FFC;
    case 233u: goto L_08925008;
    case 234u: goto L_08925014;
    case 235u: goto L_08925034;
    case 236u: goto L_08925050;
    case 237u: goto L_0892507C;
    case 238u: goto L_08925088;
    case 239u: goto L_08925094;
    case 240u: goto L_089250A0;
    case 241u: goto L_089250C4;
    case 242u: goto L_089250D4;
    case 243u: goto L_089250E4;
    case 244u: goto L_089250E8;
    case 245u: goto L_089250FC;
    case 246u: goto L_0892512C;
    case 247u: goto L_0892514C;
    case 248u: goto L_08925158;
    case 249u: goto L_08925164;
    case 250u: goto L_08925170;
    case 251u: goto L_0892518C;
    case 252u: goto L_089251A8;
    case 253u: goto L_089251C4;
    case 254u: goto L_089251E8;
    case 255u: goto L_089251F4;
    case 256u: goto L_08925200;
    case 257u: goto L_08925210;
    case 258u: goto L_0892522C;
    case 259u: goto L_08925240;
    case 260u: goto L_08925248;
    case 261u: goto L_0892524C;
    case 262u: goto L_08925258;
    case 263u: goto L_08925274;
    case 264u: goto L_08925280;
    case 265u: goto L_08925288;
    case 266u: goto L_08925294;
    case 267u: goto L_0892529C;
    case 268u: goto L_089252B0;
    case 269u: goto L_089252C4;
    case 270u: goto L_089252DC;
    case 271u: goto L_089252E0;
    case 272u: goto L_089252E8;
    case 273u: goto L_08925300;
    case 274u: goto L_0892530C;
    case 275u: goto L_08925328;
    case 276u: goto L_08925334;
    case 277u: goto L_0892533C;
    case 278u: goto L_08925348;
    case 279u: goto L_08925350;
    case 280u: goto L_08925364;
    case 281u: goto L_08925378;
    case 282u: goto L_08925384;
    case 283u: goto L_0892538C;
    case 284u: goto L_08925394;
    case 285u: goto L_089253A4;
    case 286u: goto L_089253A8;
    case 287u: goto L_089253B4;
    case 288u: goto L_089253C4;
    case 289u: goto L_089253D4;
    case 290u: goto L_089253E8;
    case 291u: goto L_089253F4;
    case 292u: goto L_08925400;
    case 293u: goto L_08925418;
    case 294u: goto L_08925428;
    case 295u: goto L_08925444;
    case 296u: goto L_08925450;
    case 297u: goto L_08925458;
    case 298u: goto L_08925464;
    case 299u: goto L_0892546C;
    case 300u: goto L_08925480;
    case 301u: goto L_08925494;
    case 302u: goto L_089254A0;
    case 303u: goto L_089254A8;
    case 304u: goto L_089254B0;
    case 305u: goto L_089254C0;
    case 306u: goto L_089254D4;
    case 307u: goto L_089254E0;
    case 308u: goto L_089254E8;
    case 309u: goto L_089254F4;
    case 310u: goto L_089254FC;
    case 311u: goto L_08925510;
    case 312u: goto L_08925524;
    case 313u: goto L_0892553C;
    case 314u: goto L_08925540;
    case 315u: goto L_08925548;
    case 316u: goto L_08925560;
    case 317u: goto L_0892556C;
    case 318u: goto L_08925570;
    case 319u: goto L_08925574;
    case 320u: goto L_0892559C;
    case 321u: goto L_089255E4;
    case 322u: goto L_089255F0;
    case 323u: goto L_089255FC;
    case 324u: goto L_08925608;
    case 325u: goto L_08925624;
    case 326u: goto L_08925630;
    case 327u: goto L_08925648;
    case 328u: goto L_08925654;
    case 329u: goto L_08925660;
    case 330u: goto L_08925684;
    case 331u: goto L_08925690;
    case 332u: goto L_0892569C;
    case 333u: goto L_089256B4;
    case 334u: goto L_089256C0;
    case 335u: goto L_089256CC;
    case 336u: goto L_089256D8;
    case 337u: goto L_089256E4;
    case 338u: goto L_089256F0;
    case 339u: goto L_08925700;
    case 340u: goto L_08925710;
    case 341u: goto L_0892571C;
    case 342u: goto L_0892572C;
    case 343u: goto L_08925738;
    case 344u: goto L_08925748;
    case 345u: goto L_0892574C;
    case 346u: goto L_08925764;
    case 347u: goto L_08925778;
    case 348u: goto L_0892578C;
    case 349u: goto L_089257A8;
    case 350u: goto L_089257B4;
    case 351u: goto L_089257C8;
    case 352u: goto L_089257D0;
    case 353u: goto L_089257E8;
    case 354u: goto L_089257FC;
    case 355u: goto L_08925810;
    case 356u: goto L_08925824;
    case 357u: goto L_08925830;
    case 358u: goto L_0892583C;
    case 359u: goto L_08925854;
    case 360u: goto L_08925858;
    case 361u: goto L_08925884;
    case 362u: goto L_0892589C;
    case 363u: goto L_089258AC;
    case 364u: goto L_089258BC;
    case 365u: goto L_089258D4;
    case 366u: goto L_08925910;
    case 367u: goto L_08925920;
    case 368u: goto L_08925938;
    case 369u: goto L_0892593C;
    case 370u: goto L_08925948;
    case 371u: goto L_08925950;
    case 372u: goto L_08925958;
    case 373u: goto L_0892597C;
    case 374u: goto L_0892599C;
    case 375u: goto L_089259AC;
    case 376u: goto L_089259C4;
    case 377u: goto L_089259C8;
    case 378u: goto L_089259D8;
    case 379u: goto L_089259F4;
    case 380u: goto L_08925A2C;
    case 381u: goto L_08925A38;
    case 382u: goto L_08925A74;
    case 383u: goto L_08925A7C;
    case 384u: goto L_08925A8C;
    case 385u: goto L_08925A98;
    case 386u: goto L_08925AA8;
    case 387u: goto L_08925ABC;
    case 388u: goto L_08925AC8;
    case 389u: goto L_08925AD4;
    case 390u: goto L_08925ADC;
    case 391u: goto L_08925AE8;
    case 392u: goto L_08925AF4;
    case 393u: goto L_08925B00;
    case 394u: goto L_08925B08;
    case 395u: goto L_08925B18;
    case 396u: goto L_08925B24;
    case 397u: goto L_08925B30;
    case 398u: goto L_08925B3C;
    case 399u: goto L_08925B44;
    case 400u: goto L_08925B54;
    case 401u: goto L_08925B60;
    case 402u: goto L_08925B84;
    case 403u: goto L_08925B90;
    case 404u: goto L_08925B98;
    case 405u: goto L_08925BA4;
    case 406u: goto L_08925BB0;
    case 407u: goto L_08925BBC;
    case 408u: goto L_08925BC8;
    case 409u: goto L_08925BD0;
    case 410u: goto L_08925BDC;
    case 411u: goto L_08925BE8;
    case 412u: goto L_08925BF4;
    case 413u: goto L_08925BFC;
    case 414u: goto L_08925C08;
    case 415u: goto L_08925C14;
    case 416u: goto L_08925C20;
    case 417u: goto L_08925C28;
    case 418u: goto L_08925C34;
    case 419u: goto L_08925C40;
    case 420u: goto L_08925C4C;
    case 421u: goto L_08925C54;
    case 422u: goto L_08925C60;
    case 423u: goto L_08925C6C;
    case 424u: goto L_08925C78;
    case 425u: goto L_08925C80;
    case 426u: goto L_08925C90;
    case 427u: goto L_08925C9C;
    case 428u: goto L_08925CA8;
    case 429u: goto L_08925CB4;
    case 430u: goto L_08925CBC;
    case 431u: goto L_08925CD0;
    case 432u: goto L_08925CDC;
    case 433u: goto L_08925CE8;
    case 434u: goto L_08925CF4;
    case 435u: goto L_08925D00;
    case 436u: goto L_08925D08;
    case 437u: goto L_08925D14;
    case 438u: goto L_08925D20;
    case 439u: goto L_08925D2C;
    case 440u: goto L_08925D38;
    case 441u: goto L_08925D40;
    case 442u: goto L_08925D4C;
    case 443u: goto L_08925D58;
    case 444u: goto L_08925D64;
    case 445u: goto L_08925D6C;
    case 446u: goto L_08925D78;
    case 447u: goto L_08925D84;
    case 448u: goto L_08925D90;
    case 449u: goto L_08925D98;
    case 450u: goto L_08925DA4;
    case 451u: goto L_08925DB0;
    case 452u: goto L_08925DBC;
    case 453u: goto L_08925DC4;
    case 454u: goto L_08925DD4;
    case 455u: goto L_08925DE0;
    case 456u: goto L_08925DEC;
    case 457u: goto L_08925DF8;
    case 458u: goto L_08925E00;
    case 459u: goto L_08925E0C;
    case 460u: goto L_08925E18;
    case 461u: goto L_08925E24;
    case 462u: goto L_08925E2C;
    case 463u: goto L_08925E40;
    case 464u: goto L_08925E4C;
    case 465u: goto L_08925E58;
    case 466u: goto L_08925E60;
    case 467u: goto L_08925E70;
    case 468u: goto L_08925E7C;
    case 469u: goto L_08925E88;
    case 470u: goto L_08925E94;
    case 471u: goto L_08925E9C;
    case 472u: goto L_08925EAC;
    case 473u: goto L_08925EB8;
    case 474u: goto L_08925EC4;
    case 475u: goto L_08925ED0;
    case 476u: goto L_08925ED8;
    case 477u: goto L_08925EE8;
    case 478u: goto L_08925EF4;
    case 479u: goto L_08925F00;
    case 480u: goto L_08925F0C;
    case 481u: goto L_08925F14;
    case 482u: goto L_08925F20;
    case 483u: goto L_08925F2C;
    case 484u: goto L_08925F38;
    case 485u: goto L_08925F40;
    case 486u: goto L_08925F4C;
    case 487u: goto L_08925F58;
    case 488u: goto L_08925F64;
    case 489u: goto L_08925F6C;
    case 490u: goto L_08925F78;
    case 491u: goto L_08925F88;
    case 492u: goto L_08925F9C;
    case 493u: goto L_08925FA8;
    case 494u: goto L_08925FB4;
    case 495u: goto L_08925FBC;
    case 496u: goto L_08925FC8;
    case 497u: goto L_08925FD4;
    case 498u: goto L_08925FEC;
    case 499u: goto L_08925FFC;
    case 500u: goto L_08926008;
    case 501u: goto L_0892634C;
    case 502u: goto L_08926364;
    case 503u: goto L_08926378;
    case 504u: goto L_08926380;
    case 505u: goto L_08926394;
    case 506u: goto L_089263B4;
    case 507u: goto L_089263BC;
    case 508u: goto L_089263CC;
    case 509u: goto L_089263D8;
    case 510u: goto L_089263EC;
    case 511u: goto L_089263F0;
    case 512u: goto L_08926408;
    case 513u: goto L_08926434;
    case 514u: goto L_0892644C;
    case 515u: goto L_08926460;
    case 516u: goto L_08926468;
    case 517u: goto L_08926470;
    case 518u: goto L_08926474;
    case 519u: goto L_08926480;
    case 520u: goto L_0892648C;
    case 521u: goto L_08926498;
    case 522u: goto L_089264A8;
    case 523u: goto L_089264B4;
    case 524u: goto L_089264B8;
    case 525u: goto L_089264C4;
    case 526u: goto L_089264CC;
    case 527u: goto L_089264D0;
    case 528u: goto L_089264E4;
    case 529u: goto L_089264F8;
    case 530u: goto L_08926504;
    case 531u: goto L_08926508;
    case 532u: goto L_0892652C;
    case 533u: goto L_08926550;
    case 534u: goto L_0892655C;
    case 535u: goto L_08926570;
    case 536u: goto L_08926574;
    case 537u: goto L_08926588;
    case 538u: goto L_089265A4;
    case 539u: goto L_089265C4;
    case 540u: goto L_089265D4;
    case 541u: goto L_089265EC;
    case 542u: goto L_089265F0;
    case 543u: goto L_08926600;
    case 544u: goto L_0892660C;
    case 545u: goto L_08926624;
    case 546u: goto L_08926644;
    case 547u: goto L_0892666C;
    case 548u: goto L_0892667C;
    case 549u: goto L_08926688;
    case 550u: goto L_08926690;
    case 551u: goto L_0892669C;
    case 552u: goto L_089266B4;
    case 553u: goto L_089266C4;
    case 554u: goto L_089266D0;
    case 555u: goto L_089266E0;
    case 556u: goto L_089266E4;
    case 557u: goto L_0892670C;
    case 558u: goto L_08926728;
    case 559u: goto L_08926734;
    case 560u: goto L_08926740;
    case 561u: goto L_08926744;
    case 562u: goto L_08926760;
    case 563u: goto L_08926794;
    case 564u: goto L_089267A4;
    case 565u: goto L_089267BC;
    case 566u: goto L_089267C0;
    case 567u: goto L_089267CC;
    case 568u: goto L_089267EC;
    case 569u: goto L_08926808;
    case 570u: goto L_08926814;
    case 571u: goto L_0892681C;
    case 572u: goto L_08926834;
    case 573u: goto L_0892683C;
    case 574u: goto L_08926848;
    case 575u: goto L_08926850;
    case 576u: goto L_0892685C;
    case 577u: goto L_08926864;
    case 578u: goto L_0892686C;
    case 579u: goto L_08926880;
    case 580u: goto L_089268B4;
    case 581u: goto L_089268C8;
    case 582u: goto L_089268D0;
    case 583u: goto L_089268D8;
    case 584u: goto L_089268F4;
    case 585u: goto L_0892690C;
    case 586u: goto L_08926918;
    case 587u: goto L_08926928;
    case 588u: goto L_08926938;
    case 589u: goto L_08926948;
    case 590u: goto L_08926960;
    case 591u: goto L_08926968;
    case 592u: goto L_0892697C;
    case 593u: goto L_0892699C;
    case 594u: goto L_089269A8;
    case 595u: goto L_089269AC;
    case 596u: goto L_089269B8;
    case 597u: goto L_089269C4;
    case 598u: goto L_089269C8;
    case 599u: goto L_089269F0;
    case 600u: goto L_08926A10;
    case 601u: goto L_08926A1C;
    case 602u: goto L_08926A34;
    case 603u: goto L_08926A3C;
    case 604u: goto L_08926A54;
    case 605u: goto L_08926A5C;
    case 606u: goto L_08926A64;
    case 607u: goto L_08926A70;
    case 608u: goto L_08926A78;
    case 609u: goto L_08926A84;
    case 610u: goto L_08926A98;
    case 611u: goto L_08926AA8;
    case 612u: goto L_08926AB0;
    case 613u: goto L_08926ABC;
    case 614u: goto L_08926AC8;
    case 615u: goto L_08926AE0;
    case 616u: goto L_08926AE8;
    case 617u: goto L_08926B10;
    case 618u: goto L_08926B34;
    case 619u: goto L_08926B50;
    case 620u: goto L_08926B64;
    case 621u: goto L_08926B90;
    case 622u: goto L_08926B9C;
    case 623u: goto L_08926BA8;
    case 624u: goto L_08926BB0;
    case 625u: goto L_08926BB4;
    case 626u: goto L_08926BC8;
    case 627u: goto L_08926BF0;
    case 628u: goto L_08926BFC;
    case 629u: goto L_08926C08;
    case 630u: goto L_08926C18;
    case 631u: goto L_08926C24;
    case 632u: goto L_08926C2C;
    case 633u: goto L_08926C38;
    case 634u: goto L_08926C40;
    case 635u: goto L_08926C54;
    case 636u: goto L_08926C58;
    case 637u: goto L_08926C70;
    case 638u: goto L_08926C7C;
    case 639u: goto L_08926C94;
    case 640u: goto L_08926CA8;
    case 641u: goto L_08926CB4;
    case 642u: goto L_08926CCC;
    case 643u: goto L_08926CE4;
    case 644u: goto L_08926D08;
    case 645u: goto L_08926D20;
    case 646u: goto L_08926D44;
    case 647u: goto L_08926D54;
    case 648u: goto L_08926D64;
    case 649u: goto L_08926D84;
    case 650u: goto L_08926D94;
    case 651u: goto L_08926DA0;
    case 652u: goto L_08926DB8;
    case 653u: goto L_08926DCC;
    case 654u: goto L_08926DD8;
    case 655u: goto L_08926DF0;
    case 656u: goto L_08926E08;
    case 657u: goto L_08926E34;
    case 658u: goto L_08926E58;
    case 659u: goto L_08926E78;
    case 660u: goto L_08926E8C;
    case 661u: goto L_08926EA4;
    case 662u: goto L_08926EBC;
    case 663u: goto L_08926EC4;
    case 664u: goto L_08926EC8;
    case 665u: goto L_08926EE8;
    case 666u: goto L_08926F08;
    case 667u: goto L_08926F10;
    case 668u: goto L_08926F28;
    case 669u: goto L_08926F34;
    case 670u: goto L_08926F4C;
    case 671u: goto L_08926F78;
    case 672u: goto L_08926F84;
    case 673u: goto L_08926F8C;
    case 674u: goto L_08926F90;
    case 675u: goto L_08926F9C;
    case 676u: goto L_08926FA8;
    case 677u: goto L_08926FB4;
    case 678u: goto L_08926FBC;
    case 679u: goto L_08926FC0;
    case 680u: goto L_08926FCC;
    case 681u: goto L_08926FD8;
    case 682u: goto L_08926FE4;
    case 683u: goto L_08926FF0;
    case 684u: goto L_08926FF4;
    case 685u: goto L_08927000;
    case 686u: goto L_0892700C;
    case 687u: goto L_0892701C;
    case 688u: goto L_08927028;
    case 689u: goto L_08927038;
    case 690u: goto L_0892703C;
    case 691u: goto L_0892705C;
    case 692u: goto L_0892707C;
    case 693u: goto L_089270B0;
    case 694u: goto L_089270E0;
    case 695u: goto L_089270E8;
    case 696u: goto L_089270FC;
    case 697u: goto L_08927100;
    case 698u: goto L_08927110;
    case 699u: goto L_08927114;
    case 700u: goto L_08927138;
    case 701u: goto L_0892714C;
    case 702u: goto L_08927160;
    case 703u: goto L_08927168;
    case 704u: goto L_0892716C;
    case 705u: goto L_08927178;
    case 706u: goto L_0892717C;
    case 707u: goto L_08927184;
    case 708u: goto L_089271A4;
    case 709u: goto L_089271B8;
    case 710u: goto L_089271C4;
    case 711u: goto L_089271D0;
    case 712u: goto L_089271D8;
    case 713u: goto L_089271DC;
    case 714u: goto L_089271E8;
    case 715u: goto L_08927200;
    case 716u: goto L_08927220;
    case 717u: goto L_0892723C;
    case 718u: goto L_0892724C;
    case 719u: goto L_08927258;
    case 720u: goto L_08927270;
    case 721u: goto L_08927284;
    case 722u: goto L_08927294;
    case 723u: goto L_08927298;
    case 724u: goto L_089272A0;
    case 725u: goto L_089272B4;
    case 726u: goto L_089272CC;
    case 727u: goto L_089272D8;
    case 728u: goto L_089272E0;
    case 729u: goto L_089272EC;
    case 730u: goto L_089272F0;
    case 731u: goto L_08927300;
    case 732u: goto L_08927328;
    case 733u: goto L_08927360;
    case 734u: goto L_08927378;
    case 735u: goto L_08927390;
    case 736u: goto L_089273B4;
    case 737u: goto L_089273CC;
    case 738u: goto L_089273F0;
    case 739u: goto L_08927408;
    case 740u: goto L_0892742C;
    case 741u: goto L_08927448;
    case 742u: goto L_08927454;
    case 743u: goto L_08927468;
    case 744u: goto L_08927494;
    case 745u: goto L_0892749C;
    case 746u: goto L_089274B4;
    case 747u: goto L_089274D0;
    case 748u: goto L_089274D8;
    case 749u: goto L_089274E8;
    case 750u: goto L_089274F8;
    case 751u: goto L_08927514;
    case 752u: goto L_08927524;
    case 753u: goto L_08927530;
    case 754u: goto L_08927538;
    case 755u: goto L_08927548;
    case 756u: goto L_08927570;
    case 757u: goto L_0892757C;
    case 758u: goto L_08927594;
    case 759u: goto L_089275B0;
    case 760u: goto L_089275B8;
    case 761u: goto L_089275CC;
    case 762u: goto L_089275E8;
    case 763u: goto L_08927614;
    case 764u: goto L_08927620;
    case 765u: goto L_0892762C;
    case 766u: goto L_08927634;
    case 767u: goto L_08927638;
    case 768u: goto L_08927648;
    case 769u: goto L_08927650;
    case 770u: goto L_08927664;
    case 771u: goto L_08927678;
    case 772u: goto L_08927680;
    case 773u: goto L_08927698;
    case 774u: goto L_089276B4;
    case 775u: goto L_089276D4;
    case 776u: goto L_089276DC;
    case 777u: goto L_089276EC;
    case 778u: goto L_089276F8;
    case 779u: goto L_08927704;
    case 780u: goto L_08927720;
    case 781u: goto L_08927738;
    case 782u: goto L_0892774C;
    case 783u: goto L_08927754;
    case 784u: goto L_08927768;
    case 785u: goto L_08927778;
    case 786u: goto L_08927784;
    case 787u: goto L_08927790;
    case 788u: goto L_089277A0;
    case 789u: goto L_089277B8;
    case 790u: goto L_089277C4;
    case 791u: goto L_089277DC;
    case 792u: goto L_089277F0;
    case 793u: goto L_08927808;
    case 794u: goto L_08927814;
    case 795u: goto L_0892782C;
    case 796u: goto L_08927840;
    case 797u: goto L_0892784C;
    case 798u: goto L_08927858;
    case 799u: goto L_08927888;
    case 800u: goto L_08927894;
    case 801u: goto L_089278AC;
    case 802u: goto L_089278C0;
    case 803u: goto L_089278D0;
    case 804u: goto L_089278DC;
    case 805u: goto L_089278EC;
    case 806u: goto L_089278FC;
    case 807u: goto L_08927908;
    case 808u: goto L_0892791C;
    case 809u: goto L_0892793C;
    case 810u: goto L_08927948;
    case 811u: goto L_08927958;
    case 812u: goto L_08927968;
    case 813u: goto L_08927978;
    case 814u: goto L_08927984;
    case 815u: goto L_08927990;
    case 816u: goto L_0892799C;
    case 817u: goto L_089279AC;
    case 818u: goto L_089279BC;
    case 819u: goto L_089279CC;
    case 820u: goto L_089279D8;
    case 821u: goto L_089279E4;
    case 822u: goto L_089279F8;
    case 823u: goto L_08927A08;
    case 824u: goto L_08927A24;
    case 825u: goto L_08927A40;
    case 826u: goto L_08927A50;
    case 827u: goto L_08927A5C;
    case 828u: goto L_08927A68;
    case 829u: goto L_08927A7C;
    case 830u: goto L_08927AC4;
    case 831u: goto L_08927AE0;
    case 832u: goto L_08927AFC;
    case 833u: goto L_08927B0C;
    case 834u: goto L_08927B14;
    case 835u: goto L_08927B28;
    case 836u: goto L_08927B30;
    case 837u: goto L_08927B34;
    case 838u: goto L_08927B44;
    case 839u: goto L_08927B54;
    case 840u: goto L_08927B5C;
    case 841u: goto L_08927B70;
    case 842u: goto L_08927B78;
    case 843u: goto L_08927B7C;
    case 844u: goto L_08927B8C;
    case 845u: goto L_08927BB8;
    case 846u: goto L_08927BE0;
    case 847u: goto L_08927BF0;
    case 848u: goto L_08927C0C;
    case 849u: goto L_08927C18;
    case 850u: goto L_08927C3C;
    case 851u: goto L_08927C48;
    case 852u: goto L_08927C58;
    case 853u: goto L_08927C5C;
    case 854u: goto L_08927C6C;
    case 855u: goto L_08927C70;
    case 856u: goto L_08927C88;
    case 857u: goto L_08927CE4;
    case 858u: goto L_08927CF4;
    case 859u: goto L_08927D10;
    case 860u: goto L_08927D1C;
    case 861u: goto L_08927D40;
    case 862u: goto L_08927D48;
    case 863u: goto L_08927D58;
    case 864u: goto L_08927D60;
    case 865u: goto L_08927D74;
    case 866u: goto L_08927D7C;
    case 867u: goto L_08927D80;
    case 868u: goto L_08927D90;
    case 869u: goto L_08927DA0;
    case 870u: goto L_08927DA8;
    case 871u: goto L_08927DBC;
    case 872u: goto L_08927DC4;
    case 873u: goto L_08927DC8;
    case 874u: goto L_08927DDC;
    case 875u: goto L_08927DEC;
    case 876u: goto L_08927DF0;
    case 877u: goto L_08927E00;
    case 878u: goto L_08927E04;
    case 879u: goto L_08927E38;
    case 880u: goto L_08927E80;
    case 881u: goto L_08927E8C;
    case 882u: goto L_08927E94;
    case 883u: goto L_08927EBC;
    case 884u: goto L_08927EE4;
    case 885u: goto L_08927F38;
    case 886u: goto L_08927F44;
    case 887u: goto L_08927F4C;
    case 888u: goto L_08927F6C;
    case 889u: goto L_08927F78;
    case 890u: goto L_08927F88;
    case 891u: goto L_08927F8C;
    case 892u: goto L_08927F94;
    case 893u: goto L_08927FA0;
    case 894u: goto L_08927FB0;
    case 895u: goto L_08927FB4;
    case 896u: goto L_08927FE4;
    case 897u: goto L_08927FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08924004:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924020:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x0892405Cu);
    // nop
    goto L_08926644;
L_0892405C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08924074;
      }
      goto L_08924068;
    }
L_08924068:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089243CC;
      }
      goto L_08924074;
    }
L_08924074:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924094u) goto L_08924094;
    return;
L_08924094:
    ctx.set_gpr(31, 0x0892409Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0892409Cu) goto L_0892409C;
    return;
L_0892409C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(20, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089240E0;
      }
      goto L_089240C8;
    }
L_089240C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089240E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089240E0u) goto L_089240E0;
    return;
L_089240E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089240ECu);
    // nop
    goto L_089267EC;
L_089240EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089240F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 199u, 0x088F9198u>(ctx, &aot_mem) && ctx.pc == 0x089240F8u) goto L_089240F8;
    return;
L_089240F8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08924108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924108u) goto L_08924108;
    return;
L_08924108:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08924114u);
    // nop
    goto L_089267EC;
L_08924114:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08924120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08924120u) goto L_08924120;
    return;
L_08924120:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08924130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924130u) goto L_08924130;
    return;
L_08924130:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924154;
      }
      goto L_08924148;
    }
L_08924148:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08924154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08924154u) goto L_08924154;
    return;
L_08924154:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924178;
      }
      goto L_0892416C;
    }
L_0892416C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08924178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08924178u) goto L_08924178;
    return;
L_08924178:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089243B4;
      }
      goto L_08924184;
    }
L_08924184:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089241EC;
      }
      goto L_08924198;
    }
L_08924198:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089241BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089241BCu) goto L_089241BC;
    return;
L_089241BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089241D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089241D4u) goto L_089241D4;
    return;
L_089241D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089241E8;
      }
      goto L_089241DC;
    }
L_089241DC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089241F8;
      }
      goto L_089241E8;
    }
L_089241E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089241EC;
L_089241EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924198;
      }
      goto L_089241F8;
    }
L_089241F8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892420C;
      }
      goto L_08924200;
    }
L_08924200:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924220;
      }
      goto L_0892420C;
    }
L_0892420C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924220u) goto L_08924220;
    return;
L_08924220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08924230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08924230u) goto L_08924230;
    return;
L_08924230:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924244;
      }
      goto L_08924238;
    }
L_08924238:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924290;
      }
      goto L_08924244;
    }
L_08924244:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892427C;
      }
      goto L_08924254;
    }
L_08924254:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08924260u);
    // nop
    goto L_089277A0;
L_08924260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924274;
      }
      goto L_08924268;
    }
L_08924268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08924274u);
    // nop
    goto L_089275E8;
L_08924274:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0892427C;
L_0892427C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08924290u);
    // nop
    goto L_08927768;
L_08924290:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089242ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x089242ACu) goto L_089242AC;
    return;
L_089242AC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089242DC;
      }
      goto L_089242C8;
    }
L_089242C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089242D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089242D4u) goto L_089242D4;
    return;
L_089242D4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089242DC;
L_089242DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089242FC;
      }
      goto L_089242E4;
    }
L_089242E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089242F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089242F0u) goto L_089242F0;
    return;
L_089242F0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089242FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089242FCu) goto L_089242FC;
    return;
L_089242FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924320;
      }
      goto L_0892430C;
    }
L_0892430C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08924318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08924318u) goto L_08924318;
    return;
L_08924318:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08924320;
L_08924320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924338;
      }
      goto L_08924328;
    }
L_08924328:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08924338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08924338u) goto L_08924338;
    return;
L_08924338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892436C;
      }
      goto L_08924350;
    }
L_08924350:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892436C;
      }
      goto L_08924368;
    }
L_08924368:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892436C;
L_0892436C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924398;
      }
      goto L_08924374;
    }
L_08924374:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924398;
      }
      goto L_0892438C;
    }
L_0892438C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08924398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08924398u) goto L_08924398;
    return;
L_08924398:
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089243B4;
L_089243B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924184;
      }
      goto L_089243C4;
    }
L_089243C4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(220), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_089243CC;
L_089243CC:
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
L_08924400:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892441C;
      }
      goto L_08924408;
    }
L_08924408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924428;
      }
      goto L_0892441C;
    }
L_0892441C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924438;
      }
      goto L_08924428;
    }
L_08924428:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08924438;
L_08924438:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924460u) goto L_08924460;
    return;
L_08924460:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924470u) goto L_08924470;
    return;
L_08924470:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924480u) goto L_08924480;
    return;
L_08924480:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924494:
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089244E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089244E0u) goto L_089244E0;
    return;
L_089244E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089244F8;
      }
      goto L_089244EC;
    }
L_089244EC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089247BC;
      }
      goto L_089244F8;
    }
L_089244F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924520;
      }
      goto L_08924504;
    }
L_08924504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924520u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924520u) goto L_08924520;
    return;
L_08924520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08924548;
      }
      goto L_0892453C;
    }
L_0892453C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089247BC;
      }
      goto L_08924548;
    }
L_08924548:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892456Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892456Cu) goto L_0892456C;
    return;
L_0892456C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08924584;
      }
      goto L_08924578;
    }
L_08924578:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089247BC;
      }
      goto L_08924584;
    }
L_08924584:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245B0;
      }
      goto L_08924594;
    }
L_08924594:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089245B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089245B0u) goto L_089245B0;
    return;
L_089245B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089245C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089245C4u) goto L_089245C4;
    return;
L_089245C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_089245D4;
    }
L_089245D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089245E0;
L_089245E0:
    ctx.set_gpr(31, 0x089245E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089245E8u) goto L_089245E8;
    return;
L_089245E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924604;
      }
      goto L_089245F8;
    }
L_089245F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08924604;
L_08924604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_08924610;
    }
L_08924610:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924620;
      }
      goto L_0892461C;
    }
L_0892461C:
    ctx.set_gpr(23, 0u + 0u);
    goto L_08924620;
L_08924620:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892462Cu);
    // nop
    goto L_089267EC;
L_0892462C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08924638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x08924638u) goto L_08924638;
    return;
L_08924638:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892464Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0892464Cu) goto L_0892464C;
    return;
L_0892464C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924660;
      }
      goto L_08924658;
    }
L_08924658:
    ctx.set_gpr(31, 0x08924660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08924660u) goto L_08924660;
    return;
L_08924660:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924684;
      }
      goto L_08924678;
    }
L_08924678:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08924684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08924684u) goto L_08924684;
    return;
L_08924684:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892477C;
      }
      goto L_08924690;
    }
L_08924690:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089246F0;
      }
      goto L_089246A4;
    }
L_089246A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089246CC;
      }
      goto L_089246C4;
    }
L_089246C4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089246CC;
L_089246CC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089246D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089246D8u) goto L_089246D8;
    return;
L_089246D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089246EC;
      }
      goto L_089246E0;
    }
L_089246E0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089246FC;
      }
      goto L_089246EC;
    }
L_089246EC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089246F0;
L_089246F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089246A4;
      }
      goto L_089246FC;
    }
L_089246FC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924718;
      }
      goto L_08924704;
    }
L_08924704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08924718;
L_08924718:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924744;
      }
      goto L_08924730;
    }
L_08924730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924758;
      }
      goto L_08924744;
    }
L_08924744:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08924758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08924758u) goto L_08924758;
    return;
L_08924758:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0892477C;
L_0892477C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924690;
      }
      goto L_0892478C;
    }
L_0892478C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(276), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089247A4;
      }
      goto L_0892479C;
    }
L_0892479C:
    ctx.set_gpr(31, 0x089247A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089247A4u) goto L_089247A4;
    return;
L_089247A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089247B8;
      }
      goto L_089247B0;
    }
L_089247B0:
    ctx.set_gpr(31, 0x089247B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089247B8u) goto L_089247B8;
    return;
L_089247B8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089247BC;
L_089247BC:
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
L_089247EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08924834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 562u, 0x08922910u>(ctx, &aot_mem) && ctx.pc == 0x08924834u) goto L_08924834;
    return;
L_08924834:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892484C;
      }
      goto L_08924840;
    }
L_08924840:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924BB4;
      }
      goto L_0892484C;
    }
L_0892484C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B0;
      }
      goto L_0892485C;
    }
L_0892485C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x0892487Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892487Cu) goto L_0892487C;
    return;
L_0892487C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089248AC;
      }
      goto L_08924884;
    }
L_08924884:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08924894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924894u) goto L_08924894;
    return;
L_08924894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089248ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089248ACu) goto L_089248AC;
    return;
L_089248AC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089248B0;
L_089248B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892485C;
      }
      goto L_089248BC;
    }
L_089248BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089248D8;
      }
      goto L_089248C8;
    }
L_089248C8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11744));
    ctx.set_gpr(31, 0x089248D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089248D8u) goto L_089248D8;
    return;
L_089248D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089248F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089248F0u) goto L_089248F0;
    return;
L_089248F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089249AC;
      }
      goto L_08924904;
    }
L_08924904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089249AC;
      }
      goto L_08924910;
    }
L_08924910:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924998;
      }
      goto L_0892491C;
    }
L_0892491C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x0892493Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892493Cu) goto L_0892493C;
    return;
L_0892493C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924994;
      }
      goto L_08924944;
    }
L_08924944:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924978u) goto L_08924978;
    return;
L_08924978:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924994u) goto L_08924994;
    return;
L_08924994:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08924998;
L_08924998:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892491C;
      }
      goto L_089249A4;
    }
L_089249A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924AC8;
      }
      goto L_089249AC;
    }
L_089249AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A30;
      }
      goto L_089249BC;
    }
L_089249BC:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A1C;
      }
      goto L_089249C8;
    }
L_089249C8:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x089249E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089249E8u) goto L_089249E8;
    return;
L_089249E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A18;
      }
      goto L_089249F0;
    }
L_089249F0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08924A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924A00u) goto L_08924A00;
    return;
L_08924A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924A18u) goto L_08924A18;
    return;
L_08924A18:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08924A1C;
L_08924A1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089249C8;
      }
      goto L_08924A28;
    }
L_08924A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924AC8;
      }
      goto L_08924A30;
    }
L_08924A30:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924ABC;
      }
      goto L_08924A3C;
    }
L_08924A3C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08924A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08924A5Cu) goto L_08924A5C;
    return;
L_08924A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924AB8;
      }
      goto L_08924A64;
    }
L_08924A64:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08924A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924A74u) goto L_08924A74;
    return;
L_08924A74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A8C;
      }
      goto L_08924A80;
    }
L_08924A80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08924A8C;
L_08924A8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924AA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924AA4u) goto L_08924AA4;
    return;
L_08924AA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924AB8;
      }
      goto L_08924AB0;
    }
L_08924AB0:
    ctx.set_gpr(31, 0x08924AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08924AB8u) goto L_08924AB8;
    return;
L_08924AB8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08924ABC;
L_08924ABC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924A3C;
      }
      goto L_08924AC8;
    }
L_08924AC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924AE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924AE0u) goto L_08924AE0;
    return;
L_08924AE0:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08924B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08924B0Cu) goto L_08924B0C;
    return;
L_08924B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08924B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08924B1Cu) goto L_08924B1C;
    return;
L_08924B1C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08924B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08924B34u) goto L_08924B34;
    return;
L_08924B34:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08924B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08924B4Cu) goto L_08924B4C;
    return;
L_08924B4C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08924B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08924B70u) goto L_08924B70;
    return;
L_08924B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08924B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08924B80u) goto L_08924B80;
    return;
L_08924B80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08924B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08924B98u) goto L_08924B98;
    return;
L_08924B98:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11724));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08924BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 446u, 0x08955E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08924BB0u) goto L_08924BB0;
    return;
L_08924BB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08924BB4;
L_08924BB4:
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
L_08924BDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924C58;
      }
      goto L_08924BFC;
    }
L_08924BFC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08924C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08924C1Cu) goto L_08924C1C;
    return;
L_08924C1C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924C54;
      }
      goto L_08924C2C;
    }
L_08924C2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08924C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924C3Cu) goto L_08924C3C;
    return;
L_08924C3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924C54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924C54u) goto L_08924C54;
    return;
L_08924C54:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08924C58;
L_08924C58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924BFC;
      }
      goto L_08924C68;
    }
L_08924C68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924CF8;
      }
      goto L_08924C78;
    }
L_08924C78:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924CE0;
      }
      goto L_08924C84;
    }
L_08924C84:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08924CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08924CA4u) goto L_08924CA4;
    return;
L_08924CA4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924CDC;
      }
      goto L_08924CB4;
    }
L_08924CB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08924CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924CC4u) goto L_08924CC4;
    return;
L_08924CC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924CDCu) goto L_08924CDC;
    return;
L_08924CDC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08924CE0;
L_08924CE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924C84;
      }
      goto L_08924CF0;
    }
L_08924CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D70;
      }
      goto L_08924CF8;
    }
L_08924CF8:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D60;
      }
      goto L_08924D04;
    }
L_08924D04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08924D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08924D24u) goto L_08924D24;
    return;
L_08924D24:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D5C;
      }
      goto L_08924D34;
    }
L_08924D34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08924D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08924D44u) goto L_08924D44;
    return;
L_08924D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924D5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924D5Cu) goto L_08924D5C;
    return;
L_08924D5C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08924D60;
L_08924D60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924D04;
      }
      goto L_08924D70;
    }
L_08924D70:
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
L_08924D8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08924DA8;
      }
      goto L_08924DA0;
    }
L_08924DA0:
    ctx.set_gpr(31, 0x08924DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 686u, 0x0891F1BCu>(ctx, &aot_mem) && ctx.pc == 0x08924DA8u) goto L_08924DA8;
    return;
L_08924DA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924DFC;
      }
      goto L_08924DD8;
    }
L_08924DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924DFC;
      }
      goto L_08924DF4;
    }
L_08924DF4:
    ctx.set_gpr(31, 0x08924DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08924DFCu) goto L_08924DFC;
    return;
L_08924DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924E2C;
      }
      goto L_08924E08;
    }
L_08924E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924E2C;
      }
      goto L_08924E24;
    }
L_08924E24:
    ctx.set_gpr(31, 0x08924E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08924E2Cu) goto L_08924E2C;
    return;
L_08924E2C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924E3Cu) goto L_08924E3C;
    return;
L_08924E3C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924E4Cu) goto L_08924E4C;
    return;
L_08924E4C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924E5Cu) goto L_08924E5C;
    return;
L_08924E5C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924E6Cu) goto L_08924E6C;
    return;
L_08924E6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924E8Cu) goto L_08924E8C;
    return;
L_08924E8C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924EA0u) goto L_08924EA0;
    return;
L_08924EA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08924EACu);
    // nop
    goto L_089267EC;
L_08924EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924EC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924EC4u) goto L_08924EC4;
    return;
L_08924EC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924F00;
      }
      goto L_08924ED8;
    }
L_08924ED8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08924EE4u);
    // nop
    goto L_089267EC;
L_08924EE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924EFCu) goto L_08924EFC;
    return;
L_08924EFC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), 0u);
    goto L_08924F00;
L_08924F00:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924F10u) goto L_08924F10;
    return;
L_08924F10:
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
L_08924F28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924FB0;
      }
      goto L_08924F50;
    }
L_08924F50:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924F94;
      }
      goto L_08924F60;
    }
L_08924F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924F90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924F90u) goto L_08924F90;
    return;
L_08924F90:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08924F94;
L_08924F94:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924F60;
      }
      goto L_08924FA0;
    }
L_08924FA0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924FB0u) goto L_08924FB0;
    return;
L_08924FB0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924FC0u) goto L_08924FC0;
    return;
L_08924FC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925008;
      }
      goto L_08924FCC;
    }
L_08924FCC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924FFC;
      }
      goto L_08924FE0;
    }
L_08924FE0:
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08924FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08924FF8u) goto L_08924FF8;
    return;
L_08924FF8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08924FFC;
L_08924FFC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924FE0;
      }
      goto L_08925008;
    }
L_08925008:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08925014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 426u, 0x08945EA4u>(ctx, &aot_mem) && ctx.pc == 0x08925014u) goto L_08925014;
    return;
L_08925014:
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
L_08925034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089250E4;
      }
      goto L_08925050;
    }
L_08925050:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892507Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892507Cu) goto L_0892507C;
    return;
L_0892507C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08925094;
      }
      goto L_08925088;
    }
L_08925088:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089250E8;
      }
      goto L_08925094;
    }
L_08925094:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089250C4;
      }
      goto L_089250A0;
    }
L_089250A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089250C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089250C4u) goto L_089250C4;
    return;
L_089250C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(31, 0x089250D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089250D4u) goto L_089250D4;
    return;
L_089250D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089250E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089250E4u) goto L_089250E4;
    return;
L_089250E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089250E8;
L_089250E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089250FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(253)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925570;
      }
      goto L_0892512C;
    }
L_0892512C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892514Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892514Cu) goto L_0892514C;
    return;
L_0892514C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925164;
      }
      goto L_08925158;
    }
L_08925158:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925574;
      }
      goto L_08925164;
    }
L_08925164:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892518C;
      }
      goto L_08925170;
    }
L_08925170:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892518Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892518Cu) goto L_0892518C;
    return;
L_0892518C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089251A8u);
    // nop
    goto L_089267EC;
L_089251A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089251C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089251C4u) goto L_089251C4;
    return;
L_089251C4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089251E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089251E8u) goto L_089251E8;
    return;
L_089251E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925200;
      }
      goto L_089251F4;
    }
L_089251F4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925574;
      }
      goto L_08925200;
    }
L_08925200:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892522C;
      }
      goto L_08925210;
    }
L_08925210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892522Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892522Cu) goto L_0892522C;
    return;
L_0892522C:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892524C;
      }
      goto L_08925240;
    }
L_08925240:
    ctx.set_gpr(31, 0x08925248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 822u, 0x089575A0u>(ctx, &aot_mem) && ctx.pc == 0x08925248u) goto L_08925248;
    return;
L_08925248:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_0892524C;
L_0892524C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253A8;
      }
      goto L_08925258;
    }
L_08925258:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892529C;
      }
      goto L_08925274;
    }
L_08925274:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08925280u);
    // nop
    goto L_089277A0;
L_08925280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925294;
      }
      goto L_08925288;
    }
L_08925288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08925294u);
    // nop
    goto L_089275E8;
L_08925294:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0892529C;
L_0892529C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089252B0u);
    // nop
    goto L_08927768;
L_089252B0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089252E0;
      }
      goto L_089252C4;
    }
L_089252C4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089252E0;
      }
      goto L_089252DC;
    }
L_089252DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089252E0;
L_089252E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892530C;
      }
      goto L_089252E8;
    }
L_089252E8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892530C;
      }
      goto L_08925300;
    }
L_08925300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892530Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892530Cu) goto L_0892530C;
    return;
L_0892530C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925350;
      }
      goto L_08925328;
    }
L_08925328:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08925334u);
    // nop
    goto L_089277A0;
L_08925334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925348;
      }
      goto L_0892533C;
    }
L_0892533C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08925348u);
    // nop
    goto L_089275E8;
L_08925348:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08925350;
L_08925350:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08925364u);
    // nop
    goto L_08927768;
L_08925364:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892538C;
      }
      goto L_08925378;
    }
L_08925378:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08925384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08925384u) goto L_08925384;
    return;
L_08925384:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0892538C;
L_0892538C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253A4;
      }
      goto L_08925394;
    }
L_08925394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089253A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089253A4u) goto L_089253A4;
    return;
L_089253A4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    goto L_089253A8;
L_089253A8:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253E8;
      }
      goto L_089253B4;
    }
L_089253B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089253C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08956C44u>(ctx, &aot_mem) && ctx.pc == 0x089253C4u) goto L_089253C4;
    return;
L_089253C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089253D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089253D4u) goto L_089253D4;
    return;
L_089253D4:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089253E8;
L_089253E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089253B4;
      }
      goto L_089253F4;
    }
L_089253F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08925400u);
    // nop
    goto L_089267EC;
L_08925400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925418u) goto L_08925418;
    return;
L_08925418:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925570;
      }
      goto L_08925428;
    }
L_08925428:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892546C;
      }
      goto L_08925444;
    }
L_08925444:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08925450u);
    // nop
    goto L_089277A0;
L_08925450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925464;
      }
      goto L_08925458;
    }
L_08925458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08925464u);
    // nop
    goto L_089275E8;
L_08925464:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0892546C;
L_0892546C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925480u);
    // nop
    goto L_08927768;
L_08925480:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089254A8;
      }
      goto L_08925494;
    }
L_08925494:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089254A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089254A0u) goto L_089254A0;
    return;
L_089254A0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089254A8;
L_089254A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089254C0;
      }
      goto L_089254B0;
    }
L_089254B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089254C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089254C0u) goto L_089254C0;
    return;
L_089254C0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089254FC;
      }
      goto L_089254D4;
    }
L_089254D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089254E0u);
    // nop
    goto L_089277A0;
L_089254E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089254F4;
      }
      goto L_089254E8;
    }
L_089254E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089254F4u);
    // nop
    goto L_089275E8;
L_089254F4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089254FC;
L_089254FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08925510u);
    // nop
    goto L_08927768;
L_08925510:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925540;
      }
      goto L_08925524;
    }
L_08925524:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925540;
      }
      goto L_0892553C;
    }
L_0892553C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08925540;
L_08925540:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892556C;
      }
      goto L_08925548;
    }
L_08925548:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892556C;
      }
      goto L_08925560;
    }
L_08925560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892556Cu) goto L_0892556C;
    return;
L_0892556C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    goto L_08925570;
L_08925570:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08925574;
L_08925574:
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
L_0892559C:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089255E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089255E4u) goto L_089255E4;
    return;
L_089255E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089255FC;
      }
      goto L_089255F0;
    }
L_089255F0:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925858;
      }
      goto L_089255FC;
    }
L_089255FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925624;
      }
      goto L_08925608;
    }
L_08925608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925624u) goto L_08925624;
    return;
L_08925624:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08925630u);
    // nop
    goto L_089267EC;
L_08925630:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925648u) goto L_08925648;
    return;
L_08925648:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925660;
      }
      goto L_08925654;
    }
L_08925654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925858;
      }
      goto L_08925660;
    }
L_08925660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925684u) goto L_08925684;
    return;
L_08925684:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089256C0;
      }
      goto L_08925690;
    }
L_08925690:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0892569Cu);
    // nop
    goto L_089267EC;
L_0892569C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089256B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089256B4u) goto L_089256B4;
    return;
L_089256B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925858;
      }
      goto L_089256C0;
    }
L_089256C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089256D8;
      }
      goto L_089256CC;
    }
L_089256CC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925700;
      }
      goto L_089256D8;
    }
L_089256D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089256E4u);
    // nop
    goto L_089267EC;
L_089256E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089256F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x089256F0u) goto L_089256F0;
    return;
L_089256F0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08925700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08925700u) goto L_08925700;
    return;
L_08925700:
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089257B4;
      }
      goto L_08925710;
    }
L_08925710:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892571Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 208u, 0x0893CD34u>(ctx, &aot_mem) && ctx.pc == 0x0892571Cu) goto L_0892571C;
    return;
L_0892571C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892574C;
      }
      goto L_0892572C;
    }
L_0892572C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08925738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 211u, 0x0893CD78u>(ctx, &aot_mem) && ctx.pc == 0x08925738u) goto L_08925738;
    return;
L_08925738:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892574C;
      }
      goto L_08925748;
    }
L_08925748:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_0892574C;
L_0892574C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925778;
      }
      goto L_08925764;
    }
L_08925764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892578C;
      }
      goto L_08925778;
    }
L_08925778:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892578Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892578Cu) goto L_0892578C;
    return;
L_0892578C:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089257A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089257A8u) goto L_089257A8;
    return;
L_089257A8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089257B4;
L_089257B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08925710;
      }
      goto L_089257C8;
    }
L_089257C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925824;
      }
      goto L_089257D0;
    }
L_089257D0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089257FC;
      }
      goto L_089257E8;
    }
L_089257E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925810;
      }
      goto L_089257FC;
    }
L_089257FC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08925810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08925810u) goto L_08925810;
    return;
L_08925810:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08925824;
L_08925824:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089257D0;
      }
      goto L_08925830;
    }
L_08925830:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0892583Cu);
    // nop
    goto L_089267EC;
L_0892583C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925854u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925854u) goto L_08925854;
    return;
L_08925854:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08925858;
L_08925858:
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
L_08925884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892589Cu);
    // nop
    goto L_08924DB8;
L_0892589C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089258ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 560u, 0x089124B8u>(ctx, &aot_mem) && ctx.pc == 0x089258ACu) goto L_089258AC;
    return;
L_089258AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089258BCu);
    // nop
    goto L_08924D8C;
L_089258BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089258D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892593C;
      }
      goto L_08925910;
    }
L_08925910:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08925920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08925920u) goto L_08925920;
    return;
L_08925920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925938u) goto L_08925938;
    return;
L_08925938:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0892593C;
L_0892593C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925910;
      }
      goto L_08925948;
    }
L_08925948:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925958;
      }
      goto L_08925950;
    }
L_08925950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08925958;
L_08925958:
    ctx.set_gpr(2, 0u + 0u);
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
L_0892597C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089259C8;
      }
      goto L_0892599C;
    }
L_0892599C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089259ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089259ACu) goto L_089259AC;
    return;
L_089259AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089259C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089259C4u) goto L_089259C4;
    return;
L_089259C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089259C8;
L_089259C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892599C;
      }
      goto L_089259D8;
    }
L_089259D8:
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
L_089259F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925A38;
      }
      goto L_08925A2C;
    }
L_08925A2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08925A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08925A38u) goto L_08925A38;
    return;
L_08925A38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30656)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30660)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30656), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30660), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32199)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08925A7C;
      }
      goto L_08925A74;
    }
L_08925A74:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32200)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08925A7C;
L_08925A7C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 556u, 0x08912464u>(ctx, &aot_mem) && ctx.pc == 0x08925A8Cu) goto L_08925A8C;
    return;
L_08925A8C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925AA8;
      }
      goto L_08925A98;
    }
L_08925A98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08925AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 560u, 0x089124B8u>(ctx, &aot_mem) && ctx.pc == 0x08925AA8u) goto L_08925AA8;
    return;
L_08925AA8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08925ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 289u, 0x0892155Cu>(ctx, &aot_mem) && ctx.pc == 0x08925ABCu) goto L_08925ABC;
    return;
L_08925ABC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925ADC;
      }
      goto L_08925AC8;
    }
L_08925AC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925AD4u);
    // nop
    goto L_08925884;
L_08925AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925ADC;
    }
L_08925ADC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 305u, 0x08921634u>(ctx, &aot_mem) && ctx.pc == 0x08925AE8u) goto L_08925AE8;
    return;
L_08925AE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925B08;
      }
      goto L_08925AF4;
    }
L_08925AF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925B00u);
    // nop
    goto L_08925884;
L_08925B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925B08;
    }
L_08925B08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925B44;
      }
      goto L_08925B18;
    }
L_08925B18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 695u, 0x089231B8u>(ctx, &aot_mem) && ctx.pc == 0x08925B24u) goto L_08925B24;
    return;
L_08925B24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925B44;
      }
      goto L_08925B30;
    }
L_08925B30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925B3Cu);
    // nop
    goto L_08925884;
L_08925B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925B44;
    }
L_08925B44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925B98;
      }
      goto L_08925B54;
    }
L_08925B54:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(253)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925B98;
      }
      goto L_08925B60;
    }
L_08925B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11700));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08925B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08925B84u) goto L_08925B84;
    return;
L_08925B84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925B90u);
    // nop
    goto L_08925884;
L_08925B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925B98;
    }
L_08925B98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925BFC;
      }
      goto L_08925BA4;
    }
L_08925BA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925BB0u);
    // nop
    goto L_08924020;
L_08925BB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925BD0;
      }
      goto L_08925BBC;
    }
L_08925BBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925BC8u);
    // nop
    goto L_08925884;
L_08925BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925BD0;
    }
L_08925BD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925BDCu);
    // nop
    goto L_08924494;
L_08925BDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925BFC;
      }
      goto L_08925BE8;
    }
L_08925BE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925BF4u);
    // nop
    goto L_08925884;
L_08925BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925BFC;
    }
L_08925BFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 327u, 0x08921838u>(ctx, &aot_mem) && ctx.pc == 0x08925C08u) goto L_08925C08;
    return;
L_08925C08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925C28;
      }
      goto L_08925C14;
    }
L_08925C14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C20u);
    // nop
    goto L_08925884;
L_08925C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925C28;
    }
L_08925C28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 336u, 0x089218C8u>(ctx, &aot_mem) && ctx.pc == 0x08925C34u) goto L_08925C34;
    return;
L_08925C34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925C54;
      }
      goto L_08925C40;
    }
L_08925C40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C4Cu);
    // nop
    goto L_08925884;
L_08925C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925C54;
    }
L_08925C54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 546u, 0x089227B4u>(ctx, &aot_mem) && ctx.pc == 0x08925C60u) goto L_08925C60;
    return;
L_08925C60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925C80;
      }
      goto L_08925C6C;
    }
L_08925C6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C78u);
    // nop
    goto L_08925884;
L_08925C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925C80;
    }
L_08925C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925C90;
    }
L_08925C90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925C9Cu);
    // nop
    goto L_089250FC;
L_08925C9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925CA8;
    }
L_08925CA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925CB4u);
    // nop
    goto L_08925884;
L_08925CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925CBC;
    }
L_08925CBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 164u, 0x08910B00u>(ctx, &aot_mem) && ctx.pc == 0x08925CD0u) goto L_08925CD0;
    return;
L_08925CD0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_08925CDC;
    }
L_08925CDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925CE8u);
    // nop
    goto L_0892559C;
L_08925CE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_08925CF4;
    }
L_08925CF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D00u);
    // nop
    goto L_08925884;
L_08925D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925D08;
    }
L_08925D08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(254)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D98;
      }
      goto L_08925D14;
    }
L_08925D14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 752u, 0x089235ECu>(ctx, &aot_mem) && ctx.pc == 0x08925D20u) goto L_08925D20;
    return;
L_08925D20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925D40;
      }
      goto L_08925D2C;
    }
L_08925D2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D38u);
    // nop
    goto L_08925884;
L_08925D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925D40;
    }
L_08925D40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 783u, 0x089237C4u>(ctx, &aot_mem) && ctx.pc == 0x08925D4Cu) goto L_08925D4C;
    return;
L_08925D4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925D6C;
      }
      goto L_08925D58;
    }
L_08925D58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D64u);
    // nop
    goto L_08925884;
L_08925D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925D6C;
    }
L_08925D6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 810u, 0x089239FCu>(ctx, &aot_mem) && ctx.pc == 0x08925D78u) goto L_08925D78;
    return;
L_08925D78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925DC4;
      }
      goto L_08925D84;
    }
L_08925D84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925D90u);
    // nop
    goto L_08925884;
L_08925D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925D98;
    }
L_08925D98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 833u, 0x08923B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08925DA4u) goto L_08925DA4;
    return;
L_08925DA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925DC4;
      }
      goto L_08925DB0;
    }
L_08925DB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925DBCu);
    // nop
    goto L_08925884;
L_08925DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925DC4;
    }
L_08925DC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925E00;
      }
      goto L_08925DD4;
    }
L_08925DD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925DE0u);
    // nop
    goto L_08925034;
L_08925DE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925E00;
      }
      goto L_08925DEC;
    }
L_08925DEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925DF8u);
    // nop
    goto L_08925884;
L_08925DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925E00;
    }
L_08925E00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925E0Cu);
    // nop
    goto L_089247EC;
L_08925E0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925E2C;
      }
      goto L_08925E18;
    }
L_08925E18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925E24u);
    // nop
    goto L_08925884;
L_08925E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925E2C;
    }
L_08925E2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925E40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925E40u) goto L_08925E40;
    return;
L_08925E40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925E60;
      }
      goto L_08925E4C;
    }
L_08925E4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925E58u);
    // nop
    goto L_08925884;
L_08925E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925E60;
    }
L_08925E60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925E9C;
      }
      goto L_08925E70;
    }
L_08925E70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925E7Cu);
    // nop
    goto L_08924020;
L_08925E7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925E9C;
      }
      goto L_08925E88;
    }
L_08925E88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925E94u);
    // nop
    goto L_08925884;
L_08925E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925E9C;
    }
L_08925E9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925ED8;
      }
      goto L_08925EAC;
    }
L_08925EAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925EB8u);
    // nop
    goto L_08925034;
L_08925EB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925ED8;
      }
      goto L_08925EC4;
    }
L_08925EC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925ED0u);
    // nop
    goto L_08925884;
L_08925ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925ED8;
    }
L_08925ED8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925F14;
      }
      goto L_08925EE8;
    }
L_08925EE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925EF4u);
    // nop
    goto L_089250FC;
L_08925EF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925F14;
      }
      goto L_08925F00;
    }
L_08925F00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F0Cu);
    // nop
    goto L_08925884;
L_08925F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925F14;
    }
L_08925F14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F20u);
    // nop
    goto L_08924BDC;
L_08925F20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925F40;
      }
      goto L_08925F2C;
    }
L_08925F2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F38u);
    // nop
    goto L_08925884;
L_08925F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925F40;
    }
L_08925F40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 909u, 0x08923FD4u>(ctx, &aot_mem) && ctx.pc == 0x08925F4Cu) goto L_08925F4C;
    return;
L_08925F4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925F6C;
      }
      goto L_08925F58;
    }
L_08925F58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F64u);
    // nop
    goto L_08925884;
L_08925F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925F6C;
    }
L_08925F6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925F78u);
    // nop
    goto L_089258D4;
L_08925F78:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(317)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08925FBC;
      }
      goto L_08925F88;
    }
L_08925F88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08925F9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08925F9Cu) goto L_08925F9C;
    return;
L_08925F9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08925FBC;
      }
      goto L_08925FA8;
    }
L_08925FA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925FB4u);
    // nop
    goto L_08925884;
L_08925FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892634C;
      }
      goto L_08925FBC;
    }
L_08925FBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925FC8u);
    // nop
    goto L_08924D8C;
L_08925FC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08925FD4u);
    // nop
    goto L_08924DB8;
L_08925FD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08925FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 560u, 0x089124B8u>(ctx, &aot_mem) && ctx.pc == 0x08925FECu) goto L_08925FEC;
    return;
L_08925FEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926008;
      }
      goto L_08925FFC;
    }
L_08925FFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08926008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08926008u) goto L_08926008;
    return;
L_08926008:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30664)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30668)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30664), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30668), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30672)));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30676)));
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[11] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[13]);
    ctx.set_gpr(9, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(30672), ctx.gpr[11]);
    ctx.set_gpr(9, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(30676), ctx.gpr[10]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30680)));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30684)));
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[11] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[13]);
    ctx.set_gpr(9, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(30680), ctx.gpr[11]);
    ctx.set_gpr(9, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(30684), ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30688)));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(30692)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[12]);
    ctx.set_gpr(8, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(30688), ctx.gpr[10]);
    ctx.set_gpr(8, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(30692), ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(30696)));
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(30700)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[12]);
    ctx.set_gpr(8, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(30696), ctx.gpr[10]);
    ctx.set_gpr(8, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(30700), ctx.gpr[9]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(30704)));
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(30708)));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30704), ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30708), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30712)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30716)));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30712), ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30716), ctx.gpr[8]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30720)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30724)));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30720), ctx.gpr[8]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30724), ctx.gpr[5]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30728)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30732)));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[10]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30728), ctx.gpr[8]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30732), ctx.gpr[5]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30736)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30740)));
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30736), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30740), ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30744)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30748)));
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30744), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30748), ctx.gpr[5]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30752)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30756)));
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30752), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30756), ctx.gpr[5]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30764)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30760), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30764), ctx.gpr[3]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30768)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30772)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30768), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30772), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0892634C;
L_0892634C:
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
L_08926364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926380;
      }
      goto L_08926378;
    }
L_08926378:
    ctx.set_gpr(31, 0x08926380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 471u, 0x08911E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08926380u) goto L_08926380;
    return;
L_08926380:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(319)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089263EC;
      }
      goto L_089263B4;
    }
L_089263B4:
    ctx.set_gpr(31, 0x089263BCu);
    // nop
    goto L_0892597C;
L_089263BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089263D8;
      }
      goto L_089263CC;
    }
L_089263CC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089263D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 959u, 0x08957D78u>(ctx, &aot_mem) && ctx.pc == 0x089263D8u) goto L_089263D8;
    return;
L_089263D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(319), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089263F0;
      }
      goto L_089263EC;
    }
L_089263EC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089263F0;
L_089263F0:
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
L_08926408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089264D0;
      }
      goto L_08926434;
    }
L_08926434:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926470;
      }
      goto L_0892644C;
    }
L_0892644C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(31, 0x08926460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08926460u) goto L_08926460;
    return;
L_08926460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926470;
      }
      goto L_08926468;
    }
L_08926468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926474;
      }
      goto L_08926470;
    }
L_08926470:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08926474;
L_08926474:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892648C;
      }
      goto L_08926480;
    }
L_08926480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892648C;
L_0892648C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089264B8;
      }
      goto L_08926498;
    }
L_08926498:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089264A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089264A8u) goto L_089264A8;
    return;
L_089264A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089264B8;
      }
      goto L_089264B4;
    }
L_089264B4:
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    goto L_089264B8;
L_089264B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089264CC;
      }
      goto L_089264C4;
    }
L_089264C4:
    ctx.set_gpr(31, 0x089264CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089264CCu) goto L_089264CC;
    return;
L_089264CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089264D0;
L_089264D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926434;
      }
      goto L_089264E4;
    }
L_089264E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089264F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089264F8u) goto L_089264F8;
    return;
L_089264F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08926508;
      }
      goto L_08926504;
    }
L_08926504:
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    goto L_08926508;
L_08926508:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_0892652C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892655C;
      }
      goto L_08926550;
    }
L_08926550:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    goto L_0892655C;
L_0892655C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926574;
      }
      goto L_08926570;
    }
L_08926570:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    goto L_08926574;
L_08926574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926588u);
    // nop
    goto L_089267EC;
L_08926588:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089265A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089265A4u) goto L_089265A4;
    return;
L_089265A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089265F0;
      }
      goto L_089265C4;
    }
L_089265C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089265D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089265D4u) goto L_089265D4;
    return;
L_089265D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089265ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089265ECu) goto L_089265EC;
    return;
L_089265EC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089265F0;
L_089265F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089265C4;
      }
      goto L_08926600;
    }
L_08926600:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892660Cu);
    // nop
    goto L_089267EC;
L_0892660C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926624u) goto L_08926624;
    return;
L_08926624:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), 0u);
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
L_08926644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926688;
      }
      goto L_0892666C;
    }
L_0892666C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926688;
      }
      goto L_0892667C;
    }
L_0892667C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926744;
      }
      goto L_08926688;
    }
L_08926688:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B4;
      }
      goto L_08926690;
    }
L_08926690:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892669Cu);
    // nop
    goto L_089267EC;
L_0892669C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089266B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089266B4u) goto L_089266B4;
    return;
L_089266B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089266D0;
      }
      goto L_089266C4;
    }
L_089266C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    goto L_089266D0;
L_089266D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266E4;
      }
      goto L_089266E0;
    }
L_089266E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    goto L_089266E4;
L_089266E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892670Cu);
    // nop
    goto L_089267EC;
L_0892670C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926728u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926728u) goto L_08926728;
    return;
L_08926728:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926740;
      }
      goto L_08926734;
    }
L_08926734:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926744;
      }
      goto L_08926740;
    }
L_08926740:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08926744;
L_08926744:
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
L_08926760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089267C0;
      }
      goto L_08926794;
    }
L_08926794:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089267A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089267A4u) goto L_089267A4;
    return;
L_089267A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089267BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089267BCu) goto L_089267BC;
    return;
L_089267BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089267C0;
L_089267C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926794;
      }
      goto L_089267CC;
    }
L_089267CC:
    ctx.set_gpr(2, 0u + 0u);
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
L_089267EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926850;
      }
      goto L_08926808;
    }
L_08926808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892681C;
      }
      goto L_08926814;
    }
L_08926814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926834;
      }
      goto L_0892681C;
    }
L_0892681C:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926834u) goto L_08926834;
    return;
L_08926834:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892686C;
      }
      goto L_0892683C;
    }
L_0892683C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08926848u) goto L_08926848;
    return;
L_08926848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892686C;
      }
      goto L_08926850;
    }
L_08926850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926864;
      }
      goto L_0892685C;
    }
L_0892685C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892686C;
      }
      goto L_08926864;
    }
L_08926864:
    ctx.set_gpr(31, 0x0892686Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0892686Cu) goto L_0892686C;
    return;
L_0892686C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
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
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08926918;
      }
      goto L_089268B4;
    }
L_089268B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089268D0;
      }
      goto L_089268C8;
    }
L_089268C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089268D8;
      }
      goto L_089268D0;
    }
L_089268D0:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8240));
    goto L_089268D8;
L_089268D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11532));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11536)));
    ctx.set_gpr(31, 0x089268F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089268F4u) goto L_089268F4;
    return;
L_089268F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892690Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x0892690Cu) goto L_0892690C;
    return;
L_0892690C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089269C8;
      }
      goto L_08926918;
    }
L_08926918:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926928u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926928u) goto L_08926928;
    return;
L_08926928:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089269AC;
      }
      goto L_08926938;
    }
L_08926938:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08926948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08926948u) goto L_08926948;
    return;
L_08926948:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08926960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08926960u) goto L_08926960;
    return;
L_08926960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089269A8;
      }
      goto L_08926968;
    }
L_08926968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089269A8;
      }
      goto L_0892697C;
    }
L_0892697C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892699Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x0892699Cu) goto L_0892699C;
    return;
L_0892699C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089269C8;
      }
      goto L_089269A8;
    }
L_089269A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089269AC;
L_089269AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089269B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089269B8u) goto L_089269B8;
    return;
L_089269B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926938;
      }
      goto L_089269C4;
    }
L_089269C4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089269C8;
L_089269C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089269F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926A1C;
      }
      goto L_08926A10;
    }
L_08926A10:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926AC8;
      }
      goto L_08926A1C;
    }
L_08926A1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11536)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08926A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08926A34u) goto L_08926A34;
    return;
L_08926A34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926A84;
      }
      goto L_08926A3C;
    }
L_08926A3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926A5C;
      }
      goto L_08926A54;
    }
L_08926A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926A64;
      }
      goto L_08926A5C;
    }
L_08926A5C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08926A64;
L_08926A64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08926A70u) goto L_08926A70;
    return;
L_08926A70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926A84;
      }
      goto L_08926A78;
    }
L_08926A78:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926AC8;
      }
      goto L_08926A84;
    }
L_08926A84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926A98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926A98u) goto L_08926A98;
    return;
L_08926A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08926AA8u) goto L_08926AA8;
    return;
L_08926AA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926ABC;
      }
      goto L_08926AB0;
    }
L_08926AB0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926AC8;
      }
      goto L_08926ABC;
    }
L_08926ABC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08926AC8;
L_08926AC8:
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
L_08926AE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08926B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08926B10u) goto L_08926B10;
    return;
L_08926B10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926B34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926B34u) goto L_08926B34;
    return;
L_08926B34:
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
L_08926B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926B64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08926B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08926B90u) goto L_08926B90;
    return;
L_08926B90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08926BB0;
      }
      goto L_08926B9C;
    }
L_08926B9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08926BA8u) goto L_08926BA8;
    return;
L_08926BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926BB4;
      }
      goto L_08926BB0;
    }
L_08926BB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08926BB4;
L_08926BB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08926BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08926BF0u) goto L_08926BF0;
    return;
L_08926BF0:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926C08;
      }
      goto L_08926BFC;
    }
L_08926BFC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926C58;
      }
      goto L_08926C08;
    }
L_08926C08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926C40;
      }
      goto L_08926C18;
    }
L_08926C18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08926C24u);
    // nop
    goto L_089277A0;
L_08926C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926C38;
      }
      goto L_08926C2C;
    }
L_08926C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08926C38u);
    // nop
    goto L_089275E8;
L_08926C38:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08926C40;
L_08926C40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08926C54u);
    // nop
    goto L_08927768;
L_08926C54:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08926C58;
L_08926C58:
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
L_08926C70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08926C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x08926C94u) goto L_08926C94;
    return;
L_08926C94:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17692));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926CB4;
      }
      goto L_08926CA8;
    }
L_08926CA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926CB4u);
    // nop
    goto L_08926CCC;
L_08926CB4:
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
L_08926CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08926CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x08926CE4u) goto L_08926CE4;
    return;
L_08926CE4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17692));
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
L_08926D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08926D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x08926D20u) goto L_08926D20;
    return;
L_08926D20:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17692));
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
L_08926D44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08926D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x08926D54u) goto L_08926D54;
    return;
L_08926D54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926D84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926D84u) goto L_08926D84;
    return;
L_08926D84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926D94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926DA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08926DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 410u, 0x08945D68u>(ctx, &aot_mem) && ctx.pc == 0x08926DB8u) goto L_08926DB8;
    return;
L_08926DB8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9940));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926DD8;
      }
      goto L_08926DCC;
    }
L_08926DCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08926DD8u);
    // nop
    goto L_08926DF0;
L_08926DD8:
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
L_08926DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08926E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08926E08u) goto L_08926E08;
    return;
L_08926E08:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9940));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
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
L_08926E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08926E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 399u, 0x08945C64u>(ctx, &aot_mem) && ctx.pc == 0x08926E58u) goto L_08926E58;
    return;
L_08926E58:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9940));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926EC4;
      }
      goto L_08926E78;
    }
L_08926E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08926E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08926E8Cu) goto L_08926E8C;
    return;
L_08926E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926EA4u) goto L_08926EA4;
    return;
L_08926EA4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08926EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08926EBCu) goto L_08926EBC;
    return;
L_08926EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926EC8;
      }
      goto L_08926EC4;
    }
L_08926EC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08926EC8;
L_08926EC8:
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
L_08926EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F28;
      }
      goto L_08926F08;
    }
L_08926F08:
    ctx.set_gpr(31, 0x08926F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08926F10u) goto L_08926F10;
    return;
L_08926F10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08926F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926F28u) goto L_08926F28;
    return;
L_08926F28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08926F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 424u, 0x08945E94u>(ctx, &aot_mem) && ctx.pc == 0x08926F34u) goto L_08926F34;
    return;
L_08926F34:
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
L_08926F4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926F84;
      }
      goto L_08926F78;
    }
L_08926F78:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F90;
      }
      goto L_08926F84;
    }
L_08926F84:
    ctx.set_gpr(31, 0x08926F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08926F8Cu) goto L_08926F8C;
    return;
L_08926F8C:
    ctx.set_gpr(3, ctx.gpr[2] >> 2u);
    goto L_08926F90;
L_08926F90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892705C;
      }
      goto L_08926F9C;
    }
L_08926F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926FB4;
      }
      goto L_08926FA8;
    }
L_08926FA8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926FC0;
      }
      goto L_08926FB4;
    }
L_08926FB4:
    ctx.set_gpr(31, 0x08926FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08926FBCu) goto L_08926FBC;
    return;
L_08926FBC:
    ctx.set_gpr(17, ctx.gpr[2] >> 2u);
    goto L_08926FC0;
L_08926FC0:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926FF4;
      }
      goto L_08926FCC;
    }
L_08926FCC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926FF4;
      }
      goto L_08926FD8;
    }
L_08926FD8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926FF0;
      }
      goto L_08926FE4;
    }
L_08926FE4:
    ctx.set_gpr(18, ctx.gpr[18] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926FF4;
      }
      goto L_08926FF0;
    }
L_08926FF0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(512));
    goto L_08926FF4;
L_08926FF4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926FD8;
      }
      goto L_08927000;
    }
L_08927000:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927028;
      }
      goto L_0892700C;
    }
L_0892700C:
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892701Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0892701Cu) goto L_0892701C;
    return;
L_0892701C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892703C;
      }
      goto L_08927028;
    }
L_08927028:
    ctx.set_gpr(6, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08927038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08927038u) goto L_08927038;
    return;
L_08927038:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_0892703C;
L_0892703C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892705Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0892705Cu) goto L_0892705C;
    return;
L_0892705C:
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
L_0892707C:
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927100;
      }
      goto L_089270B0;
    }
L_089270B0:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089270E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089270E0u) goto L_089270E0;
    return;
L_089270E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089270FC;
      }
      goto L_089270E8;
    }
L_089270E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927114;
      }
      goto L_089270FC;
    }
L_089270FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08927100;
L_08927100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089270B0;
      }
      goto L_08927110;
    }
L_08927110:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08927114;
L_08927114:
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
L_08927138:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892716C;
      }
      goto L_0892714C;
    }
L_0892714C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927168;
      }
      goto L_08927160;
    }
L_08927160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892717C;
      }
      goto L_08927168;
    }
L_08927168:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0892716C;
L_0892716C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892714C;
      }
      goto L_08927178;
    }
L_08927178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0892717C;
L_0892717C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089271B8;
      }
      goto L_089271A4;
    }
L_089271A4:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089271B8;
L_089271B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089271D0;
      }
      goto L_089271C4;
    }
L_089271C4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089271DC;
      }
      goto L_089271D0;
    }
L_089271D0:
    ctx.set_gpr(31, 0x089271D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089271D8u) goto L_089271D8;
    return;
L_089271D8:
    ctx.set_gpr(3, ctx.gpr[2] >> 2u);
    goto L_089271DC;
L_089271DC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089271A4;
      }
      goto L_089271E8;
    }
L_089271E8:
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
L_08927200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08927220u);
    // nop
    goto L_08926F4C;
L_08927220:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
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
L_0892723C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927294;
      }
      goto L_0892724C;
    }
L_0892724C:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927270;
      }
      goto L_08927258;
    }
L_08927258:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08927270;
L_08927270:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927258;
      }
      goto L_08927284;
    }
L_08927284:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927298;
      }
      goto L_08927294;
    }
L_08927294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08927298;
L_08927298:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089272A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089272E0;
      }
      goto L_089272B4;
    }
L_089272B4:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089272E0;
      }
      goto L_089272CC;
    }
L_089272CC:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089272D8u);
    // nop
    goto L_0892723C;
L_089272D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089272F0;
      }
      goto L_089272E0;
    }
L_089272E0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089272B4;
      }
      goto L_089272EC;
    }
L_089272EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089272F0;
L_089272F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927300:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08927328u);
    // nop
    goto L_08926F4C;
L_08927328:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
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
L_08927360:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08927390u);
    // nop
    goto L_08926DA0;
L_08927390:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9848));
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
L_089273B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089273CCu);
    // nop
    goto L_08926DF0;
L_089273CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9848));
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
L_089273F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08927408u);
    // nop
    goto L_08926E34;
L_08927408:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9848));
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
L_0892742C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08927448u);
    // nop
    goto L_08927468;
L_08927448:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08927454u);
    // nop
    goto L_08926EE8;
L_08927454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089274E8;
      }
      goto L_08927494;
    }
L_08927494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089274D8;
      }
      goto L_0892749C;
    }
L_0892749C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089274D8;
      }
      goto L_089274B4;
    }
L_089274B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089274D8;
      }
      goto L_089274D0;
    }
L_089274D0:
    ctx.set_gpr(31, 0x089274D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089274D8u) goto L_089274D8;
    return;
L_089274D8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892749C;
      }
      goto L_089274E8;
    }
L_089274E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089274F8u);
    // nop
    goto L_08927200;
L_089274F8:
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
L_08927514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927530;
      }
      goto L_08927524;
    }
L_08927524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08927530;
L_08927530:
    ctx.set_gpr(31, 0x08927538u);
    // nop
    goto L_08927300;
L_08927538:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892757C;
      }
      goto L_08927570;
    }
L_08927570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892757C;
L_0892757C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089275B8;
      }
      goto L_08927594;
    }
L_08927594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089275B8;
      }
      goto L_089275B0;
    }
L_089275B0:
    ctx.set_gpr(31, 0x089275B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089275B8u) goto L_089275B8;
    return;
L_089275B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089275CCu);
    // nop
    goto L_08927360;
L_089275CC:
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
L_089275E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16384));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(31, 0x08927614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x08927614u) goto L_08927614;
    return;
L_08927614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08927620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08927620u) goto L_08927620;
    return;
L_08927620:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927638;
      }
      goto L_0892762C;
    }
L_0892762C:
    ctx.set_gpr(31, 0x08927634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08927634u) goto L_08927634;
    return;
L_08927634:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08927638;
L_08927638:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08927648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 861u, 0x0895BB00u>(ctx, &aot_mem) && ctx.pc == 0x08927648u) goto L_08927648;
    return;
L_08927648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927664;
      }
      goto L_08927650;
    }
L_08927650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x08927664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 787u, 0x0895B490u>(ctx, &aot_mem) && ctx.pc == 0x08927664u) goto L_08927664;
    return;
L_08927664:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08927678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 24u, 0x0895C130u>(ctx, &aot_mem) && ctx.pc == 0x08927678u) goto L_08927678;
    return;
L_08927678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927698;
      }
      goto L_08927680;
    }
L_08927680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08927698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 865u, 0x0895BB54u>(ctx, &aot_mem) && ctx.pc == 0x08927698u) goto L_08927698;
    return;
L_08927698:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
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
L_089276B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927704;
      }
      goto L_089276D4;
    }
L_089276D4:
    ctx.set_gpr(31, 0x089276DCu);
    // nop
    goto L_08927720;
L_089276DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089276ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 789u, 0x0895B4ECu>(ctx, &aot_mem) && ctx.pc == 0x089276ECu) goto L_089276EC;
    return;
L_089276EC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08927704;
      }
      goto L_089276F8;
    }
L_089276F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08927704u);
    // nop
    goto L_089277F0;
L_08927704:
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
L_08927720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892774C;
      }
      goto L_08927738;
    }
L_08927738:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0892774Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 867u, 0x0895BBB0u>(ctx, &aot_mem) && ctx.pc == 0x0892774Cu) goto L_0892774C;
    return;
L_0892774C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927738;
      }
      goto L_08927754;
    }
L_08927754:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927784;
      }
      goto L_08927778;
    }
L_08927778:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927790;
      }
      goto L_08927784;
    }
L_08927784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08927790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 805u, 0x0895B608u>(ctx, &aot_mem) && ctx.pc == 0x08927790u) goto L_08927790;
    return;
L_08927790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089277A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089277B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x089277B8u) goto L_089277B8;
    return;
L_089277B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089277C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089277C4u) goto L_089277C4;
    return;
L_089277C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089277DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089277DCu) goto L_089277DC;
    return;
L_089277DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089277F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08927808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x08927808u) goto L_08927808;
    return;
L_08927808:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08927814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08927814u) goto L_08927814;
    return;
L_08927814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892782Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892782Cu) goto L_0892782C;
    return;
L_0892782C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927840:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892784C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927894;
      }
      goto L_08927888;
    }
L_08927888:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08927894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08927894u) goto L_08927894;
    return;
L_08927894:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089278ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089278ACu) goto L_089278AC;
    return;
L_089278AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x089278C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x089278C0u) goto L_089278C0;
    return;
L_089278C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089278D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x089278D0u) goto L_089278D0;
    return;
L_089278D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089278DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x089278DCu) goto L_089278DC;
    return;
L_089278DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x089278ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x089278ECu) goto L_089278EC;
    return;
L_089278EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089278FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x089278FCu) goto L_089278FC;
    return;
L_089278FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08927908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08927908u) goto L_08927908;
    return;
L_08927908:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892791C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08927948;
      }
      goto L_0892793C;
    }
L_0892793C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927958;
      }
      goto L_08927948;
    }
L_08927948:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08927958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08927958u) goto L_08927958;
    return;
L_08927958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08927978;
      }
      goto L_08927968;
    }
L_08927968:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08927978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08927978u) goto L_08927978;
    return;
L_08927978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089279CC;
      }
      goto L_08927984;
    }
L_08927984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892799C;
      }
      goto L_08927990;
    }
L_08927990:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089279AC;
      }
      goto L_0892799C;
    }
L_0892799C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089279ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089279ACu) goto L_089279AC;
    return;
L_089279AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089279CC;
      }
      goto L_089279BC;
    }
L_089279BC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089279CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089279CCu) goto L_089279CC;
    return;
L_089279CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089279D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x089279D8u) goto L_089279D8;
    return;
L_089279D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089279E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 135u, 0x0895C88Cu>(ctx, &aot_mem) && ctx.pc == 0x089279E4u) goto L_089279E4;
    return;
L_089279E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089279F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08927A68;
      }
      goto L_08927A40;
    }
L_08927A40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927A5C;
      }
      goto L_08927A50;
    }
L_08927A50:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927A68;
      }
      goto L_08927A5C;
    }
L_08927A5C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08927A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08927A68u) goto L_08927A68;
    return;
L_08927A68:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927A7C:
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
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08927B8C;
      }
      goto L_08927AC4;
    }
L_08927AC4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B8C;
      }
      goto L_08927AE0;
    }
L_08927AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B34;
      }
      goto L_08927AFC;
    }
L_08927AFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08927B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08927B0Cu) goto L_08927B0C;
    return;
L_08927B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B30;
      }
      goto L_08927B14;
    }
L_08927B14:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08927B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08927B28u) goto L_08927B28;
    return;
L_08927B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B34;
      }
      goto L_08927B30;
    }
L_08927B30:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08927B34;
L_08927B34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B7C;
      }
      goto L_08927B44;
    }
L_08927B44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08927B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08927B54u) goto L_08927B54;
    return;
L_08927B54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B78;
      }
      goto L_08927B5C;
    }
L_08927B5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08927B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08927B70u) goto L_08927B70;
    return;
L_08927B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B7C;
      }
      goto L_08927B78;
    }
L_08927B78:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08927B7C;
L_08927B7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08927B8C;
L_08927B8C:
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
L_08927BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08927BE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927BE0u) goto L_08927BE0;
    return;
L_08927BE0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    goto L_08927BF0;
L_08927BF0:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08927C18;
      }
      goto L_08927C0C;
    }
L_08927C0C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927C70;
      }
      goto L_08927C18;
    }
L_08927C18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C3C;
    }
L_08927C3C:
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927C6C;
      }
      goto L_08927C48;
    }
L_08927C48:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927C5C;
      }
      goto L_08927C58;
    }
L_08927C58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08927C5C;
L_08927C5C:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927BF0;
      }
      goto L_08927C6C;
    }
L_08927C6C:
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    goto L_08927C70;
L_08927C70:
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
L_08927C88:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08927CE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927CE4u) goto L_08927CE4;
    return;
L_08927CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08927CF4;
L_08927CF4:
    ctx.set_gpr(8, ctx.gpr[2] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08927D1C;
      }
      goto L_08927D10;
    }
L_08927D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E04;
      }
      goto L_08927D1C;
    }
L_08927D1C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(16, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08927DDC;
      }
      goto L_08927D40;
    }
L_08927D40:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D48;
    }
L_08927D48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08927D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08927D58u) goto L_08927D58;
    return;
L_08927D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D7C;
      }
      goto L_08927D60;
    }
L_08927D60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08927D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08927D74u) goto L_08927D74;
    return;
L_08927D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D7C;
    }
L_08927D7C:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08927D80;
L_08927D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC8;
      }
      goto L_08927D90;
    }
L_08927D90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08927DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x08927DA0u) goto L_08927DA0;
    return;
L_08927DA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927DA8;
    }
L_08927DA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08927DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08927DBCu) goto L_08927DBC;
    return;
L_08927DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC8;
      }
      goto L_08927DC4;
    }
L_08927DC4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08927DC8;
L_08927DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E00;
      }
      goto L_08927DDC;
    }
L_08927DDC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927DF0;
      }
      goto L_08927DEC;
    }
L_08927DEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08927DF0;
L_08927DF0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927CF4;
      }
      goto L_08927E00;
    }
L_08927E00:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_08927E04;
L_08927E04:
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
L_08927E38:
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
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08927E80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927E80u) goto L_08927E80;
    return;
L_08927E80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08927E94;
      }
      goto L_08927E8C;
    }
L_08927E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927EBC;
      }
      goto L_08927E94;
    }
L_08927E94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08927EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927EBCu) goto L_08927EBC;
    return;
L_08927EBC:
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
L_08927EE4:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08927F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927F38u) goto L_08927F38;
    return;
L_08927F38:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08927F4C;
      }
      goto L_08927F44;
    }
L_08927F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 4u, 0x08928038u>(ctx, &aot_mem); return;
      }
      goto L_08927F4C;
    }
L_08927F4C:
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(17, ctx.lo);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F8C;
      }
      goto L_08927F6C;
    }
L_08927F6C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F8C;
      }
      goto L_08927F78;
    }
L_08927F78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08927F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08927F88u) goto L_08927F88;
    return;
L_08927F88:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08927F8C;
L_08927F8C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FB4;
      }
      goto L_08927F94;
    }
L_08927F94:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FB4;
      }
      goto L_08927FA0;
    }
L_08927FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08927FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 192u, 0x0895CC08u>(ctx, &aot_mem) && ctx.pc == 0x08927FB0u) goto L_08927FB0;
    return;
L_08927FB0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08927FB4;
L_08927FB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 1u, 0x08928004u>(ctx, &aot_mem); return;
      }
      goto L_08927FE4;
    }
L_08927FE4:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 1u, 0x08928004u>(ctx, &aot_mem); return;
      }
      goto L_08927FF8;
    }
L_08927FF8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08928004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x08924000u, 16384u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x08924004u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892405Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924068u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924074u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924094u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892409Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924108u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924120u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924130u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924148u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892416Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924178u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924198u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892420Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924220u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924230u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924238u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924244u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924254u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924260u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924274u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892427Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924290u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892430Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924320u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924338u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924350u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924368u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892436Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892438Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924398u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924400u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924408u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892441Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924428u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924438u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924440u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924460u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924470u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924480u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924494u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924504u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892453Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892456Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924584u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924604u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892461Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924620u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892462Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924638u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892464Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924658u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924678u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924684u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924718u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924744u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924758u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892477Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892478Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892479Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924834u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892484Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892485Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892487Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924884u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924904u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892491Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892493Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924944u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924978u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924994u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924998u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ABCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ED8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925008u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925034u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925050u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892507Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925094u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892512Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892514Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925158u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925164u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925170u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892518Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925210u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892522Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925248u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892524Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925258u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925274u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925280u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925288u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925294u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892529Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892530Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892533Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925350u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925378u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925384u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892538Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925394u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925400u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925418u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925428u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925444u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925450u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925458u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925464u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892546Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925480u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925494u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925524u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892553Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892556Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925574u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892559Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925608u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925684u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892569Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925700u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925710u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892571Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892572Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925748u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892574Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925764u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892578Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925810u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925824u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892583Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925854u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925884u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892589Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925920u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892593Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925950u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892597Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892599Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ABCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ADCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926008u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892634Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926378u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926380u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926394u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926408u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926434u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892644Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926460u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926470u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926474u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926480u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892648Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926498u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926504u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926508u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892652Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892655Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926574u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926588u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892660Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926644u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892666Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892667Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926688u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892669Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892670Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926734u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926744u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926760u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926808u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926814u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892681Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926834u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892683Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926850u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892685Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892686Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926880u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892690Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926918u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926960u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892697Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892699Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926ABCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892700Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892701Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927028u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927038u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892703Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892705Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892707Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927100u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892714Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927160u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892716Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927178u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892717Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927220u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892723Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892724Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927258u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927284u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927294u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927298u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927360u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927378u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927390u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927408u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892742Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927448u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927454u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927494u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892749Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927514u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927524u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927530u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892757Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927614u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927620u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892762Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927638u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927664u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927678u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927680u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927698u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927720u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892774Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927754u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927768u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927784u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927790u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927808u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927814u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892782Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892784Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892791Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892793Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927978u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927990u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892799Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FF8u, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
