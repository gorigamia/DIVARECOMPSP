#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0067[4091] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34,
    0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0,
    57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67,
    0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 98, 99, 0, 0, 100, 0, 0, 101, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 186, 0, 187, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 207, 208,
    0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 216, 217, 0, 218, 0, 0, 219, 0, 0,
    0, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 232, 233, 0, 0, 0, 234, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 257, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 282, 283, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289,
    0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 295, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    299, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0,
    316, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 344, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0,
    0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 380, 0, 381, 0, 0, 382, 383, 0, 384, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393,
    0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 406, 407, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0,
    0, 423, 424, 0, 425, 0, 0, 426, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 432, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 434, 0, 435, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453,
    454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 460, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 468, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0,
    0, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0,
    0, 492, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499,
    0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 508, 0, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0,
    0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0,
    0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0,
    532, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 545, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549,
    0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0,
    564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0,
    568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 574, 0, 0, 0, 0, 575, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0,
    0, 0, 0, 584, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 0,
    0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0,
    0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 0, 605,
    0, 606, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0,
    0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0,
    0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643,
    0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 649, 0, 650, 0, 0, 0, 0, 0,
    651, 0, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 662, 0,
    0, 0, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672,
    0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 0, 682,
    0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0,
    0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0,
    702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0,
    711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0,
    0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0,
    730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0,
    739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743,
    0, 744, 0, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 753,
    0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 761, 0, 762,
    0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0,
    771, 0, 772, 0, 0, 773, 0, 774, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 779,
    0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 785, 0, 0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 790,
    0, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0,
    0, 800, 801, 0, 0, 0, 802, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807,
    0, 0, 808, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0,
    0, 0, 818, 0, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 826, 0,
    827, 0, 0, 0, 0, 0, 828, 0, 0, 829, 830, 0, 0, 831, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0,
    835, 0, 836, 0, 0, 837, 0, 838, 0, 839, 0, 0, 840, 841, 0, 842, 0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0,
    847, 0, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 857,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0, 862, 0, 863, 0, 0, 864, 0,
    865, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0,
    0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 878, 0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0,
    0, 0, 883, 0, 884, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 888, 0, 889, 0, 890, 0, 0, 0, 891, 0, 0, 0, 892, 0,
    0, 0, 0, 0, 893, 894, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0,
    0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 905, 0, 906, 0, 0, 0, 0, 0, 907, 0, 0, 908, 909, 0, 0,
    0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913, 0, 914, 0, 0, 915, 0, 0, 916,
    0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 919, 0, 0, 0, 920, 0, 0, 0, 921, 922, 0, 0, 0, 0, 0,
    923, 0, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 0,
    0, 0, 0, 930, 0, 931, 932, 0, 0, 0, 933, 0, 0, 0, 934, 0, 0, 935, 0, 936, 0, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 0,
    940, 0, 0, 941, 0, 0, 942, 0, 943, 0, 0, 944, 0, 945, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 952, 0, 0, 953, 0, 954, 0, 0, 955, 0,
    0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 957, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 961, 0, 0,
    962, 0, 963, 0, 0, 964, 0, 965, 0, 0, 966, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 969, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 970, 0, 971, 0, 0, 972, 0, 0, 973, 0, 0, 0, 0, 974, 975, 0, 0, 976, 0, 0, 0, 0, 977, 0, 0, 0, 0, 0, 978,
    0, 0, 0, 0, 0, 979, 0, 980, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 983, 0, 0, 984, 0, 0,
    985, 0, 0, 0, 0, 986, 987, 0, 0, 988, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 990, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0,
    0, 0, 0, 993, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 995, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 997, 0, 0, 0, 0, 0, 998,
    0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 0, 1001, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 0,
    1004, 1005, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 1009, 0, 0, 0, 1010, 1011, 0, 0, 0, 0, 0, 0, 1012, 0, 1013,
};
void recomp_unit_0067_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08910000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0067[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08910000;
    case 2u: goto L_08910018;
    case 3u: goto L_08910024;
    case 4u: goto L_08910030;
    case 5u: goto L_0891004C;
    case 6u: goto L_0891006C;
    case 7u: goto L_0891009C;
    case 8u: goto L_089100BC;
    case 9u: goto L_089100E0;
    case 10u: goto L_08910100;
    case 11u: goto L_08910124;
    case 12u: goto L_08910144;
    case 13u: goto L_0891018C;
    case 14u: goto L_089101B0;
    case 15u: goto L_089101B8;
    case 16u: goto L_089101C4;
    case 17u: goto L_089101CC;
    case 18u: goto L_089101D8;
    case 19u: goto L_089101E4;
    case 20u: goto L_089101F0;
    case 21u: goto L_089101FC;
    case 22u: goto L_08910208;
    case 23u: goto L_08910224;
    case 24u: goto L_0891022C;
    case 25u: goto L_08910234;
    case 26u: goto L_08910238;
    case 27u: goto L_0891023C;
    case 28u: goto L_08910268;
    case 29u: goto L_089102B0;
    case 30u: goto L_089102D4;
    case 31u: goto L_089102DC;
    case 32u: goto L_089102E8;
    case 33u: goto L_089102F0;
    case 34u: goto L_089102FC;
    case 35u: goto L_08910308;
    case 36u: goto L_08910314;
    case 37u: goto L_08910320;
    case 38u: goto L_0891032C;
    case 39u: goto L_08910348;
    case 40u: goto L_08910350;
    case 41u: goto L_08910354;
    case 42u: goto L_08910358;
    case 43u: goto L_08910384;
    case 44u: goto L_0891038C;
    case 45u: goto L_08910394;
    case 46u: goto L_0891039C;
    case 47u: goto L_089103A8;
    case 48u: goto L_089103B4;
    case 49u: goto L_089103BC;
    case 50u: goto L_089103C8;
    case 51u: goto L_089103D0;
    case 52u: goto L_089103D8;
    case 53u: goto L_089103E0;
    case 54u: goto L_089103E8;
    case 55u: goto L_089103F0;
    case 56u: goto L_089103F8;
    case 57u: goto L_08910400;
    case 58u: goto L_08910408;
    case 59u: goto L_08910410;
    case 60u: goto L_08910418;
    case 61u: goto L_08910424;
    case 62u: goto L_0891043C;
    case 63u: goto L_0891044C;
    case 64u: goto L_08910460;
    case 65u: goto L_0891046C;
    case 66u: goto L_08910474;
    case 67u: goto L_0891047C;
    case 68u: goto L_08910488;
    case 69u: goto L_08910490;
    case 70u: goto L_089104AC;
    case 71u: goto L_089104BC;
    case 72u: goto L_089104DC;
    case 73u: goto L_089104E4;
    case 74u: goto L_089104F8;
    case 75u: goto L_0891050C;
    case 76u: goto L_08910514;
    case 77u: goto L_08910528;
    case 78u: goto L_08910538;
    case 79u: goto L_08910540;
    case 80u: goto L_08910548;
    case 81u: goto L_08910550;
    case 82u: goto L_08910558;
    case 83u: goto L_08910560;
    case 84u: goto L_08910568;
    case 85u: goto L_08910570;
    case 86u: goto L_08910580;
    case 87u: goto L_08910598;
    case 88u: goto L_089105B0;
    case 89u: goto L_089105D4;
    case 90u: goto L_089105E0;
    case 91u: goto L_08910608;
    case 92u: goto L_0891060C;
    case 93u: goto L_08910620;
    case 94u: goto L_0891062C;
    case 95u: goto L_0891063C;
    case 96u: goto L_0891064C;
    case 97u: goto L_08910658;
    case 98u: goto L_0891065C;
    case 99u: goto L_08910660;
    case 100u: goto L_0891066C;
    case 101u: goto L_08910678;
    case 102u: goto L_08910688;
    case 103u: goto L_08910690;
    case 104u: goto L_089106A4;
    case 105u: goto L_089106B0;
    case 106u: goto L_089106CC;
    case 107u: goto L_089106E4;
    case 108u: goto L_089106F8;
    case 109u: goto L_0891071C;
    case 110u: goto L_08910728;
    case 111u: goto L_08910734;
    case 112u: goto L_08910740;
    case 113u: goto L_08910748;
    case 114u: goto L_08910754;
    case 115u: goto L_0891075C;
    case 116u: goto L_08910768;
    case 117u: goto L_08910784;
    case 118u: goto L_08910790;
    case 119u: goto L_0891079C;
    case 120u: goto L_089107A0;
    case 121u: goto L_089107AC;
    case 122u: goto L_089107C4;
    case 123u: goto L_089107CC;
    case 124u: goto L_089107D4;
    case 125u: goto L_089107E0;
    case 126u: goto L_089107F0;
    case 127u: goto L_08910800;
    case 128u: goto L_0891080C;
    case 129u: goto L_08910824;
    case 130u: goto L_08910838;
    case 131u: goto L_08910840;
    case 132u: goto L_08910874;
    case 133u: goto L_08910880;
    case 134u: goto L_089108A8;
    case 135u: goto L_089108C0;
    case 136u: goto L_089108D0;
    case 137u: goto L_089108D8;
    case 138u: goto L_089108E4;
    case 139u: goto L_089108F8;
    case 140u: goto L_0891091C;
    case 141u: goto L_08910940;
    case 142u: goto L_08910960;
    case 143u: goto L_08910978;
    case 144u: goto L_08910990;
    case 145u: goto L_089109A0;
    case 146u: goto L_089109B0;
    case 147u: goto L_089109C8;
    case 148u: goto L_089109EC;
    case 149u: goto L_08910A04;
    case 150u: goto L_08910A08;
    case 151u: goto L_08910A10;
    case 152u: goto L_08910A1C;
    case 153u: goto L_08910A24;
    case 154u: goto L_08910A4C;
    case 155u: goto L_08910A5C;
    case 156u: goto L_08910A84;
    case 157u: goto L_08910A94;
    case 158u: goto L_08910AA0;
    case 159u: goto L_08910AA8;
    case 160u: goto L_08910AB0;
    case 161u: goto L_08910ABC;
    case 162u: goto L_08910AC8;
    case 163u: goto L_08910AE0;
    case 164u: goto L_08910B00;
    case 165u: goto L_08910B0C;
    case 166u: goto L_08910B54;
    case 167u: goto L_08910B68;
    case 168u: goto L_08910B70;
    case 169u: goto L_08910B7C;
    case 170u: goto L_08910B88;
    case 171u: goto L_08910BA4;
    case 172u: goto L_08910BAC;
    case 173u: goto L_08910BB8;
    case 174u: goto L_08910BC4;
    case 175u: goto L_08910BD8;
    case 176u: goto L_08910BE0;
    case 177u: goto L_08910BEC;
    case 178u: goto L_08910C04;
    case 179u: goto L_08910C28;
    case 180u: goto L_08910C2C;
    case 181u: goto L_08910C3C;
    case 182u: goto L_08910C48;
    case 183u: goto L_08910C5C;
    case 184u: goto L_08910C64;
    case 185u: goto L_08910C6C;
    case 186u: goto L_08910C70;
    case 187u: goto L_08910C78;
    case 188u: goto L_08910C88;
    case 189u: goto L_08910C94;
    case 190u: goto L_08910CA0;
    case 191u: goto L_08910CAC;
    case 192u: goto L_08910CB4;
    case 193u: goto L_08910CBC;
    case 194u: goto L_08910CCC;
    case 195u: goto L_08910CD8;
    case 196u: goto L_08910CE8;
    case 197u: goto L_08910CFC;
    case 198u: goto L_08910D0C;
    case 199u: goto L_08910D18;
    case 200u: goto L_08910D2C;
    case 201u: goto L_08910D34;
    case 202u: goto L_08910D3C;
    case 203u: goto L_08910D40;
    case 204u: goto L_08910D48;
    case 205u: goto L_08910D64;
    case 206u: goto L_08910D74;
    case 207u: goto L_08910D78;
    case 208u: goto L_08910D7C;
    case 209u: goto L_08910D88;
    case 210u: goto L_08910D94;
    case 211u: goto L_08910D9C;
    case 212u: goto L_08910DAC;
    case 213u: goto L_08910DB8;
    case 214u: goto L_08910DCC;
    case 215u: goto L_08910DD4;
    case 216u: goto L_08910DDC;
    case 217u: goto L_08910DE0;
    case 218u: goto L_08910DE8;
    case 219u: goto L_08910DF4;
    case 220u: goto L_08910E08;
    case 221u: goto L_08910E10;
    case 222u: goto L_08910E18;
    case 223u: goto L_08910E1C;
    case 224u: goto L_08910E24;
    case 225u: goto L_08910E3C;
    case 226u: goto L_08910E50;
    case 227u: goto L_08910E68;
    case 228u: goto L_08910E74;
    case 229u: goto L_08910E90;
    case 230u: goto L_08910E98;
    case 231u: goto L_08910EA8;
    case 232u: goto L_08910EB4;
    case 233u: goto L_08910EB8;
    case 234u: goto L_08910EC8;
    case 235u: goto L_08910ECC;
    case 236u: goto L_08910EDC;
    case 237u: goto L_08910F14;
    case 238u: goto L_08910F3C;
    case 239u: goto L_08910F4C;
    case 240u: goto L_08910F60;
    case 241u: goto L_08910F8C;
    case 242u: goto L_08910F9C;
    case 243u: goto L_08910FB8;
    case 244u: goto L_08910FC0;
    case 245u: goto L_08910FD0;
    case 246u: goto L_08910FE4;
    case 247u: goto L_08910FFC;
    case 248u: goto L_0891103C;
    case 249u: goto L_08911044;
    case 250u: goto L_0891104C;
    case 251u: goto L_08911054;
    case 252u: goto L_0891105C;
    case 253u: goto L_08911074;
    case 254u: goto L_0891109C;
    case 255u: goto L_089110B4;
    case 256u: goto L_089110BC;
    case 257u: goto L_089110C0;
    case 258u: goto L_089110C4;
    case 259u: goto L_089110D0;
    case 260u: goto L_089110DC;
    case 261u: goto L_089110E8;
    case 262u: goto L_08911100;
    case 263u: goto L_08911124;
    case 264u: goto L_08911134;
    case 265u: goto L_0891113C;
    case 266u: goto L_08911148;
    case 267u: goto L_08911154;
    case 268u: goto L_0891115C;
    case 269u: goto L_0891116C;
    case 270u: goto L_0891119C;
    case 271u: goto L_089111AC;
    case 272u: goto L_089111CC;
    case 273u: goto L_089111DC;
    case 274u: goto L_089111EC;
    case 275u: goto L_08911200;
    case 276u: goto L_08911210;
    case 277u: goto L_08911218;
    case 278u: goto L_08911248;
    case 279u: goto L_08911268;
    case 280u: goto L_08911280;
    case 281u: goto L_08911290;
    case 282u: goto L_08911298;
    case 283u: goto L_0891129C;
    case 284u: goto L_089112B0;
    case 285u: goto L_089112B4;
    case 286u: goto L_089112D4;
    case 287u: goto L_089112E4;
    case 288u: goto L_089112F0;
    case 289u: goto L_089112FC;
    case 290u: goto L_08911308;
    case 291u: goto L_08911310;
    case 292u: goto L_08911318;
    case 293u: goto L_08911324;
    case 294u: goto L_0891132C;
    case 295u: goto L_08911334;
    case 296u: goto L_08911338;
    case 297u: goto L_08911348;
    case 298u: goto L_08911374;
    case 299u: goto L_08911380;
    case 300u: goto L_08911388;
    case 301u: goto L_08911398;
    case 302u: goto L_089113A4;
    case 303u: goto L_089113AC;
    case 304u: goto L_089113B4;
    case 305u: goto L_089113C4;
    case 306u: goto L_089113D0;
    case 307u: goto L_089113DC;
    case 308u: goto L_089113F8;
    case 309u: goto L_08911408;
    case 310u: goto L_08911418;
    case 311u: goto L_08911428;
    case 312u: goto L_08911430;
    case 313u: goto L_08911444;
    case 314u: goto L_08911468;
    case 315u: goto L_08911478;
    case 316u: goto L_08911480;
    case 317u: goto L_08911484;
    case 318u: goto L_08911490;
    case 319u: goto L_089114A8;
    case 320u: goto L_089114AC;
    case 321u: goto L_089114CC;
    case 322u: goto L_089114F4;
    case 323u: goto L_0891150C;
    case 324u: goto L_08911524;
    case 325u: goto L_08911538;
    case 326u: goto L_08911548;
    case 327u: goto L_08911554;
    case 328u: goto L_08911558;
    case 329u: goto L_08911574;
    case 330u: goto L_089115A8;
    case 331u: goto L_089115B4;
    case 332u: goto L_089115C0;
    case 333u: goto L_089115CC;
    case 334u: goto L_089115DC;
    case 335u: goto L_089115F4;
    case 336u: goto L_0891160C;
    case 337u: goto L_08911618;
    case 338u: goto L_08911624;
    case 339u: goto L_08911630;
    case 340u: goto L_0891163C;
    case 341u: goto L_08911648;
    case 342u: goto L_08911658;
    case 343u: goto L_08911670;
    case 344u: goto L_08911674;
    case 345u: goto L_08911678;
    case 346u: goto L_089116A0;
    case 347u: goto L_089116D8;
    case 348u: goto L_089116E4;
    case 349u: goto L_089116F0;
    case 350u: goto L_08911704;
    case 351u: goto L_08911718;
    case 352u: goto L_08911728;
    case 353u: goto L_08911730;
    case 354u: goto L_0891173C;
    case 355u: goto L_08911744;
    case 356u: goto L_08911758;
    case 357u: goto L_0891176C;
    case 358u: goto L_08911774;
    case 359u: goto L_08911784;
    case 360u: goto L_08911798;
    case 361u: goto L_089117AC;
    case 362u: goto L_089117B8;
    case 363u: goto L_089117C4;
    case 364u: goto L_089117DC;
    case 365u: goto L_089117E8;
    case 366u: goto L_089117F4;
    case 367u: goto L_08911818;
    case 368u: goto L_08911830;
    case 369u: goto L_08911838;
    case 370u: goto L_08911848;
    case 371u: goto L_08911868;
    case 372u: goto L_08911874;
    case 373u: goto L_08911888;
    case 374u: goto L_0891189C;
    case 375u: goto L_089118A4;
    case 376u: goto L_089118B0;
    case 377u: goto L_089118B8;
    case 378u: goto L_089118C4;
    case 379u: goto L_089118D0;
    case 380u: goto L_089118D4;
    case 381u: goto L_089118DC;
    case 382u: goto L_089118E8;
    case 383u: goto L_089118EC;
    case 384u: goto L_089118F4;
    case 385u: goto L_089118FC;
    case 386u: goto L_08911914;
    case 387u: goto L_08911924;
    case 388u: goto L_08911928;
    case 389u: goto L_08911940;
    case 390u: goto L_08911948;
    case 391u: goto L_08911960;
    case 392u: goto L_08911970;
    case 393u: goto L_0891197C;
    case 394u: goto L_08911984;
    case 395u: goto L_08911988;
    case 396u: goto L_089119AC;
    case 397u: goto L_08911A00;
    case 398u: goto L_08911A0C;
    case 399u: goto L_08911A1C;
    case 400u: goto L_08911A2C;
    case 401u: goto L_08911A40;
    case 402u: goto L_08911A50;
    case 403u: goto L_08911A58;
    case 404u: goto L_08911A64;
    case 405u: goto L_08911A6C;
    case 406u: goto L_08911A74;
    case 407u: goto L_08911A78;
    case 408u: goto L_08911A84;
    case 409u: goto L_08911A90;
    case 410u: goto L_08911AB4;
    case 411u: goto L_08911ACC;
    case 412u: goto L_08911AD4;
    case 413u: goto L_08911AE4;
    case 414u: goto L_08911B00;
    case 415u: goto L_08911B0C;
    case 416u: goto L_08911B2C;
    case 417u: goto L_08911B40;
    case 418u: goto L_08911B50;
    case 419u: goto L_08911B58;
    case 420u: goto L_08911B64;
    case 421u: goto L_08911B6C;
    case 422u: goto L_08911B78;
    case 423u: goto L_08911B84;
    case 424u: goto L_08911B88;
    case 425u: goto L_08911B90;
    case 426u: goto L_08911B9C;
    case 427u: goto L_08911BA0;
    case 428u: goto L_08911BA8;
    case 429u: goto L_08911BB0;
    case 430u: goto L_08911BC8;
    case 431u: goto L_08911BD8;
    case 432u: goto L_08911BDC;
    case 433u: goto L_08911BF4;
    case 434u: goto L_08911C04;
    case 435u: goto L_08911C0C;
    case 436u: goto L_08911C10;
    case 437u: goto L_08911C44;
    case 438u: goto L_08911C78;
    case 439u: goto L_08911C84;
    case 440u: goto L_08911C98;
    case 441u: goto L_08911CA8;
    case 442u: goto L_08911CB4;
    case 443u: goto L_08911CC4;
    case 444u: goto L_08911CCC;
    case 445u: goto L_08911CD8;
    case 446u: goto L_08911CE4;
    case 447u: goto L_08911CF0;
    case 448u: goto L_08911D04;
    case 449u: goto L_08911D28;
    case 450u: goto L_08911D4C;
    case 451u: goto L_08911D64;
    case 452u: goto L_08911D74;
    case 453u: goto L_08911D7C;
    case 454u: goto L_08911D80;
    case 455u: goto L_08911DA4;
    case 456u: goto L_08911DB4;
    case 457u: goto L_08911DD0;
    case 458u: goto L_08911DD8;
    case 459u: goto L_08911DE4;
    case 460u: goto L_08911DE8;
    case 461u: goto L_08911DF8;
    case 462u: goto L_08911E18;
    case 463u: goto L_08911E24;
    case 464u: goto L_08911E30;
    case 465u: goto L_08911E44;
    case 466u: goto L_08911E4C;
    case 467u: goto L_08911E58;
    case 468u: goto L_08911E5C;
    case 469u: goto L_08911E70;
    case 470u: goto L_08911E8C;
    case 471u: goto L_08911E9C;
    case 472u: goto L_08911EC8;
    case 473u: goto L_08911ED8;
    case 474u: goto L_08911EE8;
    case 475u: goto L_08911EF4;
    case 476u: goto L_08911F08;
    case 477u: goto L_08911F10;
    case 478u: goto L_08911F1C;
    case 479u: goto L_08911F28;
    case 480u: goto L_08911F3C;
    case 481u: goto L_08911F40;
    case 482u: goto L_08911F4C;
    case 483u: goto L_08911F54;
    case 484u: goto L_08911F74;
    case 485u: goto L_08911F9C;
    case 486u: goto L_08911FA8;
    case 487u: goto L_08911FB0;
    case 488u: goto L_08911FBC;
    case 489u: goto L_08911FC4;
    case 490u: goto L_08911FD8;
    case 491u: goto L_08911FEC;
    case 492u: goto L_08912004;
    case 493u: goto L_08912008;
    case 494u: goto L_08912010;
    case 495u: goto L_08912028;
    case 496u: goto L_08912034;
    case 497u: goto L_08912050;
    case 498u: goto L_08912074;
    case 499u: goto L_0891207C;
    case 500u: goto L_08912084;
    case 501u: goto L_0891209C;
    case 502u: goto L_089120A8;
    case 503u: goto L_089120B8;
    case 504u: goto L_089120C4;
    case 505u: goto L_089120CC;
    case 506u: goto L_089120E4;
    case 507u: goto L_089120F0;
    case 508u: goto L_089120F4;
    case 509u: goto L_08912108;
    case 510u: goto L_08912118;
    case 511u: goto L_0891212C;
    case 512u: goto L_08912160;
    case 513u: goto L_08912178;
    case 514u: goto L_0891218C;
    case 515u: goto L_089121B8;
    case 516u: goto L_089121D0;
    case 517u: goto L_089121D8;
    case 518u: goto L_089121E8;
    case 519u: goto L_08912200;
    case 520u: goto L_08912208;
    case 521u: goto L_08912214;
    case 522u: goto L_08912234;
    case 523u: goto L_08912240;
    case 524u: goto L_0891225C;
    case 525u: goto L_08912264;
    case 526u: goto L_08912274;
    case 527u: goto L_08912288;
    case 528u: goto L_08912294;
    case 529u: goto L_089122B0;
    case 530u: goto L_089122BC;
    case 531u: goto L_089122E4;
    case 532u: goto L_08912300;
    case 533u: goto L_08912308;
    case 534u: goto L_08912314;
    case 535u: goto L_08912324;
    case 536u: goto L_08912338;
    case 537u: goto L_0891234C;
    case 538u: goto L_08912360;
    case 539u: goto L_08912370;
    case 540u: goto L_08912378;
    case 541u: goto L_0891237C;
    case 542u: goto L_0891238C;
    case 543u: goto L_089123A0;
    case 544u: goto L_089123B0;
    case 545u: goto L_089123B8;
    case 546u: goto L_089123BC;
    case 547u: goto L_089123CC;
    case 548u: goto L_089123F4;
    case 549u: goto L_089123FC;
    case 550u: goto L_0891240C;
    case 551u: goto L_0891241C;
    case 552u: goto L_08912428;
    case 553u: goto L_08912438;
    case 554u: goto L_0891243C;
    case 555u: goto L_08912448;
    case 556u: goto L_08912464;
    case 557u: goto L_08912484;
    case 558u: goto L_08912490;
    case 559u: goto L_0891249C;
    case 560u: goto L_089124B8;
    case 561u: goto L_089124E0;
    case 562u: goto L_089124E8;
    case 563u: goto L_089124F4;
    case 564u: goto L_08912500;
    case 565u: goto L_08912518;
    case 566u: goto L_08912540;
    case 567u: goto L_08912564;
    case 568u: goto L_08912580;
    case 569u: goto L_08912594;
    case 570u: goto L_089125C0;
    case 571u: goto L_089125CC;
    case 572u: goto L_089125D8;
    case 573u: goto L_089125E0;
    case 574u: goto L_089125E4;
    case 575u: goto L_089125F8;
    case 576u: goto L_08912628;
    case 577u: goto L_08912634;
    case 578u: goto L_08912640;
    case 579u: goto L_08912650;
    case 580u: goto L_0891265C;
    case 581u: goto L_08912664;
    case 582u: goto L_08912670;
    case 583u: goto L_08912678;
    case 584u: goto L_0891268C;
    case 585u: goto L_08912690;
    case 586u: goto L_089126A8;
    case 587u: goto L_089126B4;
    case 588u: goto L_089126D8;
    case 589u: goto L_089126E8;
    case 590u: goto L_089126F4;
    case 591u: goto L_08912714;
    case 592u: goto L_0891271C;
    case 593u: goto L_08912740;
    case 594u: goto L_08912758;
    case 595u: goto L_08912768;
    case 596u: goto L_08912778;
    case 597u: goto L_08912784;
    case 598u: goto L_08912790;
    case 599u: goto L_0891279C;
    case 600u: goto L_089127B4;
    case 601u: goto L_089127BC;
    case 602u: goto L_089127D4;
    case 603u: goto L_089127DC;
    case 604u: goto L_089127F0;
    case 605u: goto L_089127FC;
    case 606u: goto L_08912804;
    case 607u: goto L_08912808;
    case 608u: goto L_08912814;
    case 609u: goto L_08912830;
    case 610u: goto L_08912848;
    case 611u: goto L_08912854;
    case 612u: goto L_08912868;
    case 613u: goto L_08912890;
    case 614u: goto L_089128A0;
    case 615u: goto L_089128C0;
    case 616u: goto L_089128C8;
    case 617u: goto L_089128D0;
    case 618u: goto L_08912924;
    case 619u: goto L_0891292C;
    case 620u: goto L_08912938;
    case 621u: goto L_08912948;
    case 622u: goto L_08912954;
    case 623u: goto L_08912960;
    case 624u: goto L_08912970;
    case 625u: goto L_08912984;
    case 626u: goto L_0891298C;
    case 627u: goto L_089129A0;
    case 628u: goto L_089129A8;
    case 629u: goto L_089129BC;
    case 630u: goto L_089129D0;
    case 631u: goto L_089129D8;
    case 632u: goto L_089129EC;
    case 633u: goto L_089129F4;
    case 634u: goto L_08912A08;
    case 635u: goto L_08912A10;
    case 636u: goto L_08912A1C;
    case 637u: goto L_08912A38;
    case 638u: goto L_08912A40;
    case 639u: goto L_08912A4C;
    case 640u: goto L_08912A5C;
    case 641u: goto L_08912A68;
    case 642u: goto L_08912A70;
    case 643u: goto L_08912A7C;
    case 644u: goto L_08912A84;
    case 645u: goto L_08912A98;
    case 646u: goto L_08912AB0;
    case 647u: goto L_08912AC4;
    case 648u: goto L_08912ADC;
    case 649u: goto L_08912AE0;
    case 650u: goto L_08912AE8;
    case 651u: goto L_08912B00;
    case 652u: goto L_08912B0C;
    case 653u: goto L_08912B14;
    case 654u: goto L_08912B1C;
    case 655u: goto L_08912B28;
    case 656u: goto L_08912B38;
    case 657u: goto L_08912B44;
    case 658u: goto L_08912B4C;
    case 659u: goto L_08912B58;
    case 660u: goto L_08912B60;
    case 661u: goto L_08912B74;
    case 662u: goto L_08912B78;
    case 663u: goto L_08912B8C;
    case 664u: goto L_08912B94;
    case 665u: goto L_08912BA0;
    case 666u: goto L_08912BB8;
    case 667u: goto L_08912BC4;
    case 668u: goto L_08912BCC;
    case 669u: goto L_08912BD4;
    case 670u: goto L_08912BE0;
    case 671u: goto L_08912BEC;
    case 672u: goto L_08912BFC;
    case 673u: goto L_08912C08;
    case 674u: goto L_08912C10;
    case 675u: goto L_08912C18;
    case 676u: goto L_08912C28;
    case 677u: goto L_08912C30;
    case 678u: goto L_08912C40;
    case 679u: goto L_08912C58;
    case 680u: goto L_08912C5C;
    case 681u: goto L_08912C64;
    case 682u: goto L_08912C7C;
    case 683u: goto L_08912C88;
    case 684u: goto L_08912C90;
    case 685u: goto L_08912C98;
    case 686u: goto L_08912CA4;
    case 687u: goto L_08912CB4;
    case 688u: goto L_08912CC0;
    case 689u: goto L_08912CC8;
    case 690u: goto L_08912CD4;
    case 691u: goto L_08912CDC;
    case 692u: goto L_08912CF0;
    case 693u: goto L_08912D0C;
    case 694u: goto L_08912D28;
    case 695u: goto L_08912D34;
    case 696u: goto L_08912D3C;
    case 697u: goto L_08912D44;
    case 698u: goto L_08912D50;
    case 699u: goto L_08912D5C;
    case 700u: goto L_08912D6C;
    case 701u: goto L_08912D78;
    case 702u: goto L_08912D80;
    case 703u: goto L_08912D88;
    case 704u: goto L_08912D98;
    case 705u: goto L_08912DB0;
    case 706u: goto L_08912DC8;
    case 707u: goto L_08912DCC;
    case 708u: goto L_08912DD4;
    case 709u: goto L_08912DEC;
    case 710u: goto L_08912DF8;
    case 711u: goto L_08912E00;
    case 712u: goto L_08912E0C;
    case 713u: goto L_08912E1C;
    case 714u: goto L_08912E28;
    case 715u: goto L_08912E30;
    case 716u: goto L_08912E3C;
    case 717u: goto L_08912E44;
    case 718u: goto L_08912E58;
    case 719u: goto L_08912E74;
    case 720u: goto L_08912E90;
    case 721u: goto L_08912E9C;
    case 722u: goto L_08912EA4;
    case 723u: goto L_08912EAC;
    case 724u: goto L_08912EB8;
    case 725u: goto L_08912EC4;
    case 726u: goto L_08912ED4;
    case 727u: goto L_08912EE0;
    case 728u: goto L_08912EE8;
    case 729u: goto L_08912EF0;
    case 730u: goto L_08912F00;
    case 731u: goto L_08912F18;
    case 732u: goto L_08912F30;
    case 733u: goto L_08912F34;
    case 734u: goto L_08912F3C;
    case 735u: goto L_08912F54;
    case 736u: goto L_08912F60;
    case 737u: goto L_08912F6C;
    case 738u: goto L_08912F74;
    case 739u: goto L_08912F80;
    case 740u: goto L_08912F88;
    case 741u: goto L_08912FB0;
    case 742u: goto L_08912FF0;
    case 743u: goto L_08912FFC;
    case 744u: goto L_08913004;
    case 745u: goto L_08913010;
    case 746u: goto L_08913018;
    case 747u: goto L_08913024;
    case 748u: goto L_08913030;
    case 749u: goto L_0891304C;
    case 750u: goto L_08913054;
    case 751u: goto L_08913060;
    case 752u: goto L_08913070;
    case 753u: goto L_0891307C;
    case 754u: goto L_08913084;
    case 755u: goto L_08913090;
    case 756u: goto L_08913098;
    case 757u: goto L_089130AC;
    case 758u: goto L_089130C4;
    case 759u: goto L_089130D8;
    case 760u: goto L_089130F0;
    case 761u: goto L_089130F4;
    case 762u: goto L_089130FC;
    case 763u: goto L_08913114;
    case 764u: goto L_08913120;
    case 765u: goto L_08913128;
    case 766u: goto L_0891314C;
    case 767u: goto L_08913154;
    case 768u: goto L_08913160;
    case 769u: goto L_08913168;
    case 770u: goto L_08913174;
    case 771u: goto L_08913180;
    case 772u: goto L_08913188;
    case 773u: goto L_08913194;
    case 774u: goto L_0891319C;
    case 775u: goto L_089131A0;
    case 776u: goto L_089131BC;
    case 777u: goto L_089131E0;
    case 778u: goto L_089131EC;
    case 779u: goto L_089131FC;
    case 780u: goto L_08913204;
    case 781u: goto L_08913214;
    case 782u: goto L_0891321C;
    case 783u: goto L_0891322C;
    case 784u: goto L_08913238;
    case 785u: goto L_08913240;
    case 786u: goto L_08913250;
    case 787u: goto L_08913258;
    case 788u: goto L_08913268;
    case 789u: goto L_08913274;
    case 790u: goto L_0891327C;
    case 791u: goto L_0891328C;
    case 792u: goto L_08913294;
    case 793u: goto L_089132A4;
    case 794u: goto L_089132AC;
    case 795u: goto L_089132B8;
    case 796u: goto L_089132C4;
    case 797u: goto L_089132CC;
    case 798u: goto L_089132D4;
    case 799u: goto L_089132E0;
    case 800u: goto L_08913304;
    case 801u: goto L_08913308;
    case 802u: goto L_08913318;
    case 803u: goto L_08913324;
    case 804u: goto L_0891332C;
    case 805u: goto L_08913348;
    case 806u: goto L_08913350;
    case 807u: goto L_0891337C;
    case 808u: goto L_08913388;
    case 809u: goto L_08913398;
    case 810u: goto L_089133A4;
    case 811u: goto L_089133AC;
    case 812u: goto L_089133B8;
    case 813u: goto L_089133C0;
    case 814u: goto L_089133D4;
    case 815u: goto L_089133E8;
    case 816u: goto L_089133F0;
    case 817u: goto L_089133F8;
    case 818u: goto L_08913408;
    case 819u: goto L_08913414;
    case 820u: goto L_0891341C;
    case 821u: goto L_08913428;
    case 822u: goto L_08913430;
    case 823u: goto L_08913448;
    case 824u: goto L_0891345C;
    case 825u: goto L_08913474;
    case 826u: goto L_08913478;
    case 827u: goto L_08913480;
    case 828u: goto L_08913498;
    case 829u: goto L_089134A4;
    case 830u: goto L_089134A8;
    case 831u: goto L_089134B4;
    case 832u: goto L_089134C0;
    case 833u: goto L_089134D0;
    case 834u: goto L_089134F4;
    case 835u: goto L_08913500;
    case 836u: goto L_08913508;
    case 837u: goto L_08913514;
    case 838u: goto L_0891351C;
    case 839u: goto L_08913524;
    case 840u: goto L_08913530;
    case 841u: goto L_08913534;
    case 842u: goto L_0891353C;
    case 843u: goto L_08913548;
    case 844u: goto L_08913550;
    case 845u: goto L_0891355C;
    case 846u: goto L_08913568;
    case 847u: goto L_08913580;
    case 848u: goto L_0891358C;
    case 849u: goto L_08913594;
    case 850u: goto L_089135A0;
    case 851u: goto L_089135A8;
    case 852u: goto L_089135BC;
    case 853u: goto L_089135D0;
    case 854u: goto L_089135DC;
    case 855u: goto L_089135E4;
    case 856u: goto L_089135EC;
    case 857u: goto L_089135FC;
    case 858u: goto L_08913624;
    case 859u: goto L_08913638;
    case 860u: goto L_08913640;
    case 861u: goto L_08913654;
    case 862u: goto L_08913664;
    case 863u: goto L_0891366C;
    case 864u: goto L_08913678;
    case 865u: goto L_08913680;
    case 866u: goto L_08913688;
    case 867u: goto L_08913694;
    case 868u: goto L_089136A0;
    case 869u: goto L_089136AC;
    case 870u: goto L_089136B8;
    case 871u: goto L_089136D0;
    case 872u: goto L_089136DC;
    case 873u: goto L_089136E4;
    case 874u: goto L_089136F0;
    case 875u: goto L_089136F8;
    case 876u: goto L_0891370C;
    case 877u: goto L_08913720;
    case 878u: goto L_0891372C;
    case 879u: goto L_08913734;
    case 880u: goto L_0891373C;
    case 881u: goto L_0891374C;
    case 882u: goto L_08913774;
    case 883u: goto L_08913788;
    case 884u: goto L_08913790;
    case 885u: goto L_089137A4;
    case 886u: goto L_089137B4;
    case 887u: goto L_089137BC;
    case 888u: goto L_089137C8;
    case 889u: goto L_089137D0;
    case 890u: goto L_089137D8;
    case 891u: goto L_089137E8;
    case 892u: goto L_089137F8;
    case 893u: goto L_08913810;
    case 894u: goto L_08913814;
    case 895u: goto L_0891381C;
    case 896u: goto L_08913834;
    case 897u: goto L_08913840;
    case 898u: goto L_0891384C;
    case 899u: goto L_08913864;
    case 900u: goto L_08913874;
    case 901u: goto L_08913888;
    case 902u: goto L_08913898;
    case 903u: goto L_089138A8;
    case 904u: goto L_089138C0;
    case 905u: goto L_089138C4;
    case 906u: goto L_089138CC;
    case 907u: goto L_089138E4;
    case 908u: goto L_089138F0;
    case 909u: goto L_089138F4;
    case 910u: goto L_08913914;
    case 911u: goto L_08913934;
    case 912u: goto L_08913940;
    case 913u: goto L_0891395C;
    case 914u: goto L_08913964;
    case 915u: goto L_08913970;
    case 916u: goto L_0891397C;
    case 917u: goto L_08913998;
    case 918u: goto L_089139B8;
    case 919u: goto L_089139C4;
    case 920u: goto L_089139D4;
    case 921u: goto L_089139E4;
    case 922u: goto L_089139E8;
    case 923u: goto L_08913A00;
    case 924u: goto L_08913A14;
    case 925u: goto L_08913A24;
    case 926u: goto L_08913A4C;
    case 927u: goto L_08913A58;
    case 928u: goto L_08913A64;
    case 929u: goto L_08913A70;
    case 930u: goto L_08913A8C;
    case 931u: goto L_08913A94;
    case 932u: goto L_08913A98;
    case 933u: goto L_08913AA8;
    case 934u: goto L_08913AB8;
    case 935u: goto L_08913AC4;
    case 936u: goto L_08913ACC;
    case 937u: goto L_08913AD8;
    case 938u: goto L_08913AE4;
    case 939u: goto L_08913AF0;
    case 940u: goto L_08913B00;
    case 941u: goto L_08913B0C;
    case 942u: goto L_08913B18;
    case 943u: goto L_08913B20;
    case 944u: goto L_08913B2C;
    case 945u: goto L_08913B34;
    case 946u: goto L_08913B50;
    case 947u: goto L_08913B90;
    case 948u: goto L_08913B9C;
    case 949u: goto L_08913BA8;
    case 950u: goto L_08913BB4;
    case 951u: goto L_08913BC8;
    case 952u: goto L_08913BD8;
    case 953u: goto L_08913BE4;
    case 954u: goto L_08913BEC;
    case 955u: goto L_08913BF8;
    case 956u: goto L_08913C14;
    case 957u: goto L_08913C2C;
    case 958u: goto L_08913C30;
    case 959u: goto L_08913C44;
    case 960u: goto L_08913C58;
    case 961u: goto L_08913C74;
    case 962u: goto L_08913C80;
    case 963u: goto L_08913C88;
    case 964u: goto L_08913C94;
    case 965u: goto L_08913C9C;
    case 966u: goto L_08913CA8;
    case 967u: goto L_08913CB0;
    case 968u: goto L_08913CD8;
    case 969u: goto L_08913CE4;
    case 970u: goto L_08913D0C;
    case 971u: goto L_08913D14;
    case 972u: goto L_08913D20;
    case 973u: goto L_08913D2C;
    case 974u: goto L_08913D40;
    case 975u: goto L_08913D44;
    case 976u: goto L_08913D50;
    case 977u: goto L_08913D64;
    case 978u: goto L_08913D7C;
    case 979u: goto L_08913D94;
    case 980u: goto L_08913D9C;
    case 981u: goto L_08913DBC;
    case 982u: goto L_08913DE0;
    case 983u: goto L_08913DE8;
    case 984u: goto L_08913DF4;
    case 985u: goto L_08913E00;
    case 986u: goto L_08913E14;
    case 987u: goto L_08913E18;
    case 988u: goto L_08913E24;
    case 989u: goto L_08913E38;
    case 990u: goto L_08913E50;
    case 991u: goto L_08913E68;
    case 992u: goto L_08913E70;
    case 993u: goto L_08913E8C;
    case 994u: goto L_08913EA4;
    case 995u: goto L_08913EB8;
    case 996u: goto L_08913ED0;
    case 997u: goto L_08913EE4;
    case 998u: goto L_08913EFC;
    case 999u: goto L_08913F10;
    case 1000u: goto L_08913F48;
    case 1001u: goto L_08913F54;
    case 1002u: goto L_08913F64;
    case 1003u: goto L_08913F6C;
    case 1004u: goto L_08913F80;
    case 1005u: goto L_08913F84;
    case 1006u: goto L_08913F90;
    case 1007u: goto L_08913F9C;
    case 1008u: goto L_08913FA8;
    case 1009u: goto L_08913FB0;
    case 1010u: goto L_08913FC0;
    case 1011u: goto L_08913FC4;
    case 1012u: goto L_08913FE0;
    case 1013u: goto L_08913FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08910000:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910024;
      }
      goto L_08910018;
    }
L_08910018:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910030;
      }
      goto L_08910024;
    }
L_08910024:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08910030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08910030u) goto L_08910030;
    return;
L_08910030:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891004Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0891004Cu) goto L_0891004C;
    return;
L_0891004C:
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
L_0891006C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089100BC;
      }
      goto L_0891009C;
    }
L_0891009C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(31, 0x089100BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089100BCu) goto L_089100BC;
    return;
L_089100BC:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
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
L_089100E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08910124;
      }
      goto L_08910100;
    }
L_08910100:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08910124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08910124u) goto L_08910124;
    return;
L_08910124:
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
L_08910144:
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
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089101E4;
      }
      goto L_0891018C;
    }
L_0891018C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x089101B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089101B0u) goto L_089101B0;
    return;
L_089101B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089101C4;
      }
      goto L_089101B8;
    }
L_089101B8:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089101E4;
      }
      goto L_089101C4;
    }
L_089101C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089101D8;
      }
      goto L_089101CC;
    }
L_089101CC:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089101E4;
      }
      goto L_089101D8;
    }
L_089101D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891023C;
      }
      goto L_089101E4;
    }
L_089101E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891018C;
      }
      goto L_089101F0;
    }
L_089101F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910208;
      }
      goto L_089101FC;
    }
L_089101FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891023C;
      }
      goto L_08910208;
    }
L_08910208:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08910224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910224u) goto L_08910224;
    return;
L_08910224:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910234;
      }
      goto L_0891022C;
    }
L_0891022C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910238;
      }
      goto L_08910234;
    }
L_08910234:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    goto L_08910238;
L_08910238:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0891023C;
L_0891023C:
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
L_08910268:
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
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910308;
      }
      goto L_089102B0;
    }
L_089102B0:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x089102D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089102D4u) goto L_089102D4;
    return;
L_089102D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089102E8;
      }
      goto L_089102DC;
    }
L_089102DC:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910308;
      }
      goto L_089102E8;
    }
L_089102E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089102FC;
      }
      goto L_089102F0;
    }
L_089102F0:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910308;
      }
      goto L_089102FC;
    }
L_089102FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910358;
      }
      goto L_08910308;
    }
L_08910308:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089102B0;
      }
      goto L_08910314;
    }
L_08910314:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891032C;
      }
      goto L_08910320;
    }
L_08910320:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910358;
      }
      goto L_0891032C;
    }
L_0891032C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08910348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910348u) goto L_08910348;
    return;
L_08910348:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08910354;
      }
      goto L_08910350;
    }
L_08910350:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08910354;
L_08910354:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08910358;
L_08910358:
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
L_08910384:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891038C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910394:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891039C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103A8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910400:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910408:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910418:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891043Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x0891043Cu) goto L_0891043C;
    return;
L_0891043C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891044Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0891044Cu) goto L_0891044C;
    return;
L_0891044C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910460:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891046C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910474:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891047C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910488:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089104ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089104ACu) goto L_089104AC;
    return;
L_089104AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089104BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13248));
    ctx.set_gpr(31, 0x089104DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089104DCu) goto L_089104DC;
    return;
L_089104DC:
    ctx.set_gpr(31, 0x089104E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089104E4u) goto L_089104E4;
    return;
L_089104E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089104F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089104F8u) goto L_089104F8;
    return;
L_089104F8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13228));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891050Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0891050Cu) goto L_0891050C;
    return;
L_0891050C:
    ctx.set_gpr(31, 0x08910514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08910514u) goto L_08910514;
    return;
L_08910514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08910538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 187u, 0x088F4F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08910538u) goto L_08910538;
    return;
L_08910538:
    ctx.set_gpr(31, 0x08910540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 165u, 0x088ECE90u>(ctx, &aot_mem) && ctx.pc == 0x08910540u) goto L_08910540;
    return;
L_08910540:
    ctx.set_gpr(31, 0x08910548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 621u, 0x088EF5C8u>(ctx, &aot_mem) && ctx.pc == 0x08910548u) goto L_08910548;
    return;
L_08910548:
    ctx.set_gpr(31, 0x08910550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 410u, 0x088F2318u>(ctx, &aot_mem) && ctx.pc == 0x08910550u) goto L_08910550;
    return;
L_08910550:
    ctx.set_gpr(31, 0x08910558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 379u, 0x088F204Cu>(ctx, &aot_mem) && ctx.pc == 0x08910558u) goto L_08910558;
    return;
L_08910558:
    ctx.set_gpr(31, 0x08910560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 344u, 0x088F1D68u>(ctx, &aot_mem) && ctx.pc == 0x08910560u) goto L_08910560;
    return;
L_08910560:
    ctx.set_gpr(31, 0x08910568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 221u, 0x088F125Cu>(ctx, &aot_mem) && ctx.pc == 0x08910568u) goto L_08910568;
    return;
L_08910568:
    ctx.set_gpr(31, 0x08910570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 499u, 0x088EA508u>(ctx, &aot_mem) && ctx.pc == 0x08910570u) goto L_08910570;
    return;
L_08910570:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08910598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 266u, 0x089492B4u>(ctx, &aot_mem) && ctx.pc == 0x08910598u) goto L_08910598;
    return;
L_08910598:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089105B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910620;
      }
      goto L_089105D4;
    }
L_089105D4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891060C;
      }
      goto L_089105E0;
    }
L_089105E0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08910608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 806u, 0x089574D8u>(ctx, &aot_mem) && ctx.pc == 0x08910608u) goto L_08910608;
    return;
L_08910608:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891060C;
L_0891060C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089105E0;
      }
      goto L_08910620;
    }
L_08910620:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891062Cu);
    // nop
    goto L_08912108;
L_0891062C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910660;
      }
      goto L_0891063C;
    }
L_0891063C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891064Cu);
    // nop
    goto L_089111DC;
L_0891064C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891065C;
      }
      goto L_08910658;
    }
L_08910658:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_0891065C;
L_0891065C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08910660;
L_08910660:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891063C;
      }
      goto L_0891066C;
    }
L_0891066C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089106A4;
      }
      goto L_08910678;
    }
L_08910678:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910688u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910688u) goto L_08910688;
    return;
L_08910688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089106A4;
      }
      goto L_08910690;
    }
L_08910690:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089106A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089106A4u) goto L_089106A4;
    return;
L_089106A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089106B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x089106B0u) goto L_089106B0;
    return;
L_089106B0:
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
L_089106CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089107E0;
      }
      goto L_089106E4;
    }
L_089106E4:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910748;
      }
      goto L_089106F8;
    }
L_089106F8:
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910728;
      }
      goto L_0891071C;
    }
L_0891071C:
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910748;
      }
      goto L_08910728;
    }
L_08910728:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910740;
      }
      goto L_08910734;
    }
L_08910734:
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910748;
      }
      goto L_08910740;
    }
L_08910740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089107A0;
      }
      goto L_08910748;
    }
L_08910748:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089106F8;
      }
      goto L_08910754;
    }
L_08910754:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910768;
      }
      goto L_0891075C;
    }
L_0891075C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089107A0;
      }
      goto L_08910768;
    }
L_08910768:
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910790;
      }
      goto L_08910784;
    }
L_08910784:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891079C;
      }
      goto L_08910790;
    }
L_08910790:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089107A0;
      }
      goto L_0891079C;
    }
L_0891079C:
    ctx.set_gpr(5, ctx.gpr[10] + 0u);
    goto L_089107A0;
L_089107A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089107D4;
      }
      goto L_089107AC;
    }
L_089107AC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089107D4;
      }
      goto L_089107C4;
    }
L_089107C4:
    ctx.set_gpr(31, 0x089107CCu);
    // nop
    goto L_08910940;
L_089107CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089107F0;
      }
      goto L_089107D4;
    }
L_089107D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089107F0;
      }
      goto L_089107E0;
    }
L_089107E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(31, 0x089107F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 391u, 0x08949B74u>(ctx, &aot_mem) && ctx.pc == 0x089107F0u) goto L_089107F0;
    return;
L_089107F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910800:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910824;
      }
      goto L_0891080C;
    }
L_0891080C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910838;
      }
      goto L_08910824;
    }
L_08910824:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    goto L_08910838;
L_08910838:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089108F8;
      }
      goto L_08910874;
    }
L_08910874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089108F8;
      }
      goto L_08910880;
    }
L_08910880:
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089108A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089108A8u) goto L_089108A8;
    return;
L_089108A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089108C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089108C0u) goto L_089108C0;
    return;
L_089108C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891091C;
      }
      goto L_089108D0;
    }
L_089108D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891091C;
      }
      goto L_089108D8;
    }
L_089108D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891091C;
      }
      goto L_089108E4;
    }
L_089108E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891091C;
      }
      goto L_089108F8;
    }
L_089108F8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891091Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891091Cu) goto L_0891091C;
    return;
L_0891091C:
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
L_08910940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089109A0;
      }
      goto L_08910960;
    }
L_08910960:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08910978u);
    // nop
    goto L_08910800;
L_08910978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910990u) goto L_08910990;
    return;
L_08910990:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089109B0;
      }
      goto L_089109A0;
    }
L_089109A0:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089109B0;
L_089109B0:
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
L_089109C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A08;
      }
      goto L_089109EC;
    }
L_089109EC:
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A08;
      }
      goto L_08910A04;
    }
L_08910A04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08910A08;
L_08910A08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A1C;
      }
      goto L_08910A10;
    }
L_08910A10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08910A1C;
L_08910A1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08910A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 841u, 0x089875B8u>(ctx, &aot_mem) && ctx.pc == 0x08910A4Cu) goto L_08910A4C;
    return;
L_08910A4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08910A84;
      }
      goto L_08910A5C;
    }
L_08910A5C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08910AE0;
      }
      goto L_08910A84;
    }
L_08910A84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910AA8;
      }
      goto L_08910A94;
    }
L_08910A94:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08910AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08910AA0u) goto L_08910AA0;
    return;
L_08910AA0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08910AA8;
L_08910AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910AC8;
      }
      goto L_08910AB0;
    }
L_08910AB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08910ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08910ABCu) goto L_08910ABC;
    return;
L_08910ABC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08910AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08910AC8u) goto L_08910AC8;
    return;
L_08910AC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08910AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08910AE0u) goto L_08910AE0;
    return;
L_08910AE0:
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
L_08910B00:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910B0C:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910ECC;
      }
      goto L_08910B54;
    }
L_08910B54:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08910B68u);
    // nop
    goto L_08910800;
L_08910B68:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08910C2C;
      }
      goto L_08910B70;
    }
L_08910B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C04;
      }
      goto L_08910B7C;
    }
L_08910B7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910BAC;
      }
      goto L_08910B88;
    }
L_08910B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910BAC;
      }
      goto L_08910BA4;
    }
L_08910BA4:
    ctx.set_gpr(31, 0x08910BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08910BACu) goto L_08910BAC;
    return;
L_08910BAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910BC4;
      }
      goto L_08910BB8;
    }
L_08910BB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08910BC4;
L_08910BC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C28;
      }
      goto L_08910BD8;
    }
L_08910BD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08910C28;
      }
      goto L_08910BE0;
    }
L_08910BE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C28;
      }
      goto L_08910BEC;
    }
L_08910BEC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C28;
      }
      goto L_08910C04;
    }
L_08910C04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910C28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910C28u) goto L_08910C28;
    return;
L_08910C28:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08910C2C;
L_08910C2C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08910C3Cu);
    // nop
    goto L_08910940;
L_08910C3C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C6C;
      }
      goto L_08910C48;
    }
L_08910C48:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08910C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08910C5Cu) goto L_08910C5C;
    return;
L_08910C5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C6C;
      }
      goto L_08910C64;
    }
L_08910C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C70;
      }
      goto L_08910C6C;
    }
L_08910C6C:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08910C70;
L_08910C70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D9C;
      }
      goto L_08910C78;
    }
L_08910C78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910C94;
      }
      goto L_08910C88;
    }
L_08910C88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08910C94;
L_08910C94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910CBC;
      }
      goto L_08910CA0;
    }
L_08910CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EC8;
      }
      goto L_08910CAC;
    }
L_08910CAC:
    ctx.set_gpr(31, 0x08910CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08910CB4u) goto L_08910CB4;
    return;
L_08910CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EC8;
      }
      goto L_08910CBC;
    }
L_08910CBC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910CCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910CCCu) goto L_08910CCC;
    return;
L_08910CCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08910CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08910CD8u) goto L_08910CD8;
    return;
L_08910CD8:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D7C;
      }
      goto L_08910CE8;
    }
L_08910CE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910CFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910CFCu) goto L_08910CFC;
    return;
L_08910CFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08910D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08910D0Cu) goto L_08910D0C;
    return;
L_08910D0C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D3C;
      }
      goto L_08910D18;
    }
L_08910D18:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08910D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08910D2Cu) goto L_08910D2C;
    return;
L_08910D2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D3C;
      }
      goto L_08910D34;
    }
L_08910D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D40;
      }
      goto L_08910D3C;
    }
L_08910D3C:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08910D40;
L_08910D40:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D78;
      }
      goto L_08910D48;
    }
L_08910D48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08910D78;
      }
      goto L_08910D64;
    }
L_08910D64:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08910D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08910D74u) goto L_08910D74;
    return;
L_08910D74:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08910D78;
L_08910D78:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08910D7C;
L_08910D7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910CE8;
      }
      goto L_08910D88;
    }
L_08910D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D9C;
      }
      goto L_08910D94;
    }
L_08910D94:
    ctx.set_gpr(31, 0x08910D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08910D9Cu) goto L_08910D9C;
    return;
L_08910D9C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08910DACu);
    // nop
    goto L_08910940;
L_08910DAC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910DDC;
      }
      goto L_08910DB8;
    }
L_08910DB8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    ctx.set_gpr(31, 0x08910DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08910DCCu) goto L_08910DCC;
    return;
L_08910DCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910DDC;
      }
      goto L_08910DD4;
    }
L_08910DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910DE0;
      }
      goto L_08910DDC;
    }
L_08910DDC:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08910DE0;
L_08910DE0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EC8;
      }
      goto L_08910DE8;
    }
L_08910DE8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910DF4;
    }
L_08910DF4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08910E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08910E08u) goto L_08910E08;
    return;
L_08910E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E18;
      }
      goto L_08910E10;
    }
L_08910E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910E1C;
      }
      goto L_08910E18;
    }
L_08910E18:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08910E1C;
L_08910E1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EC8;
      }
      goto L_08910E24;
    }
L_08910E24:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08910E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08910E3Cu) goto L_08910E3C;
    return;
L_08910E3C:
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EB8;
      }
      goto L_08910E50;
    }
L_08910E50:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(23, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08910EB4;
      }
      goto L_08910E68;
    }
L_08910E68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EA8;
      }
      goto L_08910E74;
    }
L_08910E74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910E98;
      }
      goto L_08910E90;
    }
L_08910E90:
    ctx.set_gpr(31, 0x08910E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08910E98u) goto L_08910E98;
    return;
L_08910E98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08910EA8;
L_08910EA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08910EB4;
L_08910EB4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08910EB8;
L_08910EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910E50;
      }
      goto L_08910EC8;
    }
L_08910EC8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08910ECC;
L_08910ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910B54;
      }
      goto L_08910EDC;
    }
L_08910EDC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08910F14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08910F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08910F3Cu) goto L_08910F3C;
    return;
L_08910F3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08910F4Cu);
    // nop
    goto L_08910F60;
L_08910F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08910F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08910F8Cu) goto L_08910F8C;
    return;
L_08910F8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910FE4;
      }
      goto L_08910F9C;
    }
L_08910F9C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910FC0;
      }
      goto L_08910FB8;
    }
L_08910FB8:
    ctx.set_gpr(31, 0x08910FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08910FC0u) goto L_08910FC0;
    return;
L_08910FC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08910FD0u);
    // nop
    goto L_089100E0;
L_08910FD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08910FE4;
L_08910FE4:
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
L_08910FFC:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911044;
      }
      goto L_0891103C;
    }
L_0891103C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891104C;
      }
      goto L_08911044;
    }
L_08911044:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_0891104C;
L_0891104C:
    ctx.set_gpr(31, 0x08911054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08911054u) goto L_08911054;
    return;
L_08911054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891115C;
      }
      goto L_0891105C;
    }
L_0891105C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089110C4;
      }
      goto L_08911074;
    }
L_08911074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891109Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891109Cu) goto L_0891109C;
    return;
L_0891109C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089110B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089110B4u) goto L_089110B4;
    return;
L_089110B4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089110C0;
      }
      goto L_089110BC;
    }
L_089110BC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089110C0;
L_089110C0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089110C4;
L_089110C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911074;
      }
      goto L_089110D0;
    }
L_089110D0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089110DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089110DCu) goto L_089110DC;
    return;
L_089110DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089110E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089110E8u) goto L_089110E8;
    return;
L_089110E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911100u) goto L_08911100;
    return;
L_08911100:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13196));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08911124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x08911124u) goto L_08911124;
    return;
L_08911124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891113C;
      }
      goto L_08911134;
    }
L_08911134:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891113C;
L_0891113C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08911148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08911148u) goto L_08911148;
    return;
L_08911148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891115C;
      }
      goto L_08911154;
    }
L_08911154:
    ctx.set_gpr(31, 0x0891115Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891115Cu) goto L_0891115C;
    return;
L_0891115C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891116Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x0891116Cu) goto L_0891116C;
    return;
L_0891116C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
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
L_0891119C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089111AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x089111CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x089111CCu) goto L_089111CC;
    return;
L_089111CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089111DC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911210;
      }
      goto L_089111EC;
    }
L_089111EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911210;
      }
      goto L_08911200;
    }
L_08911200:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08911210;
L_08911210:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911218:
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
          goto L_0891129C;
      }
      goto L_08911248;
    }
L_08911248:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08911298;
      }
      goto L_08911268;
    }
L_08911268:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911280u) goto L_08911280;
    return;
L_08911280:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08911298;
      }
      goto L_08911290;
    }
L_08911290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089112B4;
      }
      goto L_08911298;
    }
L_08911298:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891129C;
L_0891129C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911248;
      }
      goto L_089112B0;
    }
L_089112B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089112B4;
L_089112B4:
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
L_089112D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089112E4u);
    // nop
    goto L_089106CC;
L_089112E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089112FC;
      }
      goto L_089112F0;
    }
L_089112F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089112FC;
L_089112FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911324;
      }
      goto L_08911308;
    }
L_08911308:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911318;
      }
      goto L_08911310;
    }
L_08911310:
    ctx.set_gpr(31, 0x08911318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08911318u) goto L_08911318;
    return;
L_08911318:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911338;
      }
      goto L_08911324;
    }
L_08911324:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911334;
      }
      goto L_0891132C;
    }
L_0891132C:
    ctx.set_gpr(31, 0x08911334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08911334u) goto L_08911334;
    return;
L_08911334:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08911338;
L_08911338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911380;
      }
      goto L_08911374;
    }
L_08911374:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089114AC;
      }
      goto L_08911380;
    }
L_08911380:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911408;
      }
      goto L_08911388;
    }
L_08911388:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911398u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911398u) goto L_08911398;
    return;
L_08911398:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089113DC;
      }
      goto L_089113A4;
    }
L_089113A4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089113ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089113ACu) goto L_089113AC;
    return;
L_089113AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089113DC;
      }
      goto L_089113B4;
    }
L_089113B4:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089113C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089113C4u) goto L_089113C4;
    return;
L_089113C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089113DC;
      }
      goto L_089113D0;
    }
L_089113D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089114AC;
      }
      goto L_089113DC;
    }
L_089113DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089113F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089113F8u) goto L_089113F8;
    return;
L_089113F8:
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089114AC;
      }
      goto L_08911408;
    }
L_08911408:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911418u);
    // nop
    goto L_089112D4;
L_08911418:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08911430;
      }
      goto L_08911428;
    }
L_08911428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089114AC;
      }
      goto L_08911430;
    }
L_08911430:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911484;
      }
      goto L_08911444;
    }
L_08911444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911468u);
    // nop
    goto L_08911218;
L_08911468:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08911480;
      }
      goto L_08911478;
    }
L_08911478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089114AC;
      }
      goto L_08911480;
    }
L_08911480:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08911484;
L_08911484:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911444;
      }
      goto L_08911490;
    }
L_08911490:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089114A8u);
    // nop
    goto L_089116A0;
L_089114A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089114AC;
L_089114AC:
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
L_089114CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911554;
      }
      goto L_089114F4;
    }
L_089114F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2193u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4936));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891150Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 829u, 0x08947D24u>(ctx, &aot_mem) && ctx.pc == 0x0891150Cu) goto L_0891150C;
    return;
L_0891150C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911524u);
    // nop
    goto L_08911574;
L_08911524:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911538u);
    // nop
    goto L_08910940;
L_08911538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08911548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08911548u) goto L_08911548;
    return;
L_08911548:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911558;
      }
      goto L_08911554;
    }
L_08911554:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08911558;
L_08911558:
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
L_08911574:
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
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089115B4;
      }
      goto L_089115A8;
    }
L_089115A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911678;
      }
      goto L_089115B4;
    }
L_089115B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089115CC;
      }
      goto L_089115C0;
    }
L_089115C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911678;
      }
      goto L_089115CC;
    }
L_089115CC:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891163C;
      }
      goto L_089115DC;
    }
L_089115DC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089115F4u);
    // nop
    goto L_08910940;
L_089115F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911618;
      }
      goto L_0891160C;
    }
L_0891160C:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891163C;
      }
      goto L_08911618;
    }
L_08911618:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911630;
      }
      goto L_08911624;
    }
L_08911624:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891163C;
      }
      goto L_08911630;
    }
L_08911630:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911678;
      }
      goto L_0891163C;
    }
L_0891163C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089115DC;
      }
      goto L_08911648;
    }
L_08911648:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08911658u);
    // nop
    goto L_08910940;
L_08911658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911674;
      }
      goto L_08911670;
    }
L_08911670:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08911674;
L_08911674:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08911678;
L_08911678:
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
L_089116A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089116E4;
      }
      goto L_089116D8;
    }
L_089116D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911988;
      }
      goto L_089116E4;
    }
L_089116E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891173C;
      }
      goto L_089116F0;
    }
L_089116F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911704u);
    // nop
    goto L_08911574;
L_08911704:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891173C;
      }
      goto L_08911718;
    }
L_08911718:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911728u);
    // nop
    goto L_08910800;
L_08911728:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891173C;
      }
      goto L_08911730;
    }
L_08911730:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911988;
      }
      goto L_0891173C;
    }
L_0891173C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089117DC;
      }
      goto L_08911744;
    }
L_08911744:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911758u) goto L_08911758;
    return;
L_08911758:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(31, 0x0891176Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0891176Cu) goto L_0891176C;
    return;
L_0891176C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089117DC;
      }
      goto L_08911774;
    }
L_08911774:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08911798;
      }
      goto L_08911784;
    }
L_08911784:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911798u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911798u) goto L_08911798;
    return;
L_08911798:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089117ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089117ACu) goto L_089117AC;
    return;
L_089117AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089117DC;
      }
      goto L_089117B8;
    }
L_089117B8:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089117C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089117C4u) goto L_089117C4;
    return;
L_089117C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089117DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089117DCu) goto L_089117DC;
    return;
L_089117DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089117E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089117E8u) goto L_089117E8;
    return;
L_089117E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089117F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 162u, 0x088ECE50u>(ctx, &aot_mem) && ctx.pc == 0x089117F4u) goto L_089117F4;
    return;
L_089117F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08911818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08911818u) goto L_08911818;
    return;
L_08911818:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08911830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08911830u) goto L_08911830;
    return;
L_08911830:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911848;
      }
      goto L_08911838;
    }
L_08911838:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08911848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08911848u) goto L_08911848;
    return;
L_08911848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911868u) goto L_08911868;
    return;
L_08911868:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911940;
      }
      goto L_08911874;
    }
L_08911874:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911888u) goto L_08911888;
    return;
L_08911888:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089118D4;
      }
      goto L_0891189C;
    }
L_0891189C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089118D4;
      }
      goto L_089118A4;
    }
L_089118A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089118B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 285u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x089118B0u) goto L_089118B0;
    return;
L_089118B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089118D4;
      }
      goto L_089118B8;
    }
L_089118B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089118C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 285u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x089118C4u) goto L_089118C4;
    return;
L_089118C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089118D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x089118D0u) goto L_089118D0;
    return;
L_089118D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089118D4;
L_089118D4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089118EC;
      }
      goto L_089118DC;
    }
L_089118DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089118E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089118E8u) goto L_089118E8;
    return;
L_089118E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089118EC;
L_089118EC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911940;
      }
      goto L_089118F4;
    }
L_089118F4:
    ctx.set_gpr(31, 0x089118FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 185u, 0x0893CBACu>(ctx, &aot_mem) && ctx.pc == 0x089118FCu) goto L_089118FC;
    return;
L_089118FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911914u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911914u) goto L_08911914;
    return;
L_08911914:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911928;
      }
      goto L_08911924;
    }
L_08911924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08911928;
L_08911928:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911940u) goto L_08911940;
    return;
L_08911940:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911970;
      }
      goto L_08911948;
    }
L_08911948:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911960u) goto L_08911960;
    return;
L_08911960:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08911970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 126u, 0x08948848u>(ctx, &aot_mem) && ctx.pc == 0x08911970u) goto L_08911970;
    return;
L_08911970:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911984;
      }
      goto L_0891197C;
    }
L_0891197C:
    ctx.set_gpr(31, 0x08911984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08911984u) goto L_08911984;
    return;
L_08911984:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08911988;
L_08911988:
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
L_089119AC:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911A0C;
      }
      goto L_08911A00;
    }
L_08911A00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911C10;
      }
      goto L_08911A0C;
    }
L_08911A0C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08911A64;
      }
      goto L_08911A1C;
    }
L_08911A1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(31, 0x08911A2Cu);
    // nop
    goto L_08911574;
L_08911A2C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911A64;
      }
      goto L_08911A40;
    }
L_08911A40:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911A50u);
    // nop
    goto L_08910800;
L_08911A50:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08911A64;
      }
      goto L_08911A58;
    }
L_08911A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911C10;
      }
      goto L_08911A64;
    }
L_08911A64:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911A78;
      }
      goto L_08911A6C;
    }
L_08911A6C:
    ctx.set_gpr(31, 0x08911A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x08911A74u) goto L_08911A74;
    return;
L_08911A74:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08911A78;
L_08911A78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08911A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08911A84u) goto L_08911A84;
    return;
L_08911A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08911A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 618u, 0x088EF588u>(ctx, &aot_mem) && ctx.pc == 0x08911A90u) goto L_08911A90;
    return;
L_08911A90:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08911AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08911AB4u) goto L_08911AB4;
    return;
L_08911AB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08911ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08911ACCu) goto L_08911ACC;
    return;
L_08911ACC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911AE4;
      }
      goto L_08911AD4;
    }
L_08911AD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08911AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08911AE4u) goto L_08911AE4;
    return;
L_08911AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[23]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08911B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 871u, 0x0892B960u>(ctx, &aot_mem) && ctx.pc == 0x08911B00u) goto L_08911B00;
    return;
L_08911B00:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08911B0Cu) goto L_08911B0C;
    return;
L_08911B0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911B2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911B2Cu) goto L_08911B2C;
    return;
L_08911B2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911BF4;
      }
      goto L_08911B40;
    }
L_08911B40:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911B88;
      }
      goto L_08911B50;
    }
L_08911B50:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911B88;
      }
      goto L_08911B58;
    }
L_08911B58:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08911B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 371u, 0x08941A08u>(ctx, &aot_mem) && ctx.pc == 0x08911B64u) goto L_08911B64;
    return;
L_08911B64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911B88;
      }
      goto L_08911B6C;
    }
L_08911B6C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08911B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 371u, 0x08941A08u>(ctx, &aot_mem) && ctx.pc == 0x08911B78u) goto L_08911B78;
    return;
L_08911B78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08911B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x08911B84u) goto L_08911B84;
    return;
L_08911B84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08911B88;
L_08911B88:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911BA0;
      }
      goto L_08911B90;
    }
L_08911B90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08911B9Cu) goto L_08911B9C;
    return;
L_08911B9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08911BA0;
L_08911BA0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911BF4;
      }
      goto L_08911BA8;
    }
L_08911BA8:
    ctx.set_gpr(31, 0x08911BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 185u, 0x0893CBACu>(ctx, &aot_mem) && ctx.pc == 0x08911BB0u) goto L_08911BB0;
    return;
L_08911BB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911BC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911BC8u) goto L_08911BC8;
    return;
L_08911BC8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911BDC;
      }
      goto L_08911BD8;
    }
L_08911BD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08911BDC;
L_08911BDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911BF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911BF4u) goto L_08911BF4;
    return;
L_08911BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911C0C;
      }
      goto L_08911C04;
    }
L_08911C04:
    ctx.set_gpr(31, 0x08911C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08911C0Cu) goto L_08911C0C;
    return;
L_08911C0C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08911C10;
L_08911C10:
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
L_08911C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911C84;
      }
      goto L_08911C78;
    }
L_08911C78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911D80;
      }
      goto L_08911C84;
    }
L_08911C84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08911C98u);
    // nop
    goto L_08911574;
L_08911C98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08911CD8;
      }
      goto L_08911CA8;
    }
L_08911CA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911CD8;
      }
      goto L_08911CB4;
    }
L_08911CB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911CC4u);
    // nop
    goto L_08910800;
L_08911CC4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08911CD8;
      }
      goto L_08911CCC;
    }
L_08911CCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911D80;
      }
      goto L_08911CD8;
    }
L_08911CD8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08911CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08911CE4u) goto L_08911CE4;
    return;
L_08911CE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08911CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 184u, 0x088F4F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08911CF0u) goto L_08911CF0;
    return;
L_08911CF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08911D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08911D04u) goto L_08911D04;
    return;
L_08911D04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911D28u) goto L_08911D28;
    return;
L_08911D28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08911D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08911D4Cu) goto L_08911D4C;
    return;
L_08911D4C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08911D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08911D64u) goto L_08911D64;
    return;
L_08911D64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911D7C;
      }
      goto L_08911D74;
    }
L_08911D74:
    ctx.set_gpr(31, 0x08911D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08911D7Cu) goto L_08911D7C;
    return;
L_08911D7C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08911D80;
L_08911D80:
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
L_08911DA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08911DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08911DD0u) goto L_08911DD0;
    return;
L_08911DD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911DE4;
      }
      goto L_08911DD8;
    }
L_08911DD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911DE8;
      }
      goto L_08911DE4;
    }
L_08911DE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    goto L_08911DE8;
L_08911DE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911DF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08911E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08911E18u) goto L_08911E18;
    return;
L_08911E18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911E30;
      }
      goto L_08911E24;
    }
L_08911E24:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911E5C;
      }
      goto L_08911E30;
    }
L_08911E30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08911E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08911E44u) goto L_08911E44;
    return;
L_08911E44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911E58;
      }
      goto L_08911E4C;
    }
L_08911E4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911E5C;
      }
      goto L_08911E58;
    }
L_08911E58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08911E5C;
L_08911E5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08911E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08911E8Cu) goto L_08911E8C;
    return;
L_08911E8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911E9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08911F54;
      }
      goto L_08911EC8;
    }
L_08911EC8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F40;
      }
      goto L_08911ED8;
    }
L_08911ED8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911EE8u);
    // nop
    goto L_08910940;
L_08911EE8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F3C;
      }
      goto L_08911EF4;
    }
L_08911EF4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08911F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08911F08u) goto L_08911F08;
    return;
L_08911F08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F3C;
      }
      goto L_08911F10;
    }
L_08911F10:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F3C;
      }
      goto L_08911F1C;
    }
L_08911F1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F3C;
      }
      goto L_08911F28;
    }
L_08911F28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08911F3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911F3Cu) goto L_08911F3C;
    return;
L_08911F3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08911F40;
L_08911F40:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911ED8;
      }
      goto L_08911F4C;
    }
L_08911F4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08911F54;
L_08911F54:
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
L_08911F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911FC4;
      }
      goto L_08911F9C;
    }
L_08911F9C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08911FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08911FA8u) goto L_08911FA8;
    return;
L_08911FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911FBC;
      }
      goto L_08911FB0;
    }
L_08911FB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08911FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08911FBCu) goto L_08911FBC;
    return;
L_08911FBC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08911FC4;
L_08911FC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08911FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08911FD8u) goto L_08911FD8;
    return;
L_08911FD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912008;
      }
      goto L_08911FEC;
    }
L_08911FEC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912008;
      }
      goto L_08912004;
    }
L_08912004:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08912008;
L_08912008:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912034;
      }
      goto L_08912010;
    }
L_08912010:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912034;
      }
      goto L_08912028;
    }
L_08912028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08912034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08912034u) goto L_08912034;
    return;
L_08912034:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
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
L_08912050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089120A8;
      }
      goto L_08912074;
    }
L_08912074:
    ctx.set_gpr(31, 0x0891207Cu);
    // nop
    goto L_08911E70;
L_0891207C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089120F0;
      }
      goto L_08912084;
    }
L_08912084:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891209Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891209Cu) goto L_0891209C;
    return;
L_0891209C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089120F4;
      }
      goto L_089120A8;
    }
L_089120A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089120F0;
      }
      goto L_089120B8;
    }
L_089120B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089120F0;
      }
      goto L_089120C4;
    }
L_089120C4:
    ctx.set_gpr(31, 0x089120CCu);
    // nop
    goto L_08910940;
L_089120CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089120E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089120E4u) goto L_089120E4;
    return;
L_089120E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089120F4;
      }
      goto L_089120F0;
    }
L_089120F0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089120F4;
L_089120F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891212C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089122BC;
      }
      goto L_08912160;
    }
L_08912160:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912294;
      }
      goto L_08912178;
    }
L_08912178:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912200;
      }
      goto L_0891218C;
    }
L_0891218C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089121B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 806u, 0x089574D8u>(ctx, &aot_mem) && ctx.pc == 0x089121B8u) goto L_089121B8;
    return;
L_089121B8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089121D8;
      }
      goto L_089121D0;
    }
L_089121D0:
    ctx.set_gpr(31, 0x089121D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089121D8u) goto L_089121D8;
    return;
L_089121D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089121E8u);
    // nop
    goto L_089100E0;
L_089121E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08912200;
L_08912200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891218C;
      }
      goto L_08912208;
    }
L_08912208:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08912214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 796u, 0x08957454u>(ctx, &aot_mem) && ctx.pc == 0x08912214u) goto L_08912214;
    return;
L_08912214:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08912234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08912234u) goto L_08912234;
    return;
L_08912234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08912288;
      }
      goto L_08912240;
    }
L_08912240:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912264;
      }
      goto L_0891225C;
    }
L_0891225C:
    ctx.set_gpr(31, 0x08912264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08912264u) goto L_08912264;
    return;
L_08912264:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08912274u);
    // nop
    goto L_089100E0;
L_08912274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08912288;
L_08912288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08912294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 801u, 0x08957498u>(ctx, &aot_mem) && ctx.pc == 0x08912294u) goto L_08912294;
    return;
L_08912294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089122BC;
      }
      goto L_089122B0;
    }
L_089122B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089122BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089122BCu) goto L_089122BC;
    return;
L_089122BC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089122E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912338;
      }
      goto L_08912300;
    }
L_08912300:
    ctx.set_gpr(31, 0x08912308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08912308u) goto L_08912308;
    return;
L_08912308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08912314u) goto L_08912314;
    return;
L_08912314:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08912324u) goto L_08912324;
    return;
L_08912324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08912338u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912338u) goto L_08912338;
    return;
L_08912338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891234C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912378;
      }
      goto L_08912360;
    }
L_08912360:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08912370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912370u) goto L_08912370;
    return;
L_08912370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891237C;
      }
      goto L_08912378;
    }
L_08912378:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891237C;
L_0891237C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891238C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089123B8;
      }
      goto L_089123A0;
    }
L_089123A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089123B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089123B0u) goto L_089123B0;
    return;
L_089123B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089123BC;
      }
      goto L_089123B8;
    }
L_089123B8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089123BC;
L_089123BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089123CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13188));
    ctx.set_gpr(31, 0x089123F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089123F4u) goto L_089123F4;
    return;
L_089123F4:
    ctx.set_gpr(31, 0x089123FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089123FCu) goto L_089123FC;
    return;
L_089123FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891243C;
      }
      goto L_0891240C;
    }
L_0891240C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891241Cu);
    // nop
    goto L_08910940;
L_0891241C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912438;
      }
      goto L_08912428;
    }
L_08912428:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08912438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912438u) goto L_08912438;
    return;
L_08912438:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0891243C;
L_0891243C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891240C;
      }
      goto L_08912448;
    }
L_08912448:
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
L_08912464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08912484u);
    // nop
    goto L_0891234C;
L_08912484:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891249C;
      }
      goto L_08912490;
    }
L_08912490:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891249Cu);
    // nop
    goto L_0891238C;
L_0891249C:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
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
L_089124B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089124F4;
      }
      goto L_089124E0;
    }
L_089124E0:
    ctx.set_gpr(31, 0x089124E8u);
    // nop
    goto L_0891234C;
L_089124E8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912500;
      }
      goto L_089124F4;
    }
L_089124F4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(31, 0x08912500u);
    // nop
    goto L_0891238C;
L_08912500:
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
L_08912518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08912540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 169u, 0x088D8DA4u>(ctx, &aot_mem) && ctx.pc == 0x08912540u) goto L_08912540;
    return;
L_08912540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08912564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912564u) goto L_08912564;
    return;
L_08912564:
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
L_08912580:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13168));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089125C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089125C0u) goto L_089125C0;
    return;
L_089125C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089125E0;
      }
      goto L_089125CC;
    }
L_089125CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089125D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089125D8u) goto L_089125D8;
    return;
L_089125D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089125E4;
      }
      goto L_089125E0;
    }
L_089125E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089125E4;
L_089125E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089125F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13164));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08912628u) goto L_08912628;
    return;
L_08912628:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912640;
      }
      goto L_08912634;
    }
L_08912634:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912690;
      }
      goto L_08912640;
    }
L_08912640:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912678;
      }
      goto L_08912650;
    }
L_08912650:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891265Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891265Cu) goto L_0891265C;
    return;
L_0891265C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912670;
      }
      goto L_08912664;
    }
L_08912664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08912670u) goto L_08912670;
    return;
L_08912670:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08912678;
L_08912678:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891268Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891268Cu) goto L_0891268C;
    return;
L_0891268C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08912690;
L_08912690:
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
L_089126A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089126B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089126D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089126D8u) goto L_089126D8;
    return;
L_089126D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089126E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089126F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08912714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x08912714u) goto L_08912714;
    return;
L_08912714:
    ctx.set_gpr(31, 0x0891271Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891271Cu) goto L_0891271C;
    return;
L_0891271C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13152));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08912740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08912740u) goto L_08912740;
    return;
L_08912740:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08912758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08912758u) goto L_08912758;
    return;
L_08912758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08912768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08912768u) goto L_08912768;
    return;
L_08912768:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08912778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08912778u) goto L_08912778;
    return;
L_08912778:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912808;
      }
      goto L_08912784;
    }
L_08912784:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08912790u) goto L_08912790;
    return;
L_08912790:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891279Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0891279Cu) goto L_0891279C;
    return;
L_0891279C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089127BC;
      }
      goto L_089127B4;
    }
L_089127B4:
    ctx.set_gpr(31, 0x089127BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x089127BCu) goto L_089127BC;
    return;
L_089127BC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089127DC;
      }
      goto L_089127D4;
    }
L_089127D4:
    ctx.set_gpr(31, 0x089127DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089127DCu) goto L_089127DC;
    return;
L_089127DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089127F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089127F0u) goto L_089127F0;
    return;
L_089127F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912804;
      }
      goto L_089127FC;
    }
L_089127FC:
    ctx.set_gpr(31, 0x08912804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08912804u) goto L_08912804;
    return;
L_08912804:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08912808;
L_08912808:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912784;
      }
      goto L_08912814;
    }
L_08912814:
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
L_08912830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08912848u);
    // nop
    goto L_08913A00;
L_08912848:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x08912854u) goto L_08912854;
    return;
L_08912854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08912890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08912890u) goto L_08912890;
    return;
L_08912890:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089128A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089128C8;
      }
      goto L_089128C0;
    }
L_089128C0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089128C8;
L_089128C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089128D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A10;
      }
      goto L_08912924;
    }
L_08912924:
    ctx.set_gpr(31, 0x0891292Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891292Cu) goto L_0891292C;
    return;
L_0891292C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08912938u) goto L_08912938;
    return;
L_08912938:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08912948u) goto L_08912948;
    return;
L_08912948:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08912954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08912954u) goto L_08912954;
    return;
L_08912954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08912960u) goto L_08912960;
    return;
L_08912960:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08912970u) goto L_08912970;
    return;
L_08912970:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891298C;
      }
      goto L_08912984;
    }
L_08912984:
    ctx.set_gpr(31, 0x0891298Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0891298Cu) goto L_0891298C;
    return;
L_0891298C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089129A8;
      }
      goto L_089129A0;
    }
L_089129A0:
    ctx.set_gpr(31, 0x089129A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089129A8u) goto L_089129A8;
    return;
L_089129A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089129BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089129BCu) goto L_089129BC;
    return;
L_089129BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089129D8;
      }
      goto L_089129D0;
    }
L_089129D0:
    ctx.set_gpr(31, 0x089129D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x089129D8u) goto L_089129D8;
    return;
L_089129D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089129F4;
      }
      goto L_089129EC;
    }
L_089129EC:
    ctx.set_gpr(31, 0x089129F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089129F4u) goto L_089129F4;
    return;
L_089129F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08912A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08912A08u) goto L_08912A08;
    return;
L_08912A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912A38;
      }
      goto L_08912A10;
    }
L_08912A10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08912A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08912A1Cu) goto L_08912A1C;
    return;
L_08912A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08912A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08912A38u) goto L_08912A38;
    return;
L_08912A38:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A4C;
      }
      goto L_08912A40;
    }
L_08912A40:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912A98;
      }
      goto L_08912A4C;
    }
L_08912A4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A84;
      }
      goto L_08912A5C;
    }
L_08912A5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08912A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08912A68u) goto L_08912A68;
    return;
L_08912A68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912A7C;
      }
      goto L_08912A70;
    }
L_08912A70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08912A7Cu) goto L_08912A7C;
    return;
L_08912A7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08912A84;
L_08912A84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08912A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08912A98u) goto L_08912A98;
    return;
L_08912A98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08912AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x08912AB0u) goto L_08912AB0;
    return;
L_08912AB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912AE0;
      }
      goto L_08912AC4;
    }
L_08912AC4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912AE0;
      }
      goto L_08912ADC;
    }
L_08912ADC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08912AE0;
L_08912AE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912B0C;
      }
      goto L_08912AE8;
    }
L_08912AE8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912B0C;
      }
      goto L_08912B00;
    }
L_08912B00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08912B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08912B0Cu) goto L_08912B0C;
    return;
L_08912B0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08912C90;
      }
      goto L_08912B14;
    }
L_08912B14:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912B28;
      }
      goto L_08912B1C;
    }
L_08912B1C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912B78;
      }
      goto L_08912B28;
    }
L_08912B28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912B60;
      }
      goto L_08912B38;
    }
L_08912B38:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08912B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08912B44u) goto L_08912B44;
    return;
L_08912B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912B58;
      }
      goto L_08912B4C;
    }
L_08912B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08912B58u) goto L_08912B58;
    return;
L_08912B58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08912B60;
L_08912B60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08912B74u) goto L_08912B74;
    return;
L_08912B74:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08912B78;
L_08912B78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C30;
      }
      goto L_08912B8C;
    }
L_08912B8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08912C30;
      }
      goto L_08912B94;
    }
L_08912B94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C30;
      }
      goto L_08912BA0;
    }
L_08912BA0:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 0u < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912BCC;
      }
      goto L_08912BB8;
    }
L_08912BB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08912BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912BC4u) goto L_08912BC4;
    return;
L_08912BC4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08912BCC;
L_08912BCC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912BEC;
      }
      goto L_08912BD4;
    }
L_08912BD4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08912BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08912BE0u) goto L_08912BE0;
    return;
L_08912BE0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08912BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08912BECu) goto L_08912BEC;
    return;
L_08912BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C10;
      }
      goto L_08912BFC;
    }
L_08912BFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912C08u) goto L_08912C08;
    return;
L_08912C08:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08912C10;
L_08912C10:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C28;
      }
      goto L_08912C18;
    }
L_08912C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08912C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08912C28u) goto L_08912C28;
    return;
L_08912C28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08912C30;
L_08912C30:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C5C;
      }
      goto L_08912C40;
    }
L_08912C40:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912C5C;
      }
      goto L_08912C58;
    }
L_08912C58:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08912C5C;
L_08912C5C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F60;
      }
      goto L_08912C64;
    }
L_08912C64:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912F60;
      }
      goto L_08912C7C;
    }
L_08912C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08912C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08912C88u) goto L_08912C88;
    return;
L_08912C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F60;
      }
      goto L_08912C90;
    }
L_08912C90:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912CA4;
      }
      goto L_08912C98;
    }
L_08912C98:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912CF0;
      }
      goto L_08912CA4;
    }
L_08912CA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912CDC;
      }
      goto L_08912CB4;
    }
L_08912CB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08912CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08912CC0u) goto L_08912CC0;
    return;
L_08912CC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912CD4;
      }
      goto L_08912CC8;
    }
L_08912CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08912CD4u) goto L_08912CD4;
    return;
L_08912CD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08912CDC;
L_08912CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08912CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08912CF0u) goto L_08912CF0;
    return;
L_08912CF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08912D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08912D0Cu) goto L_08912D0C;
    return;
L_08912D0C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D3C;
      }
      goto L_08912D28;
    }
L_08912D28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08912D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912D34u) goto L_08912D34;
    return;
L_08912D34:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08912D3C;
L_08912D3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D5C;
      }
      goto L_08912D44;
    }
L_08912D44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08912D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08912D50u) goto L_08912D50;
    return;
L_08912D50:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08912D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08912D5Cu) goto L_08912D5C;
    return;
L_08912D5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D80;
      }
      goto L_08912D6C;
    }
L_08912D6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08912D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912D78u) goto L_08912D78;
    return;
L_08912D78:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08912D80;
L_08912D80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912D98;
      }
      goto L_08912D88;
    }
L_08912D88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08912D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08912D98u) goto L_08912D98;
    return;
L_08912D98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912DCC;
      }
      goto L_08912DB0;
    }
L_08912DB0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912DCC;
      }
      goto L_08912DC8;
    }
L_08912DC8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08912DCC;
L_08912DCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912DF8;
      }
      goto L_08912DD4;
    }
L_08912DD4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912DF8;
      }
      goto L_08912DEC;
    }
L_08912DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08912DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08912DF8u) goto L_08912DF8;
    return;
L_08912DF8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912E0C;
      }
      goto L_08912E00;
    }
L_08912E00:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E58;
      }
      goto L_08912E0C;
    }
L_08912E0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912E44;
      }
      goto L_08912E1C;
    }
L_08912E1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08912E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08912E28u) goto L_08912E28;
    return;
L_08912E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E3C;
      }
      goto L_08912E30;
    }
L_08912E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08912E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08912E3Cu) goto L_08912E3C;
    return;
L_08912E3C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08912E44;
L_08912E44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08912E58u) goto L_08912E58;
    return;
L_08912E58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08912E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08912E74u) goto L_08912E74;
    return;
L_08912E74:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912EA4;
      }
      goto L_08912E90;
    }
L_08912E90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08912E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912E9Cu) goto L_08912E9C;
    return;
L_08912E9C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08912EA4;
L_08912EA4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912EC4;
      }
      goto L_08912EAC;
    }
L_08912EAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08912EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08912EB8u) goto L_08912EB8;
    return;
L_08912EB8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08912EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08912EC4u) goto L_08912EC4;
    return;
L_08912EC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912EE8;
      }
      goto L_08912ED4;
    }
L_08912ED4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08912EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08912EE0u) goto L_08912EE0;
    return;
L_08912EE0:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08912EE8;
L_08912EE8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F00;
      }
      goto L_08912EF0;
    }
L_08912EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08912F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08912F00u) goto L_08912F00;
    return;
L_08912F00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F34;
      }
      goto L_08912F18;
    }
L_08912F18:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F34;
      }
      goto L_08912F30;
    }
L_08912F30:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08912F34;
L_08912F34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F60;
      }
      goto L_08912F3C;
    }
L_08912F3C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912F60;
      }
      goto L_08912F54;
    }
L_08912F54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08912F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08912F60u) goto L_08912F60;
    return;
L_08912F60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F74;
      }
      goto L_08912F6C;
    }
L_08912F6C:
    ctx.set_gpr(31, 0x08912F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08912F74u) goto L_08912F74;
    return;
L_08912F74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F88;
      }
      goto L_08912F80;
    }
L_08912F80:
    ctx.set_gpr(31, 0x08912F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08912F88u) goto L_08912F88;
    return;
L_08912F88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913024;
      }
      goto L_08912FF0;
    }
L_08912FF0:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913004;
      }
      goto L_08912FFC;
    }
L_08912FFC:
    ctx.set_gpr(31, 0x08913004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913004u) goto L_08913004;
    return;
L_08913004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913018;
      }
      goto L_08913010;
    }
L_08913010:
    ctx.set_gpr(31, 0x08913018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913018u) goto L_08913018;
    return;
L_08913018:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089131A0;
      }
      goto L_08913024;
    }
L_08913024:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08913030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08913030u) goto L_08913030;
    return;
L_08913030:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0891304Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891304Cu) goto L_0891304C;
    return;
L_0891304C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913060;
      }
      goto L_08913054;
    }
L_08913054:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089130AC;
      }
      goto L_08913060;
    }
L_08913060:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913098;
      }
      goto L_08913070;
    }
L_08913070:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891307Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891307Cu) goto L_0891307C;
    return;
L_0891307C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913090;
      }
      goto L_08913084;
    }
L_08913084:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08913090u) goto L_08913090;
    return;
L_08913090:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08913098;
L_08913098:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089130ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089130ACu) goto L_089130AC;
    return;
L_089130AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089130C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x089130C4u) goto L_089130C4;
    return;
L_089130C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089130F4;
      }
      goto L_089130D8;
    }
L_089130D8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089130F4;
      }
      goto L_089130F0;
    }
L_089130F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089130F4;
L_089130F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913120;
      }
      goto L_089130FC;
    }
L_089130FC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913120;
      }
      goto L_08913114;
    }
L_08913114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08913120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08913120u) goto L_08913120;
    return;
L_08913120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08913174;
      }
      goto L_08913128;
    }
L_08913128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913154;
      }
      goto L_0891314C;
    }
L_0891314C:
    ctx.set_gpr(31, 0x08913154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913154u) goto L_08913154;
    return;
L_08913154:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913168;
      }
      goto L_08913160;
    }
L_08913160:
    ctx.set_gpr(31, 0x08913168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913168u) goto L_08913168;
    return;
L_08913168:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089131A0;
      }
      goto L_08913174;
    }
L_08913174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913188;
      }
      goto L_08913180;
    }
L_08913180:
    ctx.set_gpr(31, 0x08913188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913188u) goto L_08913188;
    return;
L_08913188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891319C;
      }
      goto L_08913194;
    }
L_08913194:
    ctx.set_gpr(31, 0x0891319Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891319Cu) goto L_0891319C;
    return;
L_0891319C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089131A0;
L_089131A0:
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
L_089131BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089131E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089131E0u) goto L_089131E0;
    return;
L_089131E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089131ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089131ECu) goto L_089131EC;
    return;
L_089131EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089131FCu);
    // nop
    goto L_08913E8C;
L_089131FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891322C;
      }
      goto L_08913204;
    }
L_08913204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891321C;
      }
      goto L_08913214;
    }
L_08913214:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891321C;
L_0891321C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891322Cu);
    // nop
    goto L_08912868;
L_0891322C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08913238u);
    // nop
    goto L_08913EB8;
L_08913238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913268;
      }
      goto L_08913240;
    }
L_08913240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913258;
      }
      goto L_08913250;
    }
L_08913250:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08913258;
L_08913258:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08913268u);
    // nop
    goto L_08912868;
L_08913268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08913274u);
    // nop
    goto L_08913EE4;
L_08913274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089132A4;
      }
      goto L_0891327C;
    }
L_0891327C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913294;
      }
      goto L_0891328C;
    }
L_0891328C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08913294;
L_08913294:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x089132A4u);
    // nop
    goto L_08912868;
L_089132A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089132B8;
      }
      goto L_089132AC;
    }
L_089132AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089132D4;
      }
      goto L_089132B8;
    }
L_089132B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089132CC;
      }
      goto L_089132C4;
    }
L_089132C4:
    ctx.set_gpr(31, 0x089132CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089132CCu) goto L_089132CC;
    return;
L_089132CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891332C;
      }
      goto L_089132D4;
    }
L_089132D4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913308;
      }
      goto L_089132E0;
    }
L_089132E0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913304u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913304u) goto L_08913304;
    return;
L_08913304:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08913308;
L_08913308:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089132E0;
      }
      goto L_08913318;
    }
L_08913318:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891332C;
      }
      goto L_08913324;
    }
L_08913324:
    ctx.set_gpr(31, 0x0891332Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891332Cu) goto L_0891332C;
    return;
L_0891332C:
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
L_08913348:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913388;
      }
      goto L_0891337C;
    }
L_0891337C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089133D4;
      }
      goto L_08913388;
    }
L_08913388:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089133C0;
      }
      goto L_08913398;
    }
L_08913398:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089133A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089133A4u) goto L_089133A4;
    return;
L_089133A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089133B8;
      }
      goto L_089133AC;
    }
L_089133AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089133B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089133B8u) goto L_089133B8;
    return;
L_089133B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089133C0;
L_089133C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089133D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089133D4u) goto L_089133D4;
    return;
L_089133D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089133F8;
      }
      goto L_089133E8;
    }
L_089133E8:
    ctx.set_gpr(31, 0x089133F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089133F0u) goto L_089133F0;
    return;
L_089133F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089134A8;
      }
      goto L_089133F8;
    }
L_089133F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913430;
      }
      goto L_08913408;
    }
L_08913408:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08913414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08913414u) goto L_08913414;
    return;
L_08913414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913428;
      }
      goto L_0891341C;
    }
L_0891341C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08913428u) goto L_08913428;
    return;
L_08913428:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08913430;
L_08913430:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13128));
    ctx.set_gpr(31, 0x08913448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08913448u) goto L_08913448;
    return;
L_08913448:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_0891345C;
    }
L_0891345C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_08913474;
    }
L_08913474:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08913478;
L_08913478:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089134A4;
      }
      goto L_08913480;
    }
L_08913480:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089134A4;
      }
      goto L_08913498;
    }
L_08913498:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089134A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089134A4u) goto L_089134A4;
    return;
L_089134A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    goto L_089134A8;
L_089134A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089134B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089134B4u) goto L_089134B4;
    return;
L_089134B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089134C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x089134C0u) goto L_089134C0;
    return;
L_089134C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089134D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089134D0u) goto L_089134D0;
    return;
L_089134D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089134F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089134F4u) goto L_089134F4;
    return;
L_089134F4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913680;
      }
      goto L_08913500;
    }
L_08913500:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891351C;
      }
      goto L_08913508;
    }
L_08913508:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08913514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08913514u) goto L_08913514;
    return;
L_08913514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913534;
      }
      goto L_0891351C;
    }
L_0891351C:
    ctx.set_gpr(31, 0x08913524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08913524u) goto L_08913524;
    return;
L_08913524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 503u, 0x089063B8u>(ctx, &aot_mem) && ctx.pc == 0x08913530u) goto L_08913530;
    return;
L_08913530:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08913534;
L_08913534:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913680;
      }
      goto L_0891353C;
    }
L_0891353C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08913548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08913548u) goto L_08913548;
    return;
L_08913548:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913680;
      }
      goto L_08913550;
    }
L_08913550:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891355Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891355Cu) goto L_0891355C;
    return;
L_0891355C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 267u, 0x088F168Cu>(ctx, &aot_mem) && ctx.pc == 0x08913568u) goto L_08913568;
    return;
L_08913568:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089135A8;
      }
      goto L_08913580;
    }
L_08913580:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891358Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891358Cu) goto L_0891358C;
    return;
L_0891358C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089135A0;
      }
      goto L_08913594;
    }
L_08913594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089135A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089135A0u) goto L_089135A0;
    return;
L_089135A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089135A8;
L_089135A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089135BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089135BCu) goto L_089135BC;
    return;
L_089135BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089135E4;
      }
      goto L_089135D0;
    }
L_089135D0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089135DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089135DCu) goto L_089135DC;
    return;
L_089135DC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089135E4;
L_089135E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089135FC;
      }
      goto L_089135EC;
    }
L_089135EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089135FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089135FCu) goto L_089135FC;
    return;
L_089135FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913624u) goto L_08913624;
    return;
L_08913624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913640;
      }
      goto L_08913638;
    }
L_08913638:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08913640;
L_08913640:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913654u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913654u) goto L_08913654;
    return;
L_08913654:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891366C;
      }
      goto L_08913664;
    }
L_08913664:
    ctx.set_gpr(31, 0x0891366Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891366Cu) goto L_0891366C;
    return;
L_0891366C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913680;
      }
      goto L_08913678;
    }
L_08913678:
    ctx.set_gpr(31, 0x08913680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913680u) goto L_08913680;
    return;
L_08913680:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089137D0;
      }
      goto L_08913688;
    }
L_08913688:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08913694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08913694u) goto L_08913694;
    return;
L_08913694:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089136A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 267u, 0x088F168Cu>(ctx, &aot_mem) && ctx.pc == 0x089136A0u) goto L_089136A0;
    return;
L_089136A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089136ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089136ACu) goto L_089136AC;
    return;
L_089136AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089136B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 504u, 0x089063CCu>(ctx, &aot_mem) && ctx.pc == 0x089136B8u) goto L_089136B8;
    return;
L_089136B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089136F8;
      }
      goto L_089136D0;
    }
L_089136D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089136DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089136DCu) goto L_089136DC;
    return;
L_089136DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089136F0;
      }
      goto L_089136E4;
    }
L_089136E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089136F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089136F0u) goto L_089136F0;
    return;
L_089136F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089136F8;
L_089136F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891370Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891370Cu) goto L_0891370C;
    return;
L_0891370C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913734;
      }
      goto L_08913720;
    }
L_08913720:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0891372Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891372Cu) goto L_0891372C;
    return;
L_0891372C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08913734;
L_08913734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891374C;
      }
      goto L_0891373C;
    }
L_0891373C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891374Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891374Cu) goto L_0891374C;
    return;
L_0891374C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913774u) goto L_08913774;
    return;
L_08913774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913790;
      }
      goto L_08913788;
    }
L_08913788:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08913790;
L_08913790:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089137A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089137A4u) goto L_089137A4;
    return;
L_089137A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089137BC;
      }
      goto L_089137B4;
    }
L_089137B4:
    ctx.set_gpr(31, 0x089137BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089137BCu) goto L_089137BC;
    return;
L_089137BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089137D0;
      }
      goto L_089137C8;
    }
L_089137C8:
    ctx.set_gpr(31, 0x089137D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089137D0u) goto L_089137D0;
    return;
L_089137D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891384C;
      }
      goto L_089137D8;
    }
L_089137D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089137E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089137E8u) goto L_089137E8;
    return;
L_089137E8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913814;
      }
      goto L_089137F8;
    }
L_089137F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913814;
      }
      goto L_08913810;
    }
L_08913810:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08913814;
L_08913814:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913840;
      }
      goto L_0891381C;
    }
L_0891381C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913840;
      }
      goto L_08913834;
    }
L_08913834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08913840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08913840u) goto L_08913840;
    return;
L_08913840:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089138F4;
      }
      goto L_0891384C;
    }
L_0891384C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08913864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08913864u) goto L_08913864;
    return;
L_08913864:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08913874u);
    // nop
    goto L_08913CE4;
L_08913874:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913888u) goto L_08913888;
    return;
L_08913888:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08913898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08913898u) goto L_08913898;
    return;
L_08913898:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089138C4;
      }
      goto L_089138A8;
    }
L_089138A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089138C4;
      }
      goto L_089138C0;
    }
L_089138C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089138C4;
L_089138C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089138F0;
      }
      goto L_089138CC;
    }
L_089138CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089138F0;
      }
      goto L_089138E4;
    }
L_089138E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089138F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089138F0u) goto L_089138F0;
    return;
L_089138F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089138F4;
L_089138F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891397C;
      }
      goto L_08913934;
    }
L_08913934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913964;
      }
      goto L_08913940;
    }
L_08913940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913964;
      }
      goto L_0891395C;
    }
L_0891395C:
    ctx.set_gpr(31, 0x08913964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08913964u) goto L_08913964;
    return;
L_08913964:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891397C;
      }
      goto L_08913970;
    }
L_08913970:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891397Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0891397Cu) goto L_0891397C;
    return;
L_0891397C:
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
L_08913998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089139C4;
      }
      goto L_089139B8;
    }
L_089139B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089139E8;
      }
      goto L_089139C4;
    }
L_089139C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089139D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089139D4u) goto L_089139D4;
    return;
L_089139D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089139E4u);
    // nop
    goto L_08913DBC;
L_089139E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089139E8;
L_089139E8:
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
L_08913A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08913A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 565u, 0x0895A62Cu>(ctx, &aot_mem) && ctx.pc == 0x08913A14u) goto L_08913A14;
    return;
L_08913A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913A58;
      }
      goto L_08913A4C;
    }
L_08913A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08913A58;
L_08913A58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08913A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08913A64u) goto L_08913A64;
    return;
L_08913A64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 747u, 0x088F3F44u>(ctx, &aot_mem) && ctx.pc == 0x08913A70u) goto L_08913A70;
    return;
L_08913A70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913A94;
      }
      goto L_08913A8C;
    }
L_08913A8C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08913A94;
L_08913A94:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08913A98;
L_08913A98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08913AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 14u, 0x089140B0u>(ctx, &aot_mem) && ctx.pc == 0x08913AA8u) goto L_08913AA8;
    return;
L_08913AA8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08913AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08913AB8u) goto L_08913AB8;
    return;
L_08913AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913ACC;
      }
      goto L_08913AC4;
    }
L_08913AC4:
    ctx.set_gpr(31, 0x08913ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913ACCu) goto L_08913ACC;
    return;
L_08913ACC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913AE4;
      }
      goto L_08913AD8;
    }
L_08913AD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08913AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08913AE4u) goto L_08913AE4;
    return;
L_08913AE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913A98;
      }
      goto L_08913AF0;
    }
L_08913AF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913B0C;
      }
      goto L_08913B00;
    }
L_08913B00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08913B0C;
L_08913B0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913B20;
      }
      goto L_08913B18;
    }
L_08913B18:
    ctx.set_gpr(31, 0x08913B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913B20u) goto L_08913B20;
    return;
L_08913B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913B34;
      }
      goto L_08913B2C;
    }
L_08913B2C:
    ctx.set_gpr(31, 0x08913B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913B34u) goto L_08913B34;
    return;
L_08913B34:
    ctx.set_gpr(2, 0u + 0u);
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
L_08913B50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913B9C;
      }
      goto L_08913B90;
    }
L_08913B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08913B9C;
L_08913B9C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08913BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08913BA8u) goto L_08913BA8;
    return;
L_08913BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 727u, 0x088EB704u>(ctx, &aot_mem) && ctx.pc == 0x08913BB4u) goto L_08913BB4;
    return;
L_08913BB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08913BC8u);
    // nop
    goto L_08913A24;
L_08913BC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08913BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08913BD8u) goto L_08913BD8;
    return;
L_08913BD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913BEC;
      }
      goto L_08913BE4;
    }
L_08913BE4:
    ctx.set_gpr(31, 0x08913BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913BECu) goto L_08913BEC;
    return;
L_08913BEC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913C30;
      }
      goto L_08913BF8;
    }
L_08913BF8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08913C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08913C14u) goto L_08913C14;
    return;
L_08913C14:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08913C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 69u, 0x08914390u>(ctx, &aot_mem) && ctx.pc == 0x08913C2Cu) goto L_08913C2C;
    return;
L_08913C2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08913C30;
L_08913C30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913BF8;
      }
      goto L_08913C44;
    }
L_08913C44:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08913C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 579u, 0x089527FCu>(ctx, &aot_mem) && ctx.pc == 0x08913C58u) goto L_08913C58;
    return;
L_08913C58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08913C74u);
    // nop
    goto L_08913A00;
L_08913C74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913C88;
      }
      goto L_08913C80;
    }
L_08913C80:
    ctx.set_gpr(31, 0x08913C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913C88u) goto L_08913C88;
    return;
L_08913C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913C9C;
      }
      goto L_08913C94;
    }
L_08913C94:
    ctx.set_gpr(31, 0x08913C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913C9Cu) goto L_08913C9C;
    return;
L_08913C9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913CB0;
      }
      goto L_08913CA8;
    }
L_08913CA8:
    ctx.set_gpr(31, 0x08913CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08913CB0u) goto L_08913CB0;
    return;
L_08913CB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08913CD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08913D0Cu);
    // nop
    goto L_08913A00;
L_08913D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913D7C;
      }
      goto L_08913D14;
    }
L_08913D14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913D44;
      }
      goto L_08913D20;
    }
L_08913D20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08913D40;
      }
      goto L_08913D2C;
    }
L_08913D2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913D50;
      }
      goto L_08913D40;
    }
L_08913D40:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08913D44;
L_08913D44:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913D20;
      }
      goto L_08913D50;
    }
L_08913D50:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08913D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08913D64u) goto L_08913D64;
    return;
L_08913D64:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08913D7Cu) goto L_08913D7C;
    return;
L_08913D7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08913D94u);
    // nop
    goto L_08913F10;
L_08913D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913D14;
      }
      goto L_08913D9C;
    }
L_08913D9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913DBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08913DE0u);
    // nop
    goto L_08913A00;
L_08913DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E50;
      }
      goto L_08913DE8;
    }
L_08913DE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E18;
      }
      goto L_08913DF4;
    }
L_08913DF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08913E14;
      }
      goto L_08913E00;
    }
L_08913E00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913E24;
      }
      goto L_08913E14;
    }
L_08913E14:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08913E18;
L_08913E18:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913DF4;
      }
      goto L_08913E24;
    }
L_08913E24:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08913E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08913E38u) goto L_08913E38;
    return;
L_08913E38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08913E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E50u) goto L_08913E50;
    return;
L_08913E50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08913E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 2u, 0x0891400Cu>(ctx, &aot_mem) && ctx.pc == 0x08913E68u) goto L_08913E68;
    return;
L_08913E68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913DE8;
      }
      goto L_08913E70;
    }
L_08913E70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913E8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13116));
    ctx.set_gpr(31, 0x08913EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08913EA4u) goto L_08913EA4;
    return;
L_08913EA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913EB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13112));
    ctx.set_gpr(31, 0x08913ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08913ED0u) goto L_08913ED0;
    return;
L_08913ED0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13116));
    ctx.set_gpr(31, 0x08913EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08913EFCu) goto L_08913EFC;
    return;
L_08913EFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913F48u) goto L_08913F48;
    return;
L_08913F48:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913F84;
      }
      goto L_08913F54;
    }
L_08913F54:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913F6C;
      }
      goto L_08913F64;
    }
L_08913F64:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08913F6C;
L_08913F6C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08913F80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913F80u) goto L_08913F80;
    return;
L_08913F80:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08913F84;
L_08913F84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08913FB0;
      }
      goto L_08913F90;
    }
L_08913F90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08913FB0;
      }
      goto L_08913F9C;
    }
L_08913F9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08913FB0;
      }
      goto L_08913FA8;
    }
L_08913FA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913F54;
      }
      goto L_08913FB0;
    }
L_08913FB0:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913FC4;
      }
      goto L_08913FC0;
    }
L_08913FC0:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_08913FC4;
L_08913FC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913FE8;
      }
      goto L_08913FE0;
    }
L_08913FE0:
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08913FE8;
L_08913FE8:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08914000u; return;
}

void recomp_unit_0067(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0067_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_67(Runtime &runtime) {
    runtime.register_generated_unit(67u, 0x08910000u, 16384u, &recomp_unit_0067, &recomp_unit_0067_entry);
    runtime.register_function(0x08910000u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910018u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910024u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910030u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891004Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891006Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891009Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910100u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910124u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910144u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891018Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910208u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910224u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891022Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910234u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910238u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891023Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910268u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910314u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910320u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891032Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910350u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910354u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910358u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910384u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891038Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910394u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891039Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910400u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910408u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910410u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910418u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910424u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891043Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891044Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910460u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891046Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910474u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891047Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910488u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910490u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891050Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910514u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910528u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910538u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910540u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910548u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910550u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910558u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910560u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910568u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910570u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910580u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910598u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910608u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891060Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910620u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891062Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891063Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891064Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910658u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891065Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910660u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891066Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910688u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910690u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891071Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910728u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910734u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910740u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910748u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910754u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891075Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910768u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910784u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910790u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891079Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910800u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891080Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910824u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910838u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910840u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910880u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891091Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910940u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910960u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910978u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910990u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ABCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ECCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891103Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911044u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891104Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911054u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891105Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891109Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911100u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911124u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911134u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891113Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911148u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911154u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891115Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891116Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891119Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911200u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911210u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911218u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911248u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911268u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911280u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911290u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911298u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891129Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911310u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911318u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911324u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891132Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911334u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911338u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911374u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911380u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911388u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911398u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089113F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911408u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911418u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911428u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911430u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911444u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911468u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911478u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911480u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911484u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911490u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891150Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911524u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911538u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911548u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911554u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911558u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911574u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891160Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911618u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911624u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911630u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891163Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911648u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911658u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911670u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911674u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911704u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911718u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911728u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911730u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891173Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911744u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911758u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891176Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911774u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911784u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911798u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911818u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911830u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911838u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911848u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911868u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911888u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891189Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911914u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911924u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911928u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911940u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911948u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911960u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911970u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891197Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911984u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911988u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089119ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911ACCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911ED8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912004u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912008u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912010u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912028u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912034u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912050u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891207Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912084u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891209Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912108u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912118u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891212Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912160u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912178u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891218Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912200u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912208u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912214u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912234u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912240u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891225Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912264u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912274u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912288u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912294u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089122B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089122BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089122E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912300u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912314u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912324u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912338u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891234Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912360u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912370u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912378u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891237Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891238Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891240Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891241Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912428u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912438u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891243Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912448u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912464u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912484u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912490u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891249Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912500u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912518u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912540u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912564u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912580u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912594u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912628u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912640u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912650u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891265Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912664u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912670u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891268Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912690u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912714u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891271Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912740u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912758u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912768u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912778u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912784u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912790u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891279Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912804u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912808u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912814u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912830u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912848u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912854u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912868u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912890u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912924u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891292Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912938u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912948u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912954u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912960u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912970u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912984u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891298Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912ADCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912ED4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913004u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913010u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913018u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913024u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913030u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891304Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913054u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913060u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913070u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891307Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913084u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913090u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913098u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913114u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913120u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913128u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891314Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913154u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913160u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913168u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913174u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913180u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913188u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913194u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891319Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913204u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913214u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891321Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891322Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913238u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913240u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913250u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913258u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913268u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913274u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891327Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891328Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913294u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913304u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913318u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913324u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891332Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913350u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891337Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913388u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913398u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913408u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913414u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891341Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913428u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913430u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913448u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891345Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913474u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913478u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913480u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913498u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913500u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913508u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913514u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891351Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913524u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913530u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913534u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891353Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913548u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913550u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891355Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913568u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913580u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891358Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913594u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913624u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913638u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913640u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913654u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913664u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891366Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913680u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913688u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913694u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891370Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913720u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891372Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913734u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891373Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891374Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913774u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913788u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913790u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913810u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913814u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891381Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913834u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913840u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891384Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913864u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913888u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913898u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089138F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913914u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913934u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913940u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891395Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913964u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913970u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891397Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913998u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913ACCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913B9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913BF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913C9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913CE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913D9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913DF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913ED0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913EFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913F9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913FE8u, &recomp_unit_0067, "recomp_unit_0067");
}
} // namespace psprecomp
