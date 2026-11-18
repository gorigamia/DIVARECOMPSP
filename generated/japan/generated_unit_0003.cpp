#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0003[4093] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 10, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 15, 0, 16, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 24, 0, 0, 25, 26, 0, 0, 27, 0, 0, 28, 29, 0, 0, 30, 31, 32, 0, 0, 33, 34, 0, 0, 35, 0, 36, 0,
    0, 0, 37, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0,
    0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 71, 72, 0, 0, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 82, 0, 83, 84, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0,
    0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0,
    98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139,
    0, 0, 0, 140, 141, 0, 0, 142, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0,
    0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0,
    165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0,
    0, 0, 175, 0, 176, 177, 0, 0, 178, 179, 0, 180, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0,
    0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0,
    0, 234, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0,
    0, 0, 275, 0, 276, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 294, 0, 0, 0,
    0, 295, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 304, 0, 0, 0, 305,
    0, 0, 306, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    330, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 340, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0, 352, 0, 353, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 356, 0, 357, 0, 0, 0, 358, 0, 359, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 371, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 373, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 384, 0, 385, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389,
    0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407,
    0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414,
    415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 420, 0, 421, 422, 0, 423, 0, 0, 0, 424, 425, 0, 0, 426, 0, 427, 0, 428,
    0, 0, 0, 0, 429, 0, 430, 0, 431, 432, 0, 433, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 440, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 445,
    0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 0,
    0, 470, 471, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0,
    0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 497,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 500, 0, 0, 0, 0, 0, 501, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 508, 509, 0, 0, 0, 0, 510, 0,
    0, 511, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 518,
    0, 0, 0, 0, 0, 519, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0,
    524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0,
    533, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0,
    0, 0, 545, 546, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 551, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0,
    556, 557, 0, 0, 558, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 574, 0,
    0, 0, 575, 0, 0, 576, 577, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0,
    0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0,
    0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0,
    0, 614, 0, 615, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0,
    0, 626, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0,
    0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 640, 641, 0, 0, 642, 0, 643, 0, 644, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0,
    649, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653, 654, 0, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 658, 659, 0, 0, 660, 0, 0, 0,
    661, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 664, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 668, 0, 0, 0,
    0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0,
    0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 684, 0, 0, 0, 0, 685, 0,
    686, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    692, 0, 0, 693, 694, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 700, 0, 0, 0, 0, 701,
    702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 705, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0,
    0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0,
    721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 724, 0, 725, 0, 0, 726, 727, 0, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731,
    0, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740,
    0, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0,
    748, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 0, 752, 753, 0, 0, 0, 0, 0, 754, 755, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0,
    759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 763, 0, 0, 0, 764,
    0, 765, 0, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0,
    0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 786, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0,
    0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 794, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0,
    800, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 804, 0,
    0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 809, 0, 0, 0, 0, 810, 0, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0,
    0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0,
    0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0,
    824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 828, 829, 0, 0, 0, 0, 0, 0, 830, 831, 0, 0, 0,
    832, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0,
    0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 840, 0,
    841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 846, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 852, 853, 0, 0, 854, 0, 0, 855, 856, 0, 0, 0, 0, 0, 857, 0, 858,
    0, 0, 0, 859, 0, 0, 0, 0, 860, 861, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 865,
    0, 866, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870,
    0, 871, 0, 0, 872, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 879,
    880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0,
    0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 892, 0, 893, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 900, 0, 901, 902, 0, 0, 0,
    0, 0, 0, 0, 903, 0, 0, 0, 904, 0, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0,
    0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 911, 0, 0, 0, 912, 0, 0, 913, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0,
    0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0,
    0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 921, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926,
};
void recomp_unit_0003_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08810000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0003[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08810000;
    case 2u: goto L_08810008;
    case 3u: goto L_08810020;
    case 4u: goto L_0881002C;
    case 5u: goto L_08810034;
    case 6u: goto L_0881003C;
    case 7u: goto L_08810048;
    case 8u: goto L_0881005C;
    case 9u: goto L_0881006C;
    case 10u: goto L_08810070;
    case 11u: goto L_08810080;
    case 12u: goto L_0881008C;
    case 13u: goto L_0881009C;
    case 14u: goto L_088100A8;
    case 15u: goto L_088100AC;
    case 16u: goto L_088100B4;
    case 17u: goto L_088100B8;
    case 18u: goto L_088100C0;
    case 19u: goto L_088100D4;
    case 20u: goto L_088100E0;
    case 21u: goto L_088100E8;
    case 22u: goto L_088100EC;
    case 23u: goto L_0881010C;
    case 24u: goto L_08810114;
    case 25u: goto L_08810120;
    case 26u: goto L_08810124;
    case 27u: goto L_08810130;
    case 28u: goto L_0881013C;
    case 29u: goto L_08810140;
    case 30u: goto L_0881014C;
    case 31u: goto L_08810150;
    case 32u: goto L_08810154;
    case 33u: goto L_08810160;
    case 34u: goto L_08810164;
    case 35u: goto L_08810170;
    case 36u: goto L_08810178;
    case 37u: goto L_08810188;
    case 38u: goto L_0881018C;
    case 39u: goto L_08810194;
    case 40u: goto L_088101B8;
    case 41u: goto L_088101C8;
    case 42u: goto L_088101DC;
    case 43u: goto L_088101EC;
    case 44u: goto L_088101F8;
    case 45u: goto L_08810208;
    case 46u: goto L_08810210;
    case 47u: goto L_08810218;
    case 48u: goto L_08810224;
    case 49u: goto L_0881022C;
    case 50u: goto L_08810234;
    case 51u: goto L_08810244;
    case 52u: goto L_08810258;
    case 53u: goto L_0881026C;
    case 54u: goto L_0881027C;
    case 55u: goto L_08810294;
    case 56u: goto L_0881029C;
    case 57u: goto L_088102AC;
    case 58u: goto L_088102BC;
    case 59u: goto L_088102D0;
    case 60u: goto L_088102E0;
    case 61u: goto L_088102EC;
    case 62u: goto L_088102F4;
    case 63u: goto L_08810308;
    case 64u: goto L_08810310;
    case 65u: goto L_0881031C;
    case 66u: goto L_08810334;
    case 67u: goto L_08810338;
    case 68u: goto L_08810348;
    case 69u: goto L_08810358;
    case 70u: goto L_08810360;
    case 71u: goto L_08810364;
    case 72u: goto L_08810368;
    case 73u: goto L_08810378;
    case 74u: goto L_0881038C;
    case 75u: goto L_088103AC;
    case 76u: goto L_088103B0;
    case 77u: goto L_088103B8;
    case 78u: goto L_088103C4;
    case 79u: goto L_088103CC;
    case 80u: goto L_088103D4;
    case 81u: goto L_088103E0;
    case 82u: goto L_088103E4;
    case 83u: goto L_088103EC;
    case 84u: goto L_088103F0;
    case 85u: goto L_088103F8;
    case 86u: goto L_08810418;
    case 87u: goto L_08810450;
    case 88u: goto L_08810468;
    case 89u: goto L_08810470;
    case 90u: goto L_08810478;
    case 91u: goto L_08810484;
    case 92u: goto L_08810498;
    case 93u: goto L_088104B4;
    case 94u: goto L_088104C0;
    case 95u: goto L_088104E4;
    case 96u: goto L_088104EC;
    case 97u: goto L_088104F8;
    case 98u: goto L_08810500;
    case 99u: goto L_08810508;
    case 100u: goto L_0881051C;
    case 101u: goto L_0881053C;
    case 102u: goto L_08810550;
    case 103u: goto L_08810560;
    case 104u: goto L_08810574;
    case 105u: goto L_08810590;
    case 106u: goto L_08810598;
    case 107u: goto L_088105A8;
    case 108u: goto L_088105B8;
    case 109u: goto L_088105D8;
    case 110u: goto L_088105E0;
    case 111u: goto L_088105E8;
    case 112u: goto L_088105F4;
    case 113u: goto L_088105FC;
    case 114u: goto L_08810610;
    case 115u: goto L_08810624;
    case 116u: goto L_0881062C;
    case 117u: goto L_0881063C;
    case 118u: goto L_08810640;
    case 119u: goto L_08810660;
    case 120u: goto L_0881066C;
    case 121u: goto L_08810688;
    case 122u: goto L_08810698;
    case 123u: goto L_088106A0;
    case 124u: goto L_088106A8;
    case 125u: goto L_088106B4;
    case 126u: goto L_088106BC;
    case 127u: goto L_088106C4;
    case 128u: goto L_088106D0;
    case 129u: goto L_088106D8;
    case 130u: goto L_088106E8;
    case 131u: goto L_08810714;
    case 132u: goto L_08810728;
    case 133u: goto L_08810734;
    case 134u: goto L_08810740;
    case 135u: goto L_08810750;
    case 136u: goto L_0881075C;
    case 137u: goto L_08810764;
    case 138u: goto L_08810770;
    case 139u: goto L_0881077C;
    case 140u: goto L_0881078C;
    case 141u: goto L_08810790;
    case 142u: goto L_0881079C;
    case 143u: goto L_088107AC;
    case 144u: goto L_088107B0;
    case 145u: goto L_088107D0;
    case 146u: goto L_088107D8;
    case 147u: goto L_088107E4;
    case 148u: goto L_088107F0;
    case 149u: goto L_088107F8;
    case 150u: goto L_08810804;
    case 151u: goto L_08810818;
    case 152u: goto L_08810838;
    case 153u: goto L_0881083C;
    case 154u: goto L_08810844;
    case 155u: goto L_08810858;
    case 156u: goto L_08810868;
    case 157u: goto L_08810870;
    case 158u: goto L_08810884;
    case 159u: goto L_08810898;
    case 160u: goto L_088108B8;
    case 161u: goto L_088108C8;
    case 162u: goto L_088108E0;
    case 163u: goto L_088108EC;
    case 164u: goto L_088108F8;
    case 165u: goto L_08810900;
    case 166u: goto L_0881090C;
    case 167u: goto L_08810914;
    case 168u: goto L_08810924;
    case 169u: goto L_08810934;
    case 170u: goto L_0881093C;
    case 171u: goto L_08810954;
    case 172u: goto L_08810964;
    case 173u: goto L_0881096C;
    case 174u: goto L_08810978;
    case 175u: goto L_08810988;
    case 176u: goto L_08810990;
    case 177u: goto L_08810994;
    case 178u: goto L_088109A0;
    case 179u: goto L_088109A4;
    case 180u: goto L_088109AC;
    case 181u: goto L_088109B0;
    case 182u: goto L_088109BC;
    case 183u: goto L_088109E4;
    case 184u: goto L_088109FC;
    case 185u: goto L_08810A08;
    case 186u: goto L_08810A1C;
    case 187u: goto L_08810A38;
    case 188u: goto L_08810A54;
    case 189u: goto L_08810A68;
    case 190u: goto L_08810A74;
    case 191u: goto L_08810A88;
    case 192u: goto L_08810AA4;
    case 193u: goto L_08810AC4;
    case 194u: goto L_08810AD8;
    case 195u: goto L_08810AE0;
    case 196u: goto L_08810AF4;
    case 197u: goto L_08810B08;
    case 198u: goto L_08810B10;
    case 199u: goto L_08810B18;
    case 200u: goto L_08810B1C;
    case 201u: goto L_08810B28;
    case 202u: goto L_08810B30;
    case 203u: goto L_08810B38;
    case 204u: goto L_08810B44;
    case 205u: goto L_08810B50;
    case 206u: goto L_08810B58;
    case 207u: goto L_08810B60;
    case 208u: goto L_08810B74;
    case 209u: goto L_08810B88;
    case 210u: goto L_08810B9C;
    case 211u: goto L_08810BA4;
    case 212u: goto L_08810BB0;
    case 213u: goto L_08810BBC;
    case 214u: goto L_08810BCC;
    case 215u: goto L_08810BD8;
    case 216u: goto L_08810C0C;
    case 217u: goto L_08810C18;
    case 218u: goto L_08810C20;
    case 219u: goto L_08810C2C;
    case 220u: goto L_08810C48;
    case 221u: goto L_08810C58;
    case 222u: goto L_08810C68;
    case 223u: goto L_08810C78;
    case 224u: goto L_08810C84;
    case 225u: goto L_08810C90;
    case 226u: goto L_08810C9C;
    case 227u: goto L_08810CA4;
    case 228u: goto L_08810CC0;
    case 229u: goto L_08810CC8;
    case 230u: goto L_08810CD4;
    case 231u: goto L_08810CD8;
    case 232u: goto L_08810CE4;
    case 233u: goto L_08810CF0;
    case 234u: goto L_08810D04;
    case 235u: goto L_08810D08;
    case 236u: goto L_08810D10;
    case 237u: goto L_08810D20;
    case 238u: goto L_08810D2C;
    case 239u: goto L_08810D40;
    case 240u: goto L_08810D44;
    case 241u: goto L_08810D60;
    case 242u: goto L_08810D68;
    case 243u: goto L_08810D70;
    case 244u: goto L_08810D78;
    case 245u: goto L_08810D80;
    case 246u: goto L_08810DA8;
    case 247u: goto L_08810E00;
    case 248u: goto L_08810E34;
    case 249u: goto L_08810E4C;
    case 250u: goto L_08810E5C;
    case 251u: goto L_08810E78;
    case 252u: goto L_08810EC4;
    case 253u: goto L_08810ED8;
    case 254u: goto L_08810FEC;
    case 255u: goto L_08811004;
    case 256u: goto L_08811034;
    case 257u: goto L_08811040;
    case 258u: goto L_0881107C;
    case 259u: goto L_08811088;
    case 260u: goto L_08811090;
    case 261u: goto L_088110A0;
    case 262u: goto L_088110B0;
    case 263u: goto L_088110C4;
    case 264u: goto L_088110CC;
    case 265u: goto L_088110D8;
    case 266u: goto L_088110DC;
    case 267u: goto L_0881110C;
    case 268u: goto L_0881113C;
    case 269u: goto L_08811148;
    case 270u: goto L_0881118C;
    case 271u: goto L_08811194;
    case 272u: goto L_088111B8;
    case 273u: goto L_088111EC;
    case 274u: goto L_088111F4;
    case 275u: goto L_08811208;
    case 276u: goto L_08811210;
    case 277u: goto L_08811214;
    case 278u: goto L_08811230;
    case 279u: goto L_08811238;
    case 280u: goto L_08811254;
    case 281u: goto L_08811270;
    case 282u: goto L_08811278;
    case 283u: goto L_08811280;
    case 284u: goto L_0881129C;
    case 285u: goto L_088112B8;
    case 286u: goto L_088112D4;
    case 287u: goto L_088112DC;
    case 288u: goto L_08811308;
    case 289u: goto L_08811318;
    case 290u: goto L_08811334;
    case 291u: goto L_08811344;
    case 292u: goto L_08811358;
    case 293u: goto L_0881136C;
    case 294u: goto L_08811370;
    case 295u: goto L_08811384;
    case 296u: goto L_08811388;
    case 297u: goto L_08811390;
    case 298u: goto L_088113A0;
    case 299u: goto L_088113AC;
    case 300u: goto L_088113BC;
    case 301u: goto L_088113C8;
    case 302u: goto L_088113D4;
    case 303u: goto L_088113E8;
    case 304u: goto L_088113EC;
    case 305u: goto L_088113FC;
    case 306u: goto L_08811408;
    case 307u: goto L_0881140C;
    case 308u: goto L_0881141C;
    case 309u: goto L_08811434;
    case 310u: goto L_0881143C;
    case 311u: goto L_08811444;
    case 312u: goto L_08811460;
    case 313u: goto L_08811468;
    case 314u: goto L_0881147C;
    case 315u: goto L_08811490;
    case 316u: goto L_088114A8;
    case 317u: goto L_088114F8;
    case 318u: goto L_08811504;
    case 319u: goto L_08811520;
    case 320u: goto L_0881153C;
    case 321u: goto L_0881154C;
    case 322u: goto L_08811554;
    case 323u: goto L_08811560;
    case 324u: goto L_08811594;
    case 325u: goto L_0881159C;
    case 326u: goto L_088115AC;
    case 327u: goto L_088115B8;
    case 328u: goto L_088115C8;
    case 329u: goto L_088115F0;
    case 330u: goto L_08811600;
    case 331u: goto L_08811604;
    case 332u: goto L_08811618;
    case 333u: goto L_08811620;
    case 334u: goto L_0881163C;
    case 335u: goto L_08811678;
    case 336u: goto L_08811688;
    case 337u: goto L_08811694;
    case 338u: goto L_088116A4;
    case 339u: goto L_088116B4;
    case 340u: goto L_088116B8;
    case 341u: goto L_088116C4;
    case 342u: goto L_088116D4;
    case 343u: goto L_088116DC;
    case 344u: goto L_088116E4;
    case 345u: goto L_08811710;
    case 346u: goto L_0881171C;
    case 347u: goto L_0881172C;
    case 348u: goto L_08811740;
    case 349u: goto L_08811748;
    case 350u: goto L_08811754;
    case 351u: goto L_08811758;
    case 352u: goto L_0881176C;
    case 353u: goto L_08811774;
    case 354u: goto L_0881177C;
    case 355u: goto L_088117A0;
    case 356u: goto L_088117A4;
    case 357u: goto L_088117AC;
    case 358u: goto L_088117BC;
    case 359u: goto L_088117C4;
    case 360u: goto L_088117C8;
    case 361u: goto L_088117D4;
    case 362u: goto L_08811808;
    case 363u: goto L_0881180C;
    case 364u: goto L_08811824;
    case 365u: goto L_0881182C;
    case 366u: goto L_08811844;
    case 367u: goto L_0881184C;
    case 368u: goto L_0881185C;
    case 369u: goto L_0881186C;
    case 370u: goto L_08811874;
    case 371u: goto L_08811878;
    case 372u: goto L_088118AC;
    case 373u: goto L_088118B0;
    case 374u: goto L_088118BC;
    case 375u: goto L_088118CC;
    case 376u: goto L_088118D4;
    case 377u: goto L_088118E0;
    case 378u: goto L_088118EC;
    case 379u: goto L_088118F8;
    case 380u: goto L_08811900;
    case 381u: goto L_0881190C;
    case 382u: goto L_0881192C;
    case 383u: goto L_08811930;
    case 384u: goto L_08811944;
    case 385u: goto L_0881194C;
    case 386u: goto L_08811950;
    case 387u: goto L_0881195C;
    case 388u: goto L_08811970;
    case 389u: goto L_0881197C;
    case 390u: goto L_08811988;
    case 391u: goto L_0881199C;
    case 392u: goto L_088119A4;
    case 393u: goto L_088119B8;
    case 394u: goto L_088119BC;
    case 395u: goto L_088119C8;
    case 396u: goto L_088119D8;
    case 397u: goto L_088119E0;
    case 398u: goto L_088119E8;
    case 399u: goto L_088119F4;
    case 400u: goto L_08811A18;
    case 401u: goto L_08811A20;
    case 402u: goto L_08811A28;
    case 403u: goto L_08811A30;
    case 404u: goto L_08811A38;
    case 405u: goto L_08811A5C;
    case 406u: goto L_08811A68;
    case 407u: goto L_08811A7C;
    case 408u: goto L_08811A84;
    case 409u: goto L_08811AA4;
    case 410u: goto L_08811AAC;
    case 411u: goto L_08811AB4;
    case 412u: goto L_08811ABC;
    case 413u: goto L_08811AF0;
    case 414u: goto L_08811AFC;
    case 415u: goto L_08811B00;
    case 416u: goto L_08811B0C;
    case 417u: goto L_08811B14;
    case 418u: goto L_08811B1C;
    case 419u: goto L_08811B30;
    case 420u: goto L_08811B38;
    case 421u: goto L_08811B40;
    case 422u: goto L_08811B44;
    case 423u: goto L_08811B4C;
    case 424u: goto L_08811B5C;
    case 425u: goto L_08811B60;
    case 426u: goto L_08811B6C;
    case 427u: goto L_08811B74;
    case 428u: goto L_08811B7C;
    case 429u: goto L_08811B90;
    case 430u: goto L_08811B98;
    case 431u: goto L_08811BA0;
    case 432u: goto L_08811BA4;
    case 433u: goto L_08811BAC;
    case 434u: goto L_08811BB0;
    case 435u: goto L_08811BD8;
    case 436u: goto L_08811BE0;
    case 437u: goto L_08811C28;
    case 438u: goto L_08811C30;
    case 439u: goto L_08811C3C;
    case 440u: goto L_08811C40;
    case 441u: goto L_08811C44;
    case 442u: goto L_08811C60;
    case 443u: goto L_08811C68;
    case 444u: goto L_08811C74;
    case 445u: goto L_08811C7C;
    case 446u: goto L_08811C84;
    case 447u: goto L_08811C9C;
    case 448u: goto L_08811CB4;
    case 449u: goto L_08811CCC;
    case 450u: goto L_08811CE4;
    case 451u: goto L_08811CEC;
    case 452u: goto L_08811D94;
    case 453u: goto L_08811DDC;
    case 454u: goto L_08811DEC;
    case 455u: goto L_08811DFC;
    case 456u: goto L_08811E28;
    case 457u: goto L_08811E38;
    case 458u: goto L_08811E3C;
    case 459u: goto L_08811E50;
    case 460u: goto L_08811E58;
    case 461u: goto L_08811E74;
    case 462u: goto L_08811E98;
    case 463u: goto L_08811EAC;
    case 464u: goto L_08811EB0;
    case 465u: goto L_08811EC4;
    case 466u: goto L_08811ED0;
    case 467u: goto L_08811ED8;
    case 468u: goto L_08811EE8;
    case 469u: goto L_08811EF0;
    case 470u: goto L_08811F04;
    case 471u: goto L_08811F08;
    case 472u: goto L_08811F14;
    case 473u: goto L_08811F20;
    case 474u: goto L_08811F28;
    case 475u: goto L_08811F60;
    case 476u: goto L_08811F68;
    case 477u: goto L_08811F70;
    case 478u: goto L_08811F78;
    case 479u: goto L_08811F84;
    case 480u: goto L_08811F8C;
    case 481u: goto L_08811F94;
    case 482u: goto L_08811FC0;
    case 483u: goto L_08811FC8;
    case 484u: goto L_08811FD0;
    case 485u: goto L_08811FF4;
    case 486u: goto L_08812008;
    case 487u: goto L_0881201C;
    case 488u: goto L_08812030;
    case 489u: goto L_08812048;
    case 490u: goto L_0881205C;
    case 491u: goto L_08812074;
    case 492u: goto L_088120B4;
    case 493u: goto L_088120C4;
    case 494u: goto L_088120D0;
    case 495u: goto L_088120D8;
    case 496u: goto L_088120E4;
    case 497u: goto L_088120FC;
    case 498u: goto L_08812128;
    case 499u: goto L_0881215C;
    case 500u: goto L_08812160;
    case 501u: goto L_08812178;
    case 502u: goto L_08812184;
    case 503u: goto L_088121A8;
    case 504u: goto L_088121B0;
    case 505u: goto L_088121C0;
    case 506u: goto L_088121CC;
    case 507u: goto L_088121D8;
    case 508u: goto L_088121E0;
    case 509u: goto L_088121E4;
    case 510u: goto L_088121F8;
    case 511u: goto L_08812204;
    case 512u: goto L_0881220C;
    case 513u: goto L_08812210;
    case 514u: goto L_08812240;
    case 515u: goto L_0881224C;
    case 516u: goto L_08812258;
    case 517u: goto L_08812264;
    case 518u: goto L_0881227C;
    case 519u: goto L_08812294;
    case 520u: goto L_0881229C;
    case 521u: goto L_088122A0;
    case 522u: goto L_088122C4;
    case 523u: goto L_088122F8;
    case 524u: goto L_08812300;
    case 525u: goto L_08812318;
    case 526u: goto L_08812320;
    case 527u: goto L_08812328;
    case 528u: goto L_0881232C;
    case 529u: goto L_0881233C;
    case 530u: goto L_08812354;
    case 531u: goto L_08812360;
    case 532u: goto L_08812378;
    case 533u: goto L_08812380;
    case 534u: goto L_08812388;
    case 535u: goto L_08812394;
    case 536u: goto L_088123A0;
    case 537u: goto L_088123B0;
    case 538u: goto L_088123E0;
    case 539u: goto L_088123E8;
    case 540u: goto L_088123F4;
    case 541u: goto L_08812430;
    case 542u: goto L_08812454;
    case 543u: goto L_08812460;
    case 544u: goto L_08812478;
    case 545u: goto L_08812488;
    case 546u: goto L_0881248C;
    case 547u: goto L_0881249C;
    case 548u: goto L_088124A4;
    case 549u: goto L_088124AC;
    case 550u: goto L_088124B4;
    case 551u: goto L_088124B8;
    case 552u: goto L_088124CC;
    case 553u: goto L_088124D4;
    case 554u: goto L_088124DC;
    case 555u: goto L_088124F8;
    case 556u: goto L_08812500;
    case 557u: goto L_08812504;
    case 558u: goto L_08812510;
    case 559u: goto L_08812514;
    case 560u: goto L_08812520;
    case 561u: goto L_08812528;
    case 562u: goto L_08812538;
    case 563u: goto L_08812544;
    case 564u: goto L_08812568;
    case 565u: goto L_08812578;
    case 566u: goto L_088125A0;
    case 567u: goto L_088125AC;
    case 568u: goto L_088125B8;
    case 569u: goto L_088125C0;
    case 570u: goto L_088125CC;
    case 571u: goto L_088125D8;
    case 572u: goto L_088125E4;
    case 573u: goto L_088125F4;
    case 574u: goto L_088125F8;
    case 575u: goto L_08812608;
    case 576u: goto L_08812614;
    case 577u: goto L_08812618;
    case 578u: goto L_08812634;
    case 579u: goto L_0881263C;
    case 580u: goto L_08812644;
    case 581u: goto L_08812654;
    case 582u: goto L_0881265C;
    case 583u: goto L_0881266C;
    case 584u: goto L_08812678;
    case 585u: goto L_08812688;
    case 586u: goto L_08812690;
    case 587u: goto L_08812698;
    case 588u: goto L_088126A8;
    case 589u: goto L_088126B0;
    case 590u: goto L_088126B8;
    case 591u: goto L_088126C8;
    case 592u: goto L_08812708;
    case 593u: goto L_08812710;
    case 594u: goto L_0881271C;
    case 595u: goto L_0881272C;
    case 596u: goto L_08812758;
    case 597u: goto L_08812760;
    case 598u: goto L_0881276C;
    case 599u: goto L_0881277C;
    case 600u: goto L_088127B0;
    case 601u: goto L_088127C0;
    case 602u: goto L_088127CC;
    case 603u: goto L_088127D8;
    case 604u: goto L_088127E4;
    case 605u: goto L_088127F4;
    case 606u: goto L_08812810;
    case 607u: goto L_08812818;
    case 608u: goto L_08812824;
    case 609u: goto L_0881282C;
    case 610u: goto L_0881283C;
    case 611u: goto L_0881284C;
    case 612u: goto L_08812858;
    case 613u: goto L_08812868;
    case 614u: goto L_08812884;
    case 615u: goto L_0881288C;
    case 616u: goto L_08812890;
    case 617u: goto L_0881289C;
    case 618u: goto L_088128AC;
    case 619u: goto L_088128C4;
    case 620u: goto L_088128D8;
    case 621u: goto L_0881293C;
    case 622u: goto L_0881294C;
    case 623u: goto L_08812954;
    case 624u: goto L_08812960;
    case 625u: goto L_08812974;
    case 626u: goto L_08812984;
    case 627u: goto L_08812990;
    case 628u: goto L_0881299C;
    case 629u: goto L_088129A4;
    case 630u: goto L_088129B0;
    case 631u: goto L_088129B8;
    case 632u: goto L_088129C0;
    case 633u: goto L_088129D0;
    case 634u: goto L_088129E4;
    case 635u: goto L_08812A04;
    case 636u: goto L_08812A10;
    case 637u: goto L_08812A18;
    case 638u: goto L_08812A20;
    case 639u: goto L_08812A2C;
    case 640u: goto L_08812A34;
    case 641u: goto L_08812A38;
    case 642u: goto L_08812A44;
    case 643u: goto L_08812A4C;
    case 644u: goto L_08812A54;
    case 645u: goto L_08812A58;
    case 646u: goto L_08812A60;
    case 647u: goto L_08812A6C;
    case 648u: goto L_08812A74;
    case 649u: goto L_08812A80;
    case 650u: goto L_08812A8C;
    case 651u: goto L_08812A94;
    case 652u: goto L_08812AA4;
    case 653u: goto L_08812AAC;
    case 654u: goto L_08812AB0;
    case 655u: goto L_08812ABC;
    case 656u: goto L_08812AD0;
    case 657u: goto L_08812AD8;
    case 658u: goto L_08812AE0;
    case 659u: goto L_08812AE4;
    case 660u: goto L_08812AF0;
    case 661u: goto L_08812B00;
    case 662u: goto L_08812B08;
    case 663u: goto L_08812B1C;
    case 664u: goto L_08812B2C;
    case 665u: goto L_08812B30;
    case 666u: goto L_08812B60;
    case 667u: goto L_08812B6C;
    case 668u: goto L_08812B70;
    case 669u: goto L_08812B88;
    case 670u: goto L_08812B90;
    case 671u: goto L_08812B98;
    case 672u: goto L_08812BAC;
    case 673u: goto L_08812BB4;
    case 674u: goto L_08812BE4;
    case 675u: goto L_08812BE8;
    case 676u: goto L_08812C08;
    case 677u: goto L_08812C10;
    case 678u: goto L_08812C24;
    case 679u: goto L_08812C2C;
    case 680u: goto L_08812C38;
    case 681u: goto L_08812C48;
    case 682u: goto L_08812C58;
    case 683u: goto L_08812C60;
    case 684u: goto L_08812C64;
    case 685u: goto L_08812C78;
    case 686u: goto L_08812C80;
    case 687u: goto L_08812C90;
    case 688u: goto L_08812C9C;
    case 689u: goto L_08812CBC;
    case 690u: goto L_08812CCC;
    case 691u: goto L_08812CD0;
    case 692u: goto L_08812D00;
    case 693u: goto L_08812D0C;
    case 694u: goto L_08812D10;
    case 695u: goto L_08812D28;
    case 696u: goto L_08812D34;
    case 697u: goto L_08812D48;
    case 698u: goto L_08812D58;
    case 699u: goto L_08812D64;
    case 700u: goto L_08812D68;
    case 701u: goto L_08812D7C;
    case 702u: goto L_08812D80;
    case 703u: goto L_08812DB8;
    case 704u: goto L_08812DC4;
    case 705u: goto L_08812DC8;
    case 706u: goto L_08812DE0;
    case 707u: goto L_08812DE8;
    case 708u: goto L_08812DF0;
    case 709u: goto L_08812E08;
    case 710u: goto L_08812E10;
    case 711u: goto L_08812E3C;
    case 712u: goto L_08812E40;
    case 713u: goto L_08812E60;
    case 714u: goto L_08812E6C;
    case 715u: goto L_08812E98;
    case 716u: goto L_08812EA0;
    case 717u: goto L_08812EC0;
    case 718u: goto L_08812ECC;
    case 719u: goto L_08812EE8;
    case 720u: goto L_08812EF4;
    case 721u: goto L_08812F00;
    case 722u: goto L_08812F10;
    case 723u: goto L_08812F2C;
    case 724u: goto L_08812F30;
    case 725u: goto L_08812F38;
    case 726u: goto L_08812F44;
    case 727u: goto L_08812F48;
    case 728u: goto L_08812F5C;
    case 729u: goto L_08812F68;
    case 730u: goto L_08812F70;
    case 731u: goto L_08812F7C;
    case 732u: goto L_08812F88;
    case 733u: goto L_08812F90;
    case 734u: goto L_08812F9C;
    case 735u: goto L_08812FB8;
    case 736u: goto L_08812FC0;
    case 737u: goto L_08812FD0;
    case 738u: goto L_08812FE4;
    case 739u: goto L_08812FEC;
    case 740u: goto L_08812FFC;
    case 741u: goto L_08813010;
    case 742u: goto L_08813018;
    case 743u: goto L_08813024;
    case 744u: goto L_08813034;
    case 745u: goto L_08813040;
    case 746u: goto L_08813048;
    case 747u: goto L_08813074;
    case 748u: goto L_08813080;
    case 749u: goto L_0881308C;
    case 750u: goto L_08813094;
    case 751u: goto L_088130A4;
    case 752u: goto L_088130B4;
    case 753u: goto L_088130B8;
    case 754u: goto L_088130D0;
    case 755u: goto L_088130D4;
    case 756u: goto L_088130E0;
    case 757u: goto L_088130F0;
    case 758u: goto L_088130F8;
    case 759u: goto L_08813100;
    case 760u: goto L_08813114;
    case 761u: goto L_0881313C;
    case 762u: goto L_08813168;
    case 763u: goto L_0881316C;
    case 764u: goto L_0881317C;
    case 765u: goto L_08813184;
    case 766u: goto L_08813190;
    case 767u: goto L_08813198;
    case 768u: goto L_088131A0;
    case 769u: goto L_088131C0;
    case 770u: goto L_088131CC;
    case 771u: goto L_088131D4;
    case 772u: goto L_088131E4;
    case 773u: goto L_088131F8;
    case 774u: goto L_08813208;
    case 775u: goto L_08813214;
    case 776u: goto L_08813238;
    case 777u: goto L_08813240;
    case 778u: goto L_08813264;
    case 779u: goto L_08813278;
    case 780u: goto L_088132A0;
    case 781u: goto L_088132AC;
    case 782u: goto L_088132B8;
    case 783u: goto L_088132C4;
    case 784u: goto L_088132D8;
    case 785u: goto L_088132E4;
    case 786u: goto L_088132F8;
    case 787u: goto L_08813334;
    case 788u: goto L_08813344;
    case 789u: goto L_08813390;
    case 790u: goto L_088133A4;
    case 791u: goto L_08813470;
    case 792u: goto L_08813484;
    case 793u: goto L_088134BC;
    case 794u: goto L_08813508;
    case 795u: goto L_08813510;
    case 796u: goto L_08813520;
    case 797u: goto L_08813538;
    case 798u: goto L_08813558;
    case 799u: goto L_08813564;
    case 800u: goto L_08813580;
    case 801u: goto L_0881358C;
    case 802u: goto L_08813594;
    case 803u: goto L_088135F4;
    case 804u: goto L_088135F8;
    case 805u: goto L_08813608;
    case 806u: goto L_08813610;
    case 807u: goto L_08813630;
    case 808u: goto L_08813638;
    case 809u: goto L_0881363C;
    case 810u: goto L_08813650;
    case 811u: goto L_08813660;
    case 812u: goto L_08813664;
    case 813u: goto L_08813670;
    case 814u: goto L_08813694;
    case 815u: goto L_088136A0;
    case 816u: goto L_088136B4;
    case 817u: goto L_088136C0;
    case 818u: goto L_088136E8;
    case 819u: goto L_088136F0;
    case 820u: goto L_08813708;
    case 821u: goto L_08813720;
    case 822u: goto L_0881373C;
    case 823u: goto L_08813770;
    case 824u: goto L_08813780;
    case 825u: goto L_08813798;
    case 826u: goto L_088137B4;
    case 827u: goto L_088137BC;
    case 828u: goto L_088137CC;
    case 829u: goto L_088137D0;
    case 830u: goto L_088137EC;
    case 831u: goto L_088137F0;
    case 832u: goto L_08813800;
    case 833u: goto L_0881380C;
    case 834u: goto L_08813864;
    case 835u: goto L_08813870;
    case 836u: goto L_08813878;
    case 837u: goto L_0881388C;
    case 838u: goto L_088138E4;
    case 839u: goto L_088138EC;
    case 840u: goto L_088138F8;
    case 841u: goto L_08813900;
    case 842u: goto L_0881390C;
    case 843u: goto L_08813918;
    case 844u: goto L_08813924;
    case 845u: goto L_08813930;
    case 846u: goto L_08813934;
    case 847u: goto L_08813938;
    case 848u: goto L_0881395C;
    case 849u: goto L_0881398C;
    case 850u: goto L_08813998;
    case 851u: goto L_088139A4;
    case 852u: goto L_088139BC;
    case 853u: goto L_088139C0;
    case 854u: goto L_088139CC;
    case 855u: goto L_088139D8;
    case 856u: goto L_088139DC;
    case 857u: goto L_088139F4;
    case 858u: goto L_088139FC;
    case 859u: goto L_08813A0C;
    case 860u: goto L_08813A20;
    case 861u: goto L_08813A24;
    case 862u: goto L_08813A44;
    case 863u: goto L_08813A4C;
    case 864u: goto L_08813A60;
    case 865u: goto L_08813A7C;
    case 866u: goto L_08813A84;
    case 867u: goto L_08813A8C;
    case 868u: goto L_08813A9C;
    case 869u: goto L_08813AEC;
    case 870u: goto L_08813AFC;
    case 871u: goto L_08813B04;
    case 872u: goto L_08813B10;
    case 873u: goto L_08813B14;
    case 874u: goto L_08813B24;
    case 875u: goto L_08813B3C;
    case 876u: goto L_08813B48;
    case 877u: goto L_08813B70;
    case 878u: goto L_08813B78;
    case 879u: goto L_08813B7C;
    case 880u: goto L_08813B80;
    case 881u: goto L_08813B90;
    case 882u: goto L_08813BBC;
    case 883u: goto L_08813BD4;
    case 884u: goto L_08813BEC;
    case 885u: goto L_08813BF4;
    case 886u: goto L_08813C08;
    case 887u: goto L_08813C1C;
    case 888u: goto L_08813C30;
    case 889u: goto L_08813C38;
    case 890u: goto L_08813C40;
    case 891u: goto L_08813C58;
    case 892u: goto L_08813C88;
    case 893u: goto L_08813C90;
    case 894u: goto L_08813C98;
    case 895u: goto L_08813CA4;
    case 896u: goto L_08813CD4;
    case 897u: goto L_08813D20;
    case 898u: goto L_08813D2C;
    case 899u: goto L_08813D60;
    case 900u: goto L_08813D64;
    case 901u: goto L_08813D6C;
    case 902u: goto L_08813D70;
    case 903u: goto L_08813D90;
    case 904u: goto L_08813DA0;
    case 905u: goto L_08813DB0;
    case 906u: goto L_08813DB8;
    case 907u: goto L_08813DC0;
    case 908u: goto L_08813DF0;
    case 909u: goto L_08813E04;
    case 910u: goto L_08813E2C;
    case 911u: goto L_08813E38;
    case 912u: goto L_08813E48;
    case 913u: goto L_08813E54;
    case 914u: goto L_08813E5C;
    case 915u: goto L_08813E6C;
    case 916u: goto L_08813E84;
    case 917u: goto L_08813ECC;
    case 918u: goto L_08813EE4;
    case 919u: goto L_08813F04;
    case 920u: goto L_08813F40;
    case 921u: goto L_08813F4C;
    case 922u: goto L_08813F58;
    case 923u: goto L_08813F94;
    case 924u: goto L_08813FB8;
    case 925u: goto L_08813FC0;
    case 926u: goto L_08813FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08810000:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08810020;
      }
      goto L_08810008;
    }
L_08810008:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[3] : ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08810020;
L_08810020:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08810080;
      }
      goto L_0881002C;
    }
L_0881002C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088108EC;
      }
      goto L_08810034;
    }
L_08810034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08810070;
      }
      goto L_0881003C;
    }
L_0881003C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08810048u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0881395C;
L_08810048:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0881005Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0881373C;
L_0881005C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x0881006Cu);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x0881006Cu) goto L_0881006C;
    return;
L_0881006C:
    ctx.set_gpr(30, ctx.gpr[16] + 0u);
    goto L_08810070;
L_08810070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_088105D8;
      }
      goto L_08810080;
    }
L_08810080:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0881008Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08813708;
L_0881008C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088100AC;
      }
      goto L_0881009C;
    }
L_0881009C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088100A8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_0881395C;
L_088100A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_088100AC;
L_088100AC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08810590;
      }
      goto L_088100B4;
    }
L_088100B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088100B8;
L_088100B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088108C8;
      }
      goto L_088100C0;
    }
L_088100C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] & 31u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088100E0;
      }
      goto L_088100D4;
    }
L_088100D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
    goto L_088100E0;
L_088100E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08810468;
      }
      goto L_088100E8;
    }
L_088100E8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_088100EC;
L_088100EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0881010C;
L_0881010C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_08810124;
      }
      goto L_08810114;
    }
L_08810114:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08810120u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_08813A9C;
L_08810120:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08810124;
L_08810124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08810140;
      }
      goto L_08810130;
    }
L_08810130:
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881013Cu);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_08813A9C;
L_0881013C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08810140;
L_08810140:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088104F8;
      }
      goto L_0881014C;
    }
L_0881014C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08810150;
L_08810150:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08810154;
L_08810154:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08810900;
      }
      goto L_08810160;
    }
L_08810160:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08810164;
L_08810164:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810310;
      }
      goto L_08810170;
    }
L_08810170:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881018C;
      }
      goto L_08810178;
    }
L_08810178:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08810188u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_08813A9C;
L_08810188:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0881018C;
L_0881018C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08810660;
      }
      goto L_08810194;
    }
L_08810194:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, ctx.gpr[18] & 1u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088101B8u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 705u, 0x0880F414u>(ctx, &aot_mem) && ctx.pc == 0x088101B8u) goto L_088101B8;
    return;
L_088101B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088101C8u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08813BF4;
L_088101C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088101DCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08813C58;
L_088101DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088102E0;
      }
      goto L_088101EC;
    }
L_088101EC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088101F8u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x088101F8u) goto L_088101F8;
    return;
L_088101F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08810210;
      }
      goto L_08810208;
    }
L_08810208:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(57));
      if (branch_taken) {
          goto L_08810B58;
      }
      goto L_08810210;
    }
L_08810210:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08810964;
      }
      goto L_08810218;
    }
L_08810218:
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0881022C;
      }
      goto L_08810224;
    }
L_08810224:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810964;
      }
      goto L_0881022C;
    }
L_0881022C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(57));
      if (branch_taken) {
          goto L_08810B30;
      }
      goto L_08810234;
    }
L_08810234:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810338;
      }
      goto L_08810244;
    }
L_08810244:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08810258u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08810258:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08810844;
      }
      goto L_0881026C;
    }
L_0881026C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0881027Cu);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_08813484;
L_0881027C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08810294u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08813484;
L_08810294:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0881029C;
L_0881029C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088102ACu);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 705u, 0x0880F414u>(ctx, &aot_mem) && ctx.pc == 0x088102ACu) goto L_088102AC;
    return;
L_088102AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088102BCu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08813BF4;
L_088102BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088102D0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08813C58;
L_088102D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088101EC;
      }
      goto L_088102E0;
    }
L_088102E0:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088102ECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08813BF4;
L_088102EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_088101EC;
L_088102F4:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08810308u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08810308:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08810310;
L_08810310:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0881031Cu);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 705u, 0x0880F414u>(ctx, &aot_mem) && ctx.pc == 0x0881031Cu) goto L_0881031C;
    return;
L_0881031C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088102F4;
      }
      goto L_08810334;
    }
L_08810334:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_08810338;
L_08810338:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08810348u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08813A9C;
L_08810348:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08810358u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08813BF4;
L_08810358:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088106A0;
      }
      goto L_08810360;
    }
L_08810360:
    ctx.set_gpr(3, ctx.gpr[22] + 0u);
    goto L_08810364;
L_08810364:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08810368;
L_08810368:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(57));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08810954;
      }
      goto L_08810378;
    }
L_08810378:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08810368;
      }
      goto L_0881038C;
    }
L_0881038C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088103AC;
L_088103AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088103B0;
L_088103B0:
    ctx.set_gpr(31, 0x088103B8u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x088103B8u) goto L_088103B8;
    return;
L_088103B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088103EC;
      }
      goto L_088103C4;
    }
L_088103C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088103E4;
      }
      goto L_088103CC;
    }
L_088103CC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088103E4;
      }
      goto L_088103D4;
    }
L_088103D4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088103E0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x088103E0u) goto L_088103E0;
    return;
L_088103E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088103E4;
L_088103E4:
    ctx.set_gpr(31, 0x088103ECu);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x088103ECu) goto L_088103EC;
    return;
L_088103EC:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_088103F0;
L_088103F0:
    ctx.set_gpr(31, 0x088103F8u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x088103F8u) goto L_088103F8;
    return;
L_088103F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 742u, 0x0880F730u>(ctx, &aot_mem); return;
      }
      goto L_08810418;
    }
L_08810418:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810450:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 783u, 0x0880FA48u>(ctx, &aot_mem); return;
L_08810468:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0881010C;
    }
    goto L_08810470;
L_08810470:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(28));
    goto L_088100EC;
L_08810478:
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08810770;
      }
      goto L_08810484;
    }
L_08810484:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_088104B4;
      }
      goto L_08810498;
    }
L_08810498:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_088104B4;
L_088104B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08810B44;
      }
      goto L_088104C0;
    }
L_088104C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088104E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08813708;
L_088104E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 878u, 0x0880FFF8u>(ctx, &aot_mem); return;
L_088104EC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(644));
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 742u, 0x0880F730u>(ctx, &aot_mem); return;
L_088104F8:
    ctx.set_gpr(31, 0x08810500u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_08813BF4;
L_08810500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08810150;
      }
      goto L_08810508;
    }
L_08810508:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0881051Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_0881051C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08810154;
      }
      goto L_0881053C;
    }
L_0881053C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08810550u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08810550:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08810154;
L_08810560:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(31, 0x08810574u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08810574u) goto L_08810574;
    return;
L_08810574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 65040u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 746u, 0x0880F7ACu>(ctx, &aot_mem); return;
L_08810590:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088100B4;
      }
      goto L_08810598;
    }
L_08810598:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088100B8;
      }
      goto L_088105A8;
    }
L_088105A8:
    ctx.set_gpr(2, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088100B8;
      }
      goto L_088105B8;
    }
L_088105B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_088100B4;
L_088105D8:
    ctx.set_gpr(31, 0x088105E0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_0881395C;
L_088105E0:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08810080;
L_088105E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 851u, 0x0880FE6Cu>(ctx, &aot_mem); return;
      }
      goto L_088105F4;
    }
L_088105F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 817u, 0x0880FC40u>(ctx, &aot_mem); return;
      }
      goto L_088105FC;
    }
L_088105FC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(712)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08810610u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08810610u) goto L_08810610;
    return;
L_08810610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08810624u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 920u, 0x0881FD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08810624u) goto L_08810624;
    return;
L_08810624:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 818u, 0x0880FC44u>(ctx, &aot_mem); return;
    }
    goto L_0881062C;
L_0881062C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_0881063C;
L_0881063C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08810640;
L_08810640:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088103AC;
L_08810660:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0881066Cu);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x0881066Cu) goto L_0881066C;
    return;
L_0881066C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08810688u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08812B08;
L_08810688:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08810698u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08813A9C;
L_08810698:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08810194;
L_088106A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-1))))));
        goto L_088106C4;
    }
    goto L_088106A8;
L_088106A8:
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[22] + 0u);
        goto L_08810364;
    }
    goto L_088106B4;
L_088106B4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-1))))));
    goto L_088106C4;
L_088106BC:
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-1))))));
    goto L_088106C4;
L_088106C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088106BC;
      }
      goto L_088106D0;
    }
L_088106D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088103B0;
L_088106D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, 0u - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 803u, 0x0880FB64u>(ctx, &aot_mem); return;
      }
      goto L_088106E8;
    }
L_088106E8:
    ctx.set_gpr(3, ctx.gpr[8] & 15u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08810714u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08810714u) goto L_08810714;
    return;
L_08810714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08810B50;
      }
      goto L_08810728;
    }
L_08810728:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    goto L_08810734;
L_08810734:
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_0881075C;
    }
    goto L_08810740;
L_08810740:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08810750u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08810750u) goto L_08810750;
    return;
L_08810750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_0881075C;
L_0881075C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08810734;
      }
      goto L_08810764;
    }
L_08810764:
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 803u, 0x0880FB64u>(ctx, &aot_mem); return;
L_08810770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08810B74;
      }
      goto L_0881077C;
    }
L_0881077C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1075));
    goto L_088104C0;
L_0881078C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08810790;
L_08810790:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810B88;
      }
      goto L_0881079C;
    }
L_0881079C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 783u, 0x0880FA48u>(ctx, &aot_mem); return;
L_088107AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_088107B0;
L_088107B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 783u, 0x0880FA48u>(ctx, &aot_mem); return;
      }
      goto L_088107D0;
    }
L_088107D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 783u, 0x0880FA48u>(ctx, &aot_mem); return;
L_088107D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08810790;
L_088107E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088107B0;
L_088107F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 807u, 0x0880FB94u>(ctx, &aot_mem); return;
      }
      goto L_088107F8;
    }
L_088107F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 844u, 0x0880FE28u>(ctx, &aot_mem); return;
      }
      goto L_08810804;
    }
L_08810804:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08810818u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08810818u) goto L_08810818;
    return;
L_08810818:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 808u, 0x0880FB9Cu>(ctx, &aot_mem); return;
L_08810838:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0881083C;
L_0881083C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_088103EC;
L_08810844:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08810858u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08810858:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_0881029C;
L_08810868:
    ctx.set_gpr(31, 0x08810870u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08810870u) goto L_08810870;
    return;
L_08810870:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08810884u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x08810884u) goto L_08810884;
    return;
L_08810884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 755u, 0x0880F85Cu>(ctx, &aot_mem); return;
L_08810898:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(3, 0u - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 763u, 0x0880F8E0u>(ctx, &aot_mem); return;
L_088108B8:
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 761u, 0x0880F8C4u>(ctx, &aot_mem); return;
L_088108C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088108E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    goto L_088136E8;
L_088108E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    goto L_088100C0;
L_088108EC:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x088108F8u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_0881395C;
L_088108F8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08810080;
L_08810900:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08810164;
    }
    goto L_0881090C;
L_0881090C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 819u, 0x0880FC48u>(ctx, &aot_mem); return;
      }
      goto L_08810914;
    }
L_08810914:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08810924u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08810924:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08810934u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08813BF4;
L_08810934:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08810640;
      }
      goto L_0881093C;
    }
L_0881093C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088103AC;
L_08810954:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088103AC;
L_08810964:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_088109A0;
      }
      goto L_0881096C;
    }
L_0881096C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08810978u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08813A9C;
L_08810978:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08810988u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08813BF4;
L_08810988:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08810B9C;
      }
      goto L_08810990;
    }
L_08810990:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(49));
    goto L_08810994;
L_08810994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(57));
      if (branch_taken) {
          goto L_088109B0;
      }
      goto L_088109A0;
    }
L_088109A0:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_088109A4;
L_088109A4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088103AC;
L_088109AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(57));
    goto L_088109B0;
L_088109B0:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08810360;
L_088109BC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088109E4u);
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088109E4u) goto L_088109E4;
    return;
L_088109E4:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088109FCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x088109FCu) goto L_088109FC;
    return;
L_088109FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08810A08u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A08u) goto L_08810A08;
    return;
L_08810A08:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08810A1Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08810A1Cu) goto L_08810A1C;
    return;
L_08810A1C:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08810AA4;
      }
      goto L_08810A38;
    }
L_08810A38:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(696));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08810A54u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A54u) goto L_08810A54;
    return;
L_08810A54:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08810A68u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08810A68u) goto L_08810A68;
    return;
L_08810A68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08810A74u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A74u) goto L_08810A74;
    return;
L_08810A74:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08810A88u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08810A88u) goto L_08810A88;
    return;
L_08810A88:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[17];
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810A38;
      }
      goto L_08810AA4;
    }
L_08810AA4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08810AC4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08810AC4u) goto L_08810AC4;
    return;
L_08810AC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08810AD8u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08810AD8u) goto L_08810AD8;
    return;
L_08810AD8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 870u, 0x0880FF84u>(ctx, &aot_mem); return;
    }
    goto L_08810AE0;
L_08810AE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08810AF4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08810AF4u) goto L_08810AF4;
    return;
L_08810AF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08810B08u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x08810B08u) goto L_08810B08;
    return;
L_08810B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 845u, 0x0880FE2Cu>(ctx, &aot_mem); return;
      }
      goto L_08810B10;
    }
L_08810B10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    goto L_08810B1C;
L_08810B18:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    goto L_08810B1C;
L_08810B1C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08810B18;
      }
      goto L_08810B28;
    }
L_08810B28:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    goto L_088103F0;
L_08810B30:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088109AC;
      }
      goto L_08810B38;
    }
L_08810B38:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088103AC;
L_08810B44:
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    goto L_088104C0;
L_08810B50:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 803u, 0x0880FB64u>(ctx, &aot_mem); return;
L_08810B58:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088109AC;
      }
      goto L_08810B60;
    }
L_08810B60:
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(49));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(20, ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088103AC;
L_08810B74:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    goto L_088104C0;
L_08810B88:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 783u, 0x0880FA48u>(ctx, &aot_mem); return;
L_08810B9C:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
        goto L_088109A4;
    }
    goto L_08810BA4;
L_08810BA4:
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(49));
        goto L_08810994;
    }
    goto L_08810BB0;
L_08810BB0:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088103AC;
L_08810BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08810BCCu);
    // nop
    goto L_08811C60;
L_08810BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810BD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08810C0Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08813024;
L_08810C0C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810C9C;
      }
      goto L_08810C18;
    }
L_08810C18:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08810C20;
L_08810C20:
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08810C90;
      }
      goto L_08810C2C;
    }
L_08810C2C:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[30] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(19, 0u + 0u);
    goto L_08810C68;
L_08810C48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08810C58u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810C58u) goto L_08810C58;
    return;
L_08810C58:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08810C90;
      }
      goto L_08810C68;
    }
L_08810C68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08810C48;
      }
      goto L_08810C78;
    }
L_08810C78:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08810C84u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810C84u) goto L_08810C84;
    return;
L_08810C84:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08810C68;
      }
      goto L_08810C90;
    }
L_08810C90:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08810C20;
    }
    goto L_08810C9C;
L_08810C9C:
    ctx.set_gpr(31, 0x08810CA4u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 78u, 0x0880459Cu>(ctx, &aot_mem) && ctx.pc == 0x08810CA4u) goto L_08810CA4;
    return;
L_08810CA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08810D80;
      }
      goto L_08810CC0;
    }
L_08810CC0:
    ctx.set_gpr(31, 0x08810CC8u);
    // nop
    goto L_08811C60;
L_08810CC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810D68;
      }
      goto L_08810CD4;
    }
L_08810CD4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12))))));
    goto L_08810CD8;
L_08810CD8:
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_08810D44;
    }
    goto L_08810CE4;
L_08810CE4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08810D40;
      }
      goto L_08810CF0;
    }
L_08810CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08810D60;
      }
      goto L_08810D04;
    }
L_08810D04:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08810D08;
L_08810D08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08810D40;
      }
      goto L_08810D10;
    }
L_08810D10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08810D20u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810D20u) goto L_08810D20;
    return;
L_08810D20:
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08810D08;
      }
      goto L_08810D2C;
    }
L_08810D2C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] | 64u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08810D44;
L_08810D40:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08810D44;
L_08810D44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08810D60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08810D04;
L_08810D68:
    ctx.set_gpr(31, 0x08810D70u);
    // nop
    goto L_08811C60;
L_08810D70:
    ctx.set_gpr(31, 0x08810D78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08810E78;
L_08810D78:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12))))));
    goto L_08810CD8;
L_08810D80:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    ctx.set_gpr(5, 2177u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3236));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08811ABC;
L_08810DA8:
    ctx.set_gpr(2, 2177u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25412));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 2177u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24988));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, 2177u << 16u);
    ctx.set_gpr(2, 2177u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(25132));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25264));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] << 5u);
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08810E34u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08812074;
L_08810E34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08810E5C;
      }
      goto L_08810E4C;
    }
L_08810E4C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x08810E5Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08812EE8;
L_08810E5C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08810E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2177u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4076));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(616));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(612), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08810EC4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
    goto L_08810DA8;
L_08810EC4:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08810ED8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08810DA8;
L_08810ED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08810DA8;
L_08810FEC:
    ctx.set_gpr(5, 2177u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3236));
    goto L_08811ABC;
L_08811004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08811034u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 731u, 0x0881ABD0u>(ctx, &aot_mem) && ctx.pc == 0x08811034u) goto L_08811034;
    return;
L_08811034:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811040:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_0881107C;
    }
L_0881107C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_0881118C;
    }
    goto L_08811088;
L_08811088:
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    goto L_08811090;
L_08811090:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881113C;
      }
      goto L_088110A0;
    }
L_088110A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(31, 0x088110B0u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    goto L_08812B08;
L_088110B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x088110C4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x088110C4u) goto L_088110C4;
    return;
L_088110C4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08811090;
    }
    goto L_088110CC;
L_088110CC:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_088110DC;
      }
      goto L_088110D8;
    }
L_088110D8:
    ctx.pc = 0x088110D8u; rt.stop("Allegrex BREAK code 7 at 0x088110D8"); return;
    goto L_088110DC;
L_088110DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881110C:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0881113C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08811148u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08812B08;
L_08811148:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0881118C:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08811088;
L_08811194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088111B8u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08812FC0;
L_088111B8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, (ctx.gpr[17] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(16, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4079));
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-4096));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08811208;
      }
      goto L_088111EC;
    }
L_088111EC:
    ctx.set_gpr(31, 0x088111F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 380u, 0x08815A30u>(ctx, &aot_mem) && ctx.pc == 0x088111F4u) goto L_088111F4;
    return;
L_088111F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(5, 0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08811230;
      }
      goto L_08811208;
    }
L_08811208:
    ctx.set_gpr(31, 0x08811210u);
    // nop
    goto L_08812FFC;
L_08811210:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08811214;
L_08811214:
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
L_08811230:
    ctx.set_gpr(31, 0x08811238u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 380u, 0x08815A30u>(ctx, &aot_mem) && ctx.pc == 0x08811238u) goto L_08811238;
    return;
L_08811238:
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(7, 2233u << 16u);
      if (branch_taken) {
          goto L_08811278;
      }
      goto L_08811254;
    }
L_08811254:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8656)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(31, 0x08811270u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8656), ctx.gpr[2]);
    goto L_08812FFC;
L_08811270:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08811214;
L_08811278:
    ctx.set_gpr(31, 0x08811280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 380u, 0x08815A30u>(ctx, &aot_mem) && ctx.pc == 0x08811280u) goto L_08811280;
    return;
L_08811280:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08811208;
      }
      goto L_0881129C;
    }
L_0881129C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2852)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8656), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08811208;
L_088112B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08811468;
      }
      goto L_088112D4;
    }
L_088112D4:
    ctx.set_gpr(31, 0x088112DCu);
    // nop
    goto L_08812FC0;
L_088112DC:
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(11, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, (ctx.gpr[8] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
      if (branch_taken) {
          goto L_088114F8;
      }
      goto L_08811308;
    }
L_08811308:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08811344;
      }
      goto L_08811318;
    }
L_08811318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(3, ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] - ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811344;
      }
      goto L_08811334;
    }
L_08811334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08811344;
L_08811344:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811434;
      }
      goto L_08811358;
    }
L_08811358:
    ctx.set_gpr(2, ctx.gpr[8] | 1u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08811384;
      }
      goto L_0881136C;
    }
L_0881136C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08811370;
L_08811370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08812FFC;
L_08811384:
    ctx.set_gpr(2, ctx.gpr[8] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    goto L_08811388;
L_08811388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] >> 3u);
      if (branch_taken) {
          goto L_088114A8;
      }
      goto L_08811390;
    }
L_08811390:
    ctx.set_gpr(7, ctx.gpr[8] >> 3u);
    ctx.set_gpr(3, ctx.gpr[8] >> 9u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
      if (branch_taken) {
          goto L_088113D4;
      }
      goto L_088113A0;
    }
L_088113A0:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[8] >> 6u);
      if (branch_taken) {
          goto L_08811554;
      }
      goto L_088113AC;
    }
L_088113AC:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(91));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
      if (branch_taken) {
          goto L_088113D4;
      }
      goto L_088113BC;
    }
L_088113BC:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08811594;
      }
      goto L_088113C8;
    }
L_088113C8:
    ctx.set_gpr(2, ctx.gpr[8] >> 12u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(110));
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
    goto L_088113D4;
L_088113D4:
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08811560;
      }
      goto L_088113E8;
    }
L_088113E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088113EC;
L_088113EC:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_0881140C;
    }
    goto L_088113FC;
L_088113FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_088113EC;
    }
    goto L_08811408;
L_08811408:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_0881140C;
L_0881140C:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_0881141C;
L_0881141C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08812FFC;
L_08811434:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881147C;
      }
      goto L_0881143C;
    }
L_0881143C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08811444;
L_08811444:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] | 1u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881136C;
      }
      goto L_08811460;
    }
L_08811460:
    ctx.set_gpr(2, ctx.gpr[8] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    goto L_08811388;
L_08811468:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881147C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08811444;
    }
    goto L_08811490;
L_08811490:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08811358;
L_088114A8:
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(5, ctx.gpr[4] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] >> 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08812FFC;
L_088114F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08811520;
      }
      goto L_08811504;
    }
L_08811504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(9, ctx.gpr[9] - ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08811520;
L_08811520:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2856)));
    ctx.set_gpr(4, ctx.gpr[6] | 1u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881136C;
      }
      goto L_0881153C;
    }
L_0881153C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8704)));
    ctx.set_gpr(31, 0x0881154Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08811194;
L_0881154C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08811370;
L_08811554:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
    goto L_088113D4;
L_08811560:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(7, ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    goto L_0881141C;
L_08811594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
      if (branch_taken) {
          goto L_088115AC;
      }
      goto L_0881159C;
    }
L_0881159C:
    ctx.set_gpr(2, ctx.gpr[8] >> 15u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(119));
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
    goto L_088113D4;
L_088115AC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(126));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_088113D4;
      }
      goto L_088115B8;
    }
L_088115B8:
    ctx.set_gpr(2, ctx.gpr[8] >> 18u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(4, ctx.gpr[7] << 3u);
    goto L_088113D4;
L_088115C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088115F0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 153u, 0x08804920u>(ctx, &aot_mem) && ctx.pc == 0x088115F0u) goto L_088115F0;
    return;
L_088115F0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_08811618;
      }
      goto L_08811600;
    }
L_08811600:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08811604;
L_08811604:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811618:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08811604;
      }
      goto L_08811620;
    }
L_08811620:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881163C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08811874;
      }
      goto L_08811678;
    }
L_08811678:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811AA4;
      }
      goto L_08811688;
    }
L_08811688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811AA4;
      }
      goto L_08811694;
    }
L_08811694:
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(2, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881184C;
      }
      goto L_088116A4;
    }
L_088116A4:
    ctx.set_gpr(2, ctx.gpr[4] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
        goto L_088118B0;
    }
    goto L_088116B4;
L_088116B4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_088116B8;
L_088116B8:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088116B4;
      }
      goto L_088116C4;
    }
L_088116C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088116D4u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08812984;
L_088116D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088116E4;
      }
      goto L_088116DC;
    }
L_088116DC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088116E4;
L_088116E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(18, ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088117A0;
      }
      goto L_08811710;
    }
L_08811710:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088117A4;
      }
      goto L_0881171C;
    }
L_0881171C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0881172Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08812C2C;
L_0881172C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08811740u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08810CA4;
L_08811740:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088117C8;
    }
    goto L_08811748;
L_08811748:
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811A18;
      }
      goto L_08811754;
    }
L_08811754:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    goto L_08811758;
L_08811758:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811874;
      }
      goto L_0881176C;
    }
L_0881176C:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
        goto L_088116B8;
    }
    goto L_08811774;
L_08811774:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
      if (branch_taken) {
          goto L_088116C4;
      }
      goto L_0881177C;
    }
L_0881177C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[3] == 0u) ctx.set_gpr(18, ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08811710;
      }
      goto L_088117A0;
    }
L_088117A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_088117A4;
L_088117A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088119E8;
      }
      goto L_088117AC;
    }
L_088117AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088117BCu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088117BCu) goto L_088117BC;
    return;
L_088117BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08811748;
      }
      goto L_088117C4;
    }
L_088117C4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_088117C8;
L_088117C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] | 64u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088117D4;
L_088117D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_0881180C;
L_0881180C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(1025) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(6, ctx.gpr[16]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08811824u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08811824u) goto L_08811824;
    return;
L_08811824:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088117C4;
      }
      goto L_0881182C;
    }
L_0881182C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811874;
      }
      goto L_08811844;
    }
L_08811844:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
        goto L_0881180C;
    }
    goto L_0881184C;
L_0881184C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08811808;
      }
      goto L_0881185C;
    }
L_0881185C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881184C;
      }
      goto L_0881186C;
    }
L_0881186C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_0881180C;
L_08811874:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08811878;
L_08811878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088118AC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_088118B0;
L_088118B0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881194C;
      }
      goto L_088118BC;
    }
L_088118BC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088118AC;
      }
      goto L_088118CC;
    }
L_088118CC:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    goto L_08811950;
L_088118D4:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088118EC;
      }
      goto L_088118E0;
    }
L_088118E0:
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08811A5C;
    }
    goto L_088118EC;
L_088118EC:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08811900;
      }
      goto L_088118F8;
    }
L_088118F8:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08811900;
L_08811900:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881190Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08812C2C;
L_0881190C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0881192C;
L_0881192C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    goto L_08811930;
L_08811930:
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811874;
      }
      goto L_08811944;
    }
L_08811944:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088118AC;
      }
      goto L_0881194C;
    }
L_0881194C:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    goto L_08811950;
L_08811950:
    ctx.set_gpr(2, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088118D4;
      }
      goto L_0881195C;
    }
L_0881195C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088119B8;
      }
      goto L_08811970;
    }
L_08811970:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_088119BC;
    }
    goto L_0881197C;
L_0881197C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08811988u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08812C2C;
L_08811988:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x0881199Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08810CA4;
L_0881199C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
        goto L_08811930;
    }
    goto L_088119A4;
L_088119A4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] | 64u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088117D4;
L_088119B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_088119BC;
L_088119BC:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08811A30;
      }
      goto L_088119C8;
    }
L_088119C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088119D8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088119D8u) goto L_088119D8;
    return;
L_088119D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088117C4;
      }
      goto L_088119E0;
    }
L_088119E0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_0881192C;
L_088119E8:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088119F4u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08812C2C;
L_088119F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811754;
      }
      goto L_08811A18;
    }
L_08811A18:
    ctx.set_gpr(31, 0x08811A20u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08810CA4;
L_08811A20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(30, 0u + 0u);
      if (branch_taken) {
          goto L_088117C4;
      }
      goto L_08811A28;
    }
L_08811A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    goto L_08811758;
L_08811A30:
    ctx.set_gpr(31, 0x08811A38u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08812C2C;
L_08811A38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0881192C;
L_08811A5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08811A68u);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[2]);
    goto L_08811C60;
L_08811A68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08811A7Cu);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 226u, 0x08814F84u>(ctx, &aot_mem) && ctx.pc == 0x08811A7Cu) goto L_08811A7C;
    return;
L_08811A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088117C4;
      }
      goto L_08811A84;
    }
L_08811A84:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    goto L_088118EC;
L_08811AA4:
    ctx.set_gpr(31, 0x08811AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 84u, 0x0881C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08811AACu) goto L_08811AAC;
    return;
L_08811AAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08811878;
      }
      goto L_08811AB4;
    }
L_08811AB4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08811694;
L_08811ABC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1928)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08811BD8;
      }
      goto L_08811AF0;
    }
L_08811AF0:
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(604));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08811B4C;
      }
      goto L_08811AFC;
    }
L_08811AFC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08811B00;
L_08811B00:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08811B40;
      }
      goto L_08811B0C;
    }
L_08811B0C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08811B1C;
L_08811B14:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08811B44;
    }
    goto L_08811B1C;
L_08811B1C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08811B14;
      }
      goto L_08811B30;
    }
L_08811B30:
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08811B38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08811B38u) goto L_08811B38;
    return;
L_08811B38:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.set_gpr(20, ctx.gpr[20] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811B1C;
      }
      goto L_08811B40;
    }
L_08811B40:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08811B44;
L_08811B44:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08811B00;
    }
    goto L_08811B4C;
L_08811B4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1928)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(604));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08811BB0;
      }
      goto L_08811B5C;
    }
L_08811B5C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08811B60;
L_08811B60:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08811BA0;
      }
      goto L_08811B6C;
    }
L_08811B6C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08811B7C;
L_08811B74:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08811BA4;
    }
    goto L_08811B7C;
L_08811B7C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08811B74;
      }
      goto L_08811B90;
    }
L_08811B90:
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08811B98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08811B98u) goto L_08811B98;
    return;
L_08811B98:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.set_gpr(20, ctx.gpr[20] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08811B7C;
      }
      goto L_08811BA0;
    }
L_08811BA0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08811BA4;
L_08811BA4:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08811B60;
    }
    goto L_08811BAC;
L_08811BAC:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08811BB0;
L_08811BB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08811BD8:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08811B4C;
L_08811BE0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08811C28u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_0881163C;
L_08811C28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08811C44;
      }
      goto L_08811C30;
    }
L_08811C30:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08811C40;
      }
      goto L_08811C3C;
    }
L_08811C3C:
    ctx.pc = 0x08811C3Cu; rt.stop("Allegrex BREAK code 7 at 0x08811C3C"); return;
    goto L_08811C40;
L_08811C40:
    ctx.set_gpr(17, ctx.lo);
    goto L_08811C44;
L_08811C44:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811C60:
    { const bool branch_taken = ctx.gpr[26] == 0u;
    ctx.set_gpr(2, 2226u << 16u);
      if (branch_taken) {
          goto L_08811C7C;
      }
      goto L_08811C68;
    }
L_08811C68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[26] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08811C7C;
    }
    goto L_08811C74;
L_08811C74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811C7C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811C84:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811C9C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811CB4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811CCC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08811CEC;
      }
      goto L_08811CE4;
    }
L_08811CE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    goto L_08811CEC;
L_08811CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811D94:
    ctx.set_gpr(2, 2225u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(780));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08811DECu);
    // nop
    goto L_08811C60;
L_08811DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08811D94;
L_08811DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08811E28u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 47u, 0x0880446Cu>(ctx, &aot_mem) && ctx.pc == 0x08811E28u) goto L_08811E28;
    return;
L_08811E28:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_08811E50;
      }
      goto L_08811E38;
    }
L_08811E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08811E3C;
L_08811E3C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08811E3C;
      }
      goto L_08811E58;
    }
L_08811E58:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08811EC4;
      }
      goto L_08811E98;
    }
L_08811E98:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(67));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08811EAC;
L_08811EAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08811EB0;
L_08811EB0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811EC4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, ctx.gpr[3] | 2048u);
      if (branch_taken) {
          goto L_08811F68;
      }
      goto L_08811ED0;
    }
L_08811ED0:
    ctx.set_gpr(31, 0x08811ED8u);
    // nop
    goto L_08811C60;
L_08811ED8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08811EE8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_088115C8;
L_08811EE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08811F60;
      }
      goto L_08811EF0;
    }
L_08811EF0:
    ctx.set_gpr(4, 0u | 32768u);
    ctx.set_gpr(2, ctx.gpr[2] & 61440u);
    ctx.set_gpr(3, ctx.gpr[2] ^ 8192u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(18, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08811FF4;
      }
      goto L_08811F04;
    }
L_08811F04:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08811F08;
L_08811F08:
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    ctx.set_gpr(31, 0x08811F14u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08811C60;
L_08811F14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08811F20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    goto L_08812074;
L_08811F20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08811F8C;
      }
      goto L_08811F28;
    }
L_08811F28:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(67));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811F60:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] | 2048u);
    goto L_08811F68;
L_08811F68:
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08811F70;
L_08811F70:
    ctx.set_gpr(31, 0x08811F78u);
    // nop
    goto L_08811C60;
L_08811F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08811F84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    goto L_08812074;
L_08811F84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08811F28;
      }
      goto L_08811F8C;
    }
L_08811F8C:
    ctx.set_gpr(31, 0x08811F94u);
    // nop
    goto L_08811C60;
L_08811F94:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2177u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4076));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08811EAC;
      }
      goto L_08811FC0;
    }
L_08811FC0:
    ctx.set_gpr(31, 0x08811FC8u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 154u, 0x08804930u>(ctx, &aot_mem) && ctx.pc == 0x08811FC8u) goto L_08811FC8;
    return;
L_08811FC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08811EB0;
      }
      goto L_08811FD0;
    }
L_08811FD0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811FF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2177u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25264));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08811F08;
      }
      goto L_08812008;
    }
L_08812008:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08811F70;
L_0881201C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08812030u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08811C60;
L_08812030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08812074;
L_08812048:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0881205Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08811C60;
L_0881205C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088112B8;
L_08812074:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088120C4;
      }
      goto L_088120B4;
    }
L_088120B4:
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, (ctx.gpr[17] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08812210;
      }
      goto L_088120C4;
    }
L_088120C4:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08812210;
      }
      goto L_088120D0;
    }
L_088120D0:
    ctx.set_gpr(31, 0x088120D8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08812FC0;
L_088120D8:
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(504) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[17] >> 3u);
      if (branch_taken) {
          goto L_08812240;
      }
      goto L_088120E4;
    }
L_088120E4:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[12]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08812328;
      }
      goto L_088120FC;
    }
L_088120FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08812128u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08812FFC;
L_08812128:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881215C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    goto L_08812160;
L_08812160:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, (ctx.gpr[21] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[21] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08812184;
      }
      goto L_08812178;
    }
L_08812178:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088124DC;
      }
      goto L_08812184;
    }
L_08812184:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8704)));
    ctx.set_gpr(30, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2852)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, ctx.gpr[16] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[23];
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088121B0;
      }
      goto L_088121A8;
    }
L_088121A8:
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(4111));
    ctx.set_gpr(18, (ctx.gpr[18] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    goto L_088121B0;
L_088121B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088121C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 380u, 0x08815A30u>(ctx, &aot_mem) && ctx.pc == 0x088121C0u) goto L_088121C0;
    return;
L_088121C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[23];
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088121E0;
      }
      goto L_088121CC;
    }
L_088121CC:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, 2233u << 16u);
      if (branch_taken) {
          goto L_08812500;
      }
      goto L_088121D8;
    }
L_088121D8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[13];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8656)));
      if (branch_taken) {
          goto L_08812504;
      }
      goto L_088121E0;
    }
L_088121E0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    goto L_088121E4;
L_088121E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08812204;
      }
      goto L_088121F8;
    }
L_088121F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088124DC;
      }
      goto L_08812204;
    }
L_08812204:
    ctx.set_gpr(31, 0x0881220Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08812FFC;
L_0881220C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08812210;
L_08812210:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812240:
    ctx.set_gpr(4, ctx.gpr[17] >> 9u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
      if (branch_taken) {
          goto L_08812264;
      }
      goto L_0881224C;
    }
L_0881224C:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08812388;
      }
      goto L_08812258;
    }
L_08812258:
    ctx.set_gpr(2, ctx.gpr[17] >> 6u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    goto L_08812264;
L_08812264:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881232C;
      }
      goto L_0881227C;
    }
L_0881227C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
        goto L_08812380;
    }
    goto L_08812294;
L_08812294:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088122F8;
    }
    goto L_0881229C;
L_0881229C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    goto L_088122A0;
L_088122A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(31, 0x088122C4u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08812FFC;
L_088122C4:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088122F8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881232C;
      }
      goto L_08812300;
    }
L_08812300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
        goto L_08812380;
    }
    goto L_08812318;
L_08812318:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088122F8;
    }
    goto L_08812320;
L_08812320:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    goto L_088122A0;
L_08812328:
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_0881232C;
L_0881232C:
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[11];
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
      if (branch_taken) {
          goto L_088125B8;
      }
      goto L_0881233C;
    }
L_0881233C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
        goto L_088123B0;
    }
    goto L_08812354;
L_08812354:
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
      if (branch_taken) {
          goto L_088123E8;
      }
      goto L_08812360;
    }
L_08812360:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    ctx.set_gpr(31, 0x08812378u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08812FFC;
L_08812378:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08812210;
L_08812380:
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0881232C;
L_08812388:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
      if (branch_taken) {
          goto L_08812264;
      }
      goto L_08812394;
    }
L_08812394:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_088126B0;
      }
      goto L_088123A0;
    }
L_088123A0:
    ctx.set_gpr(2, ctx.gpr[17] >> 12u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(110));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    goto L_08812264;
L_088123B0:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[4] | 1u);
    ctx.set_gpr(5, ctx.gpr[17] | 1u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(31, 0x088123E0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    goto L_08812FFC;
L_088123E0:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08812210;
L_088123E8:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] >> 3u);
      if (branch_taken) {
          goto L_088125C0;
      }
      goto L_088123F4;
    }
L_088123F4:
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08812430;
L_08812430:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < 0 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(2, ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(4, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
        goto L_08812160;
    }
    goto L_08812454;
L_08812454:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[10] << 3u);
      if (branch_taken) {
          goto L_0881248C;
      }
      goto L_08812460;
    }
L_08812460:
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812488;
      }
      goto L_08812478;
    }
L_08812478:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812478;
      }
      goto L_08812488;
    }
L_08812488:
    ctx.set_gpr(2, ctx.gpr[10] << 3u);
    goto L_0881248C;
L_0881248C:
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0881249C;
L_0881249C:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088124B8;
    }
    goto L_088124A4;
L_088124A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 63 ? 1u : 0u);
    goto L_08812634;
L_088124AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 63 ? 1u : 0u);
      if (branch_taken) {
          goto L_08812634;
      }
      goto L_088124B4;
    }
L_088124B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088124B8;
L_088124B8:
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(9, ctx.gpr[3] - ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088126C8;
    }
    goto L_088124CC;
L_088124CC:
    if (static_cast<std::int32_t>(ctx.gpr[9]) < 0) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088124AC;
    }
    goto L_088124D4;
L_088124D4:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    goto L_088122A0;
L_088124DC:
    ctx.set_gpr(2, ctx.gpr[17] | 1u);
    ctx.set_gpr(5, ctx.gpr[5] | 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(31, 0x088124F8u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08812FFC;
L_088124F8:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08812210;
L_08812500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8656)));
    goto L_08812504;
L_08812504:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[20];
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8656), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08812710;
      }
      goto L_08812510;
    }
L_08812510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2852)));
    goto L_08812514;
L_08812514:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08812810;
      }
      goto L_08812520;
    }
L_08812520:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8656), ctx.gpr[2]);
    goto L_08812528;
L_08812528:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[2] & 15u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08812544;
      }
      goto L_08812538;
    }
L_08812538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[5]);
    goto L_08812544;
L_08812544:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] & 4095u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08812568u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 380u, 0x08815A30u>(ctx, &aot_mem) && ctx.pc == 0x08812568u) goto L_08812568;
    return;
L_08812568:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08812818;
      }
      goto L_08812578;
    }
L_08812578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8656)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8656), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[13];
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881272C;
      }
      goto L_088125A0;
    }
L_088125A0:
    ctx.set_gpr(2, ctx.gpr[21] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881277C;
      }
      goto L_088125AC;
    }
L_088125AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088121E4;
L_088125B8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    goto L_08812430;
L_088125C0:
    ctx.set_gpr(5, ctx.gpr[3] >> 9u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_088125E4;
      }
      goto L_088125CC;
    }
L_088125CC:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_088127CC;
      }
      goto L_088125D8;
    }
L_088125D8:
    ctx.set_gpr(2, ctx.gpr[3] >> 6u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
    goto L_088125E4;
L_088125E4:
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
        goto L_088127F4;
    }
    goto L_088125F4;
L_088125F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_088125F8;
L_088125F8:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08812618;
    }
    goto L_08812608;
L_08812608:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088125F8;
    }
    goto L_08812614;
L_08812614:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08812618;
L_08812618:
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08812430;
L_08812634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08812644;
      }
      goto L_0881263C;
    }
L_0881263C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08812644;
L_08812644:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] & 3u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0881249C;
    }
    goto L_08812654;
L_08812654:
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    goto L_0881265C;
L_0881265C:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881283C;
      }
      goto L_0881266C;
    }
L_0881266C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0881265C;
      }
      goto L_08812678;
    }
L_08812678:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
        goto L_08812160;
    }
    goto L_08812688;
L_08812688:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881215C;
      }
      goto L_08812690;
    }
L_08812690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08812488;
      }
      goto L_08812698;
    }
L_08812698:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812698;
      }
      goto L_088126A8;
    }
L_088126A8:
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    goto L_08812488;
L_088126B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
      if (branch_taken) {
          goto L_08812760;
      }
      goto L_088126B8;
    }
L_088126B8:
    ctx.set_gpr(2, ctx.gpr[17] >> 15u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(119));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    goto L_08812264;
L_088126C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[17] | 1u);
    ctx.set_gpr(6, ctx.gpr[9] | 1u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08812708u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08812FFC;
L_08812708:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08812210;
L_08812710:
    ctx.set_gpr(2, ctx.gpr[20] & 4095u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08812514;
      }
      goto L_0881271C;
    }
L_0881271C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0881272C;
L_0881272C:
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8656)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8700)));
    ctx.set_gpr(7, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8696)));
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(3, ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8700), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088121E4;
      }
      goto L_08812758;
    }
L_08812758:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8696), ctx.gpr[6]);
    goto L_088121E4;
L_08812760:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(126));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_08812264;
      }
      goto L_0881276C;
    }
L_0881276C:
    ctx.set_gpr(2, ctx.gpr[17] >> 18u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    goto L_08812264;
L_0881277C:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881272C;
      }
      goto L_088127B0;
    }
L_088127B0:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088127C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    goto L_088112B8;
L_088127C0:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    goto L_0881272C;
L_088127CC:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_088125E4;
      }
      goto L_088127D8;
    }
L_088127D8:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08812824;
      }
      goto L_088127E4;
    }
L_088127E4:
    ctx.set_gpr(2, ctx.gpr[3] >> 12u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(110));
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
    goto L_088125E4;
L_088127F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] >> 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08812618;
L_08812810:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2852), ctx.gpr[20]);
    goto L_08812528;
L_08812818:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_08812578;
L_08812824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881284C;
      }
      goto L_0881282C;
    }
L_0881282C:
    ctx.set_gpr(2, ctx.gpr[3] >> 15u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(119));
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
    goto L_088125E4;
L_0881283C:
    ctx.set_gpr(2, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08812678;
L_0881284C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(126));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_088125E4;
      }
      goto L_08812858;
    }
L_08812858:
    ctx.set_gpr(2, ctx.gpr[3] >> 18u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
    goto L_088125E4;
L_08812868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088128C4;
      }
      goto L_08812884;
    }
L_08812884:
    ctx.set_gpr(31, 0x0881288Cu);
    // nop
    goto L_0881293C;
L_0881288C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08812890;
L_08812890:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088128AC;
      }
      goto L_0881289C;
    }
L_0881289C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(138));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088128AC;
L_088128AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088128C4:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(828));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088128D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0881293C;
L_088128D8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08812890;
L_0881293C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    if (ctx.gpr[5] != 0u) ctx.set_gpr(2, ctx.gpr[5]);
      if (branch_taken) {
          goto L_08812974;
      }
      goto L_0881294C;
    }
L_0881294C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08812960;
      }
      goto L_08812954;
    }
L_08812954:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812960:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812954;
      }
      goto L_08812974;
    }
L_08812974:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812984:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0881299C;
      }
      goto L_08812990;
    }
L_08812990:
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088129B8;
      }
      goto L_0881299C;
    }
L_0881299C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08812A4C;
      }
      goto L_088129A4;
    }
L_088129A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812A54;
      }
      goto L_088129B0;
    }
L_088129B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088129B8:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    goto L_088129C0;
L_088129C0:
    ctx.set_gpr(2, ctx.gpr[8] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088129C0;
      }
      goto L_088129D0;
    }
L_088129D0:
    ctx.set_gpr(2, 65278u << 16u);
    ctx.set_gpr(3, 32896u << 16u);
    ctx.set_gpr(11, ctx.gpr[2] | 65279u);
    ctx.set_gpr(10, ctx.gpr[3] | 32896u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    goto L_088129E4;
L_088129E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[8]);
    ctx.set_gpr(3, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[10]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
        goto L_08812A38;
    }
    goto L_08812A04;
L_08812A04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812A2C;
      }
      goto L_08812A10;
    }
L_08812A10:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08812A18;
L_08812A18:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812A34;
      }
      goto L_08812A20;
    }
L_08812A20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812A18;
      }
      goto L_08812A2C;
    }
L_08812A2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812A34:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    goto L_08812A38;
L_08812A38:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088129E4;
      }
      goto L_08812A44;
    }
L_08812A44:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088129A4;
      }
      goto L_08812A4C;
    }
L_08812A4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812A54:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08812A58;
L_08812A58:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812A4C;
      }
      goto L_08812A60;
    }
L_08812A60:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812A58;
      }
      goto L_08812A6C;
    }
L_08812A6C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812A74:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08812A8C;
      }
      goto L_08812A80;
    }
L_08812A80:
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08812AB0;
    }
    goto L_08812A8C;
L_08812A8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08812AD8;
      }
      goto L_08812A94;
    }
L_08812A94:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08812AE0;
      }
      goto L_08812AA4;
    }
L_08812AA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812AAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08812AB0;
L_08812AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08812A8C;
      }
      goto L_08812ABC;
    }
L_08812ABC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812AAC;
      }
      goto L_08812AD0;
    }
L_08812AD0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08812A94;
      }
      goto L_08812AD8;
    }
L_08812AD8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812AE0:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08812AE4;
L_08812AE4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812AD8;
      }
      goto L_08812AF0;
    }
L_08812AF0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812AE4;
      }
      goto L_08812B00;
    }
L_08812B00:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812B08:
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08812BB4;
      }
      goto L_08812B1C;
    }
L_08812B1C:
    ctx.set_gpr(10, ctx.gpr[6] >> 4u);
    ctx.set_gpr(12, ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812B60;
      }
      goto L_08812B2C;
    }
L_08812B2C:
    ctx.set_gpr(9, 0u + 0u);
    goto L_08812B30;
L_08812B30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08812B30;
      }
      goto L_08812B60;
    }
L_08812B60:
    ctx.set_gpr(10, ctx.gpr[12] >> 2u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08812B88;
      }
      goto L_08812B6C;
    }
L_08812B6C:
    ctx.set_gpr(9, 0u + 0u);
    goto L_08812B70;
L_08812B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812B70;
      }
      goto L_08812B88;
    }
L_08812B88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08812BAC;
      }
      goto L_08812B90;
    }
L_08812B90:
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    goto L_08812B98;
L_08812B98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812B98;
      }
      goto L_08812BAC;
    }
L_08812BAC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812BB4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(4, ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(7, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08812C08;
      }
      goto L_08812BE4;
    }
L_08812BE4:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08812BE8;
L_08812BE8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[2]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812BE8;
      }
      goto L_08812C08;
    }
L_08812C08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08812BAC;
      }
      goto L_08812C10;
    }
L_08812C10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812C10;
      }
      goto L_08812C24;
    }
L_08812C24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812C2C:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812C48;
      }
      goto L_08812C38;
    }
L_08812C38:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[6]);
        goto L_08812D34;
    }
    goto L_08812C48;
L_08812C48:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08812C80;
      }
      goto L_08812C58;
    }
L_08812C58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812C78;
      }
      goto L_08812C60;
    }
L_08812C60:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    goto L_08812C64;
L_08812C64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812C64;
      }
      goto L_08812C78;
    }
L_08812C78:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812C80:
    ctx.set_gpr(2, ctx.gpr[5] ^ ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
        goto L_08812E10;
    }
    goto L_08812C90;
L_08812C90:
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, ctx.gpr[6] >> 4u);
      if (branch_taken) {
          goto L_08812CBC;
      }
      goto L_08812C9C;
    }
L_08812C9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    rt.memory().aot_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[6] >> 4u);
    goto L_08812CBC;
L_08812CBC:
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(12, ctx.gpr[6] & 15u);
      if (branch_taken) {
          goto L_08812D00;
      }
      goto L_08812CCC;
    }
L_08812CCC:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08812CD0;
L_08812CD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[8];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08812CD0;
      }
      goto L_08812D00;
    }
L_08812D00:
    ctx.set_gpr(4, ctx.gpr[12] >> 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08812D28;
      }
      goto L_08812D0C;
    }
L_08812D0C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08812D10;
L_08812D10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812D10;
      }
      goto L_08812D28;
    }
L_08812D28:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    goto L_08812C58;
L_08812D34:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08812DE8;
      }
      goto L_08812D48;
    }
L_08812D48:
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
      if (branch_taken) {
          goto L_08812E6C;
      }
      goto L_08812D58;
    }
L_08812D58:
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812ECC;
      }
      goto L_08812D64;
    }
L_08812D64:
    ctx.set_gpr(12, ctx.gpr[11] >> 4u);
    goto L_08812D68;
L_08812D68:
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(13, ctx.gpr[11] & 15u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08812DB8;
      }
      goto L_08812D7C;
    }
L_08812D7C:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08812D80;
L_08812D80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-16), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-8), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[6];
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08812D80;
      }
      goto L_08812DB8;
    }
L_08812DB8:
    ctx.set_gpr(5, ctx.gpr[13] >> 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(11, ctx.gpr[11] & 3u);
      if (branch_taken) {
          goto L_08812DE0;
      }
      goto L_08812DC4;
    }
L_08812DC4:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08812DC8;
L_08812DC8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08812DC8;
      }
      goto L_08812DE0;
    }
L_08812DE0:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    goto L_08812DE8;
L_08812DE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08812C78;
      }
      goto L_08812DF0;
    }
L_08812DF0:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08812DF0;
      }
      goto L_08812E08;
    }
L_08812E08:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812E10:
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[3] == 0u) ctx.set_gpr(4, ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08812D28;
      }
      goto L_08812E3C;
    }
L_08812E3C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08812E40;
L_08812E40:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[2]);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812E40;
      }
      goto L_08812E60;
    }
L_08812E60:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    goto L_08812C58;
L_08812E6C:
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(4, ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.set_gpr(11, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08812DE0;
      }
      goto L_08812E98;
    }
L_08812E98:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08812EA0;
L_08812EA0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    rt.memory().aot_store_word_left(ctx.gpr[3] + static_cast<std::uint32_t>(3), ctx.gpr[2]);
    rt.memory().aot_store_word_right(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08812EA0;
    }
    goto L_08812EC0;
L_08812EC0:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    goto L_08812DE8;
L_08812ECC:
    ctx.set_gpr(2, rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(-1), ctx.gpr[2]));
    ctx.set_gpr(11, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[10] - ctx.gpr[3]);
    rt.memory().aot_store_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(-1), ctx.gpr[2]);
    ctx.set_gpr(12, ctx.gpr[11] >> 4u);
    goto L_08812D68;
L_08812EE8:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08812F68;
      }
      goto L_08812EF4;
    }
L_08812EF4:
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
        goto L_08812F30;
    }
    goto L_08812F00;
L_08812F00:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812F2C;
      }
      goto L_08812F10;
    }
L_08812F10:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812F10;
      }
      goto L_08812F2C;
    }
L_08812F2C:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    goto L_08812F30;
L_08812F30:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08812F9C;
      }
      goto L_08812F38;
    }
L_08812F38:
    ctx.set_gpr(8, ctx.gpr[6] >> 3u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_08812F5C;
      }
      goto L_08812F44;
    }
L_08812F44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08812F48;
L_08812F48:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08812F48;
      }
      goto L_08812F5C;
    }
L_08812F5C:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
        goto L_08812F90;
    }
    goto L_08812F68;
L_08812F68:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08812F88;
      }
      goto L_08812F70;
    }
L_08812F70:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08812F7C;
L_08812F7C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08812F7C;
    }
    goto L_08812F88;
L_08812F88:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812F90:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08812F68;
L_08812F9C:
    ctx.set_gpr(2, ctx.gpr[5] << 8u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(8, ctx.gpr[6] >> 3u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_08812F5C;
      }
      goto L_08812FB8;
    }
L_08812FB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08812F48;
L_08812FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08812FD0u);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_08812FD0:
    ctx.set_gpr(5, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8712)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812FEC;
      }
      goto L_08812FE4;
    }
L_08812FE4:
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8708), ctx.gpr[4]);
    goto L_08812FEC;
L_08812FEC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8712), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812FFC:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8712)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8712), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08813018;
      }
      goto L_08813010;
    }
L_08813010:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813018:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8708)));
    ctx.pc = 0x08B0DCACu; return;
L_08813024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[26] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088130D0;
      }
      goto L_08813034;
    }
L_08813034:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[26] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088130D4;
      }
      goto L_08813040;
    }
L_08813040:
    ctx.set_gpr(31, 0x08813048u);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_08813048:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(892)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[3] >> 27u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8716));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & 31u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    goto L_08813074;
L_08813074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088130F8;
      }
      goto L_08813080;
    }
L_08813080:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08813074;
      }
      goto L_0881308C;
    }
L_0881308C:
    ctx.set_gpr(31, 0x08813094u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_08813094:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8956));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_088130B4;
      }
      goto L_088130A4;
    }
L_088130A4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(31, 0x088130B4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.pc = 0x08B0DD04u;
    return;
L_088130B4:
    ctx.set_gpr(2, 2226u << 16u);
    goto L_088130B8;
L_088130B8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088130D0:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_088130D4;
L_088130D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8956));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_088130B4;
      }
      goto L_088130E0;
    }
L_088130E0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(848));
    ctx.set_gpr(31, 0x088130F0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.pc = 0x08B0DD04u;
    return;
L_088130F0:
    ctx.set_gpr(2, 2226u << 16u);
    goto L_088130B8;
L_088130F8:
    ctx.set_gpr(31, 0x08813100u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0DCACu;
    return;
L_08813100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(31, 0x0881313Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.pc = 0x08B0DC94u;
    return;
L_0881313C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(2, ctx.gpr[2] >> 27u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8716));
    ctx.set_gpr(18, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(892), ctx.gpr[17]);
    goto L_0881316C;
L_08813168:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0881316C;
L_0881316C:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088131C0;
      }
      goto L_0881317C;
    }
L_0881317C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08813238;
      }
      goto L_08813184;
    }
L_08813184:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08813168;
      }
      goto L_08813190;
    }
L_08813190:
    ctx.set_gpr(31, 0x08813198u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DCACu;
    return;
L_08813198:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088131D4;
      }
      goto L_088131A0;
    }
L_088131A0:
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
L_088131C0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.set_gpr(31, 0x088131CCu);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.pc = 0x08B0DCACu;
    return;
L_088131CC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088131A0;
      }
      goto L_088131D4;
    }
L_088131D4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    ctx.set_gpr(31, 0x088131E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(260));
    goto L_08812074;
L_088131E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088131F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(260));
    goto L_08812EE8;
L_088131F8:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.set_gpr(31, 0x08813208u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.pc = 0x08B0DC94u;
    return;
L_08813208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08813214u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.pc = 0x08B0DCACu;
    return;
L_08813214:
    ctx.set_gpr(2, 0u + 0u);
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
L_08813238:
    ctx.set_gpr(31, 0x08813240u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_08813240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08813278u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(892)));
    ctx.pc = 0x08B0DC94u;
    return;
L_08813278:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(2, ctx.gpr[2] >> 27u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8716));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    goto L_088132A0;
L_088132A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), 0u);
        goto L_088132D8;
    }
    goto L_088132AC;
L_088132AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088132A0;
      }
      goto L_088132B8;
    }
L_088132B8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088132C4u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.pc = 0x08B0DCACu;
    return;
L_088132C4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088132D8:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088132E4u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.pc = 0x08B0DCACu;
    return;
L_088132E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088132F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(708));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(616));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08813334;
L_08813334:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08813334;
      }
      goto L_08813344;
    }
L_08813344:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(916));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08813390;
L_08813390:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08813390;
      }
      goto L_088133A4;
    }
L_088133A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13070));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-21555));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(276));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-6547));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8468));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(284), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), 0u);
    ctx.set_gpr(31, 0x08813470u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(612), 0u);
    goto L_08812EE8;
L_08813470:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(892), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_088134BC;
L_088134BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.lo = ctx.gpr[17];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] & 65535u);
    ctx.execute_madd(2u, 9u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.lo = ctx.gpr[5];
    ctx.execute_madd(4u, 9u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[5] << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[5] >> 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088134BC;
      }
      goto L_08813508;
    }
L_08813508:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08813538;
      }
      goto L_08813510;
    }
L_08813510:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08813558;
    }
    goto L_08813520;
L_08813520:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08813538;
L_08813538:
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
L_08813558:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08813564u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813564u) goto L_08813564;
    return;
L_08813564:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08813580u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08812B08;
L_08813580:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881358Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x0881358Cu) goto L_0881358C;
    return;
L_0881358C:
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    goto L_08813520;
L_08813594:
    ctx.set_gpr(3, 14563u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] | 36409u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08813608;
      }
      goto L_088135F4;
    }
L_088135F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088135F8;
L_088135F8:
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088135F8;
      }
      goto L_08813608;
    }
L_08813608:
    ctx.set_gpr(31, 0x08813610u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813610u) goto L_08813610;
    return;
L_08813610:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08813664;
      }
      goto L_08813630;
    }
L_08813630:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(9));
    goto L_0881363C;
L_08813638:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0881363C;
L_0881363C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08813650u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    goto L_08813484;
L_08813650:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08813638;
      }
      goto L_08813660;
    }
L_08813660:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08813664;
L_08813664:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08813694;
      }
      goto L_08813670;
    }
L_08813670:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813694:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[17]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[2]);
    goto L_088136A0;
L_088136A0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088136B4u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    goto L_08813484;
L_088136B4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088136A0;
      }
      goto L_088136C0;
    }
L_088136C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088136E8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[4])));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088136F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, [](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[2] & 31u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08813720u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813720u) goto L_08813720;
    return;
L_08813720:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881373C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08813780;
      }
      goto L_08813770;
    }
L_08813770:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08813780;
L_08813780:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.set_gpr(31, 0x08813798u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813798u) goto L_08813798;
    return;
L_08813798:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(24, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(14, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088137D0;
      }
      goto L_088137B4;
    }
L_088137B4:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_088137BC;
L_088137BC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[14] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
        goto L_088137BC;
    }
    goto L_088137CC;
L_088137CC:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    goto L_088137D0;
L_088137D0:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(15, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(12, ctx.gpr[15] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088138F8;
      }
      goto L_088137EC;
    }
L_088137EC:
    ctx.set_gpr(13, ctx.gpr[4] + 0u);
    goto L_088137F0;
L_088137F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(10, ctx.gpr[2] >> 16u);
      if (branch_taken) {
          goto L_08813870;
      }
      goto L_08813800;
    }
L_08813800:
    ctx.set_gpr(8, ctx.gpr[15] + 0u);
    ctx.set_gpr(7, ctx.gpr[13] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_0881380C;
L_0881380C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.lo = ctx.gpr[3];
    ctx.execute_madd(9u, 5u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(3, ctx.lo);
    ctx.lo = ctx.gpr[4];
    ctx.execute_madd(9u, 2u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] >> 16u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(10, ctx.gpr[2] >> 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881380C;
      }
      goto L_08813864;
    }
L_08813864:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[2] >> 16u);
    goto L_08813870;
L_08813870:
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
        goto L_088138EC;
    }
    goto L_08813878;
L_08813878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[15] + 0u);
    ctx.set_gpr(8, ctx.gpr[13] + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_0881388C;
L_0881388C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] >> 16u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.lo = ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[4] & 65535u);
    ctx.execute_madd(10u, 2u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[9] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[11] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.lo = ctx.gpr[2];
    ctx.execute_madd(10u, 4u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(11, ctx.gpr[2] >> 16u);
      if (branch_taken) {
          goto L_0881388C;
      }
      goto L_088138E4;
    }
L_088138E4:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_088138EC;
L_088138EC:
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088137F0;
      }
      goto L_088138F8;
    }
L_088138F8:
    if (static_cast<std::int32_t>(ctx.gpr[20]) <= 0) {
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_08813938;
    }
    goto L_08813900;
L_08813900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[14] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08813934;
      }
      goto L_0881390C;
    }
L_0881390C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08813918;
L_08813918:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08813930;
      }
      goto L_08813924;
    }
L_08813924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08813918;
      }
      goto L_08813930;
    }
L_08813930:
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    goto L_08813934;
L_08813934:
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    goto L_08813938;
L_08813938:
    ctx.set_gpr(2, ctx.gpr[24] + 0u);
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
L_0881395C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[6] & 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08813A60;
      }
      goto L_0881398C;
    }
L_0881398C:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08813A24;
      }
      goto L_08813998;
    }
L_08813998:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08813A84;
      }
      goto L_088139A4;
    }
L_088139A4:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_088139F4;
      }
      goto L_088139BC;
    }
L_088139BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_088139C0;
L_088139C0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08813A20;
      }
      goto L_088139CC;
    }
L_088139CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08813A44;
      }
      goto L_088139D8;
    }
L_088139D8:
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_088139DC;
L_088139DC:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_088139C0;
      }
      goto L_088139F4;
    }
L_088139F4:
    ctx.set_gpr(31, 0x088139FCu);
    // nop
    goto L_0881373C;
L_088139FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08813A0Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x08813A0Cu) goto L_08813A0C;
    return;
L_08813A0C:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088139CC;
      }
      goto L_08813A20;
    }
L_08813A20:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08813A24;
L_08813A24:
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
L_08813A44:
    ctx.set_gpr(31, 0x08813A4Cu);
    // nop
    goto L_0881373C;
L_08813A4C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_088139DC;
L_08813A60:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(31, 0x08813A7Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08813484;
L_08813A7C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_0881398C;
L_08813A84:
    ctx.set_gpr(31, 0x08813A8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(625));
    goto L_08813708;
L_08813A8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_088139A4;
L_08813A9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08813AFC;
      }
      goto L_08813AEC;
    }
L_08813AEC:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08813AEC;
      }
      goto L_08813AFC;
    }
L_08813AFC:
    ctx.set_gpr(31, 0x08813B04u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813B04u) goto L_08813B04;
    return;
L_08813B04:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08813B24;
      }
      goto L_08813B10;
    }
L_08813B10:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08813B14;
L_08813B14:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813B14;
      }
      goto L_08813B24;
    }
L_08813B24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[20] & 31u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08813BBC;
      }
      goto L_08813B3C;
    }
L_08813B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, 0u + 0u);
    goto L_08813B48;
L_08813B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08813B48;
      }
      goto L_08813B70;
    }
L_08813B70:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08813B7C;
      }
      goto L_08813B78;
    }
L_08813B78:
    ctx.set_gpr(17, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    goto L_08813B7C;
L_08813B7C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08813B80;
L_08813B80:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08813B90u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x08813B90u) goto L_08813B90;
    return;
L_08813B90:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08813BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813B7C;
      }
      goto L_08813BD4;
    }
L_08813BD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813BBC;
      }
      goto L_08813BEC;
    }
L_08813BEC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08813B80;
L_08813BF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
      if (branch_taken) {
          goto L_08813C38;
      }
      goto L_08813C08;
    }
L_08813C08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08813C1C;
L_08813C1C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08813C40;
      }
      goto L_08813C30;
    }
L_08813C30:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08813C1C;
      }
      goto L_08813C38;
    }
L_08813C38:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813C40:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(6, ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08813C88u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    goto L_08813BF4;
L_08813C88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08813DB8;
      }
      goto L_08813C90;
    }
L_08813C90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08813DF0;
      }
      goto L_08813C98;
    }
L_08813C98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08813CA4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813CA4u) goto L_08813CA4;
    return;
L_08813CA4:
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(13, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[12] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(9, 0u + 0u);
    goto L_08813CD4;
L_08813CD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813CD4;
      }
      goto L_08813D20;
    }
L_08813D20:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[13] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4)));
        goto L_08813D64;
    }
    goto L_08813D2C;
L_08813D2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[13] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[2] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813D2C;
      }
      goto L_08813D60;
    }
L_08813D60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4)));
    goto L_08813D64;
L_08813D64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08813D90;
      }
      goto L_08813D6C;
    }
L_08813D6C:
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    goto L_08813D70;
L_08813D70:
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
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
L_08813D90:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813DA0;
    }
L_08813DA0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08813D90;
      }
      goto L_08813DB0;
    }
L_08813DB0:
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    goto L_08813D70;
L_08813DB8:
    ctx.set_gpr(31, 0x08813DC0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x08813DC0u) goto L_08813DC0;
    return;
L_08813DC0:
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), 0u);
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
L_08813DF0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08813C98;
L_08813E04:
    ctx.set_gpr(2, 32752u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(3, 64704u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 20u));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08813E38;
      }
      goto L_08813E2C;
    }
L_08813E2C:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813E38:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-20));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08813E6C;
      }
      goto L_08813E48;
    }
L_08813E48:
    ctx.set_gpr(3, ~(0u | ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08813E5C;
      }
      goto L_08813E54;
    }
L_08813E54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    goto L_08813E5C;
L_08813E5C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813E6C:
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813E84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(31, 0x08813ECCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_088136E8;
L_08813ECC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08813F40;
      }
      goto L_08813EE4;
    }
L_08813EE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[21] >> (ctx.gpr[6] & 31u));
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[3] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 2u, 0x08814008u>(ctx, &aot_mem); return;
      }
      goto L_08813F04;
    }
L_08813F04:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(2, ctx.gpr[21] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(18, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08813F40:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08813FF0;
      }
      goto L_08813F4C;
    }
L_08813F4C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08813F94;
      }
      goto L_08813F58;
    }
L_08813F58:
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(19, ctx.gpr[21] | ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08813F94:
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[6] >> (ctx.gpr[7] & 31u));
    ctx.set_gpr(3, ctx.gpr[21] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(19, ctx.gpr[3] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 3u, 0x08814014u>(ctx, &aot_mem); return;
      }
      goto L_08813FB8;
    }
L_08813FB8:
    ctx.set_gpr(2, ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(18, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08813FC0;
L_08813FC0:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08813FF0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08813F58;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 1u, 0x08814000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0003(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0003_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_3(Runtime &runtime) {
    runtime.register_generated_unit(3u, 0x08810000u, 16384u, &recomp_unit_0003, &recomp_unit_0003_entry);
    runtime.register_function(0x08810000u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810008u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810020u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881002Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810034u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881003Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881005Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881006Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810070u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881008Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881009Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881010Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810114u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810120u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810124u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810130u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881013Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810140u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881014Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810150u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810154u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810160u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810164u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810170u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810178u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810188u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881018Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810208u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810218u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810224u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881022Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810234u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810244u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810258u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881026Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881027Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810294u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881029Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810310u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881031Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810334u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810338u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810348u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810360u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810364u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810368u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810378u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881038Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810418u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810450u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810468u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810470u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810478u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810484u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810498u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810500u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810508u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881051Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881053Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810550u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810560u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810574u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810590u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810598u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810610u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810624u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881062Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881063Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810640u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810660u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881066Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810698u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810714u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810728u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810734u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810740u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810750u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881075Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810764u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810770u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881077Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881078Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810790u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881079Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810804u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810818u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810838u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881083Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810844u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810858u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810868u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810870u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810884u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810898u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810900u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881090Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810914u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810934u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881093Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810954u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810964u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881096Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810978u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810988u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810990u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810994u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811004u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811034u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811040u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881107Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811088u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881110Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881113Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811148u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881118Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811208u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811214u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811230u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811238u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811254u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811270u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811280u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881129Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811334u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811344u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881136Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811370u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811384u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811388u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811390u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811408u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881140Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881141Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811434u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881143Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811444u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811460u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811468u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881147Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811490u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811504u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881153Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881154Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811554u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811560u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811594u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881159Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811600u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811604u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811618u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811620u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881163Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811678u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811694u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881171Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881172Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811740u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811748u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811754u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811758u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881176Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811774u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881177Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811808u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881180Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811824u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881182Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811844u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881184Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881185Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881186Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811874u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811878u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811900u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881190Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881192Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811930u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811944u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881194Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811950u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881195Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811970u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881197Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811988u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881199Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ABCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812008u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881201Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812030u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881205Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812128u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881215Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812160u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812178u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812184u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812204u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881220Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812240u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881224Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812258u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812264u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881227Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812294u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881229Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812300u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812320u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812328u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881232Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881233Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812354u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812360u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812378u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812380u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812388u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812394u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812430u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812454u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812460u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812478u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812488u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881248Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881249Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812500u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812504u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812510u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812514u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812528u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812538u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812544u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812568u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812578u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812608u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812614u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812618u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812634u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881263Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812644u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812654u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881265Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881266Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812678u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812690u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812698u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812708u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881271Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881272Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812758u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812760u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881276Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881277Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812810u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812818u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812824u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881282Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881283Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881284Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812858u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812868u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812884u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881288Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812890u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881289Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881293Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881294Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812954u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812960u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812974u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812984u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812990u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881299Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ABCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ECCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813010u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813018u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813024u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813034u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813040u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881308Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813094u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813100u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813114u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881313Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813168u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881316Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881317Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813184u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813190u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813198u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813208u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813214u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813238u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813240u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813264u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813334u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813344u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813390u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813470u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813484u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813508u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813510u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813538u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813558u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813564u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813580u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881358Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813594u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813608u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813610u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813630u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813638u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881363Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813650u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813660u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813664u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813670u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813694u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813708u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813720u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881373Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813770u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813780u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813798u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813800u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881380Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813864u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813870u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813878u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881388Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813900u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881390Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813918u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813930u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813934u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813938u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881395Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881398Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813998u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813AECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813AFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813ECCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FF0u, &recomp_unit_0003, "recomp_unit_0003");
}
} // namespace psprecomp
