#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0092[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0,
    0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0,
    0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 85, 0, 86, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118,
    0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 130, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0,
    0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    145, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    194, 0, 195, 0, 0, 196, 0, 197, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 206, 0, 0, 0, 207, 208, 0, 0, 209, 210, 0, 0, 211, 212, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 250, 0, 0, 251, 252, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0,
    261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 269, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 274, 0, 0,
    0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0,
    0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 292, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 298, 0, 0, 299, 300, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0,
    0, 318, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 323, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 327, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 346, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 357, 0, 0, 358, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 369, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375,
    0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0,
    0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401,
    0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0,
    0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0,
    420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0,
    0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0,
    451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 466, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 472, 0, 0, 0, 0, 473, 0, 474,
    0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 482, 0, 0,
    0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0,
    0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0,
    0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 511, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 517, 518, 0, 519, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 0, 0, 534, 535, 0, 0, 0, 536, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0,
    0, 0, 0, 0, 541, 542, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 546, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0,
    0, 0, 0, 0, 550, 0, 551, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0,
    0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0,
    578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 584, 0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0,
    613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 616, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628,
    0, 0, 629, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0,
    636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 641, 642, 0, 643, 0, 0, 0, 0, 644, 0, 645,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 648, 0, 649, 650, 0, 651, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 0,
    655, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 660, 0, 661, 0, 0,
    0, 0, 0, 662, 0, 0, 0, 663, 0, 664, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 670, 671,
    0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 679, 0,
    0, 680, 681, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 686, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 733, 0, 734, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 740, 741, 0, 0, 0,
    742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 746, 0, 747, 0, 0,
    0, 0, 748, 749, 0, 0, 0, 750, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755,
    756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 763, 0, 0, 764, 0,
    765, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    770, 0, 0, 771, 0, 0, 0, 0, 772, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 778, 0, 0, 0, 779, 0, 0,
    0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 784, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0,
    787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 790, 0, 0, 791, 0, 792, 793, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0,
    802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0,
    0, 0, 0, 809, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826,
    0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0,
    0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 837, 838, 0, 0, 839, 0, 0, 840, 0,
    0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0,
    0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 0, 852,
    0, 0, 0, 0, 853, 854, 855, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 860, 0, 0, 861,
    0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 868,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 872,
    0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0,
    884, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 891, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 897,
    0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0,
    0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 913, 0, 914, 0, 0, 915, 0, 0, 916, 0, 0, 917, 0, 918, 0,
    0, 0, 0, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0, 0, 922, 0, 0, 923, 924, 0, 0, 925, 0, 0, 926, 0, 0,
    0, 0, 0, 927, 0, 928, 929, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 0, 0, 0, 934, 0, 0, 935,
    0, 0, 0, 0, 936, 0, 0, 0, 0, 937, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 941, 0, 942, 943, 0, 944, 0, 945, 0, 0, 0, 0,
    0, 946, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 949, 0, 0, 0, 0, 950, 0, 951, 0, 0, 0, 0, 952,
};
void recomp_unit_0092_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08974000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0092[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08974000;
    case 2u: goto L_08974018;
    case 3u: goto L_08974030;
    case 4u: goto L_0897403C;
    case 5u: goto L_08974044;
    case 6u: goto L_08974050;
    case 7u: goto L_08974060;
    case 8u: goto L_08974084;
    case 9u: goto L_089740D8;
    case 10u: goto L_08974124;
    case 11u: goto L_08974128;
    case 12u: goto L_0897416C;
    case 13u: goto L_08974174;
    case 14u: goto L_08974180;
    case 15u: goto L_08974194;
    case 16u: goto L_089741A0;
    case 17u: goto L_089741B8;
    case 18u: goto L_089741C4;
    case 19u: goto L_089741D8;
    case 20u: goto L_089741E0;
    case 21u: goto L_08974230;
    case 22u: goto L_08974250;
    case 23u: goto L_08974270;
    case 24u: goto L_08974278;
    case 25u: goto L_08974284;
    case 26u: goto L_0897428C;
    case 27u: goto L_08974298;
    case 28u: goto L_089742C4;
    case 29u: goto L_089742D8;
    case 30u: goto L_089742E8;
    case 31u: goto L_08974304;
    case 32u: goto L_0897431C;
    case 33u: goto L_08974334;
    case 34u: goto L_0897435C;
    case 35u: goto L_08974394;
    case 36u: goto L_089743AC;
    case 37u: goto L_089743B8;
    case 38u: goto L_089743C4;
    case 39u: goto L_089743D0;
    case 40u: goto L_089743DC;
    case 41u: goto L_089743E8;
    case 42u: goto L_089743F4;
    case 43u: goto L_08974400;
    case 44u: goto L_0897440C;
    case 45u: goto L_08974418;
    case 46u: goto L_08974424;
    case 47u: goto L_08974430;
    case 48u: goto L_0897443C;
    case 49u: goto L_0897444C;
    case 50u: goto L_08974460;
    case 51u: goto L_0897446C;
    case 52u: goto L_08974478;
    case 53u: goto L_08974484;
    case 54u: goto L_08974490;
    case 55u: goto L_0897449C;
    case 56u: goto L_089744A8;
    case 57u: goto L_089744B4;
    case 58u: goto L_089744C0;
    case 59u: goto L_089744CC;
    case 60u: goto L_089744D8;
    case 61u: goto L_089744E0;
    case 62u: goto L_089744E8;
    case 63u: goto L_089744F8;
    case 64u: goto L_0897450C;
    case 65u: goto L_08974518;
    case 66u: goto L_08974524;
    case 67u: goto L_08974530;
    case 68u: goto L_0897453C;
    case 69u: goto L_08974544;
    case 70u: goto L_0897454C;
    case 71u: goto L_0897455C;
    case 72u: goto L_08974574;
    case 73u: goto L_08974588;
    case 74u: goto L_089745BC;
    case 75u: goto L_089745D4;
    case 76u: goto L_089745E0;
    case 77u: goto L_089745EC;
    case 78u: goto L_08974608;
    case 79u: goto L_08974614;
    case 80u: goto L_08974630;
    case 81u: goto L_08974638;
    case 82u: goto L_0897464C;
    case 83u: goto L_08974658;
    case 84u: goto L_0897466C;
    case 85u: goto L_08974670;
    case 86u: goto L_08974678;
    case 87u: goto L_08974684;
    case 88u: goto L_08974694;
    case 89u: goto L_089746A4;
    case 90u: goto L_089746B4;
    case 91u: goto L_089746C4;
    case 92u: goto L_089746E0;
    case 93u: goto L_089746E8;
    case 94u: goto L_089746FC;
    case 95u: goto L_08974708;
    case 96u: goto L_08974714;
    case 97u: goto L_08974730;
    case 98u: goto L_08974738;
    case 99u: goto L_0897474C;
    case 100u: goto L_08974758;
    case 101u: goto L_08974780;
    case 102u: goto L_0897478C;
    case 103u: goto L_08974798;
    case 104u: goto L_089747AC;
    case 105u: goto L_089747B0;
    case 106u: goto L_089747B8;
    case 107u: goto L_089747C8;
    case 108u: goto L_089747DC;
    case 109u: goto L_089747E8;
    case 110u: goto L_089747F0;
    case 111u: goto L_08974800;
    case 112u: goto L_08974828;
    case 113u: goto L_08974834;
    case 114u: goto L_08974840;
    case 115u: goto L_08974844;
    case 116u: goto L_08974858;
    case 117u: goto L_08974874;
    case 118u: goto L_0897487C;
    case 119u: goto L_08974888;
    case 120u: goto L_08974894;
    case 121u: goto L_089748A0;
    case 122u: goto L_089748AC;
    case 123u: goto L_089748B8;
    case 124u: goto L_089748C4;
    case 125u: goto L_089748D0;
    case 126u: goto L_089748E4;
    case 127u: goto L_089748F0;
    case 128u: goto L_089748F8;
    case 129u: goto L_08974908;
    case 130u: goto L_08974920;
    case 131u: goto L_08974924;
    case 132u: goto L_0897492C;
    case 133u: goto L_0897495C;
    case 134u: goto L_0897496C;
    case 135u: goto L_08974978;
    case 136u: goto L_08974988;
    case 137u: goto L_08974994;
    case 138u: goto L_08974998;
    case 139u: goto L_089749A8;
    case 140u: goto L_089749AC;
    case 141u: goto L_089749CC;
    case 142u: goto L_089749D8;
    case 143u: goto L_089749E0;
    case 144u: goto L_089749F0;
    case 145u: goto L_08974A00;
    case 146u: goto L_08974A04;
    case 147u: goto L_08974A0C;
    case 148u: goto L_08974A3C;
    case 149u: goto L_08974A4C;
    case 150u: goto L_08974A68;
    case 151u: goto L_08974A70;
    case 152u: goto L_08974A84;
    case 153u: goto L_08974A90;
    case 154u: goto L_08974AA0;
    case 155u: goto L_08974AB4;
    case 156u: goto L_08974AC8;
    case 157u: goto L_08974ADC;
    case 158u: goto L_08974AE4;
    case 159u: goto L_08974AF4;
    case 160u: goto L_08974B04;
    case 161u: goto L_08974B28;
    case 162u: goto L_08974B34;
    case 163u: goto L_08974B40;
    case 164u: goto L_08974B48;
    case 165u: goto L_08974B58;
    case 166u: goto L_08974B68;
    case 167u: goto L_08974B8C;
    case 168u: goto L_08974B98;
    case 169u: goto L_08974BA4;
    case 170u: goto L_08974BAC;
    case 171u: goto L_08974BBC;
    case 172u: goto L_08974BCC;
    case 173u: goto L_08974BF0;
    case 174u: goto L_08974BFC;
    case 175u: goto L_08974C08;
    case 176u: goto L_08974C24;
    case 177u: goto L_08974C2C;
    case 178u: goto L_08974C40;
    case 179u: goto L_08974C4C;
    case 180u: goto L_08974C78;
    case 181u: goto L_08974C84;
    case 182u: goto L_08974C90;
    case 183u: goto L_08974CA4;
    case 184u: goto L_08974CA8;
    case 185u: goto L_08974CB0;
    case 186u: goto L_08974CC0;
    case 187u: goto L_08974CC4;
    case 188u: goto L_08974CE8;
    case 189u: goto L_08974D30;
    case 190u: goto L_08974D40;
    case 191u: goto L_08974D4C;
    case 192u: goto L_08974D58;
    case 193u: goto L_08974D64;
    case 194u: goto L_08974D80;
    case 195u: goto L_08974D88;
    case 196u: goto L_08974D94;
    case 197u: goto L_08974D9C;
    case 198u: goto L_08974DA0;
    case 199u: goto L_08974DAC;
    case 200u: goto L_08974DBC;
    case 201u: goto L_08974DC8;
    case 202u: goto L_08974DD4;
    case 203u: goto L_08974DDC;
    case 204u: goto L_08974DF0;
    case 205u: goto L_08974DFC;
    case 206u: goto L_08974E04;
    case 207u: goto L_08974E14;
    case 208u: goto L_08974E18;
    case 209u: goto L_08974E24;
    case 210u: goto L_08974E28;
    case 211u: goto L_08974E34;
    case 212u: goto L_08974E38;
    case 213u: goto L_08974E3C;
    case 214u: goto L_08974E4C;
    case 215u: goto L_08974E68;
    case 216u: goto L_08974E78;
    case 217u: goto L_08974E90;
    case 218u: goto L_08974E9C;
    case 219u: goto L_08974EA8;
    case 220u: goto L_08974EB8;
    case 221u: goto L_08974EC4;
    case 222u: goto L_08974ED8;
    case 223u: goto L_08974EE4;
    case 224u: goto L_08974EEC;
    case 225u: goto L_08974EFC;
    case 226u: goto L_08974F28;
    case 227u: goto L_08974F4C;
    case 228u: goto L_08974F50;
    case 229u: goto L_08974F60;
    case 230u: goto L_08974F64;
    case 231u: goto L_08974F90;
    case 232u: goto L_08974FCC;
    case 233u: goto L_08974FDC;
    case 234u: goto L_08974FEC;
    case 235u: goto L_08974FF8;
    case 236u: goto L_0897500C;
    case 237u: goto L_08975018;
    case 238u: goto L_08975024;
    case 239u: goto L_08975030;
    case 240u: goto L_08975048;
    case 241u: goto L_08975058;
    case 242u: goto L_08975064;
    case 243u: goto L_08975078;
    case 244u: goto L_0897507C;
    case 245u: goto L_08975090;
    case 246u: goto L_089750A8;
    case 247u: goto L_089750B0;
    case 248u: goto L_089750CC;
    case 249u: goto L_089750DC;
    case 250u: goto L_089750E0;
    case 251u: goto L_089750EC;
    case 252u: goto L_089750F0;
    case 253u: goto L_08975110;
    case 254u: goto L_0897511C;
    case 255u: goto L_08975130;
    case 256u: goto L_08975140;
    case 257u: goto L_0897514C;
    case 258u: goto L_08975160;
    case 259u: goto L_0897516C;
    case 260u: goto L_08975174;
    case 261u: goto L_08975180;
    case 262u: goto L_08975194;
    case 263u: goto L_089751A4;
    case 264u: goto L_089751AC;
    case 265u: goto L_089751C4;
    case 266u: goto L_089751CC;
    case 267u: goto L_089751D8;
    case 268u: goto L_089751E0;
    case 269u: goto L_089751E4;
    case 270u: goto L_089751F0;
    case 271u: goto L_08975220;
    case 272u: goto L_08975264;
    case 273u: goto L_08975270;
    case 274u: goto L_08975274;
    case 275u: goto L_08975284;
    case 276u: goto L_08975290;
    case 277u: goto L_0897529C;
    case 278u: goto L_089752A8;
    case 279u: goto L_089752BC;
    case 280u: goto L_089752C0;
    case 281u: goto L_089752D4;
    case 282u: goto L_089752E8;
    case 283u: goto L_089752F8;
    case 284u: goto L_08975308;
    case 285u: goto L_08975314;
    case 286u: goto L_08975320;
    case 287u: goto L_0897532C;
    case 288u: goto L_08975344;
    case 289u: goto L_08975354;
    case 290u: goto L_08975360;
    case 291u: goto L_08975374;
    case 292u: goto L_08975378;
    case 293u: goto L_0897538C;
    case 294u: goto L_089753A4;
    case 295u: goto L_089753AC;
    case 296u: goto L_089753C8;
    case 297u: goto L_089753D8;
    case 298u: goto L_089753DC;
    case 299u: goto L_089753E8;
    case 300u: goto L_089753EC;
    case 301u: goto L_0897540C;
    case 302u: goto L_08975418;
    case 303u: goto L_0897542C;
    case 304u: goto L_0897543C;
    case 305u: goto L_08975448;
    case 306u: goto L_0897545C;
    case 307u: goto L_08975468;
    case 308u: goto L_08975474;
    case 309u: goto L_08975488;
    case 310u: goto L_08975498;
    case 311u: goto L_089754B8;
    case 312u: goto L_089754C0;
    case 313u: goto L_089754C8;
    case 314u: goto L_089754CC;
    case 315u: goto L_089754D8;
    case 316u: goto L_089754E8;
    case 317u: goto L_089754F8;
    case 318u: goto L_08975504;
    case 319u: goto L_08975508;
    case 320u: goto L_08975514;
    case 321u: goto L_08975524;
    case 322u: goto L_08975534;
    case 323u: goto L_08975538;
    case 324u: goto L_08975550;
    case 325u: goto L_08975558;
    case 326u: goto L_0897556C;
    case 327u: goto L_08975570;
    case 328u: goto L_08975584;
    case 329u: goto L_08975598;
    case 330u: goto L_089755B0;
    case 331u: goto L_089755B8;
    case 332u: goto L_089755C0;
    case 333u: goto L_089755D0;
    case 334u: goto L_089755E4;
    case 335u: goto L_089755E8;
    case 336u: goto L_089755FC;
    case 337u: goto L_08975610;
    case 338u: goto L_0897561C;
    case 339u: goto L_0897562C;
    case 340u: goto L_08975634;
    case 341u: goto L_0897564C;
    case 342u: goto L_08975654;
    case 343u: goto L_08975668;
    case 344u: goto L_0897566C;
    case 345u: goto L_08975680;
    case 346u: goto L_08975694;
    case 347u: goto L_08975698;
    case 348u: goto L_089756B4;
    case 349u: goto L_089756C4;
    case 350u: goto L_089756C8;
    case 351u: goto L_089756DC;
    case 352u: goto L_089756E8;
    case 353u: goto L_0897571C;
    case 354u: goto L_08975724;
    case 355u: goto L_08975730;
    case 356u: goto L_08975738;
    case 357u: goto L_0897573C;
    case 358u: goto L_08975748;
    case 359u: goto L_0897574C;
    case 360u: goto L_08975754;
    case 361u: goto L_08975790;
    case 362u: goto L_089757A4;
    case 363u: goto L_089757B0;
    case 364u: goto L_089757C0;
    case 365u: goto L_089757CC;
    case 366u: goto L_089757D8;
    case 367u: goto L_089757E0;
    case 368u: goto L_089757EC;
    case 369u: goto L_08975808;
    case 370u: goto L_0897580C;
    case 371u: goto L_08975818;
    case 372u: goto L_08975844;
    case 373u: goto L_08975864;
    case 374u: goto L_0897586C;
    case 375u: goto L_0897587C;
    case 376u: goto L_08975884;
    case 377u: goto L_08975898;
    case 378u: goto L_089758A0;
    case 379u: goto L_089758B4;
    case 380u: goto L_089758BC;
    case 381u: goto L_089758D0;
    case 382u: goto L_089758D8;
    case 383u: goto L_089758EC;
    case 384u: goto L_089758F4;
    case 385u: goto L_08975908;
    case 386u: goto L_0897591C;
    case 387u: goto L_08975924;
    case 388u: goto L_08975938;
    case 389u: goto L_0897594C;
    case 390u: goto L_08975954;
    case 391u: goto L_08975968;
    case 392u: goto L_08975970;
    case 393u: goto L_08975980;
    case 394u: goto L_08975988;
    case 395u: goto L_0897599C;
    case 396u: goto L_089759B0;
    case 397u: goto L_089759B8;
    case 398u: goto L_089759CC;
    case 399u: goto L_089759E0;
    case 400u: goto L_089759E8;
    case 401u: goto L_089759FC;
    case 402u: goto L_08975A04;
    case 403u: goto L_08975A18;
    case 404u: goto L_08975A20;
    case 405u: goto L_08975A34;
    case 406u: goto L_08975A3C;
    case 407u: goto L_08975A50;
    case 408u: goto L_08975A58;
    case 409u: goto L_08975A6C;
    case 410u: goto L_08975A74;
    case 411u: goto L_08975A88;
    case 412u: goto L_08975A90;
    case 413u: goto L_08975AA4;
    case 414u: goto L_08975AAC;
    case 415u: goto L_08975AC0;
    case 416u: goto L_08975AC8;
    case 417u: goto L_08975ADC;
    case 418u: goto L_08975AE4;
    case 419u: goto L_08975AF8;
    case 420u: goto L_08975B00;
    case 421u: goto L_08975B14;
    case 422u: goto L_08975B1C;
    case 423u: goto L_08975B28;
    case 424u: goto L_08975B30;
    case 425u: goto L_08975B44;
    case 426u: goto L_08975B70;
    case 427u: goto L_08975B78;
    case 428u: goto L_08975B84;
    case 429u: goto L_08975B94;
    case 430u: goto L_08975BA8;
    case 431u: goto L_08975BAC;
    case 432u: goto L_08975BBC;
    case 433u: goto L_08975BD4;
    case 434u: goto L_08975BFC;
    case 435u: goto L_08975C04;
    case 436u: goto L_08975C20;
    case 437u: goto L_08975C28;
    case 438u: goto L_08975C3C;
    case 439u: goto L_08975C50;
    case 440u: goto L_08975C58;
    case 441u: goto L_08975C70;
    case 442u: goto L_08975C88;
    case 443u: goto L_08975C90;
    case 444u: goto L_08975CA4;
    case 445u: goto L_08975CAC;
    case 446u: goto L_08975CC0;
    case 447u: goto L_08975CC8;
    case 448u: goto L_08975CDC;
    case 449u: goto L_08975CE4;
    case 450u: goto L_08975CF8;
    case 451u: goto L_08975D00;
    case 452u: goto L_08975D14;
    case 453u: goto L_08975D1C;
    case 454u: goto L_08975D30;
    case 455u: goto L_08975D38;
    case 456u: goto L_08975D4C;
    case 457u: goto L_08975D54;
    case 458u: goto L_08975D60;
    case 459u: goto L_08975D68;
    case 460u: goto L_08975D80;
    case 461u: goto L_08975DAC;
    case 462u: goto L_08975DB4;
    case 463u: goto L_08975DC0;
    case 464u: goto L_08975DD0;
    case 465u: goto L_08975DE4;
    case 466u: goto L_08975DE8;
    case 467u: goto L_08975DF8;
    case 468u: goto L_08975E10;
    case 469u: goto L_08975E40;
    case 470u: goto L_08975E48;
    case 471u: goto L_08975E5C;
    case 472u: goto L_08975E60;
    case 473u: goto L_08975E74;
    case 474u: goto L_08975E7C;
    case 475u: goto L_08975E98;
    case 476u: goto L_08975EA0;
    case 477u: goto L_08975EB4;
    case 478u: goto L_08975EBC;
    case 479u: goto L_08975ED0;
    case 480u: goto L_08975ED8;
    case 481u: goto L_08975EEC;
    case 482u: goto L_08975EF4;
    case 483u: goto L_08975F0C;
    case 484u: goto L_08975F20;
    case 485u: goto L_08975F28;
    case 486u: goto L_08975F40;
    case 487u: goto L_08975F54;
    case 488u: goto L_08975F5C;
    case 489u: goto L_08975F70;
    case 490u: goto L_08975F78;
    case 491u: goto L_08975F90;
    case 492u: goto L_08975F98;
    case 493u: goto L_08975FA4;
    case 494u: goto L_08975FAC;
    case 495u: goto L_08975FCC;
    case 496u: goto L_08975FDC;
    case 497u: goto L_08975FEC;
    case 498u: goto L_08976008;
    case 499u: goto L_08976010;
    case 500u: goto L_08976018;
    case 501u: goto L_0897602C;
    case 502u: goto L_08976044;
    case 503u: goto L_08976060;
    case 504u: goto L_08976070;
    case 505u: goto L_08976080;
    case 506u: goto L_0897609C;
    case 507u: goto L_089760B0;
    case 508u: goto L_089760BC;
    case 509u: goto L_089760D8;
    case 510u: goto L_089760E0;
    case 511u: goto L_089760E4;
    case 512u: goto L_08976120;
    case 513u: goto L_0897612C;
    case 514u: goto L_08976138;
    case 515u: goto L_08976140;
    case 516u: goto L_08976150;
    case 517u: goto L_08976158;
    case 518u: goto L_0897615C;
    case 519u: goto L_08976164;
    case 520u: goto L_08976168;
    case 521u: goto L_089761A0;
    case 522u: goto L_089761AC;
    case 523u: goto L_089761B8;
    case 524u: goto L_089761C0;
    case 525u: goto L_089761D4;
    case 526u: goto L_089761E0;
    case 527u: goto L_089761E8;
    case 528u: goto L_089761F0;
    case 529u: goto L_08976234;
    case 530u: goto L_08976240;
    case 531u: goto L_0897625C;
    case 532u: goto L_08976260;
    case 533u: goto L_08976274;
    case 534u: goto L_08976290;
    case 535u: goto L_08976294;
    case 536u: goto L_089762A4;
    case 537u: goto L_089762AC;
    case 538u: goto L_089762B0;
    case 539u: goto L_089762E8;
    case 540u: goto L_089762F4;
    case 541u: goto L_08976310;
    case 542u: goto L_08976314;
    case 543u: goto L_08976328;
    case 544u: goto L_08976338;
    case 545u: goto L_0897634C;
    case 546u: goto L_08976354;
    case 547u: goto L_08976358;
    case 548u: goto L_08976368;
    case 549u: goto L_08976378;
    case 550u: goto L_08976390;
    case 551u: goto L_08976398;
    case 552u: goto L_0897639C;
    case 553u: goto L_089763AC;
    case 554u: goto L_089763F0;
    case 555u: goto L_08976418;
    case 556u: goto L_08976424;
    case 557u: goto L_08976434;
    case 558u: goto L_0897643C;
    case 559u: goto L_08976450;
    case 560u: goto L_08976454;
    case 561u: goto L_08976480;
    case 562u: goto L_089764CC;
    case 563u: goto L_089764FC;
    case 564u: goto L_08976508;
    case 565u: goto L_08976518;
    case 566u: goto L_08976520;
    case 567u: goto L_08976534;
    case 568u: goto L_08976538;
    case 569u: goto L_08976568;
    case 570u: goto L_08976570;
    case 571u: goto L_08976578;
    case 572u: goto L_08976598;
    case 573u: goto L_089765A0;
    case 574u: goto L_089765AC;
    case 575u: goto L_089765B4;
    case 576u: goto L_089765C0;
    case 577u: goto L_089765EC;
    case 578u: goto L_08976600;
    case 579u: goto L_08976610;
    case 580u: goto L_0897662C;
    case 581u: goto L_08976644;
    case 582u: goto L_0897665C;
    case 583u: goto L_0897667C;
    case 584u: goto L_08976684;
    case 585u: goto L_08976698;
    case 586u: goto L_0897669C;
    case 587u: goto L_089766B4;
    case 588u: goto L_089766C0;
    case 589u: goto L_089766CC;
    case 590u: goto L_089766DC;
    case 591u: goto L_089766EC;
    case 592u: goto L_089766F8;
    case 593u: goto L_08976704;
    case 594u: goto L_08976728;
    case 595u: goto L_08976734;
    case 596u: goto L_08976750;
    case 597u: goto L_08976760;
    case 598u: goto L_08976770;
    case 599u: goto L_08976788;
    case 600u: goto L_08976790;
    case 601u: goto L_089767A8;
    case 602u: goto L_089767BC;
    case 603u: goto L_089767CC;
    case 604u: goto L_089767E4;
    case 605u: goto L_089767EC;
    case 606u: goto L_089767FC;
    case 607u: goto L_08976818;
    case 608u: goto L_08976828;
    case 609u: goto L_08976840;
    case 610u: goto L_0897685C;
    case 611u: goto L_0897686C;
    case 612u: goto L_08976874;
    case 613u: goto L_08976880;
    case 614u: goto L_08976894;
    case 615u: goto L_089768A8;
    case 616u: goto L_089768B4;
    case 617u: goto L_089768B8;
    case 618u: goto L_089768CC;
    case 619u: goto L_089768F8;
    case 620u: goto L_0897690C;
    case 621u: goto L_08976918;
    case 622u: goto L_08976928;
    case 623u: goto L_08976930;
    case 624u: goto L_08976940;
    case 625u: goto L_08976948;
    case 626u: goto L_08976954;
    case 627u: goto L_08976968;
    case 628u: goto L_0897697C;
    case 629u: goto L_08976988;
    case 630u: goto L_0897698C;
    case 631u: goto L_089769A0;
    case 632u: goto L_089769CC;
    case 633u: goto L_089769E0;
    case 634u: goto L_089769EC;
    case 635u: goto L_089769F8;
    case 636u: goto L_08976A00;
    case 637u: goto L_08976A18;
    case 638u: goto L_08976A28;
    case 639u: goto L_08976A38;
    case 640u: goto L_08976A50;
    case 641u: goto L_08976A54;
    case 642u: goto L_08976A58;
    case 643u: goto L_08976A60;
    case 644u: goto L_08976A74;
    case 645u: goto L_08976A7C;
    case 646u: goto L_08976AAC;
    case 647u: goto L_08976AB8;
    case 648u: goto L_08976ABC;
    case 649u: goto L_08976AC4;
    case 650u: goto L_08976AC8;
    case 651u: goto L_08976AD0;
    case 652u: goto L_08976ADC;
    case 653u: goto L_08976AE8;
    case 654u: goto L_08976AF0;
    case 655u: goto L_08976B00;
    case 656u: goto L_08976B04;
    case 657u: goto L_08976B2C;
    case 658u: goto L_08976B60;
    case 659u: goto L_08976B68;
    case 660u: goto L_08976B6C;
    case 661u: goto L_08976B74;
    case 662u: goto L_08976B8C;
    case 663u: goto L_08976B9C;
    case 664u: goto L_08976BA4;
    case 665u: goto L_08976BA8;
    case 666u: goto L_08976BB8;
    case 667u: goto L_08976BD4;
    case 668u: goto L_08976BE0;
    case 669u: goto L_08976BF0;
    case 670u: goto L_08976BF8;
    case 671u: goto L_08976BFC;
    case 672u: goto L_08976C20;
    case 673u: goto L_08976C28;
    case 674u: goto L_08976C38;
    case 675u: goto L_08976C40;
    case 676u: goto L_08976C54;
    case 677u: goto L_08976C60;
    case 678u: goto L_08976C70;
    case 679u: goto L_08976C78;
    case 680u: goto L_08976C84;
    case 681u: goto L_08976C88;
    case 682u: goto L_08976C90;
    case 683u: goto L_08976C9C;
    case 684u: goto L_08976CA8;
    case 685u: goto L_08976CB0;
    case 686u: goto L_08976CC0;
    case 687u: goto L_08976CC4;
    case 688u: goto L_08976CD4;
    case 689u: goto L_08976CFC;
    case 690u: goto L_08976D34;
    case 691u: goto L_08976D48;
    case 692u: goto L_08976D4C;
    case 693u: goto L_08976D60;
    case 694u: goto L_08976D8C;
    case 695u: goto L_08976D98;
    case 696u: goto L_08976DA8;
    case 697u: goto L_08976DB4;
    case 698u: goto L_08976DC8;
    case 699u: goto L_08976DCC;
    case 700u: goto L_08976DE4;
    case 701u: goto L_08976E0C;
    case 702u: goto L_08976E18;
    case 703u: goto L_08976E30;
    case 704u: goto L_08976E3C;
    case 705u: goto L_08976E50;
    case 706u: goto L_08976E54;
    case 707u: goto L_08976E6C;
    case 708u: goto L_08976EA0;
    case 709u: goto L_08976EB0;
    case 710u: goto L_08976EBC;
    case 711u: goto L_08976ECC;
    case 712u: goto L_08976ED8;
    case 713u: goto L_08976EE0;
    case 714u: goto L_08976F08;
    case 715u: goto L_08976F14;
    case 716u: goto L_08976F28;
    case 717u: goto L_08976F34;
    case 718u: goto L_08976F48;
    case 719u: goto L_08976F4C;
    case 720u: goto L_08976F5C;
    case 721u: goto L_08976F94;
    case 722u: goto L_08976FA0;
    case 723u: goto L_08976FB0;
    case 724u: goto L_08976FD8;
    case 725u: goto L_0897700C;
    case 726u: goto L_0897701C;
    case 727u: goto L_08977028;
    case 728u: goto L_08977038;
    case 729u: goto L_08977044;
    case 730u: goto L_0897704C;
    case 731u: goto L_08977064;
    case 732u: goto L_0897706C;
    case 733u: goto L_08977094;
    case 734u: goto L_0897709C;
    case 735u: goto L_089770A0;
    case 736u: goto L_089770B0;
    case 737u: goto L_089770C0;
    case 738u: goto L_089770CC;
    case 739u: goto L_089770E0;
    case 740u: goto L_089770EC;
    case 741u: goto L_089770F0;
    case 742u: goto L_08977100;
    case 743u: goto L_0897711C;
    case 744u: goto L_08977128;
    case 745u: goto L_08977168;
    case 746u: goto L_0897716C;
    case 747u: goto L_08977174;
    case 748u: goto L_08977188;
    case 749u: goto L_0897718C;
    case 750u: goto L_0897719C;
    case 751u: goto L_089771A0;
    case 752u: goto L_089771C8;
    case 753u: goto L_089771D4;
    case 754u: goto L_089771F0;
    case 755u: goto L_089771FC;
    case 756u: goto L_08977200;
    case 757u: goto L_08977210;
    case 758u: goto L_08977220;
    case 759u: goto L_08977230;
    case 760u: goto L_08977238;
    case 761u: goto L_08977260;
    case 762u: goto L_08977268;
    case 763u: goto L_0897726C;
    case 764u: goto L_08977278;
    case 765u: goto L_08977280;
    case 766u: goto L_08977284;
    case 767u: goto L_0897728C;
    case 768u: goto L_08977294;
    case 769u: goto L_089772BC;
    case 770u: goto L_08977300;
    case 771u: goto L_0897730C;
    case 772u: goto L_08977320;
    case 773u: goto L_08977324;
    case 774u: goto L_0897732C;
    case 775u: goto L_08977338;
    case 776u: goto L_08977354;
    case 777u: goto L_08977360;
    case 778u: goto L_08977364;
    case 779u: goto L_08977374;
    case 780u: goto L_08977390;
    case 781u: goto L_089773A0;
    case 782u: goto L_089773A8;
    case 783u: goto L_089773C4;
    case 784u: goto L_089773CC;
    case 785u: goto L_089773D0;
    case 786u: goto L_089773E0;
    case 787u: goto L_08977400;
    case 788u: goto L_08977428;
    case 789u: goto L_08977430;
    case 790u: goto L_08977434;
    case 791u: goto L_08977440;
    case 792u: goto L_08977448;
    case 793u: goto L_0897744C;
    case 794u: goto L_08977454;
    case 795u: goto L_0897745C;
    case 796u: goto L_08977478;
    case 797u: goto L_089774BC;
    case 798u: goto L_089774C4;
    case 799u: goto L_089774C8;
    case 800u: goto L_089774D8;
    case 801u: goto L_089774E8;
    case 802u: goto L_08977500;
    case 803u: goto L_08977510;
    case 804u: goto L_0897751C;
    case 805u: goto L_08977530;
    case 806u: goto L_08977534;
    case 807u: goto L_0897753C;
    case 808u: goto L_0897756C;
    case 809u: goto L_0897758C;
    case 810u: goto L_08977590;
    case 811u: goto L_0897759C;
    case 812u: goto L_089775BC;
    case 813u: goto L_089775C4;
    case 814u: goto L_089775F0;
    case 815u: goto L_0897761C;
    case 816u: goto L_08977624;
    case 817u: goto L_08977630;
    case 818u: goto L_08977640;
    case 819u: goto L_08977654;
    case 820u: goto L_08977660;
    case 821u: goto L_089776A0;
    case 822u: goto L_089776AC;
    case 823u: goto L_089776B8;
    case 824u: goto L_089776C0;
    case 825u: goto L_089776D8;
    case 826u: goto L_089776FC;
    case 827u: goto L_08977714;
    case 828u: goto L_08977738;
    case 829u: goto L_08977748;
    case 830u: goto L_08977758;
    case 831u: goto L_08977768;
    case 832u: goto L_08977778;
    case 833u: goto L_0897779C;
    case 834u: goto L_089777AC;
    case 835u: goto L_089777C4;
    case 836u: goto L_089777D8;
    case 837u: goto L_089777DC;
    case 838u: goto L_089777E0;
    case 839u: goto L_089777EC;
    case 840u: goto L_089777F8;
    case 841u: goto L_08977818;
    case 842u: goto L_08977830;
    case 843u: goto L_08977850;
    case 844u: goto L_08977864;
    case 845u: goto L_08977874;
    case 846u: goto L_08977884;
    case 847u: goto L_08977894;
    case 848u: goto L_089778A4;
    case 849u: goto L_089778C8;
    case 850u: goto L_089778D4;
    case 851u: goto L_089778E4;
    case 852u: goto L_089778FC;
    case 853u: goto L_08977910;
    case 854u: goto L_08977914;
    case 855u: goto L_08977918;
    case 856u: goto L_08977924;
    case 857u: goto L_08977944;
    case 858u: goto L_08977954;
    case 859u: goto L_08977964;
    case 860u: goto L_08977970;
    case 861u: goto L_0897797C;
    case 862u: goto L_0897798C;
    case 863u: goto L_0897799C;
    case 864u: goto L_089779A8;
    case 865u: goto L_089779BC;
    case 866u: goto L_089779C8;
    case 867u: goto L_089779EC;
    case 868u: goto L_089779FC;
    case 869u: goto L_08977A24;
    case 870u: goto L_08977A34;
    case 871u: goto L_08977A70;
    case 872u: goto L_08977A7C;
    case 873u: goto L_08977A84;
    case 874u: goto L_08977A98;
    case 875u: goto L_08977AA8;
    case 876u: goto L_08977ABC;
    case 877u: goto L_08977ADC;
    case 878u: goto L_08977B14;
    case 879u: goto L_08977B20;
    case 880u: goto L_08977B28;
    case 881u: goto L_08977B3C;
    case 882u: goto L_08977B4C;
    case 883u: goto L_08977B60;
    case 884u: goto L_08977B80;
    case 885u: goto L_08977B9C;
    case 886u: goto L_08977BAC;
    case 887u: goto L_08977BC4;
    case 888u: goto L_08977BD4;
    case 889u: goto L_08977BE0;
    case 890u: goto L_08977BEC;
    case 891u: goto L_08977BF4;
    case 892u: goto L_08977C20;
    case 893u: goto L_08977C30;
    case 894u: goto L_08977C44;
    case 895u: goto L_08977C4C;
    case 896u: goto L_08977C64;
    case 897u: goto L_08977C7C;
    case 898u: goto L_08977C94;
    case 899u: goto L_08977CA4;
    case 900u: goto L_08977CB0;
    case 901u: goto L_08977CC8;
    case 902u: goto L_08977CD8;
    case 903u: goto L_08977CE0;
    case 904u: goto L_08977D30;
    case 905u: goto L_08977D40;
    case 906u: goto L_08977D4C;
    case 907u: goto L_08977D54;
    case 908u: goto L_08977D5C;
    case 909u: goto L_08977D6C;
    case 910u: goto L_08977D74;
    case 911u: goto L_08977D88;
    case 912u: goto L_08977DA4;
    case 913u: goto L_08977DC4;
    case 914u: goto L_08977DCC;
    case 915u: goto L_08977DD8;
    case 916u: goto L_08977DE4;
    case 917u: goto L_08977DF0;
    case 918u: goto L_08977DF8;
    case 919u: goto L_08977E10;
    case 920u: goto L_08977E24;
    case 921u: goto L_08977E38;
    case 922u: goto L_08977E4C;
    case 923u: goto L_08977E58;
    case 924u: goto L_08977E5C;
    case 925u: goto L_08977E68;
    case 926u: goto L_08977E74;
    case 927u: goto L_08977E8C;
    case 928u: goto L_08977E94;
    case 929u: goto L_08977E98;
    case 930u: goto L_08977EA4;
    case 931u: goto L_08977EB8;
    case 932u: goto L_08977ECC;
    case 933u: goto L_08977ED8;
    case 934u: goto L_08977EF0;
    case 935u: goto L_08977EFC;
    case 936u: goto L_08977F10;
    case 937u: goto L_08977F24;
    case 938u: goto L_08977F2C;
    case 939u: goto L_08977F38;
    case 940u: goto L_08977F44;
    case 941u: goto L_08977F50;
    case 942u: goto L_08977F58;
    case 943u: goto L_08977F5C;
    case 944u: goto L_08977F64;
    case 945u: goto L_08977F6C;
    case 946u: goto L_08977F84;
    case 947u: goto L_08977F98;
    case 948u: goto L_08977FBC;
    case 949u: goto L_08977FC4;
    case 950u: goto L_08977FD8;
    case 951u: goto L_08977FE0;
    case 952u: goto L_08977FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08974000:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08974018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08974018u) goto L_08974018;
    return;
L_08974018:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 764u, 0x08973FB8u>(ctx, &aot_mem); return;
      }
      goto L_08974030;
    }
L_08974030:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974060;
      }
      goto L_0897403C;
    }
L_0897403C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974060;
      }
      goto L_08974044;
    }
L_08974044:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974060;
      }
      goto L_08974050;
    }
L_08974050:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974060;
L_08974060:
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
L_08974084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974128;
      }
      goto L_089740D8;
    }
L_089740D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08974124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08974124u) goto L_08974124;
    return;
L_08974124:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08974128;
L_08974128:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[18] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974194;
      }
      goto L_0897416C;
    }
L_0897416C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974194;
      }
      goto L_08974174;
    }
L_08974174:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974194;
      }
      goto L_08974180;
    }
L_08974180:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974194;
L_08974194:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089741D8;
      }
      goto L_089741A0;
    }
L_089741A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089741B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x089741B8u) goto L_089741B8;
    return;
L_089741B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089741D8;
      }
      goto L_089741C4;
    }
L_089741C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089741D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x089741D8u) goto L_089741D8;
    return;
L_089741D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974230;
      }
      goto L_089741E0;
    }
L_089741E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08974230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08974230u) goto L_08974230;
    return;
L_08974230:
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
L_08974250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08974270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08974270u) goto L_08974270;
    return;
L_08974270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897431C;
      }
      goto L_08974278;
    }
L_08974278:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08974284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 75u, 0x0897C4D8u>(ctx, &aot_mem) && ctx.pc == 0x08974284u) goto L_08974284;
    return;
L_08974284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974298;
      }
      goto L_0897428C;
    }
L_0897428C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08974298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 65u, 0x0897C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08974298u) goto L_08974298;
    return;
L_08974298:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5776));
    ctx.set_gpr(31, 0x089742C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x0897C468u>(ctx, &aot_mem) && ctx.pc == 0x089742C4u) goto L_089742C4;
    return;
L_089742C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089742D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089742D8u) goto L_089742D8;
    return;
L_089742D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089742E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 73u, 0x0897C4A0u>(ctx, &aot_mem) && ctx.pc == 0x089742E8u) goto L_089742E8;
    return;
L_089742E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08974304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x08974304u) goto L_08974304;
    return;
L_08974304:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0897431Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897431Cu) goto L_0897431C;
    return;
L_0897431C:
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
L_08974334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(14)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897435C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089743ACu);
    // nop
    goto L_08974334;
L_089743AC:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x089743B8u);
    // nop
    goto L_08974334;
L_089743B8:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089743C4u);
    // nop
    goto L_0897435C;
L_089743C4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089743D0u);
    // nop
    goto L_0897435C;
L_089743D0:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089743DCu);
    // nop
    goto L_0897435C;
L_089743DC:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089743E8u);
    // nop
    goto L_0897435C;
L_089743E8:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089743F4u);
    // nop
    goto L_0897435C;
L_089743F4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08974400u);
    // nop
    goto L_08974334;
L_08974400:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x0897440Cu);
    // nop
    goto L_08974334;
L_0897440C:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08974418u);
    // nop
    goto L_08974334;
L_08974418:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(46));
    ctx.set_gpr(31, 0x08974424u);
    // nop
    goto L_08974334;
L_08974424:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08974430u);
    // nop
    goto L_08974334;
L_08974430:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(50));
    ctx.set_gpr(31, 0x0897443Cu);
    // nop
    goto L_08974334;
L_0897443C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897444C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089744E0;
      }
      goto L_08974460;
    }
L_08974460:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0897446Cu);
    // nop
    goto L_0897435C;
L_0897446C:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08974478u);
    // nop
    goto L_0897435C;
L_08974478:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08974484u);
    // nop
    goto L_0897435C;
L_08974484:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08974490u);
    // nop
    goto L_0897435C;
L_08974490:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897449Cu);
    // nop
    goto L_0897435C;
L_0897449C:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089744A8u);
    // nop
    goto L_0897435C;
L_089744A8:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089744B4u);
    // nop
    goto L_0897435C;
L_089744B4:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089744C0u);
    // nop
    goto L_0897435C;
L_089744C0:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089744CCu);
    // nop
    goto L_0897435C;
L_089744CC:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089744D8u);
    // nop
    goto L_0897435C;
L_089744D8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089744E0;
L_089744E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08974460;
      }
      goto L_089744E8;
    }
L_089744E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089744F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974544;
      }
      goto L_0897450C;
    }
L_0897450C:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08974518u);
    // nop
    goto L_0897435C;
L_08974518:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08974524u);
    // nop
    goto L_0897435C;
L_08974524:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08974530u);
    // nop
    goto L_0897435C;
L_08974530:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x0897453Cu);
    // nop
    goto L_08974334;
L_0897453C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08974544;
L_08974544:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0897450C;
      }
      goto L_0897454C;
    }
L_0897454C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897455C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08974574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 158u, 0x08978C08u>(ctx, &aot_mem) && ctx.pc == 0x08974574u) goto L_08974574;
    return;
L_08974574:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08974588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08974588u) goto L_08974588;
    return;
L_08974588:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089745BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089745D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 172u, 0x08978CF0u>(ctx, &aot_mem) && ctx.pc == 0x089745D4u) goto L_089745D4;
    return;
L_089745D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089745EC;
      }
      goto L_089745E0;
    }
L_089745E0:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_089745EC;
    }
L_089745EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974608u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974608u) goto L_08974608;
    return;
L_08974608:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974658;
      }
      goto L_08974614;
    }
L_08974614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5800));
    ctx.set_gpr(31, 0x08974630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08974630u) goto L_08974630;
    return;
L_08974630:
    ctx.set_gpr(31, 0x08974638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08974638u) goto L_08974638;
    return;
L_08974638:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897464Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897464Cu) goto L_0897464C;
    return;
L_0897464C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_08974658;
    }
L_08974658:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32624))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974670;
      }
      goto L_0897466C;
    }
L_0897466C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08974670;
L_08974670:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974684;
      }
      goto L_08974678;
    }
L_08974678:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08974684u);
    // nop
    goto L_08974394;
L_08974684:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(127));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089746C4;
      }
      goto L_08974694;
    }
L_08974694:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089746C4;
      }
      goto L_089746A4;
    }
L_089746A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089746C4;
      }
      goto L_089746B4;
    }
L_089746B4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(70));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974708;
      }
      goto L_089746C4;
    }
L_089746C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.set_gpr(31, 0x089746E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089746E0u) goto L_089746E0;
    return;
L_089746E0:
    ctx.set_gpr(31, 0x089746E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089746E8u) goto L_089746E8;
    return;
L_089746E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089746FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089746FCu) goto L_089746FC;
    return;
L_089746FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_08974708;
    }
L_08974708:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974758;
      }
      goto L_08974714;
    }
L_08974714:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5848));
    ctx.set_gpr(31, 0x08974730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08974730u) goto L_08974730;
    return;
L_08974730:
    ctx.set_gpr(31, 0x08974738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08974738u) goto L_08974738;
    return;
L_08974738:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897474Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897474Cu) goto L_0897474C;
    return;
L_0897474C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_08974758;
    }
L_08974758:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974780u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974780u) goto L_08974780;
    return;
L_08974780:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974798;
      }
      goto L_0897478C;
    }
L_0897478C:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_08974798;
    }
L_08974798:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32624))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089747B0;
      }
      goto L_089747AC;
    }
L_089747AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_089747B0;
L_089747B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089747C8;
      }
      goto L_089747B8;
    }
L_089747B8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x089747C8u);
    // nop
    goto L_0897444C;
L_089747C8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974840;
      }
      goto L_089747DC;
    }
L_089747DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089747E8u);
    // nop
    goto L_089748E4;
L_089747E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974840;
      }
      goto L_089747F0;
    }
L_089747F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974840;
      }
      goto L_08974800;
    }
L_08974800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974828u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974828u) goto L_08974828;
    return;
L_08974828:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974840;
      }
      goto L_08974834;
    }
L_08974834:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974844;
      }
      goto L_08974840;
    }
L_08974840:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08974844;
L_08974844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897487C;
      }
      goto L_08974874;
    }
L_08974874:
    ctx.set_gpr(31, 0x0897487Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0897487Cu) goto L_0897487C;
    return;
L_0897487C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974894;
      }
      goto L_08974888;
    }
L_08974888:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08974894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08974894u) goto L_08974894;
    return;
L_08974894:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089748AC;
      }
      goto L_089748A0;
    }
L_089748A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089748ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089748ACu) goto L_089748AC;
    return;
L_089748AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089748C4;
      }
      goto L_089748B8;
    }
L_089748B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089748C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089748C4u) goto L_089748C4;
    return;
L_089748C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089748D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 196u, 0x08978E74u>(ctx, &aot_mem) && ctx.pc == 0x089748D0u) goto L_089748D0;
    return;
L_089748D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089748E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974920;
      }
      goto L_089748F0;
    }
L_089748F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974920;
      }
      goto L_089748F8;
    }
L_089748F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974920;
      }
      goto L_08974908;
    }
L_08974908:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974924;
      }
      goto L_08974920;
    }
L_08974920:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08974924;
L_08974924:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897492C:
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
          goto L_08974998;
      }
      goto L_0897495C;
    }
L_0897495C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897496Cu);
    // nop
    goto L_089748E4;
L_0897496C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08974994;
      }
      goto L_08974978;
    }
L_08974978:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974994;
      }
      goto L_08974988;
    }
L_08974988:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089749AC;
      }
      goto L_08974994;
    }
L_08974994:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08974998;
L_08974998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897495C;
      }
      goto L_089749A8;
    }
L_089749A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089749AC;
L_089749AC:
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
L_089749CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974A00;
      }
      goto L_089749D8;
    }
L_089749D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974A00;
      }
      goto L_089749E0;
    }
L_089749E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974A00;
      }
      goto L_089749F0;
    }
L_089749F0:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974A04;
      }
      goto L_08974A00;
    }
L_08974A00:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08974A04;
L_08974A04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08974A3Cu);
    // nop
    goto L_0897492C;
L_08974A3C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974A90;
      }
      goto L_08974A4C;
    }
L_08974A4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5876));
    ctx.set_gpr(31, 0x08974A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08974A68u) goto L_08974A68;
    return;
L_08974A68:
    ctx.set_gpr(31, 0x08974A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08974A70u) goto L_08974A70;
    return;
L_08974A70:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974A84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974A84u) goto L_08974A84;
    return;
L_08974A84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974A90;
    }
L_08974A90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08974AA0u);
    // nop
    goto L_089748E4;
L_08974AA0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08974AB4u);
    // nop
    goto L_089748E4;
L_08974AB4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08974AC8u);
    // nop
    goto L_089748E4;
L_08974AC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08974ADCu);
    // nop
    goto L_089748E4;
L_08974ADC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974B40;
      }
      goto L_08974AE4;
    }
L_08974AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974B40;
      }
      goto L_08974AF4;
    }
L_08974AF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974B40;
      }
      goto L_08974B04;
    }
L_08974B04:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974B28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974B28u) goto L_08974B28;
    return;
L_08974B28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974C4C;
      }
      goto L_08974B34;
    }
L_08974B34:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974B40;
    }
L_08974B40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974BA4;
      }
      goto L_08974B48;
    }
L_08974B48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974BA4;
      }
      goto L_08974B58;
    }
L_08974B58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974BA4;
      }
      goto L_08974B68;
    }
L_08974B68:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974B8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974B8Cu) goto L_08974B8C;
    return;
L_08974B8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974C4C;
      }
      goto L_08974B98;
    }
L_08974B98:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974BA4;
    }
L_08974BA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974C08;
      }
      goto L_08974BAC;
    }
L_08974BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974C08;
      }
      goto L_08974BBC;
    }
L_08974BBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974C08;
      }
      goto L_08974BCC;
    }
L_08974BCC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974BF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974BF0u) goto L_08974BF0;
    return;
L_08974BF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974C4C;
      }
      goto L_08974BFC;
    }
L_08974BFC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974C08;
    }
L_08974C08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5904));
    ctx.set_gpr(31, 0x08974C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08974C24u) goto L_08974C24;
    return;
L_08974C24:
    ctx.set_gpr(31, 0x08974C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08974C2Cu) goto L_08974C2C;
    return;
L_08974C2C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974C40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974C40u) goto L_08974C40;
    return;
L_08974C40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974C4C;
    }
L_08974C4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] >> 4u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974C78u) goto L_08974C78;
    return;
L_08974C78:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974C90;
      }
      goto L_08974C84;
    }
L_08974C84:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974CC4;
      }
      goto L_08974C90;
    }
L_08974C90:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(21)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32624))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974CA8;
      }
      goto L_08974CA4;
    }
L_08974CA4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08974CA8;
L_08974CA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974CC0;
      }
      goto L_08974CB0;
    }
L_08974CB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08974CC0u);
    // nop
    goto L_089744F8;
L_08974CC0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08974CC4;
L_08974CC4:
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
L_08974CE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974D58;
      }
      goto L_08974D30;
    }
L_08974D30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974D40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974D40u) goto L_08974D40;
    return;
L_08974D40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974D58;
      }
      goto L_08974D4C;
    }
L_08974D4C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974F64;
      }
      goto L_08974D58;
    }
L_08974D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974D94;
      }
      goto L_08974D64;
    }
L_08974D64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5944));
    ctx.set_gpr(31, 0x08974D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08974D80u) goto L_08974D80;
    return;
L_08974D80:
    ctx.set_gpr(31, 0x08974D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08974D88u) goto L_08974D88;
    return;
L_08974D88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974F64;
      }
      goto L_08974D94;
    }
L_08974D94:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974DA0;
      }
      goto L_08974D9C;
    }
L_08974D9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08974DA0;
L_08974DA0:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E3C;
      }
      goto L_08974DAC;
    }
L_08974DAC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08974DBCu);
    // nop
    goto L_089749CC;
L_08974DBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E38;
      }
      goto L_08974DC8;
    }
L_08974DC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974E38;
      }
      goto L_08974DD4;
    }
L_08974DD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E18;
      }
      goto L_08974DDC;
    }
L_08974DDC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974E04;
      }
      goto L_08974DF0;
    }
L_08974DF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974E04;
      }
      goto L_08974DFC;
    }
L_08974DFC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974E38;
      }
      goto L_08974E04;
    }
L_08974E04:
    ctx.set_gpr(3, ctx.gpr[4] & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974E38;
      }
      goto L_08974E14;
    }
L_08974E14:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08974E18;
L_08974E18:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E28;
      }
      goto L_08974E24;
    }
L_08974E24:
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    goto L_08974E28;
L_08974E28:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E38;
      }
      goto L_08974E34;
    }
L_08974E34:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_08974E38;
L_08974E38:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08974E3C;
L_08974E3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974DAC;
      }
      goto L_08974E4C;
    }
L_08974E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(2, ctx.gpr[17] & ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08974E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 314u, 0x0895D390u>(ctx, &aot_mem) && ctx.pc == 0x08974E68u) goto L_08974E68;
    return;
L_08974E68:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08974E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 315u, 0x0895D39Cu>(ctx, &aot_mem) && ctx.pc == 0x08974E78u) goto L_08974E78;
    return;
L_08974E78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(5, ctx.gpr[22] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08974E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 316u, 0x0895D3A8u>(ctx, &aot_mem) && ctx.pc == 0x08974E90u) goto L_08974E90;
    return;
L_08974E90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08974E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 321u, 0x0895D418u>(ctx, &aot_mem) && ctx.pc == 0x08974E9Cu) goto L_08974E9C;
    return;
L_08974E9C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974F50;
      }
      goto L_08974EA8;
    }
L_08974EA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08974EB8u);
    // nop
    goto L_089749CC;
L_08974EB8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EFC;
      }
      goto L_08974EC4;
    }
L_08974EC4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974EEC;
      }
      goto L_08974ED8;
    }
L_08974ED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974EEC;
      }
      goto L_08974EE4;
    }
L_08974EE4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974F4C;
      }
      goto L_08974EEC;
    }
L_08974EEC:
    ctx.set_gpr(3, ctx.gpr[4] & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08974F4C;
      }
      goto L_08974EFC;
    }
L_08974EFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974F28u) goto L_08974F28;
    return;
L_08974F28:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08974F4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974F4Cu) goto L_08974F4C;
    return;
L_08974F4C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08974F50;
L_08974F50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974EA8;
      }
      goto L_08974F60;
    }
L_08974F60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08974F64;
L_08974F64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08974F90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089751E4;
      }
      goto L_08974FCC;
    }
L_08974FCC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08974FEC;
      }
      goto L_08974FDC;
    }
L_08974FDC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089751E4;
      }
      goto L_08974FEC;
    }
L_08974FEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(81));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089751E0;
      }
      goto L_08974FF8;
    }
L_08974FF8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089751C4;
      }
      goto L_0897500C;
    }
L_0897500C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089751C4;
      }
      goto L_08975018;
    }
L_08975018:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975194;
      }
      goto L_08975024;
    }
L_08975024:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975048;
      }
      goto L_08975030;
    }
L_08975030:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08975048;
L_08975048:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975064;
      }
      goto L_08975058;
    }
L_08975058:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975030;
      }
      goto L_08975064;
    }
L_08975064:
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897507C;
      }
      goto L_08975078;
    }
L_08975078:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0897507C;
L_0897507C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08975090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08975090u) goto L_08975090;
    return;
L_08975090:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089750A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089750A8u) goto L_089750A8;
    return;
L_089750A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975160;
      }
      goto L_089750B0;
    }
L_089750B0:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089750CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089750CCu) goto L_089750CC;
    return;
L_089750CC:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089750E0;
      }
      goto L_089750DC;
    }
L_089750DC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(254));
    goto L_089750E0;
L_089750E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089750F0;
      }
      goto L_089750EC;
    }
L_089750EC:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    goto L_089750F0;
L_089750F0:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[20] - ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08975110u);
    // nop
    goto L_08974F90;
L_08975110:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0897511Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0897511Cu) goto L_0897511C;
    return;
L_0897511C:
    ctx.set_gpr(20, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975140;
      }
      goto L_08975130;
    }
L_08975130:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(62));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08975140;
L_08975140:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897516C;
      }
      goto L_0897514C;
    }
L_0897514C:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897516C;
      }
      goto L_08975160;
    }
L_08975160:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[18]);
    goto L_0897516C;
L_0897516C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975194;
      }
      goto L_08975174;
    }
L_08975174:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975194;
      }
      goto L_08975180;
    }
L_08975180:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(58));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    goto L_08975194;
L_08975194:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975024;
      }
      goto L_089751A4;
    }
L_089751A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089751C4;
      }
      goto L_089751AC;
    }
L_089751AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_089751C4;
L_089751C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089751E4;
      }
      goto L_089751CC;
    }
L_089751CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089751AC;
      }
      goto L_089751D8;
    }
L_089751D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089751E4;
      }
      goto L_089751E0;
    }
L_089751E0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089751E4;
L_089751E4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974FCC;
      }
      goto L_089751F0;
    }
L_089751F0:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08975220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975270;
      }
      goto L_08975264;
    }
L_08975264:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975274;
      }
      goto L_08975270;
    }
L_08975270:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08975274;
L_08975274:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6312));
    ctx.set_gpr(31, 0x08975284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08975284u) goto L_08975284;
    return;
L_08975284:
    ctx.set_gpr(30, ctx.gpr[20] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897529C;
      }
      goto L_08975290;
    }
L_08975290:
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089752E8;
      }
      goto L_0897529C;
    }
L_0897529C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089752A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089752A8u) goto L_089752A8;
    return;
L_089752A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089752C0;
      }
      goto L_089752BC;
    }
L_089752BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089752C0;
L_089752C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089752D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089752D4u) goto L_089752D4;
    return;
L_089752D4:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089756E8;
      }
      goto L_089752E8;
    }
L_089752E8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(81));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08975498;
      }
      goto L_089752F8;
    }
L_089752F8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(23, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08975498;
      }
      goto L_08975308;
    }
L_08975308:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975498;
      }
      goto L_08975314;
    }
L_08975314:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975488;
      }
      goto L_08975320;
    }
L_08975320:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975344;
      }
      goto L_0897532C;
    }
L_0897532C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08975344;
L_08975344:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975360;
      }
      goto L_08975354;
    }
L_08975354:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897532C;
      }
      goto L_08975360;
    }
L_08975360:
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975378;
      }
      goto L_08975374;
    }
L_08975374:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08975378;
L_08975378:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897538Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0897538Cu) goto L_0897538C;
    return;
L_0897538C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089753A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x089753A4u) goto L_089753A4;
    return;
L_089753A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897545C;
      }
      goto L_089753AC;
    }
L_089753AC:
    ctx.set_gpr(22, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089753C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089753C8u) goto L_089753C8;
    return;
L_089753C8:
    ctx.set_gpr(16, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089753DC;
      }
      goto L_089753D8;
    }
L_089753D8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(254));
    goto L_089753DC;
L_089753DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089753EC;
      }
      goto L_089753E8;
    }
L_089753E8:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_089753EC;
L_089753EC:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[19] - ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897540Cu);
    // nop
    goto L_08974F90;
L_0897540C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08975418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08975418u) goto L_08975418;
    return;
L_08975418:
    ctx.set_gpr(19, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897543C;
      }
      goto L_0897542C;
    }
L_0897542C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(62));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0897543C;
L_0897543C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975468;
      }
      goto L_08975448;
    }
L_08975448:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975468;
      }
      goto L_0897545C;
    }
L_0897545C:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[22]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[16]);
    goto L_08975468;
L_08975468:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975488;
      }
      goto L_08975474;
    }
L_08975474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(58));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    goto L_08975488;
L_08975488:
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975320;
      }
      goto L_08975498;
    }
L_08975498:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6312));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089754B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x089754B8u) goto L_089754B8;
    return;
L_089754B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089756B4;
      }
      goto L_089754C0;
    }
L_089754C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089754CC;
      }
      goto L_089754C8;
    }
L_089754C8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_089754CC;
L_089754CC:
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089754E8;
      }
      goto L_089754D8;
    }
L_089754D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089754C8;
      }
      goto L_089754E8;
    }
L_089754E8:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975508;
      }
      goto L_089754F8;
    }
L_089754F8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975508;
      }
      goto L_08975504;
    }
L_08975504:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08975508;
L_08975508:
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975524;
      }
      goto L_08975514;
    }
L_08975514:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08975504;
      }
      goto L_08975524;
    }
L_08975524:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08975538;
      }
      goto L_08975534;
    }
L_08975534:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08975538;
L_08975538:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5964));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08975550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08975550u) goto L_08975550;
    return;
L_08975550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975598;
      }
      goto L_08975558;
    }
L_08975558:
    ctx.set_gpr(17, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975570;
      }
      goto L_0897556C;
    }
L_0897556C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08975570;
L_08975570:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08975584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08975584u) goto L_08975584;
    return;
L_08975584:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089756E8;
      }
      goto L_08975598;
    }
L_08975598:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5972));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089755B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x089755B0u) goto L_089755B0;
    return;
L_089755B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975610;
      }
      goto L_089755B8;
    }
L_089755B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089755D0;
      }
      goto L_089755C0;
    }
L_089755C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(126));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089755D0;
L_089755D0:
    ctx.set_gpr(17, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089755E8;
      }
      goto L_089755E4;
    }
L_089755E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089755E8;
L_089755E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089755FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089755FCu) goto L_089755FC;
    return;
L_089755FC:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089756E8;
      }
      goto L_08975610;
    }
L_08975610:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975698;
      }
      goto L_0897561C;
    }
L_0897561C:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897562Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0897562Cu) goto L_0897562C;
    return;
L_0897562C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975694;
      }
      goto L_08975634;
    }
L_08975634:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6204));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975694;
      }
      goto L_0897564C;
    }
L_0897564C:
    ctx.set_gpr(31, 0x08975654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08975654u) goto L_08975654;
    return;
L_08975654:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897566C;
      }
      goto L_08975668;
    }
L_08975668:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0897566C;
L_0897566C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08975680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08975680u) goto L_08975680;
    return;
L_08975680:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089756E8;
      }
      goto L_08975694;
    }
L_08975694:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08975698;
L_08975698:
    ctx.set_gpr(18, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897561C;
      }
      goto L_089756B4;
    }
L_089756B4:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089756C8;
      }
      goto L_089756C4;
    }
L_089756C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089756C8;
L_089756C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089756DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089756DCu) goto L_089756DC;
    return;
L_089756DC:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    goto L_089756E8;
L_089756E8:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897571C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897573C;
      }
      goto L_08975724;
    }
L_08975724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08975738;
      }
      goto L_08975730;
    }
L_08975730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897574C;
      }
      goto L_08975738;
    }
L_08975738:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0897573C;
L_0897573C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975724;
      }
      goto L_08975748;
    }
L_08975748:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0897574C;
L_0897574C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897580C;
      }
      goto L_08975790;
    }
L_08975790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(4, ctx.gpr[20] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975808;
      }
      goto L_089757A4;
    }
L_089757A4:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089757B0u);
    // nop
    goto L_0897571C;
L_089757B0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975808;
      }
      goto L_089757C0;
    }
L_089757C0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089757D8;
      }
      goto L_089757CC;
    }
L_089757CC:
    ctx.set_gpr(16, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089757E0;
      }
      goto L_089757D8;
    }
L_089757D8:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(6740));
    goto L_089757E0;
L_089757E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089757ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089757ECu) goto L_089757EC;
    return;
L_089757EC:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11532));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08975808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08975808u) goto L_08975808;
    return;
L_08975808:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0897580C;
L_0897580C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975790;
      }
      goto L_08975818;
    }
L_08975818:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08975844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6744));
    ctx.set_gpr(31, 0x08975864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975864u) goto L_08975864;
    return;
L_08975864:
    ctx.set_gpr(31, 0x0897586Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897586Cu) goto L_0897586C;
    return;
L_0897586C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6764));
    ctx.set_gpr(31, 0x0897587Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897587Cu) goto L_0897587C;
    return;
L_0897587C:
    ctx.set_gpr(31, 0x08975884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975884u) goto L_08975884;
    return;
L_08975884:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6796));
    ctx.set_gpr(31, 0x08975898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975898u) goto L_08975898;
    return;
L_08975898:
    ctx.set_gpr(31, 0x089758A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089758A0u) goto L_089758A0;
    return;
L_089758A0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6828));
    ctx.set_gpr(31, 0x089758B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089758B4u) goto L_089758B4;
    return;
L_089758B4:
    ctx.set_gpr(31, 0x089758BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089758BCu) goto L_089758BC;
    return;
L_089758BC:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6860));
    ctx.set_gpr(31, 0x089758D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089758D0u) goto L_089758D0;
    return;
L_089758D0:
    ctx.set_gpr(31, 0x089758D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089758D8u) goto L_089758D8;
    return;
L_089758D8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6892));
    ctx.set_gpr(31, 0x089758ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089758ECu) goto L_089758EC;
    return;
L_089758EC:
    ctx.set_gpr(31, 0x089758F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089758F4u) goto L_089758F4;
    return;
L_089758F4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6356));
    ctx.set_gpr(31, 0x08975908u);
    // nop
    goto L_0897571C;
L_08975908:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6924));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897591Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897591Cu) goto L_0897591C;
    return;
L_0897591C:
    ctx.set_gpr(31, 0x08975924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975924u) goto L_08975924;
    return;
L_08975924:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6424));
    ctx.set_gpr(31, 0x08975938u);
    // nop
    goto L_0897571C;
L_08975938:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6952));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897594Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897594Cu) goto L_0897594C;
    return;
L_0897594C:
    ctx.set_gpr(31, 0x08975954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975954u) goto L_08975954;
    return;
L_08975954:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6980));
    ctx.set_gpr(31, 0x08975968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975968u) goto L_08975968;
    return;
L_08975968:
    ctx.set_gpr(31, 0x08975970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975970u) goto L_08975970;
    return;
L_08975970:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7008));
    ctx.set_gpr(31, 0x08975980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975980u) goto L_08975980;
    return;
L_08975980:
    ctx.set_gpr(31, 0x08975988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975988u) goto L_08975988;
    return;
L_08975988:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6520));
    ctx.set_gpr(31, 0x0897599Cu);
    // nop
    goto L_0897571C;
L_0897599C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7032));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089759B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089759B0u) goto L_089759B0;
    return;
L_089759B0:
    ctx.set_gpr(31, 0x089759B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089759B8u) goto L_089759B8;
    return;
L_089759B8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(34)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6660));
    ctx.set_gpr(31, 0x089759CCu);
    // nop
    goto L_0897571C;
L_089759CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7060));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089759E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089759E0u) goto L_089759E0;
    return;
L_089759E0:
    ctx.set_gpr(31, 0x089759E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089759E8u) goto L_089759E8;
    return;
L_089759E8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7088));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x089759FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089759FCu) goto L_089759FC;
    return;
L_089759FC:
    ctx.set_gpr(31, 0x08975A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A04u) goto L_08975A04;
    return;
L_08975A04:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7116));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08975A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975A18u) goto L_08975A18;
    return;
L_08975A18:
    ctx.set_gpr(31, 0x08975A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A20u) goto L_08975A20;
    return;
L_08975A20:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7148));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08975A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975A34u) goto L_08975A34;
    return;
L_08975A34:
    ctx.set_gpr(31, 0x08975A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A3Cu) goto L_08975A3C;
    return;
L_08975A3C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7180));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08975A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975A50u) goto L_08975A50;
    return;
L_08975A50:
    ctx.set_gpr(31, 0x08975A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A58u) goto L_08975A58;
    return;
L_08975A58:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7212));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08975A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975A6Cu) goto L_08975A6C;
    return;
L_08975A6C:
    ctx.set_gpr(31, 0x08975A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A74u) goto L_08975A74;
    return;
L_08975A74:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7244));
    ctx.set_gpr(31, 0x08975A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975A88u) goto L_08975A88;
    return;
L_08975A88:
    ctx.set_gpr(31, 0x08975A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975A90u) goto L_08975A90;
    return;
L_08975A90:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7276));
    ctx.set_gpr(31, 0x08975AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975AA4u) goto L_08975AA4;
    return;
L_08975AA4:
    ctx.set_gpr(31, 0x08975AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975AACu) goto L_08975AAC;
    return;
L_08975AAC:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7308));
    ctx.set_gpr(31, 0x08975AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975AC0u) goto L_08975AC0;
    return;
L_08975AC0:
    ctx.set_gpr(31, 0x08975AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975AC8u) goto L_08975AC8;
    return;
L_08975AC8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7340));
    ctx.set_gpr(31, 0x08975ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975ADCu) goto L_08975ADC;
    return;
L_08975ADC:
    ctx.set_gpr(31, 0x08975AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975AE4u) goto L_08975AE4;
    return;
L_08975AE4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7372));
    ctx.set_gpr(31, 0x08975AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975AF8u) goto L_08975AF8;
    return;
L_08975AF8:
    ctx.set_gpr(31, 0x08975B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975B00u) goto L_08975B00;
    return;
L_08975B00:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7404));
    ctx.set_gpr(31, 0x08975B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975B14u) goto L_08975B14;
    return;
L_08975B14:
    ctx.set_gpr(31, 0x08975B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975B1Cu) goto L_08975B1C;
    return;
L_08975B1C:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x08975B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975B28u) goto L_08975B28;
    return;
L_08975B28:
    ctx.set_gpr(31, 0x08975B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975B30u) goto L_08975B30;
    return;
L_08975B30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975B44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7436));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08975B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975B70u) goto L_08975B70;
    return;
L_08975B70:
    ctx.set_gpr(31, 0x08975B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975B78u) goto L_08975B78;
    return;
L_08975B78:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975BAC;
      }
      goto L_08975B84;
    }
L_08975B84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08975B94u);
    // nop
    goto L_089748E4;
L_08975B94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975BA8u);
    // nop
    goto L_08975BD4;
L_08975BA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08975BAC;
L_08975BAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975B84;
      }
      goto L_08975BBC;
    }
L_08975BBC:
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
L_08975BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7896));
    ctx.set_gpr(31, 0x08975BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975BFCu) goto L_08975BFC;
    return;
L_08975BFC:
    ctx.set_gpr(31, 0x08975C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975C04u) goto L_08975C04;
    return;
L_08975C04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7924));
    ctx.set_gpr(31, 0x08975C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975C20u) goto L_08975C20;
    return;
L_08975C20:
    ctx.set_gpr(31, 0x08975C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975C28u) goto L_08975C28;
    return;
L_08975C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7664));
    ctx.set_gpr(31, 0x08975C3Cu);
    // nop
    goto L_0897571C;
L_08975C3C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7960));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975C50u) goto L_08975C50;
    return;
L_08975C50:
    ctx.set_gpr(31, 0x08975C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975C58u) goto L_08975C58;
    return;
L_08975C58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7856));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08975C70u);
    // nop
    goto L_08975754;
L_08975C70:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7988));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975C88u) goto L_08975C88;
    return;
L_08975C88:
    ctx.set_gpr(31, 0x08975C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975C90u) goto L_08975C90;
    return;
L_08975C90:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8028));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08975CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975CA4u) goto L_08975CA4;
    return;
L_08975CA4:
    ctx.set_gpr(31, 0x08975CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975CACu) goto L_08975CAC;
    return;
L_08975CAC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8064));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08975CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975CC0u) goto L_08975CC0;
    return;
L_08975CC0:
    ctx.set_gpr(31, 0x08975CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975CC8u) goto L_08975CC8;
    return;
L_08975CC8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8100));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08975CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975CDCu) goto L_08975CDC;
    return;
L_08975CDC:
    ctx.set_gpr(31, 0x08975CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975CE4u) goto L_08975CE4;
    return;
L_08975CE4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8136));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08975CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975CF8u) goto L_08975CF8;
    return;
L_08975CF8:
    ctx.set_gpr(31, 0x08975D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975D00u) goto L_08975D00;
    return;
L_08975D00:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8172));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08975D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975D14u) goto L_08975D14;
    return;
L_08975D14:
    ctx.set_gpr(31, 0x08975D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975D1Cu) goto L_08975D1C;
    return;
L_08975D1C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8208));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08975D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975D30u) goto L_08975D30;
    return;
L_08975D30:
    ctx.set_gpr(31, 0x08975D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975D38u) goto L_08975D38;
    return;
L_08975D38:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8244));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08975D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975D4Cu) goto L_08975D4C;
    return;
L_08975D4C:
    ctx.set_gpr(31, 0x08975D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975D54u) goto L_08975D54;
    return;
L_08975D54:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x08975D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975D60u) goto L_08975D60;
    return;
L_08975D60:
    ctx.set_gpr(31, 0x08975D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975D68u) goto L_08975D68;
    return;
L_08975D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8280));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08975DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975DACu) goto L_08975DAC;
    return;
L_08975DAC:
    ctx.set_gpr(31, 0x08975DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975DB4u) goto L_08975DB4;
    return;
L_08975DB4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975DE8;
      }
      goto L_08975DC0;
    }
L_08975DC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08975DD0u);
    // nop
    goto L_089749CC;
L_08975DD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975DE4u);
    // nop
    goto L_08975E10;
L_08975DE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08975DE8;
L_08975DE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975DC0;
      }
      goto L_08975DF8;
    }
L_08975DF8:
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
L_08975E10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(31, 0x08975E40u);
    // nop
    goto L_089748E4;
L_08975E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975E5C;
      }
      goto L_08975E48;
    }
L_08975E48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975E60;
      }
      goto L_08975E5C;
    }
L_08975E5C:
    ctx.set_gpr(16, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08975E60;
L_08975E60:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8564));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08975E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975E74u) goto L_08975E74;
    return;
L_08975E74:
    ctx.set_gpr(31, 0x08975E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975E7Cu) goto L_08975E7C;
    return;
L_08975E7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8584));
    ctx.set_gpr(31, 0x08975E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975E98u) goto L_08975E98;
    return;
L_08975E98:
    ctx.set_gpr(31, 0x08975EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975EA0u) goto L_08975EA0;
    return;
L_08975EA0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8620));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08975EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975EB4u) goto L_08975EB4;
    return;
L_08975EB4:
    ctx.set_gpr(31, 0x08975EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975EBCu) goto L_08975EBC;
    return;
L_08975EBC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8656));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08975ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975ED0u) goto L_08975ED0;
    return;
L_08975ED0:
    ctx.set_gpr(31, 0x08975ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975ED8u) goto L_08975ED8;
    return;
L_08975ED8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8692));
    ctx.set_gpr(31, 0x08975EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975EECu) goto L_08975EEC;
    return;
L_08975EEC:
    ctx.set_gpr(31, 0x08975EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975EF4u) goto L_08975EF4;
    return;
L_08975EF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8368));
    ctx.set_gpr(31, 0x08975F0Cu);
    // nop
    goto L_0897571C;
L_08975F0C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8728));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975F20u) goto L_08975F20;
    return;
L_08975F20:
    ctx.set_gpr(31, 0x08975F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975F28u) goto L_08975F28;
    return;
L_08975F28:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] & 15u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8500));
    ctx.set_gpr(31, 0x08975F40u);
    // nop
    goto L_0897571C;
L_08975F40:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8764));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08975F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975F54u) goto L_08975F54;
    return;
L_08975F54:
    ctx.set_gpr(31, 0x08975F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975F5Cu) goto L_08975F5C;
    return;
L_08975F5C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8800));
    ctx.set_gpr(31, 0x08975F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975F70u) goto L_08975F70;
    return;
L_08975F70:
    ctx.set_gpr(31, 0x08975F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975F78u) goto L_08975F78;
    return;
L_08975F78:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8836));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08975F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975F90u) goto L_08975F90;
    return;
L_08975F90:
    ctx.set_gpr(31, 0x08975F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975F98u) goto L_08975F98;
    return;
L_08975F98:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x08975FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08975FA4u) goto L_08975FA4;
    return;
L_08975FA4:
    ctx.set_gpr(31, 0x08975FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08975FACu) goto L_08975FAC;
    return;
L_08975FAC:
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
L_08975FCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08975FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 745u, 0x0892F23Cu>(ctx, &aot_mem) && ctx.pc == 0x08975FDCu) goto L_08975FDC;
    return;
L_08975FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976018;
      }
      goto L_08976008;
    }
L_08976008:
    ctx.set_gpr(31, 0x08976010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x08976010u) goto L_08976010;
    return;
L_08976010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    goto L_08976018;
L_08976018:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897602C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08976044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x08976044u) goto L_08976044;
    return;
L_08976044:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08976070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x08976070u) goto L_08976070;
    return;
L_08976070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976080:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897609C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089760E4;
      }
      goto L_089760E0;
    }
L_089760E0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089760E4;
L_089760E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897612C;
      }
      goto L_08976120;
    }
L_08976120:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976138;
      }
      goto L_0897612C;
    }
L_0897612C:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    goto L_08976138;
L_08976138:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976140:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976158;
      }
      goto L_08976150;
    }
L_08976150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897615C;
      }
      goto L_08976158;
    }
L_08976158:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_0897615C;
L_0897615C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976168;
      }
      goto L_08976164;
    }
L_08976164:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08976168;
L_08976168:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089761AC;
      }
      goto L_089761A0;
    }
L_089761A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089761B8;
      }
      goto L_089761AC;
    }
L_089761AC:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    goto L_089761B8;
L_089761B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089761C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089761E0;
      }
      goto L_089761D4;
    }
L_089761D4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089761F0;
      }
      goto L_089761E0;
    }
L_089761E0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089761F0;
      }
      goto L_089761E8;
    }
L_089761E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_089761F0;
L_089761F0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976240;
      }
      goto L_08976234;
    }
L_08976234:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976260;
      }
      goto L_08976240;
    }
L_08976240:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0897625Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897625Cu) goto L_0897625C;
    return;
L_0897625C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08976260;
L_08976260:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976294;
      }
      goto L_08976290;
    }
L_08976290:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08976294;
L_08976294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089762AC;
      }
      goto L_089762A4;
    }
L_089762A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089762B0;
      }
      goto L_089762AC;
    }
L_089762AC:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_089762B0;
L_089762B0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089762F4;
      }
      goto L_089762E8;
    }
L_089762E8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976314;
      }
      goto L_089762F4;
    }
L_089762F4:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08976310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08976310u) goto L_08976310;
    return;
L_08976310:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08976314;
L_08976314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976354;
      }
      goto L_08976338;
    }
L_08976338:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897634Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897634Cu) goto L_0897634C;
    return;
L_0897634C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976358;
      }
      goto L_08976354;
    }
L_08976354:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976358;
L_08976358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976398;
      }
      goto L_08976378;
    }
L_08976378:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976390u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976390u) goto L_08976390;
    return;
L_08976390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897639C;
      }
      goto L_08976398;
    }
L_08976398:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897639C;
L_0897639C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089763AC:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897643C;
      }
      goto L_089763F0;
    }
L_089763F0:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(22, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976418u) goto L_08976418;
    return;
L_08976418:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976434;
      }
      goto L_08976424;
    }
L_08976424:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976454;
      }
      goto L_08976434;
    }
L_08976434:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    goto L_0897643C;
L_0897643C:
    ctx.set_gpr(3, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089763F0;
      }
      goto L_08976450;
    }
L_08976450:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976454;
L_08976454:
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
L_08976480:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976520;
      }
      goto L_089764CC;
    }
L_089764CC:
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(23, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089764FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089764FCu) goto L_089764FC;
    return;
L_089764FC:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976518;
      }
      goto L_08976508;
    }
L_08976508:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976538;
      }
      goto L_08976518;
    }
L_08976518:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] & 65535u);
    goto L_08976520;
L_08976520:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089764CC;
      }
      goto L_08976534;
    }
L_08976534:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976538;
L_08976538:
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
L_08976568:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08976598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08976598u) goto L_08976598;
    return;
L_08976598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976644;
      }
      goto L_089765A0;
    }
L_089765A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089765ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 75u, 0x0897C4D8u>(ctx, &aot_mem) && ctx.pc == 0x089765ACu) goto L_089765AC;
    return;
L_089765AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089765C0;
      }
      goto L_089765B4;
    }
L_089765B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089765C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 65u, 0x0897C3ECu>(ctx, &aot_mem) && ctx.pc == 0x089765C0u) goto L_089765C0;
    return;
L_089765C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8876));
    ctx.set_gpr(31, 0x089765ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x0897C468u>(ctx, &aot_mem) && ctx.pc == 0x089765ECu) goto L_089765EC;
    return;
L_089765EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976600u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976600u) goto L_08976600;
    return;
L_08976600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08976610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 73u, 0x0897C4A0u>(ctx, &aot_mem) && ctx.pc == 0x08976610u) goto L_08976610;
    return;
L_08976610:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897662Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897662Cu) goto L_0897662C;
    return;
L_0897662C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08976644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08976644u) goto L_08976644;
    return;
L_08976644:
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
L_0897665C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976790;
      }
      goto L_0897667C;
    }
L_0897667C:
    ctx.set_gpr(31, 0x08976684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x08976684u) goto L_08976684;
    return;
L_08976684:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897669C;
      }
      goto L_08976698;
    }
L_08976698:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_0897669C;
L_0897669C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089766C0;
      }
      goto L_089766B4;
    }
L_089766B4:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    goto L_089766C0;
L_089766C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976790;
      }
      goto L_089766CC;
    }
L_089766CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089766EC;
      }
      goto L_089766DC;
    }
L_089766DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    goto L_089766EC;
L_089766EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976704;
      }
      goto L_089766F8;
    }
L_089766F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    goto L_08976704;
L_08976704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(17, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976790;
      }
      goto L_08976728;
    }
L_08976728:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08976734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08976734u) goto L_08976734;
    return;
L_08976734:
    ctx.set_gpr(3, ctx.gpr[17] >> 3u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976750u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976750u) goto L_08976750;
    return;
L_08976750:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976770;
      }
      goto L_08976760;
    }
L_08976760:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08976770;
L_08976770:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[4] >> 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976760;
      }
      goto L_08976788;
    }
L_08976788:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[3]);
    goto L_08976790;
L_08976790:
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
L_089767A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089767CC;
      }
      goto L_089767BC;
    }
L_089767BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089767CC;
L_089767CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089767BC;
      }
      goto L_089767E4;
    }
L_089767E4:
    ctx.set_gpr(31, 0x089767ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x089767ECu) goto L_089767EC;
    return;
L_089767EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089767FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08976818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x08976818u) goto L_08976818;
    return;
L_08976818:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08976828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08976828u) goto L_08976828;
    return;
L_08976828:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976840u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976840u) goto L_08976840;
    return;
L_08976840:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
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
L_0897685C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976874;
      }
      goto L_0897686C;
    }
L_0897686C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976928;
      }
      goto L_08976874;
    }
L_08976874:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089768B8;
      }
      goto L_08976880;
    }
L_08976880:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089768A8;
      }
      goto L_08976894;
    }
L_08976894:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089768A8;
L_089768A8:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976894;
      }
      goto L_089768B4;
    }
L_089768B4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089768B8;
L_089768B8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, ctx.gpr[7] >> 3u);
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976880;
      }
      goto L_089768CC;
    }
L_089768CC:
    ctx.set_gpr(5, ctx.gpr[7] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897690C;
      }
      goto L_089768F8;
    }
L_089768F8:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0897690C;
L_0897690C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089768F8;
      }
      goto L_08976918;
    }
L_08976918:
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    goto L_08976928;
L_08976928:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976930:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976948;
      }
      goto L_08976940;
    }
L_08976940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769F8;
      }
      goto L_08976948;
    }
L_08976948:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897698C;
      }
      goto L_08976954;
    }
L_08976954:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897697C;
      }
      goto L_08976968;
    }
L_08976968:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0897697C;
L_0897697C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976968;
      }
      goto L_08976988;
    }
L_08976988:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0897698C;
L_0897698C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, ctx.gpr[5] >> 3u);
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976954;
      }
      goto L_089769A0;
    }
L_089769A0:
    ctx.set_gpr(5, ctx.gpr[5] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769E0;
      }
      goto L_089769CC;
    }
L_089769CC:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089769E0;
L_089769E0:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089769CC;
      }
      goto L_089769EC;
    }
L_089769EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    goto L_089769F8;
L_089769F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976A18u) goto L_08976A18;
    return;
L_08976A18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976A28:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976A58;
      }
      goto L_08976A38;
    }
L_08976A38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976A54;
      }
      goto L_08976A50;
    }
L_08976A50:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08976A54;
L_08976A54:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08976A58;
L_08976A58:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976A74;
      }
      goto L_08976A60;
    }
L_08976A60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976A38;
      }
      goto L_08976A74;
    }
L_08976A74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976AC4;
      }
      goto L_08976A7C;
    }
L_08976A7C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[6] >> 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976AB8;
      }
      goto L_08976AAC;
    }
L_08976AAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976ABC;
      }
      goto L_08976AB8;
    }
L_08976AB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976ABC;
L_08976ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976AC8;
      }
      goto L_08976AC4;
    }
L_08976AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    goto L_08976AC8;
L_08976AC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976AD0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976AE8;
      }
      goto L_08976ADC;
    }
L_08976ADC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976B6C;
      }
      goto L_08976AE8;
    }
L_08976AE8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    goto L_08976AF0;
L_08976AF0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08976B04;
      }
      goto L_08976B00;
    }
L_08976B00:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08976B04;
L_08976B04:
    ctx.set_gpr(3, ctx.gpr[8] >> 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[8] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976B60;
      }
      goto L_08976B2C;
    }
L_08976B2C:
    ctx.set_gpr(2, ctx.gpr[5] & 255u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976B6C;
      }
      goto L_08976B60;
    }
L_08976B60:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08976AF0;
      }
      goto L_08976B68;
    }
L_08976B68:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976B6C;
L_08976B6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976BA4;
      }
      goto L_08976B8C;
    }
L_08976B8C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976B9Cu) goto L_08976B9C;
    return;
L_08976B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976BA8;
      }
      goto L_08976BA4;
    }
L_08976BA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976BA8;
L_08976BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976BE0;
      }
      goto L_08976BD4;
    }
L_08976BD4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976BE0;
    }
L_08976BE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976BF8;
      }
      goto L_08976BF0;
    }
L_08976BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976BFC;
      }
      goto L_08976BF8;
    }
L_08976BF8:
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    goto L_08976BFC;
L_08976BFC:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(7, ctx.hi);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976C90;
      }
      goto L_08976C20;
    }
L_08976C20:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976C40;
      }
      goto L_08976C28;
    }
L_08976C28:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976C38u) goto L_08976C38;
    return;
L_08976C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976C40;
    }
L_08976C40:
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C60;
      }
      goto L_08976C54;
    }
L_08976C54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976C60;
    }
L_08976C60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976C70u) goto L_08976C70;
    return;
L_08976C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C84;
      }
      goto L_08976C78;
    }
L_08976C78:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C88;
      }
      goto L_08976C84;
    }
L_08976C84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976C88;
L_08976C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976C90;
    }
L_08976C90:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976CA8;
      }
      goto L_08976C9C;
    }
L_08976C9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976CA8;
    }
L_08976CA8:
    ctx.set_gpr(7, ctx.gpr[6] - ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    goto L_08976CB0;
L_08976CB0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08976CC4;
      }
      goto L_08976CC0;
    }
L_08976CC0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08976CC4;
L_08976CC4:
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976D34;
      }
      goto L_08976CD4;
    }
L_08976CD4:
    ctx.set_gpr(9, ctx.gpr[3] >> 3u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(11, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[3] & 7u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[8] << (ctx.gpr[9] & 31u));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976D34;
      }
      goto L_08976CFC;
    }
L_08976CFC:
    ctx.set_gpr(2, ctx.gpr[10] & 255u);
    ctx.set_gpr(2, ctx.gpr[9] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D4C;
      }
      goto L_08976D34;
    }
L_08976D34:
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[12]);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(7, ctx.hi);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976CB0;
      }
      goto L_08976D48;
    }
L_08976D48:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08976D4C;
L_08976D4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976D98;
      }
      goto L_08976D8C;
    }
L_08976D8C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976DCC;
      }
      goto L_08976D98;
    }
L_08976D98:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976DA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976DA8u) goto L_08976DA8;
    return;
L_08976DA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976DC8;
      }
      goto L_08976DB4;
    }
L_08976DB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08976DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08976DC8u) goto L_08976DC8;
    return;
L_08976DC8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08976DCC;
L_08976DCC:
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
L_08976DE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976E18;
      }
      goto L_08976E0C;
    }
L_08976E0C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976E54;
      }
      goto L_08976E18;
    }
L_08976E18:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976E30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976E30u) goto L_08976E30;
    return;
L_08976E30:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976E50;
      }
      goto L_08976E3C;
    }
L_08976E3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08976E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08976E50u) goto L_08976E50;
    return;
L_08976E50:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08976E54;
L_08976E54:
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
L_08976E6C:
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976EBC;
      }
      goto L_08976EA0;
    }
L_08976EA0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976EB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976EB0u) goto L_08976EB0;
    return;
L_08976EB0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976FB0;
      }
      goto L_08976EBC;
    }
L_08976EBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976ED8;
      }
      goto L_08976ECC;
    }
L_08976ECC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976FB0;
      }
      goto L_08976ED8;
    }
L_08976ED8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976FA0;
      }
      goto L_08976EE0;
    }
L_08976EE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[20] - ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[17]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976F14;
      }
      goto L_08976F08;
    }
L_08976F08:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976FB0;
      }
      goto L_08976F14;
    }
L_08976F14:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976F28u) goto L_08976F28;
    return;
L_08976F28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976F94;
      }
      goto L_08976F34;
    }
L_08976F34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976F4C;
      }
      goto L_08976F48;
    }
L_08976F48:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08976F4C;
L_08976F4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08976F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08976F5Cu) goto L_08976F5C;
    return;
L_08976F5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[17]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] >> 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08976F94;
L_08976F94:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976FB0;
      }
      goto L_08976FA0;
    }
L_08976FA0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08976FB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976FB0u) goto L_08976FB0;
    return;
L_08976FB0:
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
L_08976FD8:
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977028;
      }
      goto L_0897700C;
    }
L_0897700C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897701Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897701Cu) goto L_0897701C;
    return;
L_0897701C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089771A0;
      }
      goto L_08977028;
    }
L_08977028:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977044;
      }
      goto L_08977038;
    }
L_08977038:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089771A0;
      }
      goto L_08977044;
    }
L_08977044:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897706C;
      }
      goto L_0897704C;
    }
L_0897704C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977064u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977064u) goto L_08977064;
    return;
L_08977064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089771A0;
      }
      goto L_0897706C;
    }
L_0897706C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[20] - ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[17]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897709C;
      }
      goto L_08977094;
    }
L_08977094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089770A0;
      }
      goto L_0897709C;
    }
L_0897709C:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_089770A0;
L_089770A0:
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089770CC;
      }
      goto L_089770B0;
    }
L_089770B0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089770CC;
      }
      goto L_089770C0;
    }
L_089770C0:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089771A0;
      }
      goto L_089770CC;
    }
L_089770CC:
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[16]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089770EC;
      }
      goto L_089770E0;
    }
L_089770E0:
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089770F0;
      }
      goto L_089770EC;
    }
L_089770EC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089770F0;
L_089770F0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977168;
      }
      goto L_08977100;
    }
L_08977100:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897711Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897711Cu) goto L_0897711C;
    return;
L_0897711C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897716C;
      }
      goto L_08977128;
    }
L_08977128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[17]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] >> 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897716C;
      }
      goto L_08977168;
    }
L_08977168:
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0897716C;
L_0897716C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897719C;
      }
      goto L_08977174;
    }
L_08977174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897718C;
      }
      goto L_08977188;
    }
L_08977188:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_0897718C;
L_0897718C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897719Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897719Cu) goto L_0897719C;
    return;
L_0897719C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_089771A0;
L_089771A0:
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
L_089771C8:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977200;
      }
      goto L_089771D4;
    }
L_089771D4:
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089771FC;
      }
      goto L_089771F0;
    }
L_089771F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977324;
      }
      goto L_089771FC;
    }
L_089771FC:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08977200;
L_08977200:
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089771D4;
      }
      goto L_08977210;
    }
L_08977210:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(11, ctx.gpr[9] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_08977220;
L_08977220:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08977238;
      }
      goto L_08977230;
    }
L_08977230:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_08977238;
L_08977238:
    ctx.set_gpr(6, ctx.gpr[11] >> 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[11] & 7u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977280;
      }
      goto L_08977260;
    }
L_08977260:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897726C;
      }
      goto L_08977268;
    }
L_08977268:
    ctx.set_gpr(3, ctx.gpr[11] + 0u);
    goto L_0897726C;
L_0897726C:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08977284;
      }
      goto L_08977278;
    }
L_08977278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897728C;
      }
      goto L_08977280;
    }
L_08977280:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08977284;
L_08977284:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08977220;
      }
      goto L_0897728C;
    }
L_0897728C:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08977320;
      }
      goto L_08977294;
    }
L_08977294:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977300;
      }
      goto L_089772BC;
    }
L_089772BC:
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(8, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[3] >> 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[9] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08977300;
L_08977300:
    ctx.set_gpr(5, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089772BC;
      }
      goto L_0897730C;
    }
L_0897730C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977324;
      }
      goto L_08977320;
    }
L_08977320:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08977324;
L_08977324:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897732C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977364;
      }
      goto L_08977338;
    }
L_08977338:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977360;
      }
      goto L_08977354;
    }
L_08977354:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977534;
      }
      goto L_08977360;
    }
L_08977360:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08977364;
L_08977364:
    ctx.set_gpr(9, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977338;
      }
      goto L_08977374;
    }
L_08977374:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[12]);
    goto L_08977390;
L_08977390:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_089773A8;
      }
      goto L_089773A0;
    }
L_089773A0:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_089773A8;
L_089773A8:
    ctx.set_gpr(15, ctx.gpr[5] << 2u);
    ctx.set_gpr(12, ctx.gpr[8] + ctx.gpr[15]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089773CC;
      }
      goto L_089773C4;
    }
L_089773C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089773D0;
      }
      goto L_089773CC;
    }
L_089773CC:
    ctx.set_gpr(14, ctx.gpr[12] + 0u);
    goto L_089773D0;
L_089773D0:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[14]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(13, ctx.hi);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977400;
      }
      goto L_089773E0;
    }
L_089773E0:
    ctx.set_gpr(12, ctx.gpr[6] + ctx.gpr[15]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(13, ctx.gpr[12] - ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977448;
      }
      goto L_08977400;
    }
L_08977400:
    ctx.set_gpr(13, ctx.gpr[10] >> 3u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[10] & 7u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977448;
      }
      goto L_08977428;
    }
L_08977428:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977434;
      }
      goto L_08977430;
    }
L_08977430:
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    goto L_08977434;
L_08977434:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0897744C;
      }
      goto L_08977440;
    }
L_08977440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977454;
      }
      goto L_08977448;
    }
L_08977448:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0897744C;
L_0897744C:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08977390;
      }
      goto L_08977454;
    }
L_08977454:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08977530;
      }
      goto L_0897745C;
    }
L_0897745C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977510;
      }
      goto L_08977478;
    }
L_08977478:
    ctx.set_gpr(6, ctx.gpr[11] & 7u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(10, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[11] >> 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(12, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[12]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089774C4;
      }
      goto L_089774BC;
    }
L_089774BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089774C8;
      }
      goto L_089774C4;
    }
L_089774C4:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_089774C8;
L_089774C8:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(10, ctx.hi);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089774E8;
      }
      goto L_089774D8;
    }
L_089774D8:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977500;
      }
      goto L_089774E8;
    }
L_089774E8:
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[10] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08977500;
L_08977500:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08977510;
L_08977510:
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977478;
      }
      goto L_0897751C;
    }
L_0897751C:
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977534;
      }
      goto L_08977530;
    }
L_08977530:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08977534;
L_08977534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897753C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977590;
      }
      goto L_0897756C;
    }
L_0897756C:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897758Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897758Cu) goto L_0897758C;
    return;
L_0897758C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08977590;
L_08977590:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897756C;
      }
      goto L_0897759C;
    }
L_0897759C:
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
L_089775BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897761C;
      }
      goto L_089775C4;
    }
L_089775C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897761C;
      }
      goto L_089775F0;
    }
L_089775F0:
    ctx.set_gpr(5, ctx.gpr[7] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(6, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] >> 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0897761C;
L_0897761C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977624:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977630:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977654;
      }
      goto L_08977640;
    }
L_08977640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977660;
      }
      goto L_08977654;
    }
L_08977654:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089776B8;
      }
      goto L_08977660;
    }
L_08977660:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] >> 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089776AC;
      }
      goto L_089776A0;
    }
L_089776A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089776B8;
      }
      goto L_089776AC;
    }
L_089776AC:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    goto L_089776B8;
L_089776B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089776C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089776D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x089776D8u) goto L_089776D8;
    return;
L_089776D8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4060));
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
L_089776FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08977714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 286u, 0x0892D3A8u>(ctx, &aot_mem) && ctx.pc == 0x08977714u) goto L_08977714;
    return;
L_08977714:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4060));
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
L_08977738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08977748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 288u, 0x0892D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08977748u) goto L_08977748;
    return;
L_08977748:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08977768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 425u, 0x08945E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08977768u) goto L_08977768;
    return;
L_08977768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0897779Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0897779Cu) goto L_0897779C;
    return;
L_0897779C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089777E0;
      }
      goto L_089777AC;
    }
L_089777AC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089777DC;
      }
      goto L_089777C4;
    }
L_089777C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089777D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089777D8u) goto L_089777D8;
    return;
L_089777D8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_089777DC;
L_089777DC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089777E0;
L_089777E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089777AC;
      }
      goto L_089777EC;
    }
L_089777EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089777F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 426u, 0x0892DD28u>(ctx, &aot_mem) && ctx.pc == 0x089777F8u) goto L_089777F8;
    return;
L_089777F8:
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
L_08977818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08977830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 425u, 0x0892DD18u>(ctx, &aot_mem) && ctx.pc == 0x08977830u) goto L_08977830;
    return;
L_08977830:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8904)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08977850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08977850u) goto L_08977850;
    return;
L_08977850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08977874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 745u, 0x0892F23Cu>(ctx, &aot_mem) && ctx.pc == 0x08977874u) goto L_08977874;
    return;
L_08977874:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08977894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x08977894u) goto L_08977894;
    return;
L_08977894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089778A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089778C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x089778C8u) goto L_089778C8;
    return;
L_089778C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089778D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089778D4u) goto L_089778D4;
    return;
L_089778D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977918;
      }
      goto L_089778E4;
    }
L_089778E4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977914;
      }
      goto L_089778FC;
    }
L_089778FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977910u) goto L_08977910;
    return;
L_08977910:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_08977914;
L_08977914:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08977918;
L_08977918:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089778E4;
      }
      goto L_08977924;
    }
L_08977924:
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
L_08977944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08977954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x08977954u) goto L_08977954;
    return;
L_08977954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977964:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977970:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897797C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0897798Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 685u, 0x0892EEF4u>(ctx, &aot_mem) && ctx.pc == 0x0897798Cu) goto L_0897798C;
    return;
L_0897798C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897799C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089779A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089779BC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089779C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089779ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089779ECu) goto L_089779EC;
    return;
L_089779EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089779FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977A24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977A24u) goto L_08977A24;
    return;
L_08977A24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977A70u) goto L_08977A70;
    return;
L_08977A70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977ABC;
      }
      goto L_08977A7C;
    }
L_08977A7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977ABC;
      }
      goto L_08977A84;
    }
L_08977A84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977AA8;
      }
      goto L_08977A98;
    }
L_08977A98:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977ABC;
      }
      goto L_08977AA8;
    }
L_08977AA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08977ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08977ABCu) goto L_08977ABC;
    return;
L_08977ABC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08977ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977B14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977B14u) goto L_08977B14;
    return;
L_08977B14:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977B60;
      }
      goto L_08977B20;
    }
L_08977B20:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977B60;
      }
      goto L_08977B28;
    }
L_08977B28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977B4C;
      }
      goto L_08977B3C;
    }
L_08977B3C:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977B60;
      }
      goto L_08977B4C;
    }
L_08977B4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08977B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08977B60u) goto L_08977B60;
    return;
L_08977B60:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08977B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977B9Cu) goto L_08977B9C;
    return;
L_08977B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977BC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977BC4u) goto L_08977BC4;
    return;
L_08977BC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 8192u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977C4C;
      }
      goto L_08977C20;
    }
L_08977C20:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977C30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C30u) goto L_08977C30;
    return;
L_08977C30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08977C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 292u, 0x08932134u>(ctx, &aot_mem) && ctx.pc == 0x08977C44u) goto L_08977C44;
    return;
L_08977C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977C64;
      }
      goto L_08977C4C;
    }
L_08977C4C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977C64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C64u) goto L_08977C64;
    return;
L_08977C64:
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
L_08977C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977C94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C94u) goto L_08977C94;
    return;
L_08977C94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977CA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977CC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977CC8u) goto L_08977CC8;
    return;
L_08977CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977CD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977CE0:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977DD8;
      }
      goto L_08977D30;
    }
L_08977D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977DA4;
      }
      goto L_08977D40;
    }
L_08977D40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08977D6C;
      }
      goto L_08977D4C;
    }
L_08977D4C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D5C;
      }
      goto L_08977D54;
    }
L_08977D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D6C;
      }
      goto L_08977D5C;
    }
L_08977D5C:
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D74;
      }
      goto L_08977D6C;
    }
L_08977D6C:
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-14952));
    goto L_08977D74;
L_08977D74:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977D88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977D88u) goto L_08977D88;
    return;
L_08977D88:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8908));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08977DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x08977DA4u) goto L_08977DA4;
    return;
L_08977DA4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977DC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977DC4u) goto L_08977DC4;
    return;
L_08977DC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977DD8;
      }
      goto L_08977DCC;
    }
L_08977DCC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 50u, 0x08978308u>(ctx, &aot_mem); return;
      }
      goto L_08977DD8;
    }
L_08977DD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08977E38;
      }
      goto L_08977DE4;
    }
L_08977DE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977E38;
      }
      goto L_08977DF0;
    }
L_08977DF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08977E38;
      }
      goto L_08977DF8;
    }
L_08977DF8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977E10u) goto L_08977E10;
    return;
L_08977E10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977E24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977E24u) goto L_08977E24;
    return;
L_08977E24:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14836));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08977E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08977E38u) goto L_08977E38;
    return;
L_08977E38:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977E4Cu) goto L_08977E4C;
    return;
L_08977E4C:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E5C;
      }
      goto L_08977E58;
    }
L_08977E58:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4096));
    goto L_08977E5C;
L_08977E5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08977F2C;
      }
      goto L_08977E68;
    }
L_08977E68:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E94;
      }
      goto L_08977E74;
    }
L_08977E74:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977E8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977E8Cu) goto L_08977E8C;
    return;
L_08977E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E98;
      }
      goto L_08977E94;
    }
L_08977E94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08977E98;
L_08977E98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977ECC;
      }
      goto L_08977EA4;
    }
L_08977EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977ECC;
      }
      goto L_08977EB8;
    }
L_08977EB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(253));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08977ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08977ECCu) goto L_08977ECC;
    return;
L_08977ECC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F10;
      }
      goto L_08977ED8;
    }
L_08977ED8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08977EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08977EF0u) goto L_08977EF0;
    return;
L_08977EF0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F10;
      }
      goto L_08977EFC;
    }
L_08977EFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08977F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08977F10u) goto L_08977F10;
    return;
L_08977F10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08977F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 59u, 0x089783ECu>(ctx, &aot_mem) && ctx.pc == 0x08977F24u) goto L_08977F24;
    return;
L_08977F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 49u, 0x089782F0u>(ctx, &aot_mem); return;
      }
      goto L_08977F2C;
    }
L_08977F2C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F44;
      }
      goto L_08977F38;
    }
L_08977F38:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F6C;
      }
      goto L_08977F44;
    }
L_08977F44:
    ctx.set_gpr(2, ctx.gpr[19] & 4095u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977F5C;
      }
      goto L_08977F50;
    }
L_08977F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F5C;
      }
      goto L_08977F58;
    }
L_08977F58:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4096));
    goto L_08977F5C;
L_08977F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F6C;
      }
      goto L_08977F64;
    }
L_08977F64:
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(4096));
    goto L_08977F6C;
L_08977F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 10u, 0x089780A8u>(ctx, &aot_mem); return;
      }
      goto L_08977F84;
    }
L_08977F84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977F98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977F98u) goto L_08977F98;
    return;
L_08977F98:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977FBCu) goto L_08977FBC;
    return;
L_08977FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FE0;
      }
      goto L_08977FC4;
    }
L_08977FC4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08977FD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977FD8u) goto L_08977FD8;
    return;
L_08977FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E5C;
      }
      goto L_08977FE0;
    }
L_08977FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 6u, 0x08978058u>(ctx, &aot_mem); return;
      }
      goto L_08977FF4;
    }
L_08977FF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 8u, 0x08978088u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 1u, 0x08978000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0092(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0092_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_92(Runtime &runtime) {
    runtime.register_generated_unit(92u, 0x08974000u, 16384u, &recomp_unit_0092, &recomp_unit_0092_entry);
    runtime.register_function(0x08974000u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974030u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897403Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974044u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974050u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974060u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974084u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974124u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974128u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897416Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974180u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974194u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974230u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974250u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974270u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974278u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897428Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974298u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974304u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897431Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974334u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897435Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974394u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974400u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897440Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974418u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974424u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974430u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897443Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897444Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974460u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897446Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974478u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974484u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974490u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897449Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897450Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974518u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974524u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974530u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897453Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974544u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897454Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897455Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974574u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974588u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974608u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974614u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974630u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974638u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897464Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974658u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897466Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974670u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974678u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974684u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974694u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974708u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974714u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974730u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974738u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897474Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974758u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974780u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897478Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974798u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089747F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974800u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974828u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974834u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974840u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974844u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974858u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974874u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897487Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974888u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974894u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974908u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974920u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974924u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897492Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897495Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897496Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974978u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974988u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974994u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974998u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ADCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ED8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897500Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975024u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975030u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975048u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975058u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975064u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975078u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897507Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975090u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975110u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897511Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975130u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975140u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897514Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975160u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897516Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975180u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975194u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975220u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975264u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975270u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975274u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975290u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897529Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975308u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975314u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975320u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897532Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975344u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975354u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975360u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975374u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975378u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897538Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897540Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975418u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897542Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897543Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975448u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897545Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975468u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975474u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975488u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975498u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975504u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975508u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975514u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975524u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975538u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975550u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975558u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897556Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975570u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975584u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975598u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975610u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897561Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897562Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975634u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897564Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975654u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975668u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897566Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975680u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975694u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975698u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897571Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975724u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975730u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975738u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897573Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975748u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897574Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975754u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975790u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975808u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897580Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975818u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975844u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975864u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897586Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897587Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975884u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975898u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975908u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897591Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975924u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975938u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897594Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975954u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975968u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975970u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975980u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975988u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897599Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ADCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ED0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ED8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976008u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976010u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897602Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976044u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976060u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976070u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976080u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897609Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976120u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897612Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976138u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976140u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976150u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976158u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897615Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976164u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976234u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976240u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897625Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976260u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976274u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976290u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976294u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976310u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976314u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976328u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976338u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897634Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976354u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976358u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976368u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976378u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976390u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976398u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897639Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089763ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089763F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976418u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976424u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976434u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897643Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976450u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976454u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976480u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976508u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976518u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976520u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976538u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976568u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976570u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976578u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976598u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976600u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976610u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897662Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976644u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897665Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897667Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976684u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976698u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897669Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976704u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976728u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976734u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976750u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976760u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976770u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976788u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976790u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976818u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976828u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976840u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897685Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897686Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976874u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976880u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976894u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897690Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976918u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976928u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976930u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976940u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976948u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976954u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976968u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897697Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976988u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897698Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ABCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ADCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ECCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976ED8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897700Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897701Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977028u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977038u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977044u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897704Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977064u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897706Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977094u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897709Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089770F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977100u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897711Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977128u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897716Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977188u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897718Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897719Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977200u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977210u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977220u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977230u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977238u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977260u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977268u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897726Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977278u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977280u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897728Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977294u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977300u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897730Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977320u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977324u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897732Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977338u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977354u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977360u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977364u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977374u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977390u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977400u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977428u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977430u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977434u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977440u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977448u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897744Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977454u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897745Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977478u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977500u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977510u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897751Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977530u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897753Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897756Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897758Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977590u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897759Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897761Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977624u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977630u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977640u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977654u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977660u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977714u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977738u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977748u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977758u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977768u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977778u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897779Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977818u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977830u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977850u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977864u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977874u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977884u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977894u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089778FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977910u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977914u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977918u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977924u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977944u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977954u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977964u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977970u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897797Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897798Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897799Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089779FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977AA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ABCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ADCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ECCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ED8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FF4u, &recomp_unit_0092, "recomp_unit_0092");
}
} // namespace psprecomp
