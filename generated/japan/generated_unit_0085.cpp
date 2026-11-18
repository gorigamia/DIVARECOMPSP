#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0085[4095] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 46, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76,
    0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0,
    0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0,
    0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0,
    0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 217, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 264, 0, 265, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283,
    0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0,
    300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 307, 0,
    308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 317, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 331, 0, 332, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 358, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 364, 0, 365, 0, 0, 0, 0, 0,
    366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381,
    0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 408, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 425,
    0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    456, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463,
    464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481,
    0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0,
    0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 554, 0, 0, 0, 0, 555, 0,
    0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0,
    562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 584,
    0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590,
    0, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0,
    606, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0,
    616, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0,
    0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0,
    0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0,
    0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 668, 669, 670,
    0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0,
    675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 0,
    0, 681, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0,
    0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 0,
    710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 713, 714, 715, 0, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0,
    0, 721, 0, 722, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 729,
    0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0,
    0, 0, 739, 740, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0,
    0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 759, 760, 0, 0, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 0,
    0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0,
    769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0,
    779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 783, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0,
    0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0,
    0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 0,
    798, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0,
    0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0,
    0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814,
    0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0,
    0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824,
    0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 829, 830, 0, 0, 0, 831, 0, 832, 0, 833, 0,
    0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837,
    0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 843, 844, 0, 845, 0,
    846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0,
    0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 0,
    0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 858, 859, 860, 0, 0, 0, 0, 0, 0, 0, 861,
    0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0,
    0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 876, 877,
    0, 878, 0, 0, 879, 0, 0, 0, 880, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 884, 885, 0, 0, 886, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 890, 0, 0, 891, 0,
    0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 899, 900, 0, 0,
    0, 901, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 0, 0, 0, 909, 0, 0,
    910, 0, 0, 911, 0, 0, 0, 912, 0, 0, 0, 913, 0, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 918, 0, 0, 919, 920, 0, 0, 921,
    0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 925,
};
void recomp_unit_0085_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08958004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0085[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08958004;
    case 2u: goto L_08958008;
    case 3u: goto L_08958024;
    case 4u: goto L_0895803C;
    case 5u: goto L_08958058;
    case 6u: goto L_08958060;
    case 7u: goto L_08958064;
    case 8u: goto L_08958078;
    case 9u: goto L_08958098;
    case 10u: goto L_089580A0;
    case 11u: goto L_089580B8;
    case 12u: goto L_089580D0;
    case 13u: goto L_089580E8;
    case 14u: goto L_089580F0;
    case 15u: goto L_08958108;
    case 16u: goto L_08958120;
    case 17u: goto L_08958138;
    case 18u: goto L_08958194;
    case 19u: goto L_089581A0;
    case 20u: goto L_089581AC;
    case 21u: goto L_089581B8;
    case 22u: goto L_089581D8;
    case 23u: goto L_089581DC;
    case 24u: goto L_089581EC;
    case 25u: goto L_089581FC;
    case 26u: goto L_0895820C;
    case 27u: goto L_08958234;
    case 28u: goto L_08958258;
    case 29u: goto L_08958274;
    case 30u: goto L_08958288;
    case 31u: goto L_089582B4;
    case 32u: goto L_089582C0;
    case 33u: goto L_089582CC;
    case 34u: goto L_089582D4;
    case 35u: goto L_089582D8;
    case 36u: goto L_089582EC;
    case 37u: goto L_08958314;
    case 38u: goto L_08958320;
    case 39u: goto L_0895832C;
    case 40u: goto L_0895833C;
    case 41u: goto L_08958348;
    case 42u: goto L_08958350;
    case 43u: goto L_0895835C;
    case 44u: goto L_08958364;
    case 45u: goto L_08958378;
    case 46u: goto L_0895837C;
    case 47u: goto L_08958394;
    case 48u: goto L_089583AC;
    case 49u: goto L_089583C0;
    case 50u: goto L_089583CC;
    case 51u: goto L_089583E4;
    case 52u: goto L_089583FC;
    case 53u: goto L_08958420;
    case 54u: goto L_08958438;
    case 55u: goto L_0895845C;
    case 56u: goto L_0895846C;
    case 57u: goto L_0895847C;
    case 58u: goto L_08958488;
    case 59u: goto L_089584A8;
    case 60u: goto L_089584B8;
    case 61u: goto L_089584C4;
    case 62u: goto L_089584E4;
    case 63u: goto L_089584F0;
    case 64u: goto L_089584FC;
    case 65u: goto L_08958518;
    case 66u: goto L_08958520;
    case 67u: goto L_0895853C;
    case 68u: goto L_08958560;
    case 69u: goto L_0895857C;
    case 70u: goto L_08958584;
    case 71u: goto L_089585A0;
    case 72u: goto L_089585C0;
    case 73u: goto L_089585CC;
    case 74u: goto L_089585DC;
    case 75u: goto L_089585F0;
    case 76u: goto L_08958600;
    case 77u: goto L_08958610;
    case 78u: goto L_08958620;
    case 79u: goto L_0895862C;
    case 80u: goto L_08958638;
    case 81u: goto L_08958648;
    case 82u: goto L_0895865C;
    case 83u: goto L_0895866C;
    case 84u: goto L_08958680;
    case 85u: goto L_08958690;
    case 86u: goto L_089586A0;
    case 87u: goto L_089586B8;
    case 88u: goto L_089586D0;
    case 89u: goto L_089586DC;
    case 90u: goto L_089586EC;
    case 91u: goto L_089586F4;
    case 92u: goto L_089586FC;
    case 93u: goto L_08958708;
    case 94u: goto L_08958714;
    case 95u: goto L_08958724;
    case 96u: goto L_08958738;
    case 97u: goto L_08958748;
    case 98u: goto L_0895875C;
    case 99u: goto L_0895876C;
    case 100u: goto L_0895877C;
    case 101u: goto L_08958794;
    case 102u: goto L_089587AC;
    case 103u: goto L_089587B8;
    case 104u: goto L_089587C4;
    case 105u: goto L_089587D0;
    case 106u: goto L_089587E0;
    case 107u: goto L_089587EC;
    case 108u: goto L_089587F8;
    case 109u: goto L_08958808;
    case 110u: goto L_08958814;
    case 111u: goto L_08958820;
    case 112u: goto L_08958830;
    case 113u: goto L_08958844;
    case 114u: goto L_08958854;
    case 115u: goto L_08958864;
    case 116u: goto L_08958874;
    case 117u: goto L_0895887C;
    case 118u: goto L_08958888;
    case 119u: goto L_08958894;
    case 120u: goto L_089588A4;
    case 121u: goto L_089588B0;
    case 122u: goto L_089588C8;
    case 123u: goto L_089588D4;
    case 124u: goto L_089588DC;
    case 125u: goto L_089588E8;
    case 126u: goto L_089588F0;
    case 127u: goto L_08958910;
    case 128u: goto L_08958930;
    case 129u: goto L_08958940;
    case 130u: goto L_08958948;
    case 131u: goto L_08958954;
    case 132u: goto L_08958964;
    case 133u: goto L_08958980;
    case 134u: goto L_0895898C;
    case 135u: goto L_089589A4;
    case 136u: goto L_089589B0;
    case 137u: goto L_089589C8;
    case 138u: goto L_089589D4;
    case 139u: goto L_089589E4;
    case 140u: goto L_089589F4;
    case 141u: goto L_08958A00;
    case 142u: goto L_08958A0C;
    case 143u: goto L_08958A1C;
    case 144u: goto L_08958A2C;
    case 145u: goto L_08958A38;
    case 146u: goto L_08958A44;
    case 147u: goto L_08958A50;
    case 148u: goto L_08958A60;
    case 149u: goto L_08958A68;
    case 150u: goto L_08958A74;
    case 151u: goto L_08958A98;
    case 152u: goto L_08958AA8;
    case 153u: goto L_08958AB0;
    case 154u: goto L_08958ABC;
    case 155u: goto L_08958AE0;
    case 156u: goto L_08958AE4;
    case 157u: goto L_08958AF4;
    case 158u: goto L_08958B08;
    case 159u: goto L_08958B44;
    case 160u: goto L_08958B50;
    case 161u: goto L_08958B68;
    case 162u: goto L_08958B70;
    case 163u: goto L_08958B84;
    case 164u: goto L_08958B94;
    case 165u: goto L_08958B9C;
    case 166u: goto L_08958BA8;
    case 167u: goto L_08958BB4;
    case 168u: goto L_08958BC0;
    case 169u: goto L_08958BCC;
    case 170u: goto L_08958BD0;
    case 171u: goto L_08958BDC;
    case 172u: goto L_08958BE8;
    case 173u: goto L_08958C00;
    case 174u: goto L_08958C10;
    case 175u: goto L_08958C1C;
    case 176u: goto L_08958C2C;
    case 177u: goto L_08958C38;
    case 178u: goto L_08958C48;
    case 179u: goto L_08958C60;
    case 180u: goto L_08958C70;
    case 181u: goto L_08958C7C;
    case 182u: goto L_08958C90;
    case 183u: goto L_08958C98;
    case 184u: goto L_08958CAC;
    case 185u: goto L_08958CB4;
    case 186u: goto L_08958CC8;
    case 187u: goto L_08958CD4;
    case 188u: goto L_08958CDC;
    case 189u: goto L_08958D00;
    case 190u: goto L_08958D20;
    case 191u: goto L_08958D2C;
    case 192u: goto L_08958D34;
    case 193u: goto L_08958D78;
    case 194u: goto L_08958D94;
    case 195u: goto L_08958DBC;
    case 196u: goto L_08958DE0;
    case 197u: goto L_08958DFC;
    case 198u: goto L_08958E44;
    case 199u: goto L_08958E60;
    case 200u: goto L_08958E6C;
    case 201u: goto L_08958E7C;
    case 202u: goto L_08958EAC;
    case 203u: goto L_08958EF4;
    case 204u: goto L_08958F10;
    case 205u: goto L_08958F1C;
    case 206u: goto L_08958F2C;
    case 207u: goto L_08958F68;
    case 208u: goto L_08958F90;
    case 209u: goto L_08958FA4;
    case 210u: goto L_08958FB4;
    case 211u: goto L_08958FC0;
    case 212u: goto L_08958FC8;
    case 213u: goto L_08958FD4;
    case 214u: goto L_08958FDC;
    case 215u: goto L_08958FF0;
    case 216u: goto L_08959004;
    case 217u: goto L_0895901C;
    case 218u: goto L_08959020;
    case 219u: goto L_08959028;
    case 220u: goto L_08959040;
    case 221u: goto L_0895904C;
    case 222u: goto L_08959058;
    case 223u: goto L_08959068;
    case 224u: goto L_08959088;
    case 225u: goto L_0895909C;
    case 226u: goto L_089590B8;
    case 227u: goto L_089590C4;
    case 228u: goto L_089590D8;
    case 229u: goto L_089590F0;
    case 230u: goto L_08959108;
    case 231u: goto L_0895911C;
    case 232u: goto L_08959148;
    case 233u: goto L_08959154;
    case 234u: goto L_0895915C;
    case 235u: goto L_08959168;
    case 236u: goto L_08959170;
    case 237u: goto L_08959184;
    case 238u: goto L_08959198;
    case 239u: goto L_089591B0;
    case 240u: goto L_089591B4;
    case 241u: goto L_089591BC;
    case 242u: goto L_089591D4;
    case 243u: goto L_089591E0;
    case 244u: goto L_089591F0;
    case 245u: goto L_0895920C;
    case 246u: goto L_08959234;
    case 247u: goto L_08959240;
    case 248u: goto L_08959250;
    case 249u: goto L_0895925C;
    case 250u: goto L_08959264;
    case 251u: goto L_08959270;
    case 252u: goto L_08959278;
    case 253u: goto L_0895928C;
    case 254u: goto L_089592A4;
    case 255u: goto L_089592B4;
    case 256u: goto L_089592CC;
    case 257u: goto L_089592D0;
    case 258u: goto L_089592D8;
    case 259u: goto L_089592F0;
    case 260u: goto L_089592FC;
    case 261u: goto L_08959318;
    case 262u: goto L_08959344;
    case 263u: goto L_0895935C;
    case 264u: goto L_08959360;
    case 265u: goto L_08959368;
    case 266u: goto L_08959374;
    case 267u: goto L_08959384;
    case 268u: goto L_0895939C;
    case 269u: goto L_089593A0;
    case 270u: goto L_089593A8;
    case 271u: goto L_089593C0;
    case 272u: goto L_089593CC;
    case 273u: goto L_089593EC;
    case 274u: goto L_08959400;
    case 275u: goto L_08959418;
    case 276u: goto L_0895941C;
    case 277u: goto L_08959424;
    case 278u: goto L_08959430;
    case 279u: goto L_08959438;
    case 280u: goto L_08959444;
    case 281u: goto L_0895946C;
    case 282u: goto L_08959478;
    case 283u: goto L_08959480;
    case 284u: goto L_0895948C;
    case 285u: goto L_08959494;
    case 286u: goto L_089594A8;
    case 287u: goto L_089594BC;
    case 288u: goto L_089594D4;
    case 289u: goto L_089594D8;
    case 290u: goto L_089594E0;
    case 291u: goto L_089594F8;
    case 292u: goto L_08959504;
    case 293u: goto L_08959520;
    case 294u: goto L_0895952C;
    case 295u: goto L_08959538;
    case 296u: goto L_0895953C;
    case 297u: goto L_08959544;
    case 298u: goto L_0895956C;
    case 299u: goto L_0895957C;
    case 300u: goto L_08959584;
    case 301u: goto L_08959594;
    case 302u: goto L_0895959C;
    case 303u: goto L_089595B8;
    case 304u: goto L_089595D0;
    case 305u: goto L_089595E0;
    case 306u: goto L_089595F8;
    case 307u: goto L_089595FC;
    case 308u: goto L_08959604;
    case 309u: goto L_08959610;
    case 310u: goto L_08959620;
    case 311u: goto L_08959638;
    case 312u: goto L_0895963C;
    case 313u: goto L_08959644;
    case 314u: goto L_0895965C;
    case 315u: goto L_08959668;
    case 316u: goto L_08959680;
    case 317u: goto L_08959698;
    case 318u: goto L_0895969C;
    case 319u: goto L_089596A4;
    case 320u: goto L_089596BC;
    case 321u: goto L_089596C8;
    case 322u: goto L_089596CC;
    case 323u: goto L_089596E4;
    case 324u: goto L_08959710;
    case 325u: goto L_08959728;
    case 326u: goto L_0895972C;
    case 327u: goto L_08959734;
    case 328u: goto L_08959740;
    case 329u: goto L_08959754;
    case 330u: goto L_0895976C;
    case 331u: goto L_08959770;
    case 332u: goto L_08959778;
    case 333u: goto L_08959784;
    case 334u: goto L_08959794;
    case 335u: goto L_089597A8;
    case 336u: goto L_089597C0;
    case 337u: goto L_089597C4;
    case 338u: goto L_089597CC;
    case 339u: goto L_089597E4;
    case 340u: goto L_089597F0;
    case 341u: goto L_089597F8;
    case 342u: goto L_08959800;
    case 343u: goto L_0895981C;
    case 344u: goto L_0895982C;
    case 345u: goto L_08959844;
    case 346u: goto L_08959848;
    case 347u: goto L_08959850;
    case 348u: goto L_08959868;
    case 349u: goto L_08959874;
    case 350u: goto L_08959890;
    case 351u: goto L_089598B4;
    case 352u: goto L_089598CC;
    case 353u: goto L_089598D0;
    case 354u: goto L_089598D8;
    case 355u: goto L_089598E4;
    case 356u: goto L_089598F8;
    case 357u: goto L_08959910;
    case 358u: goto L_08959914;
    case 359u: goto L_0895991C;
    case 360u: goto L_08959928;
    case 361u: goto L_08959938;
    case 362u: goto L_08959948;
    case 363u: goto L_08959960;
    case 364u: goto L_08959964;
    case 365u: goto L_0895996C;
    case 366u: goto L_08959984;
    case 367u: goto L_08959990;
    case 368u: goto L_089599A0;
    case 369u: goto L_089599B8;
    case 370u: goto L_089599BC;
    case 371u: goto L_089599C4;
    case 372u: goto L_089599DC;
    case 373u: goto L_089599E8;
    case 374u: goto L_089599FC;
    case 375u: goto L_08959A30;
    case 376u: goto L_08959A38;
    case 377u: goto L_08959A54;
    case 378u: goto L_08959A64;
    case 379u: goto L_08959A70;
    case 380u: goto L_08959A78;
    case 381u: goto L_08959A80;
    case 382u: goto L_08959A8C;
    case 383u: goto L_08959A94;
    case 384u: goto L_08959AA4;
    case 385u: goto L_08959AB0;
    case 386u: goto L_08959AB8;
    case 387u: goto L_08959AC4;
    case 388u: goto L_08959ACC;
    case 389u: goto L_08959AE0;
    case 390u: goto L_08959AF4;
    case 391u: goto L_08959B0C;
    case 392u: goto L_08959B10;
    case 393u: goto L_08959B18;
    case 394u: goto L_08959B30;
    case 395u: goto L_08959B3C;
    case 396u: goto L_08959B48;
    case 397u: goto L_08959B50;
    case 398u: goto L_08959B5C;
    case 399u: goto L_08959B78;
    case 400u: goto L_08959B90;
    case 401u: goto L_08959BAC;
    case 402u: goto L_08959BB8;
    case 403u: goto L_08959BC0;
    case 404u: goto L_08959BCC;
    case 405u: goto L_08959BD4;
    case 406u: goto L_08959BE8;
    case 407u: goto L_08959BFC;
    case 408u: goto L_08959C14;
    case 409u: goto L_08959C18;
    case 410u: goto L_08959C20;
    case 411u: goto L_08959C38;
    case 412u: goto L_08959C44;
    case 413u: goto L_08959C50;
    case 414u: goto L_08959C5C;
    case 415u: goto L_08959C74;
    case 416u: goto L_08959C84;
    case 417u: goto L_08959C94;
    case 418u: goto L_08959CA0;
    case 419u: goto L_08959CA8;
    case 420u: goto L_08959CB4;
    case 421u: goto L_08959CBC;
    case 422u: goto L_08959CD0;
    case 423u: goto L_08959CE4;
    case 424u: goto L_08959CFC;
    case 425u: goto L_08959D00;
    case 426u: goto L_08959D08;
    case 427u: goto L_08959D20;
    case 428u: goto L_08959D2C;
    case 429u: goto L_08959D30;
    case 430u: goto L_08959D54;
    case 431u: goto L_08959D5C;
    case 432u: goto L_08959D64;
    case 433u: goto L_08959D98;
    case 434u: goto L_08959DA4;
    case 435u: goto L_08959DB4;
    case 436u: goto L_08959DC0;
    case 437u: goto L_08959DC8;
    case 438u: goto L_08959DD4;
    case 439u: goto L_08959DDC;
    case 440u: goto L_08959DF0;
    case 441u: goto L_08959E08;
    case 442u: goto L_08959E18;
    case 443u: goto L_08959E30;
    case 444u: goto L_08959E34;
    case 445u: goto L_08959E3C;
    case 446u: goto L_08959E54;
    case 447u: goto L_08959E60;
    case 448u: goto L_08959E7C;
    case 449u: goto L_08959EA0;
    case 450u: goto L_08959EB8;
    case 451u: goto L_08959EBC;
    case 452u: goto L_08959EC4;
    case 453u: goto L_08959ED0;
    case 454u: goto L_08959EDC;
    case 455u: goto L_08959EEC;
    case 456u: goto L_08959F04;
    case 457u: goto L_08959F08;
    case 458u: goto L_08959F10;
    case 459u: goto L_08959F28;
    case 460u: goto L_08959F34;
    case 461u: goto L_08959F44;
    case 462u: goto L_08959F68;
    case 463u: goto L_08959F80;
    case 464u: goto L_08959F84;
    case 465u: goto L_08959F8C;
    case 466u: goto L_08959F98;
    case 467u: goto L_08959FA4;
    case 468u: goto L_08959FB4;
    case 469u: goto L_08959FCC;
    case 470u: goto L_08959FD0;
    case 471u: goto L_08959FD8;
    case 472u: goto L_08959FF0;
    case 473u: goto L_08959FFC;
    case 474u: goto L_0895A00C;
    case 475u: goto L_0895A03C;
    case 476u: goto L_0895A04C;
    case 477u: goto L_0895A054;
    case 478u: goto L_0895A060;
    case 479u: goto L_0895A068;
    case 480u: goto L_0895A078;
    case 481u: goto L_0895A080;
    case 482u: goto L_0895A094;
    case 483u: goto L_0895A0A4;
    case 484u: goto L_0895A0B4;
    case 485u: goto L_0895A0CC;
    case 486u: goto L_0895A0D0;
    case 487u: goto L_0895A0D8;
    case 488u: goto L_0895A0F0;
    case 489u: goto L_0895A0FC;
    case 490u: goto L_0895A10C;
    case 491u: goto L_0895A13C;
    case 492u: goto L_0895A148;
    case 493u: goto L_0895A150;
    case 494u: goto L_0895A158;
    case 495u: goto L_0895A164;
    case 496u: goto L_0895A16C;
    case 497u: goto L_0895A174;
    case 498u: goto L_0895A184;
    case 499u: goto L_0895A1B4;
    case 500u: goto L_0895A1C0;
    case 501u: goto L_0895A1C8;
    case 502u: goto L_0895A1D0;
    case 503u: goto L_0895A1DC;
    case 504u: goto L_0895A1E4;
    case 505u: goto L_0895A1EC;
    case 506u: goto L_0895A1FC;
    case 507u: goto L_0895A22C;
    case 508u: goto L_0895A238;
    case 509u: goto L_0895A240;
    case 510u: goto L_0895A248;
    case 511u: goto L_0895A254;
    case 512u: goto L_0895A25C;
    case 513u: goto L_0895A264;
    case 514u: goto L_0895A274;
    case 515u: goto L_0895A28C;
    case 516u: goto L_0895A2A0;
    case 517u: goto L_0895A2AC;
    case 518u: goto L_0895A2C4;
    case 519u: goto L_0895A2DC;
    case 520u: goto L_0895A310;
    case 521u: goto L_0895A328;
    case 522u: goto L_0895A34C;
    case 523u: goto L_0895A35C;
    case 524u: goto L_0895A36C;
    case 525u: goto L_0895A388;
    case 526u: goto L_0895A394;
    case 527u: goto L_0895A3AC;
    case 528u: goto L_0895A3B0;
    case 529u: goto L_0895A3B8;
    case 530u: goto L_0895A3C4;
    case 531u: goto L_0895A3CC;
    case 532u: goto L_0895A404;
    case 533u: goto L_0895A414;
    case 534u: goto L_0895A42C;
    case 535u: goto L_0895A430;
    case 536u: goto L_0895A438;
    case 537u: goto L_0895A450;
    case 538u: goto L_0895A45C;
    case 539u: goto L_0895A468;
    case 540u: goto L_0895A480;
    case 541u: goto L_0895A490;
    case 542u: goto L_0895A4A8;
    case 543u: goto L_0895A4AC;
    case 544u: goto L_0895A4B4;
    case 545u: goto L_0895A4CC;
    case 546u: goto L_0895A4D8;
    case 547u: goto L_0895A4F4;
    case 548u: goto L_0895A524;
    case 549u: goto L_0895A52C;
    case 550u: goto L_0895A53C;
    case 551u: goto L_0895A54C;
    case 552u: goto L_0895A558;
    case 553u: goto L_0895A564;
    case 554u: goto L_0895A568;
    case 555u: goto L_0895A57C;
    case 556u: goto L_0895A58C;
    case 557u: goto L_0895A594;
    case 558u: goto L_0895A5A4;
    case 559u: goto L_0895A5C4;
    case 560u: goto L_0895A5E4;
    case 561u: goto L_0895A5F0;
    case 562u: goto L_0895A604;
    case 563u: goto L_0895A60C;
    case 564u: goto L_0895A614;
    case 565u: goto L_0895A62C;
    case 566u: goto L_0895A648;
    case 567u: goto L_0895A650;
    case 568u: goto L_0895A66C;
    case 569u: goto L_0895A6A4;
    case 570u: goto L_0895A6AC;
    case 571u: goto L_0895A6B4;
    case 572u: goto L_0895A6C0;
    case 573u: goto L_0895A6CC;
    case 574u: goto L_0895A6D4;
    case 575u: goto L_0895A6E4;
    case 576u: goto L_0895A6F8;
    case 577u: goto L_0895A708;
    case 578u: goto L_0895A720;
    case 579u: goto L_0895A730;
    case 580u: goto L_0895A738;
    case 581u: goto L_0895A74C;
    case 582u: goto L_0895A764;
    case 583u: goto L_0895A76C;
    case 584u: goto L_0895A780;
    case 585u: goto L_0895A794;
    case 586u: goto L_0895A7B8;
    case 587u: goto L_0895A7C4;
    case 588u: goto L_0895A7D0;
    case 589u: goto L_0895A7D8;
    case 590u: goto L_0895A800;
    case 591u: goto L_0895A810;
    case 592u: goto L_0895A818;
    case 593u: goto L_0895A828;
    case 594u: goto L_0895A83C;
    case 595u: goto L_0895A84C;
    case 596u: goto L_0895A85C;
    case 597u: goto L_0895A864;
    case 598u: goto L_0895A874;
    case 599u: goto L_0895A88C;
    case 600u: goto L_0895A894;
    case 601u: goto L_0895A8A4;
    case 602u: goto L_0895A8BC;
    case 603u: goto L_0895A8D4;
    case 604u: goto L_0895A8DC;
    case 605u: goto L_0895A8EC;
    case 606u: goto L_0895A904;
    case 607u: goto L_0895A914;
    case 608u: goto L_0895A91C;
    case 609u: goto L_0895A92C;
    case 610u: goto L_0895A938;
    case 611u: goto L_0895A944;
    case 612u: goto L_0895A958;
    case 613u: goto L_0895A964;
    case 614u: goto L_0895A970;
    case 615u: goto L_0895A97C;
    case 616u: goto L_0895A984;
    case 617u: goto L_0895A98C;
    case 618u: goto L_0895A9A8;
    case 619u: goto L_0895A9B8;
    case 620u: goto L_0895A9D8;
    case 621u: goto L_0895A9F0;
    case 622u: goto L_0895AA08;
    case 623u: goto L_0895AA18;
    case 624u: goto L_0895AA20;
    case 625u: goto L_0895AA30;
    case 626u: goto L_0895AA38;
    case 627u: goto L_0895AA40;
    case 628u: goto L_0895AA48;
    case 629u: goto L_0895AA50;
    case 630u: goto L_0895AA60;
    case 631u: goto L_0895AA68;
    case 632u: goto L_0895AA70;
    case 633u: goto L_0895AA80;
    case 634u: goto L_0895AAB4;
    case 635u: goto L_0895AAC0;
    case 636u: goto L_0895AACC;
    case 637u: goto L_0895AAE0;
    case 638u: goto L_0895AAF0;
    case 639u: goto L_0895AB20;
    case 640u: goto L_0895AB2C;
    case 641u: goto L_0895AB40;
    case 642u: goto L_0895AB48;
    case 643u: goto L_0895AB5C;
    case 644u: goto L_0895AB78;
    case 645u: goto L_0895AB98;
    case 646u: goto L_0895ABA8;
    case 647u: goto L_0895ABB8;
    case 648u: goto L_0895ABC4;
    case 649u: goto L_0895ABD8;
    case 650u: goto L_0895ABE0;
    case 651u: goto L_0895ABF0;
    case 652u: goto L_0895ABFC;
    case 653u: goto L_0895AC10;
    case 654u: goto L_0895AC28;
    case 655u: goto L_0895AC34;
    case 656u: goto L_0895AC44;
    case 657u: goto L_0895AC50;
    case 658u: goto L_0895AC5C;
    case 659u: goto L_0895AC6C;
    case 660u: goto L_0895AC78;
    case 661u: goto L_0895AC98;
    case 662u: goto L_0895ACA0;
    case 663u: goto L_0895ACA8;
    case 664u: goto L_0895ACC4;
    case 665u: goto L_0895ACCC;
    case 666u: goto L_0895ACD8;
    case 667u: goto L_0895ACE4;
    case 668u: goto L_0895ACF8;
    case 669u: goto L_0895ACFC;
    case 670u: goto L_0895AD00;
    case 671u: goto L_0895AD18;
    case 672u: goto L_0895AD44;
    case 673u: goto L_0895AD54;
    case 674u: goto L_0895AD70;
    case 675u: goto L_0895AD84;
    case 676u: goto L_0895AD94;
    case 677u: goto L_0895ADB8;
    case 678u: goto L_0895ADE0;
    case 679u: goto L_0895ADE8;
    case 680u: goto L_0895ADF4;
    case 681u: goto L_0895AE08;
    case 682u: goto L_0895AE0C;
    case 683u: goto L_0895AE1C;
    case 684u: goto L_0895AE28;
    case 685u: goto L_0895AE44;
    case 686u: goto L_0895AE50;
    case 687u: goto L_0895AE60;
    case 688u: goto L_0895AE68;
    case 689u: goto L_0895AE84;
    case 690u: goto L_0895AEB4;
    case 691u: goto L_0895AEC4;
    case 692u: goto L_0895AED0;
    case 693u: goto L_0895AED8;
    case 694u: goto L_0895AEE4;
    case 695u: goto L_0895AEFC;
    case 696u: goto L_0895AF14;
    case 697u: goto L_0895AF24;
    case 698u: goto L_0895AF2C;
    case 699u: goto L_0895AF38;
    case 700u: goto L_0895AF44;
    case 701u: goto L_0895AF4C;
    case 702u: goto L_0895AF50;
    case 703u: goto L_0895AF6C;
    case 704u: goto L_0895AFAC;
    case 705u: goto L_0895AFC0;
    case 706u: goto L_0895AFD0;
    case 707u: goto L_0895AFE0;
    case 708u: goto L_0895AFE8;
    case 709u: goto L_0895AFF4;
    case 710u: goto L_0895B004;
    case 711u: goto L_0895B010;
    case 712u: goto L_0895B020;
    case 713u: goto L_0895B034;
    case 714u: goto L_0895B038;
    case 715u: goto L_0895B03C;
    case 716u: goto L_0895B04C;
    case 717u: goto L_0895B058;
    case 718u: goto L_0895B060;
    case 719u: goto L_0895B06C;
    case 720u: goto L_0895B07C;
    case 721u: goto L_0895B088;
    case 722u: goto L_0895B090;
    case 723u: goto L_0895B09C;
    case 724u: goto L_0895B0A4;
    case 725u: goto L_0895B0B8;
    case 726u: goto L_0895B0D0;
    case 727u: goto L_0895B0EC;
    case 728u: goto L_0895B0F8;
    case 729u: goto L_0895B100;
    case 730u: goto L_0895B108;
    case 731u: goto L_0895B114;
    case 732u: goto L_0895B120;
    case 733u: goto L_0895B130;
    case 734u: goto L_0895B13C;
    case 735u: goto L_0895B144;
    case 736u: goto L_0895B14C;
    case 737u: goto L_0895B15C;
    case 738u: goto L_0895B174;
    case 739u: goto L_0895B18C;
    case 740u: goto L_0895B190;
    case 741u: goto L_0895B198;
    case 742u: goto L_0895B1B0;
    case 743u: goto L_0895B1BC;
    case 744u: goto L_0895B1C8;
    case 745u: goto L_0895B1D0;
    case 746u: goto L_0895B1E4;
    case 747u: goto L_0895B1F0;
    case 748u: goto L_0895B21C;
    case 749u: goto L_0895B22C;
    case 750u: goto L_0895B23C;
    case 751u: goto L_0895B264;
    case 752u: goto L_0895B26C;
    case 753u: goto L_0895B27C;
    case 754u: goto L_0895B288;
    case 755u: goto L_0895B290;
    case 756u: goto L_0895B298;
    case 757u: goto L_0895B2A8;
    case 758u: goto L_0895B2B0;
    case 759u: goto L_0895B2BC;
    case 760u: goto L_0895B2C0;
    case 761u: goto L_0895B2CC;
    case 762u: goto L_0895B2D4;
    case 763u: goto L_0895B2DC;
    case 764u: goto L_0895B2EC;
    case 765u: goto L_0895B2F8;
    case 766u: goto L_0895B318;
    case 767u: goto L_0895B358;
    case 768u: goto L_0895B37C;
    case 769u: goto L_0895B384;
    case 770u: goto L_0895B390;
    case 771u: goto L_0895B398;
    case 772u: goto L_0895B3A4;
    case 773u: goto L_0895B3AC;
    case 774u: goto L_0895B3B8;
    case 775u: goto L_0895B3C4;
    case 776u: goto L_0895B3D0;
    case 777u: goto L_0895B3DC;
    case 778u: goto L_0895B3E8;
    case 779u: goto L_0895B404;
    case 780u: goto L_0895B40C;
    case 781u: goto L_0895B418;
    case 782u: goto L_0895B420;
    case 783u: goto L_0895B42C;
    case 784u: goto L_0895B430;
    case 785u: goto L_0895B458;
    case 786u: goto L_0895B478;
    case 787u: goto L_0895B490;
    case 788u: goto L_0895B4CC;
    case 789u: goto L_0895B4EC;
    case 790u: goto L_0895B50C;
    case 791u: goto L_0895B518;
    case 792u: goto L_0895B524;
    case 793u: goto L_0895B530;
    case 794u: goto L_0895B54C;
    case 795u: goto L_0895B560;
    case 796u: goto L_0895B570;
    case 797u: goto L_0895B578;
    case 798u: goto L_0895B584;
    case 799u: goto L_0895B590;
    case 800u: goto L_0895B5A8;
    case 801u: goto L_0895B5B8;
    case 802u: goto L_0895B5C8;
    case 803u: goto L_0895B5EC;
    case 804u: goto L_0895B5F4;
    case 805u: goto L_0895B608;
    case 806u: goto L_0895B644;
    case 807u: goto L_0895B658;
    case 808u: goto L_0895B670;
    case 809u: goto L_0895B67C;
    case 810u: goto L_0895B68C;
    case 811u: goto L_0895B6AC;
    case 812u: goto L_0895B6C4;
    case 813u: goto L_0895B6F0;
    case 814u: goto L_0895B700;
    case 815u: goto L_0895B710;
    case 816u: goto L_0895B734;
    case 817u: goto L_0895B75C;
    case 818u: goto L_0895B770;
    case 819u: goto L_0895B790;
    case 820u: goto L_0895B7A0;
    case 821u: goto L_0895B7B0;
    case 822u: goto L_0895B7C0;
    case 823u: goto L_0895B7D8;
    case 824u: goto L_0895B800;
    case 825u: goto L_0895B814;
    case 826u: goto L_0895B820;
    case 827u: goto L_0895B834;
    case 828u: goto L_0895B844;
    case 829u: goto L_0895B858;
    case 830u: goto L_0895B85C;
    case 831u: goto L_0895B86C;
    case 832u: goto L_0895B874;
    case 833u: goto L_0895B87C;
    case 834u: goto L_0895B88C;
    case 835u: goto L_0895B89C;
    case 836u: goto L_0895B8B4;
    case 837u: goto L_0895B900;
    case 838u: goto L_0895B914;
    case 839u: goto L_0895B938;
    case 840u: goto L_0895B940;
    case 841u: goto L_0895B964;
    case 842u: goto L_0895B96C;
    case 843u: goto L_0895B970;
    case 844u: goto L_0895B974;
    case 845u: goto L_0895B97C;
    case 846u: goto L_0895B984;
    case 847u: goto L_0895B9B8;
    case 848u: goto L_0895B9F8;
    case 849u: goto L_0895BA0C;
    case 850u: goto L_0895BA14;
    case 851u: goto L_0895BA28;
    case 852u: goto L_0895BA5C;
    case 853u: goto L_0895BA70;
    case 854u: goto L_0895BA78;
    case 855u: goto L_0895BA9C;
    case 856u: goto L_0895BAC8;
    case 857u: goto L_0895BAD0;
    case 858u: goto L_0895BAD8;
    case 859u: goto L_0895BADC;
    case 860u: goto L_0895BAE0;
    case 861u: goto L_0895BB00;
    case 862u: goto L_0895BB24;
    case 863u: goto L_0895BB34;
    case 864u: goto L_0895BB44;
    case 865u: goto L_0895BB54;
    case 866u: goto L_0895BB98;
    case 867u: goto L_0895BBB0;
    case 868u: goto L_0895BBD0;
    case 869u: goto L_0895BBD8;
    case 870u: goto L_0895BBE4;
    case 871u: goto L_0895BBF0;
    case 872u: goto L_0895BC0C;
    case 873u: goto L_0895BC54;
    case 874u: goto L_0895BC60;
    case 875u: goto L_0895BC6C;
    case 876u: goto L_0895BC7C;
    case 877u: goto L_0895BC80;
    case 878u: goto L_0895BC88;
    case 879u: goto L_0895BC94;
    case 880u: goto L_0895BCA4;
    case 881u: goto L_0895BCA8;
    case 882u: goto L_0895BCC0;
    case 883u: goto L_0895BCC8;
    case 884u: goto L_0895BCE0;
    case 885u: goto L_0895BCE4;
    case 886u: goto L_0895BCF0;
    case 887u: goto L_0895BD2C;
    case 888u: goto L_0895BD50;
    case 889u: goto L_0895BD5C;
    case 890u: goto L_0895BD70;
    case 891u: goto L_0895BD7C;
    case 892u: goto L_0895BD8C;
    case 893u: goto L_0895BDA4;
    case 894u: goto L_0895BDD4;
    case 895u: goto L_0895BE1C;
    case 896u: goto L_0895BE30;
    case 897u: goto L_0895BE40;
    case 898u: goto L_0895BE58;
    case 899u: goto L_0895BE74;
    case 900u: goto L_0895BE78;
    case 901u: goto L_0895BE88;
    case 902u: goto L_0895BE9C;
    case 903u: goto L_0895BEA4;
    case 904u: goto L_0895BEB4;
    case 905u: goto L_0895BEC0;
    case 906u: goto L_0895BECC;
    case 907u: goto L_0895BED8;
    case 908u: goto L_0895BEE4;
    case 909u: goto L_0895BEF8;
    case 910u: goto L_0895BF04;
    case 911u: goto L_0895BF10;
    case 912u: goto L_0895BF20;
    case 913u: goto L_0895BF30;
    case 914u: goto L_0895BF3C;
    case 915u: goto L_0895BF44;
    case 916u: goto L_0895BF4C;
    case 917u: goto L_0895BF5C;
    case 918u: goto L_0895BF64;
    case 919u: goto L_0895BF70;
    case 920u: goto L_0895BF74;
    case 921u: goto L_0895BF80;
    case 922u: goto L_0895BF90;
    case 923u: goto L_0895BFB0;
    case 924u: goto L_0895BFF0;
    case 925u: goto L_0895BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08958004:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(9532), 0u);
    goto L_08958008;
L_08958008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895803Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 618u, 0x08916360u>(ctx, &aot_mem) && ctx.pc == 0x0895803Cu) goto L_0895803C;
    return;
L_0895803C:
    ctx.set_gpr(3, 2198u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32648));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9536), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9528), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958064;
      }
      goto L_08958058;
    }
L_08958058:
    ctx.set_gpr(31, 0x08958060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08958060u) goto L_08958060;
    return;
L_08958060:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9532), 0u);
    goto L_08958064;
L_08958064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958078:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31392)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31396)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089580D0;
      }
      goto L_08958098;
    }
L_08958098:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089580D0;
      }
      goto L_089580A0;
    }
L_089580A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089580B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089580B8u) goto L_089580B8;
    return;
L_089580B8:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31392), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31396), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089581D8;
      }
      goto L_089580D0;
    }
L_089580D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31400)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31404)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958120;
      }
      goto L_089580E8;
    }
L_089580E8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958120;
      }
      goto L_089580F0;
    }
L_089580F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08958108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08958108u) goto L_08958108;
    return;
L_08958108:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31400), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31404), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089581D8;
      }
      goto L_08958120;
    }
L_08958120:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08958138u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08958138u) goto L_08958138;
    return;
L_08958138:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31400)));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31404)));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31392)));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31396)));
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[10] - ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[9] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(8, ctx.gpr[6] << 1u);
    ctx.set_gpr(4, ctx.gpr[6] >> 31u);
    ctx.set_gpr(7, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[6]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089581B8;
      }
      goto L_08958194;
    }
L_08958194:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089581AC;
      }
      goto L_089581A0;
    }
L_089581A0:
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089581B8;
      }
      goto L_089581AC;
    }
L_089581AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089581DC;
      }
      goto L_089581B8;
    }
L_089581B8:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31392), ctx.gpr[10]);
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31396), ctx.gpr[9]);
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31400), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31404), ctx.gpr[3]);
    goto L_089581D8;
L_089581D8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089581DC;
L_089581DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089581EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089581FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 636u, 0x08916470u>(ctx, &aot_mem) && ctx.pc == 0x089581FCu) goto L_089581FC;
    return;
L_089581FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895820C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08958234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x08958234u) goto L_08958234;
    return;
L_08958234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08958258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08958258u) goto L_08958258;
    return;
L_08958258:
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
L_08958274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1396));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089582B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089582B4u) goto L_089582B4;
    return;
L_089582B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089582D4;
      }
      goto L_089582C0;
    }
L_089582C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089582CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089582CCu) goto L_089582CC;
    return;
L_089582CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089582D8;
      }
      goto L_089582D4;
    }
L_089582D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089582D8;
L_089582D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089582EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1396));
    ctx.set_gpr(31, 0x08958314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08958314u) goto L_08958314;
    return;
L_08958314:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895832C;
      }
      goto L_08958320;
    }
L_08958320:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895837C;
      }
      goto L_0895832C;
    }
L_0895832C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958364;
      }
      goto L_0895833C;
    }
L_0895833C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08958348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08958348u) goto L_08958348;
    return;
L_08958348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895835C;
      }
      goto L_08958350;
    }
L_08958350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895835Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895835Cu) goto L_0895835C;
    return;
L_0895835C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08958364;
L_08958364:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08958378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08958378u) goto L_08958378;
    return;
L_08958378:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895837C;
L_0895837C:
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
L_08958394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089583ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x089583ACu) goto L_089583AC;
    return;
L_089583AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16644));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089583CC;
      }
      goto L_089583C0;
    }
L_089583C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089583CCu);
    // nop
    goto L_089583E4;
L_089583CC:
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
L_089583E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089583FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x089583FCu) goto L_089583FC;
    return;
L_089583FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16644));
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
L_08958420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08958438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x08958438u) goto L_08958438;
    return;
L_08958438:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16644));
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
L_0895845C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895846Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0895846Cu) goto L_0895846C;
    return;
L_0895846C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895847C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089584A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089584A8u) goto L_089584A8;
    return;
L_089584A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089584B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089584C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089584F0;
      }
      goto L_089584E4;
    }
L_089584E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089584F0;
L_089584F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958520;
      }
      goto L_089584FC;
    }
L_089584FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958520;
      }
      goto L_08958518;
    }
L_08958518:
    ctx.set_gpr(31, 0x08958520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08958520u) goto L_08958520;
    return;
L_08958520:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_0895853C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958584;
      }
      goto L_08958560;
    }
L_08958560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958584;
      }
      goto L_0895857C;
    }
L_0895857C:
    ctx.set_gpr(31, 0x08958584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08958584u) goto L_08958584;
    return;
L_08958584:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_089585A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089585C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089585C0u) goto L_089585C0;
    return;
L_089585C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089585CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 352u, 0x088E9A18u>(ctx, &aot_mem) && ctx.pc == 0x089585CCu) goto L_089585CC;
    return;
L_089585CC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089585DCu);
    // nop
    goto L_0895853C;
L_089585DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958600;
      }
      goto L_089585F0;
    }
L_089585F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08958600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08958600u) goto L_08958600;
    return;
L_08958600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08958610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08958610u) goto L_08958610;
    return;
L_08958610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08958620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 278u, 0x0894936Cu>(ctx, &aot_mem) && ctx.pc == 0x08958620u) goto L_08958620;
    return;
L_08958620:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895862Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0895862Cu) goto L_0895862C;
    return;
L_0895862C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x08958638u) goto L_08958638;
    return;
L_08958638:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958648u);
    // nop
    goto L_0895853C;
L_08958648:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895866C;
      }
      goto L_0895865C;
    }
L_0895865C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895866Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895866Cu) goto L_0895866C;
    return;
L_0895866C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958690;
      }
      goto L_08958680;
    }
L_08958680:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089586A0;
      }
      goto L_08958690;
    }
L_08958690:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089586A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089586A0u) goto L_089586A0;
    return;
L_089586A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089586D0;
      }
      goto L_089586B8;
    }
L_089586B8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1392)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089586D0;
L_089586D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089586B8;
      }
      goto L_089586DC;
    }
L_089586DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089586FC;
      }
      goto L_089586EC;
    }
L_089586EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089586FC;
      }
      goto L_089586F4;
    }
L_089586F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_089586FC;
L_089586FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08958708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08958708u) goto L_08958708;
    return;
L_08958708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x08958714u) goto L_08958714;
    return;
L_08958714:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958724u);
    // nop
    goto L_0895853C;
L_08958724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958748;
      }
      goto L_08958738;
    }
L_08958738:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08958748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08958748u) goto L_08958748;
    return;
L_08958748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895876C;
      }
      goto L_0895875C;
    }
L_0895875C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895877C;
      }
      goto L_0895876C;
    }
L_0895876C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895877Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895877Cu) goto L_0895877C;
    return;
L_0895877C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089587AC;
      }
      goto L_08958794;
    }
L_08958794:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1388)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089587AC;
L_089587AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958794;
      }
      goto L_089587B8;
    }
L_089587B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089587C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089587C4u) goto L_089587C4;
    return;
L_089587C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089587D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 568u, 0x088F6FC8u>(ctx, &aot_mem) && ctx.pc == 0x089587D0u) goto L_089587D0;
    return;
L_089587D0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089587E0u);
    // nop
    goto L_0895853C;
L_089587E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089587ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089587ECu) goto L_089587EC;
    return;
L_089587EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089587F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 568u, 0x088F6FC8u>(ctx, &aot_mem) && ctx.pc == 0x089587F8u) goto L_089587F8;
    return;
L_089587F8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958808u);
    // nop
    goto L_0895853C;
L_08958808:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08958814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08958814u) goto L_08958814;
    return;
L_08958814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 419u, 0x088F62F0u>(ctx, &aot_mem) && ctx.pc == 0x08958820u) goto L_08958820;
    return;
L_08958820:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958830u);
    // nop
    goto L_0895853C;
L_08958830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958854;
      }
      goto L_08958844;
    }
L_08958844:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08958854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08958854u) goto L_08958854;
    return;
L_08958854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08958864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08958864u) goto L_08958864;
    return;
L_08958864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08958874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 278u, 0x0894936Cu>(ctx, &aot_mem) && ctx.pc == 0x08958874u) goto L_08958874;
    return;
L_08958874:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588F0;
      }
      goto L_0895887C;
    }
L_0895887C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08958888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08958888u) goto L_08958888;
    return;
L_08958888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x08958894u) goto L_08958894;
    return;
L_08958894:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588B0;
      }
      goto L_089588A4;
    }
L_089588A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089588B0;
L_089588B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089588C8u);
    // nop
    goto L_08958B08;
L_089588C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588DC;
      }
      goto L_089588D4;
    }
L_089588D4:
    ctx.set_gpr(31, 0x089588DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089588DCu) goto L_089588DC;
    return;
L_089588DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588F0;
      }
      goto L_089588E8;
    }
L_089588E8:
    ctx.set_gpr(31, 0x089588F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089588F0u) goto L_089588F0;
    return;
L_089588F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_08958910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958980;
      }
      goto L_08958930;
    }
L_08958930:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958964;
      }
      goto L_08958940;
    }
L_08958940:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958964;
      }
      goto L_08958948;
    }
L_08958948:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958964;
      }
      goto L_08958954;
    }
L_08958954:
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08958964;
L_08958964:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08958980;
L_08958980:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958930;
      }
      goto L_0895898C;
    }
L_0895898C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589B0;
      }
      goto L_089589A4;
    }
L_089589A4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089589B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089589B0u) goto L_089589B0;
    return;
L_089589B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589D4;
      }
      goto L_089589C8;
    }
L_089589C8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089589D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089589D4u) goto L_089589D4;
    return;
L_089589D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958A0C;
      }
      goto L_089589E4;
    }
L_089589E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958A00;
      }
      goto L_089589F4;
    }
L_089589F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958A0C;
      }
      goto L_08958A00;
    }
L_08958A00:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08958A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08958A0Cu) goto L_08958A0C;
    return;
L_08958A0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958A44;
      }
      goto L_08958A1C;
    }
L_08958A1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958A38;
      }
      goto L_08958A2C;
    }
L_08958A2C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958A44;
      }
      goto L_08958A38;
    }
L_08958A38:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08958A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08958A44u) goto L_08958A44;
    return;
L_08958A44:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AE4;
      }
      goto L_08958A50;
    }
L_08958A50:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958A98;
      }
      goto L_08958A60;
    }
L_08958A60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958A98;
      }
      goto L_08958A68;
    }
L_08958A68:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958A98;
      }
      goto L_08958A74;
    }
L_08958A74:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1384)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1380)));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08958A98;
L_08958A98:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AE0;
      }
      goto L_08958AA8;
    }
L_08958AA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958AE0;
      }
      goto L_08958AB0;
    }
L_08958AB0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AE0;
      }
      goto L_08958ABC;
    }
L_08958ABC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1376)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1372)));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08958AE0;
L_08958AE0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08958AE4;
L_08958AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958A50;
      }
      goto L_08958AF4;
    }
L_08958AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958B50;
      }
      goto L_08958B44;
    }
L_08958B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08958B50u) goto L_08958B50;
    return;
L_08958B50:
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958B70;
      }
      goto L_08958B68;
    }
L_08958B68:
    ctx.set_gpr(31, 0x08958B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08958B70u) goto L_08958B70;
    return;
L_08958B70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08958B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08958B84u) goto L_08958B84;
    return;
L_08958B84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958BB4;
      }
      goto L_08958B94;
    }
L_08958B94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958BB4;
      }
      goto L_08958B9C;
    }
L_08958B9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958BB4;
      }
      goto L_08958BA8;
    }
L_08958BA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08958BB4;
L_08958BB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08958BC0u);
    // nop
    goto L_08958910;
L_08958BC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08958BD0;
      }
      goto L_08958BCC;
    }
L_08958BCC:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08958BD0;
L_08958BD0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08958BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08958BDCu) goto L_08958BDC;
    return;
L_08958BDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 388u, 0x088F6034u>(ctx, &aot_mem) && ctx.pc == 0x08958BE8u) goto L_08958BE8;
    return;
L_08958BE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958C10;
      }
      goto L_08958C00;
    }
L_08958C00:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08958C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08958C10u) goto L_08958C10;
    return;
L_08958C10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08958C48;
      }
      goto L_08958C1C;
    }
L_08958C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958C38;
      }
      goto L_08958C2C;
    }
L_08958C2C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C48;
      }
      goto L_08958C38;
    }
L_08958C38:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08958C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08958C48u) goto L_08958C48;
    return;
L_08958C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C70;
      }
      goto L_08958C60;
    }
L_08958C60:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32628)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08958C70;
L_08958C70:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958C60;
      }
      goto L_08958C7C;
    }
L_08958C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C98;
      }
      goto L_08958C90;
    }
L_08958C90:
    ctx.set_gpr(31, 0x08958C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08958C98u) goto L_08958C98;
    return;
L_08958C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CB4;
      }
      goto L_08958CAC;
    }
L_08958CAC:
    ctx.set_gpr(31, 0x08958CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08958CB4u) goto L_08958CB4;
    return;
L_08958CB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08958CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08958CC8u) goto L_08958CC8;
    return;
L_08958CC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CDC;
      }
      goto L_08958CD4;
    }
L_08958CD4:
    ctx.set_gpr(31, 0x08958CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08958CDCu) goto L_08958CDC;
    return;
L_08958CDC:
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
L_08958D00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958D2C;
      }
      goto L_08958D20;
    }
L_08958D20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08958D2C;
L_08958D2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958D34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31408)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31412)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31408), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31412), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08958D78u);
    // nop
    ctx.pc = 0x08B0DE4Cu;
    return;
L_08958D78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958D94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08958DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 300u, 0x088DD89Cu>(ctx, &aot_mem) && ctx.pc == 0x08958DBCu) goto L_08958DBC;
    return;
L_08958DBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08958DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08958DE0u) goto L_08958DE0;
    return;
L_08958DE0:
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
L_08958DFC:
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
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958E6C;
      }
      goto L_08958E44;
    }
L_08958E44:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08958E60u);
    // nop
    goto L_08959544;
L_08958E60:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08958E6C;
L_08958E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958E44;
      }
      goto L_08958E7C;
    }
L_08958E7C:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[16]);
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
L_08958EAC:
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
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958F1C;
      }
      goto L_08958EF4;
    }
L_08958EF4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08958F10u);
    // nop
    goto L_089596E4;
L_08958F10:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08958F1C;
L_08958F1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958EF4;
      }
      goto L_08958F2C;
    }
L_08958F2C:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
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
L_08958F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959068;
      }
      goto L_08958F90;
    }
L_08958F90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959058;
      }
      goto L_08958FA4;
    }
L_08958FA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958FDC;
      }
      goto L_08958FB4;
    }
L_08958FB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08958FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08958FC0u) goto L_08958FC0;
    return;
L_08958FC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958FD4;
      }
      goto L_08958FC8;
    }
L_08958FC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08958FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08958FD4u) goto L_08958FD4;
    return;
L_08958FD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08958FDC;
L_08958FDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08958FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08958FF0u) goto L_08958FF0;
    return;
L_08958FF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959020;
      }
      goto L_08959004;
    }
L_08959004:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959020;
      }
      goto L_0895901C;
    }
L_0895901C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08959020;
L_08959020:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895904C;
      }
      goto L_08959028;
    }
L_08959028:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895904C;
      }
      goto L_08959040;
    }
L_08959040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895904Cu);
    // nop
    goto L_0895BD2C;
L_0895904C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08959058;
L_08959058:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958FA4;
      }
      goto L_08959068;
    }
L_08959068:
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
L_08959088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895909C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089590B8u);
    // nop
    goto L_08959444;
L_089590B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089590C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x089590C4u) goto L_089590C4;
    return;
L_089590C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089590D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089590F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x089590F0u) goto L_089590F0;
    return;
L_089590F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08959108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08959108u) goto L_08959108;
    return;
L_08959108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895911C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959170;
      }
      goto L_08959148;
    }
L_08959148:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959154u) goto L_08959154;
    return;
L_08959154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959168;
      }
      goto L_0895915C;
    }
L_0895915C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959168u) goto L_08959168;
    return;
L_08959168:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959170;
L_08959170:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08959184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08959184u) goto L_08959184;
    return;
L_08959184:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089591B4;
      }
      goto L_08959198;
    }
L_08959198:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089591B4;
      }
      goto L_089591B0;
    }
L_089591B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089591B4;
L_089591B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089591E0;
      }
      goto L_089591BC;
    }
L_089591BC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089591E0;
      }
      goto L_089591D4;
    }
L_089591D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089591E0u);
    // nop
    goto L_0895BD2C;
L_089591E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089591F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089591F0u) goto L_089591F0;
    return;
L_089591F0:
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
L_0895920C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959240;
      }
      goto L_08959234;
    }
L_08959234:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895928C;
      }
      goto L_08959240;
    }
L_08959240:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959278;
      }
      goto L_08959250;
    }
L_08959250:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895925Cu) goto L_0895925C;
    return;
L_0895925C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959270;
      }
      goto L_08959264;
    }
L_08959264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959270u) goto L_08959270;
    return;
L_08959270:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959278;
L_08959278:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895928Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895928Cu) goto L_0895928C;
    return;
L_0895928C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089592A4u);
    // nop
    goto L_08959318;
L_089592A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089592D0;
      }
      goto L_089592B4;
    }
L_089592B4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089592D0;
      }
      goto L_089592CC;
    }
L_089592CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089592D0;
L_089592D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089592FC;
      }
      goto L_089592D8;
    }
L_089592D8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089592FC;
      }
      goto L_089592F0;
    }
L_089592F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089592FCu);
    // nop
    goto L_0895BD2C;
L_089592FC:
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
L_08959318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959360;
      }
      goto L_08959344;
    }
L_08959344:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959360;
      }
      goto L_0895935C;
    }
L_0895935C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08959360;
L_08959360:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959374;
      }
      goto L_08959368;
    }
L_08959368:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08959374;
L_08959374:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089593A0;
      }
      goto L_08959384;
    }
L_08959384:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089593A0;
      }
      goto L_0895939C;
    }
L_0895939C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089593A0;
L_089593A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089593CC;
      }
      goto L_089593A8;
    }
L_089593A8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089593CC;
      }
      goto L_089593C0;
    }
L_089593C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089593CCu);
    // nop
    goto L_0895BD2C;
L_089593CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
L_089593EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895941C;
      }
      goto L_08959400;
    }
L_08959400:
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895941C;
      }
      goto L_08959418;
    }
L_08959418:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895941C;
L_0895941C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959430;
      }
      goto L_08959424;
    }
L_08959424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08959430;
L_08959430:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959494;
      }
      goto L_0895946C;
    }
L_0895946C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959478u) goto L_08959478;
    return;
L_08959478:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895948C;
      }
      goto L_08959480;
    }
L_08959480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895948Cu) goto L_0895948C;
    return;
L_0895948C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959494;
L_08959494:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089594A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089594A8u) goto L_089594A8;
    return;
L_089594A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089594D8;
      }
      goto L_089594BC;
    }
L_089594BC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089594D8;
      }
      goto L_089594D4;
    }
L_089594D4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089594D8;
L_089594D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959504;
      }
      goto L_089594E0;
    }
L_089594E0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959504;
      }
      goto L_089594F8;
    }
L_089594F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959504u);
    // nop
    goto L_0895BD2C;
L_08959504:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08959520:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959538;
      }
      goto L_0895952C;
    }
L_0895952C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895953C;
      }
      goto L_08959538;
    }
L_08959538:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895953C;
L_0895953C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08959584;
      }
      goto L_0895956C;
    }
L_0895956C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895957Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895957Cu) goto L_0895957C;
    return;
L_0895957C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089596CC;
      }
      goto L_08959584;
    }
L_08959584:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089595B8;
      }
      goto L_08959594;
    }
L_08959594:
    ctx.set_gpr(31, 0x0895959Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x0895959Cu) goto L_0895959C;
    return;
L_0895959C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089595B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089595B8u) goto L_089595B8;
    return;
L_089595B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089595D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 147u, 0x089109C8u>(ctx, &aot_mem) && ctx.pc == 0x089595D0u) goto L_089595D0;
    return;
L_089595D0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089595FC;
      }
      goto L_089595E0;
    }
L_089595E0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089595FC;
      }
      goto L_089595F8;
    }
L_089595F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089595FC;
L_089595FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959610;
      }
      goto L_08959604;
    }
L_08959604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959610;
L_08959610:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895963C;
      }
      goto L_08959620;
    }
L_08959620:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895963C;
      }
      goto L_08959638;
    }
L_08959638:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895963C;
L_0895963C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959668;
      }
      goto L_08959644;
    }
L_08959644:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959668;
      }
      goto L_0895965C;
    }
L_0895965C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959668u);
    // nop
    goto L_0895BD2C;
L_08959668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895969C;
      }
      goto L_08959680;
    }
L_08959680:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895969C;
      }
      goto L_08959698;
    }
L_08959698:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895969C;
L_0895969C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089596C8;
      }
      goto L_089596A4;
    }
L_089596A4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089596C8;
      }
      goto L_089596BC;
    }
L_089596BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089596C8u);
    // nop
    goto L_0895BD2C;
L_089596C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_089596CC;
L_089596CC:
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
L_089596E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895972C;
      }
      goto L_08959710;
    }
L_08959710:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895972C;
      }
      goto L_08959728;
    }
L_08959728:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895972C;
L_0895972C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959740;
      }
      goto L_08959734;
    }
L_08959734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959740;
L_08959740:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959770;
      }
      goto L_08959754;
    }
L_08959754:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959770;
      }
      goto L_0895976C;
    }
L_0895976C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959770;
L_08959770:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959784;
      }
      goto L_08959778;
    }
L_08959778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959784;
L_08959784:
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08959794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 153u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08959794u) goto L_08959794;
    return;
L_08959794:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089597C4;
      }
      goto L_089597A8;
    }
L_089597A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089597C4;
      }
      goto L_089597C0;
    }
L_089597C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089597C4;
L_089597C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089597F0;
      }
      goto L_089597CC;
    }
L_089597CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089597F0;
      }
      goto L_089597E4;
    }
L_089597E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089597F0u);
    // nop
    goto L_0895BD2C;
L_089597F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895981C;
      }
      goto L_089597F8;
    }
L_089597F8:
    ctx.set_gpr(31, 0x08959800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08959800u) goto L_08959800;
    return;
L_08959800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895981Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895981Cu) goto L_0895981C;
    return;
L_0895981C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959848;
      }
      goto L_0895982C;
    }
L_0895982C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959848;
      }
      goto L_08959844;
    }
L_08959844:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959848;
L_08959848:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959874;
      }
      goto L_08959850;
    }
L_08959850:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959874;
      }
      goto L_08959868;
    }
L_08959868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959874u);
    // nop
    goto L_0895BD2C;
L_08959874:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
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
L_08959890:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089598D0;
      }
      goto L_089598B4;
    }
L_089598B4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089598D0;
      }
      goto L_089598CC;
    }
L_089598CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089598D0;
L_089598D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089598E4;
      }
      goto L_089598D8;
    }
L_089598D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_089598E4;
L_089598E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959914;
      }
      goto L_089598F8;
    }
L_089598F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959914;
      }
      goto L_08959910;
    }
L_08959910:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959914;
L_08959914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959928;
      }
      goto L_0895991C;
    }
L_0895991C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959928;
L_08959928:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08959938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 153u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08959938u) goto L_08959938;
    return;
L_08959938:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959964;
      }
      goto L_08959948;
    }
L_08959948:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959964;
      }
      goto L_08959960;
    }
L_08959960:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959964;
L_08959964:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959990;
      }
      goto L_0895996C;
    }
L_0895996C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959990;
      }
      goto L_08959984;
    }
L_08959984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959990u);
    // nop
    goto L_0895BD2C;
L_08959990:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089599BC;
      }
      goto L_089599A0;
    }
L_089599A0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089599BC;
      }
      goto L_089599B8;
    }
L_089599B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089599BC;
L_089599BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089599E8;
      }
      goto L_089599C4;
    }
L_089599C4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089599E8;
      }
      goto L_089599DC;
    }
L_089599DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089599E8u);
    // nop
    goto L_0895BD2C;
L_089599E8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089599FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A54;
      }
      goto L_08959A30;
    }
L_08959A30:
    ctx.set_gpr(31, 0x08959A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08959A38u) goto L_08959A38;
    return;
L_08959A38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08959A54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08959A54u) goto L_08959A54;
    return;
L_08959A54:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08959C84;
      }
      goto L_08959A64;
    }
L_08959A64:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A78;
      }
      goto L_08959A70;
    }
L_08959A70:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08959A78;
L_08959A78:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A8C;
      }
      goto L_08959A80;
    }
L_08959A80:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959A70;
      }
      goto L_08959A8C;
    }
L_08959A8C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B48;
      }
      goto L_08959A94;
    }
L_08959A94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959ACC;
      }
      goto L_08959AA4;
    }
L_08959AA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959AB0u) goto L_08959AB0;
    return;
L_08959AB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959AC4;
      }
      goto L_08959AB8;
    }
L_08959AB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959AC4u) goto L_08959AC4;
    return;
L_08959AC4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959ACC;
L_08959ACC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08959AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08959AE0u) goto L_08959AE0;
    return;
L_08959AE0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B10;
      }
      goto L_08959AF4;
    }
L_08959AF4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B10;
      }
      goto L_08959B0C;
    }
L_08959B0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959B10;
L_08959B10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B3C;
      }
      goto L_08959B18;
    }
L_08959B18:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959B3C;
      }
      goto L_08959B30;
    }
L_08959B30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959B3Cu);
    // nop
    goto L_0895BD2C;
L_08959B3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C74;
      }
      goto L_08959B48;
    }
L_08959B48:
    ctx.set_gpr(31, 0x08959B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08959B50u) goto L_08959B50;
    return;
L_08959B50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08959B5Cu) goto L_08959B5C;
    return;
L_08959B5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08959B78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08959B78u) goto L_08959B78;
    return;
L_08959B78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08959B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08959B90u) goto L_08959B90;
    return;
L_08959B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959BD4;
      }
      goto L_08959BAC;
    }
L_08959BAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959BB8u) goto L_08959BB8;
    return;
L_08959BB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959BCC;
      }
      goto L_08959BC0;
    }
L_08959BC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959BCCu) goto L_08959BCC;
    return;
L_08959BCC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959BD4;
L_08959BD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08959BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08959BE8u) goto L_08959BE8;
    return;
L_08959BE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C18;
      }
      goto L_08959BFC;
    }
L_08959BFC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C18;
      }
      goto L_08959C14;
    }
L_08959C14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959C18;
L_08959C18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C44;
      }
      goto L_08959C20;
    }
L_08959C20:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959C44;
      }
      goto L_08959C38;
    }
L_08959C38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959C44u);
    // nop
    goto L_0895BD2C;
L_08959C44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08959C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08959C50u) goto L_08959C50;
    return;
L_08959C50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08959C5Cu) goto L_08959C5C;
    return;
L_08959C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08959C74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08959C74u) goto L_08959C74;
    return;
L_08959C74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D30;
      }
      goto L_08959C84;
    }
L_08959C84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959CBC;
      }
      goto L_08959C94;
    }
L_08959C94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959CA0u) goto L_08959CA0;
    return;
L_08959CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959CB4;
      }
      goto L_08959CA8;
    }
L_08959CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959CB4u) goto L_08959CB4;
    return;
L_08959CB4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959CBC;
L_08959CBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08959CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08959CD0u) goto L_08959CD0;
    return;
L_08959CD0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D00;
      }
      goto L_08959CE4;
    }
L_08959CE4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D00;
      }
      goto L_08959CFC;
    }
L_08959CFC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08959D00;
L_08959D00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D2C;
      }
      goto L_08959D08;
    }
L_08959D08:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959D2C;
      }
      goto L_08959D20;
    }
L_08959D20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959D2Cu);
    // nop
    goto L_0895BD2C;
L_08959D2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08959D30;
L_08959D30:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_08959D54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959D5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959DA4;
      }
      goto L_08959D98;
    }
L_08959D98:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959DF0;
      }
      goto L_08959DA4;
    }
L_08959DA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959DDC;
      }
      goto L_08959DB4;
    }
L_08959DB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08959DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08959DC0u) goto L_08959DC0;
    return;
L_08959DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959DD4;
      }
      goto L_08959DC8;
    }
L_08959DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08959DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08959DD4u) goto L_08959DD4;
    return;
L_08959DD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08959DDC;
L_08959DDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08959DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08959DF0u) goto L_08959DF0;
    return;
L_08959DF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08959E08u);
    // nop
    goto L_08959318;
L_08959E08:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959E34;
      }
      goto L_08959E18;
    }
L_08959E18:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959E34;
      }
      goto L_08959E30;
    }
L_08959E30:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08959E34;
L_08959E34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959E60;
      }
      goto L_08959E3C;
    }
L_08959E3C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959E60;
      }
      goto L_08959E54;
    }
L_08959E54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959E60u);
    // nop
    goto L_0895BD2C;
L_08959E60:
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
L_08959E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959EBC;
      }
      goto L_08959EA0;
    }
L_08959EA0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959EBC;
      }
      goto L_08959EB8;
    }
L_08959EB8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08959EBC;
L_08959EBC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959ED0;
      }
      goto L_08959EC4;
    }
L_08959EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959ED0;
L_08959ED0:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08959EDCu);
    // nop
    goto L_08959318;
L_08959EDC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F08;
      }
      goto L_08959EEC;
    }
L_08959EEC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F08;
      }
      goto L_08959F04;
    }
L_08959F04:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08959F08;
L_08959F08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F34;
      }
      goto L_08959F10;
    }
L_08959F10:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959F34;
      }
      goto L_08959F28;
    }
L_08959F28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959F34u);
    // nop
    goto L_0895BD2C;
L_08959F34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08959F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F84;
      }
      goto L_08959F68;
    }
L_08959F68:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F84;
      }
      goto L_08959F80;
    }
L_08959F80:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08959F84;
L_08959F84:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F98;
      }
      goto L_08959F8C;
    }
L_08959F8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08959F98;
L_08959F98:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08959FA4u);
    // nop
    goto L_08959318;
L_08959FA4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959FD0;
      }
      goto L_08959FB4;
    }
L_08959FB4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959FD0;
      }
      goto L_08959FCC;
    }
L_08959FCC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08959FD0;
L_08959FD0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959FFC;
      }
      goto L_08959FD8;
    }
L_08959FD8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959FFC;
      }
      goto L_08959FF0;
    }
L_08959FF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08959FFCu);
    // nop
    goto L_0895BD2C;
L_08959FFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A00C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A04C;
      }
      goto L_0895A03C;
    }
L_0895A03C:
    ctx.set_gpr(2, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A068;
      }
      goto L_0895A04C;
    }
L_0895A04C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A060;
      }
      goto L_0895A054;
    }
L_0895A054:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A068;
      }
      goto L_0895A060;
    }
L_0895A060:
    ctx.set_gpr(31, 0x0895A068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895A068u) goto L_0895A068;
    return;
L_0895A068:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A078:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0FC;
      }
      goto L_0895A094;
    }
L_0895A094:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895A0A4u);
    // nop
    goto L_08959318;
L_0895A0A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0D0;
      }
      goto L_0895A0B4;
    }
L_0895A0B4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0D0;
      }
      goto L_0895A0CC;
    }
L_0895A0CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895A0D0;
L_0895A0D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0FC;
      }
      goto L_0895A0D8;
    }
L_0895A0D8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0FC;
      }
      goto L_0895A0F0;
    }
L_0895A0F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895A0FCu);
    // nop
    goto L_0895BD2C;
L_0895A0FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A10C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895A148;
      }
      goto L_0895A13C;
    }
L_0895A13C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A174;
      }
      goto L_0895A148;
    }
L_0895A148:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A158;
      }
      goto L_0895A150;
    }
L_0895A150:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A164;
      }
      goto L_0895A158;
    }
L_0895A158:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A174;
      }
      goto L_0895A164;
    }
L_0895A164:
    ctx.set_gpr(31, 0x0895A16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895A16Cu) goto L_0895A16C;
    return;
L_0895A16C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895A174;
L_0895A174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895A1C0;
      }
      goto L_0895A1B4;
    }
L_0895A1B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A1EC;
      }
      goto L_0895A1C0;
    }
L_0895A1C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A1D0;
      }
      goto L_0895A1C8;
    }
L_0895A1C8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A1DC;
      }
      goto L_0895A1D0;
    }
L_0895A1D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A1EC;
      }
      goto L_0895A1DC;
    }
L_0895A1DC:
    ctx.set_gpr(31, 0x0895A1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895A1E4u) goto L_0895A1E4;
    return;
L_0895A1E4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895A1EC;
L_0895A1EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A1FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895A238;
      }
      goto L_0895A22C;
    }
L_0895A22C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A264;
      }
      goto L_0895A238;
    }
L_0895A238:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A248;
      }
      goto L_0895A240;
    }
L_0895A240:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A254;
      }
      goto L_0895A248;
    }
L_0895A248:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A264;
      }
      goto L_0895A254;
    }
L_0895A254:
    ctx.set_gpr(31, 0x0895A25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895A25Cu) goto L_0895A25C;
    return;
L_0895A25C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895A264;
L_0895A264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895A28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 451u, 0x08952058u>(ctx, &aot_mem) && ctx.pc == 0x0895A28Cu) goto L_0895A28C;
    return;
L_0895A28C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16376));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A2AC;
      }
      goto L_0895A2A0;
    }
L_0895A2A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895A2ACu);
    // nop
    goto L_0895A2C4;
L_0895A2AC:
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
L_0895A2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895A2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 455u, 0x089520A8u>(ctx, &aot_mem) && ctx.pc == 0x0895A2DCu) goto L_0895A2DC;
    return;
L_0895A2DC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16376));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
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
L_0895A310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895A328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 457u, 0x089520ECu>(ctx, &aot_mem) && ctx.pc == 0x0895A328u) goto L_0895A328;
    return;
L_0895A328:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16376));
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
L_0895A34C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895A35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 459u, 0x08952144u>(ctx, &aot_mem) && ctx.pc == 0x0895A35Cu) goto L_0895A35C;
    return;
L_0895A35C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A36C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A3C4;
      }
      goto L_0895A388;
    }
L_0895A388:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A3B0;
      }
      goto L_0895A394;
    }
L_0895A394:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A3B0;
      }
      goto L_0895A3AC;
    }
L_0895A3AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895A3B0;
L_0895A3B0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A3C4;
      }
      goto L_0895A3B8;
    }
L_0895A3B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_0895A3C4;
L_0895A3C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A3CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4D8;
      }
      goto L_0895A404;
    }
L_0895A404:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A430;
      }
      goto L_0895A414;
    }
L_0895A414:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A430;
      }
      goto L_0895A42C;
    }
L_0895A42C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895A430;
L_0895A430:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A45C;
      }
      goto L_0895A438;
    }
L_0895A438:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A45C;
      }
      goto L_0895A450;
    }
L_0895A450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895A45Cu);
    // nop
    goto L_0895BD2C;
L_0895A45C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A4D8;
      }
      goto L_0895A468;
    }
L_0895A468:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895A480u);
    // nop
    goto L_08959318;
L_0895A480:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4AC;
      }
      goto L_0895A490;
    }
L_0895A490:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4AC;
      }
      goto L_0895A4A8;
    }
L_0895A4A8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895A4AC;
L_0895A4AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4D8;
      }
      goto L_0895A4B4;
    }
L_0895A4B4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4D8;
      }
      goto L_0895A4CC;
    }
L_0895A4CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895A4D8u);
    // nop
    goto L_0895BD2C;
L_0895A4D8:
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
L_0895A4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A52C;
      }
      goto L_0895A524;
    }
L_0895A524:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A53C;
      }
      goto L_0895A52C;
    }
L_0895A52C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A58C;
      }
      goto L_0895A53C;
    }
L_0895A53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A564;
      }
      goto L_0895A54C;
    }
L_0895A54C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895A558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0895A558u) goto L_0895A558;
    return;
L_0895A558:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A568;
      }
      goto L_0895A564;
    }
L_0895A564:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0895A568;
L_0895A568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895A57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A57Cu) goto L_0895A57C;
    return;
L_0895A57C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    goto L_0895A58C;
L_0895A58C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A5A4;
      }
      goto L_0895A594;
    }
L_0895A594:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895A5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0895A5A4u) goto L_0895A5A4;
    return;
L_0895A5A4:
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
L_0895A5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A60C;
      }
      goto L_0895A5E4;
    }
L_0895A5E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895A5F0u) goto L_0895A5F0;
    return;
L_0895A5F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895A604u);
    // nop
    goto L_0895A4F4;
L_0895A604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A614;
      }
      goto L_0895A60C;
    }
L_0895A60C:
    ctx.set_gpr(31, 0x0895A614u);
    // nop
    goto L_0895A62C;
L_0895A614:
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
L_0895A62C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A650;
      }
      goto L_0895A648;
    }
L_0895A648:
    ctx.set_gpr(31, 0x0895A650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0895A650u) goto L_0895A650;
    return;
L_0895A650:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A66C:
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
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A6AC;
      }
      goto L_0895A6A4;
    }
L_0895A6A4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A6B4;
      }
      goto L_0895A6AC;
    }
L_0895A6AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A7D8;
      }
      goto L_0895A6B4;
    }
L_0895A6B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A6D4;
      }
      goto L_0895A6C0;
    }
L_0895A6C0:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895A6CCu);
    // nop
    goto L_0895A4F4;
L_0895A6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A7D8;
      }
      goto L_0895A6D4;
    }
L_0895A6D4:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895A6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0895A6E4u) goto L_0895A6E4;
    return;
L_0895A6E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A730;
      }
      goto L_0895A6F8;
    }
L_0895A6F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0895A708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A708u) goto L_0895A708;
    return;
L_0895A708:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895A720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A720u) goto L_0895A720;
    return;
L_0895A720:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A7B8;
      }
      goto L_0895A730;
    }
L_0895A730:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A76C;
      }
      goto L_0895A738;
    }
L_0895A738:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895A74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A74Cu) goto L_0895A74C;
    return;
L_0895A74C:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0895A764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A764u) goto L_0895A764;
    return;
L_0895A764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A7B8;
      }
      goto L_0895A76C;
    }
L_0895A76C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895A780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A780u) goto L_0895A780;
    return;
L_0895A780:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A794u) goto L_0895A794;
    return;
L_0895A794:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895A7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895A7B8u) goto L_0895A7B8;
    return;
L_0895A7B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A7D0;
      }
      goto L_0895A7C4;
    }
L_0895A7C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0895A7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0895A7D0u) goto L_0895A7D0;
    return;
L_0895A7D0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_0895A7D8;
L_0895A7D8:
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
L_0895A800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A818;
      }
      goto L_0895A810;
    }
L_0895A810:
    ctx.set_gpr(31, 0x0895A818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 195u, 0x08818AA4u>(ctx, &aot_mem) && ctx.pc == 0x0895A818u) goto L_0895A818;
    return;
L_0895A818:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0895A83Cu);
    // nop
    goto L_0895A84C;
L_0895A83C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A84C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A864;
      }
      goto L_0895A85C;
    }
L_0895A85C:
    ctx.set_gpr(31, 0x0895A864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 511u, 0x0881677Cu>(ctx, &aot_mem) && ctx.pc == 0x0895A864u) goto L_0895A864;
    return;
L_0895A864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A894;
      }
      goto L_0895A88C;
    }
L_0895A88C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895A894;
L_0895A894:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13000));
    ctx.set_gpr(31, 0x0895A8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895A8A4u) goto L_0895A8A4;
    return;
L_0895A8A4:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A8BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A8DC;
      }
      goto L_0895A8D4;
    }
L_0895A8D4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895A8DC;
L_0895A8DC:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12992));
    ctx.set_gpr(31, 0x0895A8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895A8ECu) goto L_0895A8EC;
    return;
L_0895A8EC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A904:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A91C;
      }
      goto L_0895A914;
    }
L_0895A914:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1368)));
    goto L_0895A91C;
L_0895A91C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A944;
      }
      goto L_0895A92C;
    }
L_0895A92C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(84));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A944;
      }
      goto L_0895A938;
    }
L_0895A938:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A958;
      }
      goto L_0895A944;
    }
L_0895A944:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A984;
      }
      goto L_0895A958;
    }
L_0895A958:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A97C;
      }
      goto L_0895A964;
    }
L_0895A964:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(70));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A97C;
      }
      goto L_0895A970;
    }
L_0895A970:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895A984;
      }
      goto L_0895A97C;
    }
L_0895A97C:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895A984;
L_0895A984:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A98C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895A9A8u);
    // nop
    goto L_0895AA80;
L_0895A9A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895A9B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895A9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0895A9D8u) goto L_0895A9D8;
    return;
L_0895A9D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0895A9F0u);
    // nop
    goto L_0895AA80;
L_0895A9F0:
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
L_0895AA08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA48;
      }
      goto L_0895AA18;
    }
L_0895AA18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA30;
      }
      goto L_0895AA20;
    }
L_0895AA20:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1364));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA38;
      }
      goto L_0895AA30;
    }
L_0895AA30:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1356));
    goto L_0895AA38;
L_0895AA38:
    ctx.set_gpr(31, 0x0895AA40u);
    // nop
    goto L_0895A5C4;
L_0895AA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA70;
      }
      goto L_0895AA48;
    }
L_0895AA48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA60;
      }
      goto L_0895AA50;
    }
L_0895AA50:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13332));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA68;
      }
      goto L_0895AA60;
    }
L_0895AA60:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13324));
    goto L_0895AA68;
L_0895AA68:
    ctx.set_gpr(31, 0x0895AA70u);
    // nop
    goto L_0895A5C4;
L_0895AA70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895AA80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AAC0;
      }
      goto L_0895AAB4;
    }
L_0895AAB4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AACC;
      }
      goto L_0895AAC0;
    }
L_0895AAC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_0895AACC;
L_0895AACC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0895AAE0u);
    // nop
    goto L_0895AAF0;
L_0895AAE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895AAF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895AB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1063u, 0x0881BF28u>(ctx, &aot_mem) && ctx.pc == 0x0895AB20u) goto L_0895AB20;
    return;
L_0895AB20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895AB48;
      }
      goto L_0895AB2C;
    }
L_0895AB2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(31, 0x0895AB40u);
    // nop
    goto L_0895A4F4;
L_0895AB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AB5C;
      }
      goto L_0895AB48;
    }
L_0895AB48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895AB5Cu);
    // nop
    goto L_0895A4F4;
L_0895AB5C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895AB78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AC10;
      }
      goto L_0895AB98;
    }
L_0895AB98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ABE0;
      }
      goto L_0895ABA8;
    }
L_0895ABA8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895ABC4;
      }
      goto L_0895ABB8;
    }
L_0895ABB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895ABE0;
      }
      goto L_0895ABC4;
    }
L_0895ABC4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0895ABD8u);
    // nop
    goto L_0895A5C4;
L_0895ABD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ABF0;
      }
      goto L_0895ABE0;
    }
L_0895ABE0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895ABA8;
      }
      goto L_0895ABF0;
    }
L_0895ABF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895AC10;
      }
      goto L_0895ABFC;
    }
L_0895ABFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    ctx.set_gpr(31, 0x0895AC10u);
    // nop
    goto L_0895A5C4;
L_0895AC10:
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
L_0895AC28:
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AC5C;
      }
      goto L_0895AC34;
    }
L_0895AC34:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895AC50;
      }
      goto L_0895AC44;
    }
L_0895AC44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895AC5C;
      }
      goto L_0895AC50;
    }
L_0895AC50:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AC6C;
      }
      goto L_0895AC5C;
    }
L_0895AC5C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AC34;
      }
      goto L_0895AC6C;
    }
L_0895AC6C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895AC78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895ACA0;
      }
      goto L_0895AC98;
    }
L_0895AC98:
    ctx.set_gpr(31, 0x0895ACA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895ACA0u) goto L_0895ACA0;
    return;
L_0895ACA0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ACFC;
      }
      goto L_0895ACA8;
    }
L_0895ACA8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895ACA8;
      }
      goto L_0895ACC4;
    }
L_0895ACC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ACE4;
      }
      goto L_0895ACCC;
    }
L_0895ACCC:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ACE4;
      }
      goto L_0895ACD8;
    }
L_0895ACD8:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AD00;
      }
      goto L_0895ACE4;
    }
L_0895ACE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895ACCC;
      }
      goto L_0895ACF8;
    }
L_0895ACF8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0895ACFC;
L_0895ACFC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0895AD00;
L_0895AD00:
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
L_0895AD18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895AD44u) goto L_0895AD44;
    return;
L_0895AD44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895AD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895AD54u) goto L_0895AD54;
    return;
L_0895AD54:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895AD70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895AD70u) goto L_0895AD70;
    return;
L_0895AD70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895AD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0895AD84u) goto L_0895AD84;
    return;
L_0895AD84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895AD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0895AD94u) goto L_0895AD94;
    return;
L_0895AD94:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0895ADB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895ADE8;
      }
      goto L_0895ADE0;
    }
L_0895ADE0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895ADE8;
L_0895ADE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895ADF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895ADF4u) goto L_0895ADF4;
    return;
L_0895ADF4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895AE0C;
      }
      goto L_0895AE08;
    }
L_0895AE08:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0895AE0C;
L_0895AE0C:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AE28;
      }
      goto L_0895AE1C;
    }
L_0895AE1C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AE68;
      }
      goto L_0895AE28;
    }
L_0895AE28:
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895AE50;
      }
      goto L_0895AE44;
    }
L_0895AE44:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AE68;
      }
      goto L_0895AE50;
    }
L_0895AE50:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895AE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x0895AE60u) goto L_0895AE60;
    return;
L_0895AE60:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0895AE68;
L_0895AE68:
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
L_0895AE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AEC4;
      }
      goto L_0895AEB4;
    }
L_0895AEB4:
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AED0;
      }
      goto L_0895AEC4;
    }
L_0895AEC4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AF50;
      }
      goto L_0895AED0;
    }
L_0895AED0:
    ctx.set_gpr(31, 0x0895AED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0895AED8u) goto L_0895AED8;
    return;
L_0895AED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895AEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895AEE4u) goto L_0895AEE4;
    return;
L_0895AEE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895AEFCu);
    // nop
    goto L_0895A5C4;
L_0895AEFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895AF14u);
    // nop
    goto L_0895A66C;
L_0895AF14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AF2C;
      }
      goto L_0895AF24;
    }
L_0895AF24:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895AF2C;
L_0895AF2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895AF38u);
    // nop
    goto L_0895A5C4;
L_0895AF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AF4C;
      }
      goto L_0895AF44;
    }
L_0895AF44:
    ctx.set_gpr(31, 0x0895AF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895AF4Cu) goto L_0895AF4C;
    return;
L_0895AF4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895AF50;
L_0895AF50:
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
L_0895AF6C:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AFE8;
      }
      goto L_0895AFAC;
    }
L_0895AFAC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0895AFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x0895AFC0u) goto L_0895AFC0;
    return;
L_0895AFC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895AFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895AFD0u) goto L_0895AFD0;
    return;
L_0895AFD0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895AFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0895AFE0u) goto L_0895AFE0;
    return;
L_0895AFE0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0895AFE8;
L_0895AFE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AFAC;
      }
      goto L_0895AFF4;
    }
L_0895AFF4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B1F0;
      }
      goto L_0895B004;
    }
L_0895B004:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0895B010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 26u, 0x08948264u>(ctx, &aot_mem) && ctx.pc == 0x0895B010u) goto L_0895B010;
    return;
L_0895B010:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B03C;
      }
      goto L_0895B020;
    }
L_0895B020:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[20]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895B038;
      }
      goto L_0895B034;
    }
L_0895B034:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895B038;
L_0895B038:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0895B03C;
L_0895B03C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B020;
      }
      goto L_0895B04C;
    }
L_0895B04C:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B1D0;
      }
      goto L_0895B058;
    }
L_0895B058:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B06C;
      }
      goto L_0895B060;
    }
L_0895B060:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B0B8;
      }
      goto L_0895B06C;
    }
L_0895B06C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B0A4;
      }
      goto L_0895B07C;
    }
L_0895B07C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895B088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895B088u) goto L_0895B088;
    return;
L_0895B088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B09C;
      }
      goto L_0895B090;
    }
L_0895B090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895B09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895B09Cu) goto L_0895B09C;
    return;
L_0895B09C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895B0A4;
L_0895B0A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895B0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895B0B8u) goto L_0895B0B8;
    return;
L_0895B0B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895B0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x0895B0D0u) goto L_0895B0D0;
    return;
L_0895B0D0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B100;
      }
      goto L_0895B0EC;
    }
L_0895B0EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0895B0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B0F8u) goto L_0895B0F8;
    return;
L_0895B0F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895B100;
L_0895B100:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B120;
      }
      goto L_0895B108;
    }
L_0895B108:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0895B114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B114u) goto L_0895B114;
    return;
L_0895B114:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895B120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0895B120u) goto L_0895B120;
    return;
L_0895B120:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B144;
      }
      goto L_0895B130;
    }
L_0895B130:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895B13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B13Cu) goto L_0895B13C;
    return;
L_0895B13C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895B144;
L_0895B144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B15C;
      }
      goto L_0895B14C;
    }
L_0895B14C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895B15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895B15Cu) goto L_0895B15C;
    return;
L_0895B15C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B190;
      }
      goto L_0895B174;
    }
L_0895B174:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B190;
      }
      goto L_0895B18C;
    }
L_0895B18C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895B190;
L_0895B190:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B1BC;
      }
      goto L_0895B198;
    }
L_0895B198:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B1BC;
      }
      goto L_0895B1B0;
    }
L_0895B1B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895B1BCu);
    // nop
    goto L_0895BD2C;
L_0895B1BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895B1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895B1C8u) goto L_0895B1C8;
    return;
L_0895B1C8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0895B1D0;
L_0895B1D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B058;
      }
      goto L_0895B1E4;
    }
L_0895B1E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895B1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0895B1F0u) goto L_0895B1F0;
    return;
L_0895B1F0:
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
L_0895B21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895B22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x0895B22Cu) goto L_0895B22C;
    return;
L_0895B22C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895B23C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B2F8;
      }
      goto L_0895B264;
    }
L_0895B264:
    ctx.set_gpr(31, 0x0895B26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 26u, 0x08948264u>(ctx, &aot_mem) && ctx.pc == 0x0895B26Cu) goto L_0895B26C;
    return;
L_0895B26C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895B27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895B27Cu) goto L_0895B27C;
    return;
L_0895B27C:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B290;
      }
      goto L_0895B288;
    }
L_0895B288:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0895B290;
L_0895B290:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895B2B0;
      }
      goto L_0895B298;
    }
L_0895B298:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0895B2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B2A8u) goto L_0895B2A8;
    return;
L_0895B2A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B288;
      }
      goto L_0895B2B0;
    }
L_0895B2B0:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B2C0;
      }
      goto L_0895B2BC;
    }
L_0895B2BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0895B2C0;
L_0895B2C0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B2DC;
      }
      goto L_0895B2CC;
    }
L_0895B2CC:
    ctx.set_gpr(31, 0x0895B2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B2D4u) goto L_0895B2D4;
    return;
L_0895B2D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B2BC;
      }
      goto L_0895B2DC;
    }
L_0895B2DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895B2ECu);
    // nop
    goto L_0895A5C4;
L_0895B2EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895B2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0895B2F8u) goto L_0895B2F8;
    return;
L_0895B2F8:
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
L_0895B318:
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
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B3C4;
      }
      goto L_0895B358;
    }
L_0895B358:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B384;
      }
      goto L_0895B37C;
    }
L_0895B37C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895B384;
L_0895B384:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x0895B390u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B390u) goto L_0895B390;
    return;
L_0895B390:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895B3A4;
      }
      goto L_0895B398;
    }
L_0895B398:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B3C4;
      }
      goto L_0895B3A4;
    }
L_0895B3A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895B3B8;
      }
      goto L_0895B3AC;
    }
L_0895B3AC:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B3C4;
      }
      goto L_0895B3B8;
    }
L_0895B3B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B430;
      }
      goto L_0895B3C4;
    }
L_0895B3C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B358;
      }
      goto L_0895B3D0;
    }
L_0895B3D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B3E8;
      }
      goto L_0895B3DC;
    }
L_0895B3DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B430;
      }
      goto L_0895B3E8;
    }
L_0895B3E8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B40C;
      }
      goto L_0895B404;
    }
L_0895B404:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895B40C;
L_0895B40C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x0895B418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B418u) goto L_0895B418;
    return;
L_0895B418:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B42C;
      }
      goto L_0895B420;
    }
L_0895B420:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B430;
      }
      goto L_0895B42C;
    }
L_0895B42C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0895B430;
L_0895B430:
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
L_0895B458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895B478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 774u, 0x089276B4u>(ctx, &aot_mem) && ctx.pc == 0x0895B478u) goto L_0895B478;
    return;
L_0895B478:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895B490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B4CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B4CCu) goto L_0895B4CC;
    return;
L_0895B4CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
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
L_0895B4EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B530;
      }
      goto L_0895B50C;
    }
L_0895B50C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0895B518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0895B518u) goto L_0895B518;
    return;
L_0895B518:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895B530;
      }
      goto L_0895B524;
    }
L_0895B524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895B530u);
    // nop
    goto L_0895BB34;
L_0895B530:
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
L_0895B54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B5B8;
      }
      goto L_0895B560;
    }
L_0895B560:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B5F4;
      }
      goto L_0895B570;
    }
L_0895B570:
    ctx.set_gpr(31, 0x0895B578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x0895B578u) goto L_0895B578;
    return;
L_0895B578:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895B584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895B584u) goto L_0895B584;
    return;
L_0895B584:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895B590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x0895B590u) goto L_0895B590;
    return;
L_0895B590:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B5A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B5A8u) goto L_0895B5A8;
    return;
L_0895B5A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31416), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B5F4;
      }
      goto L_0895B5B8;
    }
L_0895B5B8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B5F4;
      }
      goto L_0895B5C8;
    }
L_0895B5C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31416), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B5F4;
      }
      goto L_0895B5EC;
    }
L_0895B5EC:
    ctx.set_gpr(31, 0x0895B5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0895B5F4u) goto L_0895B5F4;
    return;
L_0895B5F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895B608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B658;
      }
      goto L_0895B644;
    }
L_0895B644:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B658u) goto L_0895B658;
    return;
L_0895B658:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0895B670u);
    // nop
    goto L_0895B8B4;
L_0895B670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B6F0;
      }
      goto L_0895B67C;
    }
L_0895B67C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895B68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895B68Cu) goto L_0895B68C;
    return;
L_0895B68C:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0895B6ACu);
    // nop
    goto L_0895BC0C;
L_0895B6AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895B6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0895B6C4u) goto L_0895B6C4;
    return;
L_0895B6C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0895B6F0u);
    // nop
    goto L_0895BA28;
L_0895B6F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B710;
      }
      goto L_0895B700;
    }
L_0895B700:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B710u) goto L_0895B710;
    return;
L_0895B710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_0895B734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B770;
      }
      goto L_0895B75C;
    }
L_0895B75C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B770u) goto L_0895B770;
    return;
L_0895B770:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895B790u);
    // nop
    goto L_0895B8B4;
L_0895B790:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0895B7A0u);
    // nop
    goto L_0895B9B8;
L_0895B7A0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B7C0;
      }
      goto L_0895B7B0;
    }
L_0895B7B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B7C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B7C0u) goto L_0895B7C0;
    return;
L_0895B7C0:
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
L_0895B7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B814;
      }
      goto L_0895B800;
    }
L_0895B800:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B814u) goto L_0895B814;
    return;
L_0895B814:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895B874;
      }
      goto L_0895B820;
    }
L_0895B820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895B844;
      }
      goto L_0895B834;
    }
L_0895B834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B85C;
      }
      goto L_0895B844;
    }
L_0895B844:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B85C;
      }
      goto L_0895B858;
    }
L_0895B858:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0895B85C;
L_0895B85C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895B86Cu);
    // nop
    goto L_0895BBB0;
L_0895B86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B87C;
      }
      goto L_0895B874;
    }
L_0895B874:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0895B87C;
L_0895B87C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B89C;
      }
      goto L_0895B88C;
    }
L_0895B88C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895B89Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B89Cu) goto L_0895B89C;
    return;
L_0895B89C:
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
L_0895B8B4:
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B974;
      }
      goto L_0895B900;
    }
L_0895B900:
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B970;
      }
      goto L_0895B914;
    }
L_0895B914:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0895B938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895B938u) goto L_0895B938;
    return;
L_0895B938:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B964;
      }
      goto L_0895B940;
    }
L_0895B940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B984;
      }
      goto L_0895B964;
    }
L_0895B964:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895B970;
      }
      goto L_0895B96C;
    }
L_0895B96C:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    goto L_0895B970;
L_0895B970:
    ctx.set_gpr(18, ctx.gpr[18] >> 1u);
    goto L_0895B974;
L_0895B974:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B900;
      }
      goto L_0895B97C;
    }
L_0895B97C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895B984;
L_0895B984:
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
L_0895B9B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895B9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B9F8u) goto L_0895B9F8;
    return;
L_0895B9F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BA14;
      }
      goto L_0895BA0C;
    }
L_0895BA0C:
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0895BA14;
L_0895BA14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895BA78;
      }
      goto L_0895BA5C;
    }
L_0895BA5C:
    ctx.set_gpr(16, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0895BA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 415u, 0x08929D80u>(ctx, &aot_mem) && ctx.pc == 0x0895BA70u) goto L_0895BA70;
    return;
L_0895BA70:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_0895BA78;
L_0895BA78:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895BA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895BA9Cu) goto L_0895BA9C;
    return;
L_0895BA9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BAE0;
      }
      goto L_0895BAC8;
    }
L_0895BAC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BAD8;
      }
      goto L_0895BAD0;
    }
L_0895BAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BADC;
      }
      goto L_0895BAD8;
    }
L_0895BAD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_0895BADC;
L_0895BADC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0895BAE0;
L_0895BAE0:
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
L_0895BB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895BB24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BB24u) goto L_0895BB24;
    return;
L_0895BB24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895BB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x0895BB44u) goto L_0895BB44;
    return;
L_0895BB44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BB54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0895BB98u);
    // nop
    goto L_0895BDA4;
L_0895BB98:
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
L_0895BBB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BBF0;
      }
      goto L_0895BBD0;
    }
L_0895BBD0:
    ctx.set_gpr(31, 0x0895BBD8u);
    // nop
    goto L_0895BE1C;
L_0895BBD8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895BBF0;
      }
      goto L_0895BBE4;
    }
L_0895BBE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895BBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 26u, 0x0895C164u>(ctx, &aot_mem) && ctx.pc == 0x0895BBF0u) goto L_0895BBF0;
    return;
L_0895BBF0:
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
L_0895BC0C:
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    goto L_0895BC54;
L_0895BC54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895BC6C;
      }
      goto L_0895BC60;
    }
L_0895BC60:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BC80;
      }
      goto L_0895BC6C;
    }
L_0895BC6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895BC7Cu);
    // nop
    goto L_0895BE40;
L_0895BC7C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0895BC80;
L_0895BC80:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCF0;
      }
      goto L_0895BC88;
    }
L_0895BC88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCE4;
      }
      goto L_0895BC94;
    }
L_0895BC94:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCA8;
      }
      goto L_0895BCA4;
    }
L_0895BCA4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_0895BCA8;
L_0895BCA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0895BCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 24u, 0x0895C130u>(ctx, &aot_mem) && ctx.pc == 0x0895BCC0u) goto L_0895BCC0;
    return;
L_0895BCC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCE0;
      }
      goto L_0895BCC8;
    }
L_0895BCC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895BCE0u);
    // nop
    goto L_0895BB54;
L_0895BCE0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0895BCE4;
L_0895BCE4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BC54;
      }
      goto L_0895BCF0;
    }
L_0895BCF0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(8));
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
L_0895BD2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895BD50u);
    // nop
    goto L_0895B734;
L_0895BD50:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0895BD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895BD5Cu) goto L_0895BD5C;
    return;
L_0895BD5C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895BD70u);
    // nop
    goto L_0895BFB0;
L_0895BD70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BD8C;
      }
      goto L_0895BD7C;
    }
L_0895BD7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895BD8Cu);
    // nop
    goto L_0895B7D8;
L_0895BD8C:
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
L_0895BDA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895BDD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BDD4u) goto L_0895BDD4;
    return;
L_0895BDD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-4), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BE1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0895BE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0895BE30u) goto L_0895BE30;
    return;
L_0895BE30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BE40:
    ctx.set_gpr(8, (ctx.gpr[5] >> 2u) & 0x0000FFFFu);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF44;
      }
      goto L_0895BE58;
    }
L_0895BE58:
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[11] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE78;
      }
      goto L_0895BE74;
    }
L_0895BE74:
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_0895BE78;
L_0895BE78:
    ctx.set_gpr(5, ctx.gpr[8] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF20;
      }
      goto L_0895BE88;
    }
L_0895BE88:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[9] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895BF04;
      }
      goto L_0895BE9C;
    }
L_0895BE9C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BECC;
      }
      goto L_0895BEA4;
    }
L_0895BEA4:
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BEC0;
      }
      goto L_0895BEB4;
    }
L_0895BEB4:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BECC;
      }
      goto L_0895BEC0;
    }
L_0895BEC0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0895BECC;
L_0895BECC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895BF10;
      }
      goto L_0895BED8;
    }
L_0895BED8:
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BEF8;
      }
      goto L_0895BEE4;
    }
L_0895BEE4:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF10;
      }
      goto L_0895BEF8;
    }
L_0895BEF8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF10;
      }
      goto L_0895BF04;
    }
L_0895BF04:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0895BF10;
L_0895BF10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF5C;
      }
      goto L_0895BF20;
    }
L_0895BF20:
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF3C;
      }
      goto L_0895BF30;
    }
L_0895BF30:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF44;
      }
      goto L_0895BF3C;
    }
L_0895BF3C:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[2]);
    goto L_0895BF44;
L_0895BF44:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE58;
      }
      goto L_0895BF4C;
    }
L_0895BF4C:
    ctx.set_gpr(2, ctx.gpr[11] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895BF5C;
L_0895BF5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BF64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895BF74;
      }
      goto L_0895BF70;
    }
L_0895BF70:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    goto L_0895BF74;
L_0895BF74:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF90;
      }
      goto L_0895BF80;
    }
L_0895BF80:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-4), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0895BF90;
L_0895BF90:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, (ctx.gpr[3] >> 2u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(18, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BFFC;
      }
      goto L_0895BFF0;
    }
L_0895BFF0:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 2u, 0x0895C008u>(ctx, &aot_mem); return;
      }
      goto L_0895BFFC;
    }
L_0895BFFC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.pc = 0x0895C000u; return;
}

void recomp_unit_0085(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0085_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_85(Runtime &runtime) {
    runtime.register_generated_unit(85u, 0x08958000u, 16384u, &recomp_unit_0085, &recomp_unit_0085_entry);
    runtime.register_function(0x08958004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958008u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958024u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895803Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958058u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958064u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958078u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958098u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958120u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958138u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958194u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895820Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958234u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958274u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958288u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958314u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958320u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895832Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895833Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958348u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958350u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895835Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958364u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958378u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895837Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958394u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958420u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958438u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895845Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895846Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895847Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958488u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958518u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958520u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895853Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958560u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895857Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958584u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958600u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958610u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958620u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895862Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958638u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958648u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895865Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895866Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958680u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958690u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958708u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958714u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958724u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958738u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958748u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895875Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895876Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895877Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958808u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958814u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958820u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958830u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958844u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958854u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958864u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895887Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958888u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958894u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958910u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958930u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958940u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958948u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958954u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958980u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895898Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958ABCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895901Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959020u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959028u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959040u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895904Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959058u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959068u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959088u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895909Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895911Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959148u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959154u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895915Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959168u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959170u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959198u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895920Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959234u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959240u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959250u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895925Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959264u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959270u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959278u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895928Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959318u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959344u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895935Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959360u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959368u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959374u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959384u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895939Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959400u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959418u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895941Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959424u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959430u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959438u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959444u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895946Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959478u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959480u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895948Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959494u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959504u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959520u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895952Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959538u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895953Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959544u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895956Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895957Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959584u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959594u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895959Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959604u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959610u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959620u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959638u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895963Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959644u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895965Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959668u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959680u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959698u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895969Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959710u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959728u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895972Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959734u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959740u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959754u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895976Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959770u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959778u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959784u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959800u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895981Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895982Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959844u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959848u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959850u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959868u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959890u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959910u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959914u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895991Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959928u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959938u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959948u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959960u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895996Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959990u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959ACCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959ED0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A00Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A03Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A04Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A054u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A068u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A078u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A080u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A094u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A10Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A13Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A148u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A150u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A158u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A164u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A16Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A174u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A22Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A238u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A240u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A248u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A254u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A25Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A264u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A274u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A28Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A310u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A328u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A34Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A35Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A36Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A388u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A394u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A404u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A414u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A42Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A430u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A438u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A450u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A45Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A468u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A480u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A490u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A524u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A52Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A53Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A54Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A558u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A564u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A568u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A57Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A58Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A594u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A604u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A60Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A614u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A62Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A648u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A650u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A66Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A708u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A720u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A730u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A738u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A74Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A764u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A76Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A780u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A800u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A810u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A818u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A828u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A83Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A84Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A85Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A864u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A88Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A894u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A904u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A914u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A91Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A92Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A938u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A944u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A958u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A970u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A97Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A98Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AACCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AED0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AED8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B010u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B020u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B034u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B038u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B03Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B04Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B058u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B06Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B07Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B088u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B090u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B09Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B100u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B114u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B120u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B130u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B13Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B144u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B14Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B15Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B174u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B18Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B190u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B198u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B21Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B22Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B23Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B264u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B26Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B27Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B288u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B290u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B298u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B318u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B358u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B37Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B384u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B390u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B398u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B404u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B40Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B418u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B420u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B42Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B430u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B458u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B478u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B490u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B50Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B518u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B524u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B530u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B54Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B560u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B570u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B578u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B584u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B590u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B608u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B644u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B658u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B670u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B67Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B68Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B700u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B710u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B734u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B75Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B770u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B790u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B800u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B814u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B820u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B834u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B844u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B858u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B85Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B86Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B87Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B88Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B89Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B900u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B914u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B938u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B940u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B96Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B970u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B974u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B97Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BADCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BECCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BED8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFFCu, &recomp_unit_0085, "recomp_unit_0085");
}
} // namespace psprecomp
