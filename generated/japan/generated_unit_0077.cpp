#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0077[4093] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 30, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39,
    0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58,
    0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0,
    96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0,
    0, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0,
    0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0,
    153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171,
    0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0,
    209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0,
    219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228,
    0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0,
    247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265,
    0, 266, 0, 267, 0, 0, 0, 268, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0,
    276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 302, 0,
    303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311,
    0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336,
    0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 343, 0, 0, 344,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 367, 0, 368, 0,
    0, 369, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 377, 0, 378, 0, 0, 0, 0,
    379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 390, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420,
    0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428,
    0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0,
    437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442,
    0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0,
    0, 452, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 478,
    0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 485, 0, 0, 486, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0,
    0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 504,
    505, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538,
    0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 544,
    0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0,
    0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560,
    0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584,
    0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0,
    0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0,
    595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0,
    600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 608,
    0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0,
    0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0,
    0, 623, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 630, 0, 631, 0, 0, 0, 0, 0,
    632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0,
    0, 0, 0, 641, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 648, 0, 649, 0, 0, 0,
    0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0,
    0, 663, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0,
    671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0,
    0, 675, 0, 676, 677, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690,
    0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 698, 0, 699, 0, 700, 0, 0, 701,
    0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0,
    0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0,
    719, 0, 0, 0, 0, 720, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0,
    0, 0, 0, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0,
    0, 742, 0, 0, 0, 0, 743, 744, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749,
    0, 750, 0, 0, 0, 0, 0, 751, 752, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0,
    0, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 767,
    768, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 774, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0,
    0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0, 786,
    787, 0, 0, 788, 0, 0, 0, 789, 0, 790, 791, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0,
    798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805,
    0, 806, 0, 0, 0, 0, 0, 807, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0,
    0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 820, 821, 0, 0, 822, 0, 0, 0, 823, 0, 824, 825, 0, 826, 0, 827, 0, 0,
    828, 0, 829, 0, 0, 830, 0, 831, 0, 0, 832, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0,
    839, 840, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 846, 847, 0, 0, 848,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0,
    851, 0, 0, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 859, 0,
    0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 862, 863, 0, 864, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0, 0, 870, 0, 0, 0, 871, 0,
    0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 874, 0, 0, 875, 876, 0, 0, 877, 0, 878, 0, 879, 0, 0, 0, 880, 881, 0, 0,
    882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0,
    0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 890, 0, 891, 0,
    0, 892, 893, 0, 0, 894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898, 899, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 904,
    0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 909, 0, 0, 910, 911, 0, 0, 912, 0, 913, 0,
    914, 0, 915, 0, 0, 0, 916, 0, 917, 918, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0,
    0, 926, 0, 0, 0, 927, 0, 928, 0, 0, 929, 930, 0, 0, 931, 0, 932, 0, 933, 0, 0, 0, 934, 935, 0, 0, 936, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 939, 0,
    0, 0, 940, 0, 0, 941, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 944, 0, 945, 0, 0, 946, 947, 0, 0, 948,
    0, 949, 0, 950, 0, 951, 0, 0, 0, 0, 0, 0, 0, 952, 953, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 0, 958, 0, 0, 959, 0, 0, 0,
    960, 0, 0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 962, 0, 963, 0, 0, 964, 965, 0, 0, 966, 0, 967, 0, 968, 0, 969, 0, 0, 0,
    970, 0, 971, 972, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 977, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 980,
    0, 0, 0, 981, 0, 982, 0, 0, 983, 984, 0, 0, 985, 0, 986, 0, 987, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 989,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0077[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_0893800C;
    case 3u: goto L_08938018;
    case 4u: goto L_08938020;
    case 5u: goto L_08938028;
    case 6u: goto L_08938038;
    case 7u: goto L_0893804C;
    case 8u: goto L_08938058;
    case 9u: goto L_08938060;
    case 10u: goto L_0893806C;
    case 11u: goto L_08938074;
    case 12u: goto L_0893808C;
    case 13u: goto L_089380A0;
    case 14u: goto L_089380AC;
    case 15u: goto L_089380B4;
    case 16u: goto L_089380BC;
    case 17u: goto L_089380CC;
    case 18u: goto L_089380E0;
    case 19u: goto L_089380F8;
    case 20u: goto L_08938104;
    case 21u: goto L_0893810C;
    case 22u: goto L_08938118;
    case 23u: goto L_08938120;
    case 24u: goto L_08938134;
    case 25u: goto L_08938148;
    case 26u: goto L_08938154;
    case 27u: goto L_0893815C;
    case 28u: goto L_08938164;
    case 29u: goto L_08938174;
    case 30u: goto L_08938178;
    case 31u: goto L_0893818C;
    case 32u: goto L_08938198;
    case 33u: goto L_089381A8;
    case 34u: goto L_089381B4;
    case 35u: goto L_089381BC;
    case 36u: goto L_089381C8;
    case 37u: goto L_089381D0;
    case 38u: goto L_089381E8;
    case 39u: goto L_089381FC;
    case 40u: goto L_08938208;
    case 41u: goto L_08938210;
    case 42u: goto L_08938218;
    case 43u: goto L_08938228;
    case 44u: goto L_08938234;
    case 45u: goto L_0893824C;
    case 46u: goto L_08938258;
    case 47u: goto L_08938260;
    case 48u: goto L_0893826C;
    case 49u: goto L_08938274;
    case 50u: goto L_08938288;
    case 51u: goto L_0893829C;
    case 52u: goto L_089382A8;
    case 53u: goto L_089382B0;
    case 54u: goto L_089382B8;
    case 55u: goto L_089382C8;
    case 56u: goto L_089382E0;
    case 57u: goto L_089382EC;
    case 58u: goto L_089382FC;
    case 59u: goto L_08938308;
    case 60u: goto L_08938310;
    case 61u: goto L_0893831C;
    case 62u: goto L_08938324;
    case 63u: goto L_0893833C;
    case 64u: goto L_08938350;
    case 65u: goto L_0893835C;
    case 66u: goto L_08938364;
    case 67u: goto L_0893836C;
    case 68u: goto L_0893837C;
    case 69u: goto L_08938388;
    case 70u: goto L_089383A0;
    case 71u: goto L_089383AC;
    case 72u: goto L_089383B4;
    case 73u: goto L_089383C0;
    case 74u: goto L_089383C8;
    case 75u: goto L_089383DC;
    case 76u: goto L_089383F0;
    case 77u: goto L_089383FC;
    case 78u: goto L_08938404;
    case 79u: goto L_0893840C;
    case 80u: goto L_0893841C;
    case 81u: goto L_08938434;
    case 82u: goto L_08938440;
    case 83u: goto L_08938450;
    case 84u: goto L_0893845C;
    case 85u: goto L_08938464;
    case 86u: goto L_08938470;
    case 87u: goto L_08938478;
    case 88u: goto L_08938490;
    case 89u: goto L_089384A4;
    case 90u: goto L_089384B0;
    case 91u: goto L_089384B8;
    case 92u: goto L_089384C0;
    case 93u: goto L_089384D0;
    case 94u: goto L_089384DC;
    case 95u: goto L_089384F4;
    case 96u: goto L_08938500;
    case 97u: goto L_08938508;
    case 98u: goto L_08938514;
    case 99u: goto L_0893851C;
    case 100u: goto L_08938530;
    case 101u: goto L_08938544;
    case 102u: goto L_08938550;
    case 103u: goto L_08938558;
    case 104u: goto L_08938560;
    case 105u: goto L_08938570;
    case 106u: goto L_08938588;
    case 107u: goto L_08938594;
    case 108u: goto L_089385A4;
    case 109u: goto L_089385B0;
    case 110u: goto L_089385B8;
    case 111u: goto L_089385C4;
    case 112u: goto L_089385CC;
    case 113u: goto L_089385E4;
    case 114u: goto L_089385F8;
    case 115u: goto L_08938604;
    case 116u: goto L_0893860C;
    case 117u: goto L_08938614;
    case 118u: goto L_08938624;
    case 119u: goto L_08938630;
    case 120u: goto L_08938648;
    case 121u: goto L_08938654;
    case 122u: goto L_0893865C;
    case 123u: goto L_08938668;
    case 124u: goto L_08938670;
    case 125u: goto L_08938684;
    case 126u: goto L_08938698;
    case 127u: goto L_089386A4;
    case 128u: goto L_089386AC;
    case 129u: goto L_089386B4;
    case 130u: goto L_089386C4;
    case 131u: goto L_089386DC;
    case 132u: goto L_089386E8;
    case 133u: goto L_089386F8;
    case 134u: goto L_08938704;
    case 135u: goto L_0893870C;
    case 136u: goto L_08938718;
    case 137u: goto L_08938720;
    case 138u: goto L_08938738;
    case 139u: goto L_0893874C;
    case 140u: goto L_08938758;
    case 141u: goto L_08938760;
    case 142u: goto L_08938768;
    case 143u: goto L_08938778;
    case 144u: goto L_08938784;
    case 145u: goto L_0893879C;
    case 146u: goto L_089387A8;
    case 147u: goto L_089387B0;
    case 148u: goto L_089387BC;
    case 149u: goto L_089387C4;
    case 150u: goto L_089387D8;
    case 151u: goto L_089387EC;
    case 152u: goto L_089387F8;
    case 153u: goto L_08938800;
    case 154u: goto L_08938808;
    case 155u: goto L_08938818;
    case 156u: goto L_08938830;
    case 157u: goto L_0893883C;
    case 158u: goto L_0893884C;
    case 159u: goto L_08938858;
    case 160u: goto L_08938860;
    case 161u: goto L_0893886C;
    case 162u: goto L_08938874;
    case 163u: goto L_0893888C;
    case 164u: goto L_089388A0;
    case 165u: goto L_089388AC;
    case 166u: goto L_089388B4;
    case 167u: goto L_089388BC;
    case 168u: goto L_089388CC;
    case 169u: goto L_089388D8;
    case 170u: goto L_089388F0;
    case 171u: goto L_089388FC;
    case 172u: goto L_08938904;
    case 173u: goto L_08938910;
    case 174u: goto L_08938918;
    case 175u: goto L_0893892C;
    case 176u: goto L_08938940;
    case 177u: goto L_0893894C;
    case 178u: goto L_08938954;
    case 179u: goto L_0893895C;
    case 180u: goto L_0893896C;
    case 181u: goto L_08938984;
    case 182u: goto L_08938990;
    case 183u: goto L_089389A0;
    case 184u: goto L_089389AC;
    case 185u: goto L_089389B4;
    case 186u: goto L_089389C0;
    case 187u: goto L_089389C8;
    case 188u: goto L_089389E0;
    case 189u: goto L_089389F4;
    case 190u: goto L_08938A00;
    case 191u: goto L_08938A08;
    case 192u: goto L_08938A10;
    case 193u: goto L_08938A20;
    case 194u: goto L_08938A2C;
    case 195u: goto L_08938A44;
    case 196u: goto L_08938A50;
    case 197u: goto L_08938A58;
    case 198u: goto L_08938A64;
    case 199u: goto L_08938A6C;
    case 200u: goto L_08938A80;
    case 201u: goto L_08938A94;
    case 202u: goto L_08938AA0;
    case 203u: goto L_08938AA8;
    case 204u: goto L_08938AB0;
    case 205u: goto L_08938AC0;
    case 206u: goto L_08938AD8;
    case 207u: goto L_08938AE4;
    case 208u: goto L_08938AF4;
    case 209u: goto L_08938B00;
    case 210u: goto L_08938B08;
    case 211u: goto L_08938B14;
    case 212u: goto L_08938B1C;
    case 213u: goto L_08938B34;
    case 214u: goto L_08938B48;
    case 215u: goto L_08938B54;
    case 216u: goto L_08938B5C;
    case 217u: goto L_08938B64;
    case 218u: goto L_08938B74;
    case 219u: goto L_08938B80;
    case 220u: goto L_08938B98;
    case 221u: goto L_08938BA4;
    case 222u: goto L_08938BAC;
    case 223u: goto L_08938BB8;
    case 224u: goto L_08938BC0;
    case 225u: goto L_08938BD4;
    case 226u: goto L_08938BE8;
    case 227u: goto L_08938BF4;
    case 228u: goto L_08938BFC;
    case 229u: goto L_08938C04;
    case 230u: goto L_08938C14;
    case 231u: goto L_08938C2C;
    case 232u: goto L_08938C38;
    case 233u: goto L_08938C48;
    case 234u: goto L_08938C54;
    case 235u: goto L_08938C5C;
    case 236u: goto L_08938C68;
    case 237u: goto L_08938C70;
    case 238u: goto L_08938C88;
    case 239u: goto L_08938C9C;
    case 240u: goto L_08938CA8;
    case 241u: goto L_08938CB0;
    case 242u: goto L_08938CB8;
    case 243u: goto L_08938CC8;
    case 244u: goto L_08938CD4;
    case 245u: goto L_08938CEC;
    case 246u: goto L_08938CF8;
    case 247u: goto L_08938D00;
    case 248u: goto L_08938D0C;
    case 249u: goto L_08938D14;
    case 250u: goto L_08938D28;
    case 251u: goto L_08938D3C;
    case 252u: goto L_08938D48;
    case 253u: goto L_08938D50;
    case 254u: goto L_08938D58;
    case 255u: goto L_08938D68;
    case 256u: goto L_08938D80;
    case 257u: goto L_08938D8C;
    case 258u: goto L_08938D9C;
    case 259u: goto L_08938DA8;
    case 260u: goto L_08938DB0;
    case 261u: goto L_08938DBC;
    case 262u: goto L_08938DC4;
    case 263u: goto L_08938DDC;
    case 264u: goto L_08938DF0;
    case 265u: goto L_08938DFC;
    case 266u: goto L_08938E04;
    case 267u: goto L_08938E0C;
    case 268u: goto L_08938E1C;
    case 269u: goto L_08938E20;
    case 270u: goto L_08938E30;
    case 271u: goto L_08938E3C;
    case 272u: goto L_08938E48;
    case 273u: goto L_08938E58;
    case 274u: goto L_08938E68;
    case 275u: goto L_08938E74;
    case 276u: goto L_08938E80;
    case 277u: goto L_08938E8C;
    case 278u: goto L_08938E94;
    case 279u: goto L_08938E9C;
    case 280u: goto L_08938EA8;
    case 281u: goto L_08938EC4;
    case 282u: goto L_08938EC8;
    case 283u: goto L_08938EF8;
    case 284u: goto L_08938F18;
    case 285u: goto L_08938F24;
    case 286u: goto L_08938F30;
    case 287u: goto L_08938F3C;
    case 288u: goto L_08938F44;
    case 289u: goto L_08938F54;
    case 290u: goto L_08938F68;
    case 291u: goto L_08938F74;
    case 292u: goto L_08938F94;
    case 293u: goto L_08938FA4;
    case 294u: goto L_08939030;
    case 295u: goto L_08939038;
    case 296u: goto L_08939044;
    case 297u: goto L_08939048;
    case 298u: goto L_08939054;
    case 299u: goto L_0893905C;
    case 300u: goto L_08939068;
    case 301u: goto L_08939074;
    case 302u: goto L_08939078;
    case 303u: goto L_08939080;
    case 304u: goto L_08939088;
    case 305u: goto L_08939094;
    case 306u: goto L_0893909C;
    case 307u: goto L_089390A8;
    case 308u: goto L_089390BC;
    case 309u: goto L_089390D8;
    case 310u: goto L_089390E0;
    case 311u: goto L_089390FC;
    case 312u: goto L_08939104;
    case 313u: goto L_08939118;
    case 314u: goto L_08939134;
    case 315u: goto L_0893913C;
    case 316u: goto L_08939148;
    case 317u: goto L_08939164;
    case 318u: goto L_0893916C;
    case 319u: goto L_0893917C;
    case 320u: goto L_08939198;
    case 321u: goto L_089391A0;
    case 322u: goto L_089391B0;
    case 323u: goto L_089391CC;
    case 324u: goto L_089391D4;
    case 325u: goto L_089391E4;
    case 326u: goto L_089391EC;
    case 327u: goto L_08939200;
    case 328u: goto L_08939210;
    case 329u: goto L_0893921C;
    case 330u: goto L_08939224;
    case 331u: goto L_08939230;
    case 332u: goto L_08939244;
    case 333u: goto L_08939254;
    case 334u: goto L_0893925C;
    case 335u: goto L_08939274;
    case 336u: goto L_0893927C;
    case 337u: goto L_08939290;
    case 338u: goto L_0893929C;
    case 339u: goto L_089392B0;
    case 340u: goto L_089392C0;
    case 341u: goto L_089392D4;
    case 342u: goto L_089392EC;
    case 343u: goto L_089392F0;
    case 344u: goto L_089392FC;
    case 345u: goto L_08939308;
    case 346u: goto L_08939320;
    case 347u: goto L_0893932C;
    case 348u: goto L_08939340;
    case 349u: goto L_08939350;
    case 350u: goto L_08939358;
    case 351u: goto L_08939360;
    case 352u: goto L_0893936C;
    case 353u: goto L_08939378;
    case 354u: goto L_08939394;
    case 355u: goto L_089393B0;
    case 356u: goto L_089393CC;
    case 357u: goto L_089393D8;
    case 358u: goto L_089393E4;
    case 359u: goto L_089393EC;
    case 360u: goto L_08939400;
    case 361u: goto L_0893940C;
    case 362u: goto L_08939418;
    case 363u: goto L_08939440;
    case 364u: goto L_0893944C;
    case 365u: goto L_08939454;
    case 366u: goto L_0893946C;
    case 367u: goto L_08939470;
    case 368u: goto L_08939478;
    case 369u: goto L_08939484;
    case 370u: goto L_08939488;
    case 371u: goto L_08939490;
    case 372u: goto L_089394AC;
    case 373u: goto L_089394B4;
    case 374u: goto L_089394C0;
    case 375u: goto L_089394CC;
    case 376u: goto L_089394E0;
    case 377u: goto L_089394E4;
    case 378u: goto L_089394EC;
    case 379u: goto L_08939500;
    case 380u: goto L_0893950C;
    case 381u: goto L_08939520;
    case 382u: goto L_08939530;
    case 383u: goto L_08939538;
    case 384u: goto L_08939540;
    case 385u: goto L_0893954C;
    case 386u: goto L_08939558;
    case 387u: goto L_08939560;
    case 388u: goto L_0893956C;
    case 389u: goto L_08939574;
    case 390u: goto L_08939578;
    case 391u: goto L_08939584;
    case 392u: goto L_089395A0;
    case 393u: goto L_089395AC;
    case 394u: goto L_089395B8;
    case 395u: goto L_089395C4;
    case 396u: goto L_089395CC;
    case 397u: goto L_089395E8;
    case 398u: goto L_089395F4;
    case 399u: goto L_08939610;
    case 400u: goto L_0893961C;
    case 401u: goto L_08939628;
    case 402u: goto L_08939630;
    case 403u: goto L_08939644;
    case 404u: goto L_08939650;
    case 405u: goto L_08939664;
    case 406u: goto L_08939670;
    case 407u: goto L_08939678;
    case 408u: goto L_08939684;
    case 409u: goto L_08939690;
    case 410u: goto L_089396A0;
    case 411u: goto L_089396B8;
    case 412u: goto L_089396C4;
    case 413u: goto L_089396D0;
    case 414u: goto L_089396F0;
    case 415u: goto L_08939708;
    case 416u: goto L_08939724;
    case 417u: goto L_08939744;
    case 418u: goto L_08939758;
    case 419u: goto L_0893976C;
    case 420u: goto L_0893977C;
    case 421u: goto L_08939784;
    case 422u: goto L_0893979C;
    case 423u: goto L_089397A4;
    case 424u: goto L_089397C0;
    case 425u: goto L_089397C8;
    case 426u: goto L_089397DC;
    case 427u: goto L_089397E8;
    case 428u: goto L_089397FC;
    case 429u: goto L_08939804;
    case 430u: goto L_0893981C;
    case 431u: goto L_08939828;
    case 432u: goto L_08939834;
    case 433u: goto L_08939848;
    case 434u: goto L_0893985C;
    case 435u: goto L_08939864;
    case 436u: goto L_08939878;
    case 437u: goto L_08939880;
    case 438u: goto L_0893989C;
    case 439u: goto L_089398BC;
    case 440u: goto L_089398D4;
    case 441u: goto L_089398E8;
    case 442u: goto L_089398FC;
    case 443u: goto L_08939904;
    case 444u: goto L_08939918;
    case 445u: goto L_08939920;
    case 446u: goto L_08939928;
    case 447u: goto L_0893993C;
    case 448u: goto L_08939944;
    case 449u: goto L_08939958;
    case 450u: goto L_08939960;
    case 451u: goto L_08939978;
    case 452u: goto L_08939984;
    case 453u: goto L_08939988;
    case 454u: goto L_08939994;
    case 455u: goto L_0893999C;
    case 456u: goto L_089399B0;
    case 457u: goto L_089399CC;
    case 458u: goto L_089399E4;
    case 459u: goto L_089399FC;
    case 460u: goto L_08939A18;
    case 461u: goto L_08939A34;
    case 462u: goto L_08939A40;
    case 463u: goto L_08939A4C;
    case 464u: goto L_08939A54;
    case 465u: goto L_08939A68;
    case 466u: goto L_08939A6C;
    case 467u: goto L_08939AA0;
    case 468u: goto L_08939AD8;
    case 469u: goto L_08939AE4;
    case 470u: goto L_08939AEC;
    case 471u: goto L_08939B1C;
    case 472u: goto L_08939B30;
    case 473u: goto L_08939B3C;
    case 474u: goto L_08939B44;
    case 475u: goto L_08939B58;
    case 476u: goto L_08939B60;
    case 477u: goto L_08939B74;
    case 478u: goto L_08939B7C;
    case 479u: goto L_08939B90;
    case 480u: goto L_08939B98;
    case 481u: goto L_08939BB0;
    case 482u: goto L_08939BBC;
    case 483u: goto L_08939BC8;
    case 484u: goto L_08939BDC;
    case 485u: goto L_08939BE0;
    case 486u: goto L_08939BEC;
    case 487u: goto L_08939C00;
    case 488u: goto L_08939C18;
    case 489u: goto L_08939C34;
    case 490u: goto L_08939C40;
    case 491u: goto L_08939C48;
    case 492u: goto L_08939C50;
    case 493u: goto L_08939C5C;
    case 494u: goto L_08939C70;
    case 495u: goto L_08939C78;
    case 496u: goto L_08939C8C;
    case 497u: goto L_08939C98;
    case 498u: goto L_08939CA0;
    case 499u: goto L_08939CB0;
    case 500u: goto L_08939CB8;
    case 501u: goto L_08939CD0;
    case 502u: goto L_08939CDC;
    case 503u: goto L_08939CE8;
    case 504u: goto L_08939CFC;
    case 505u: goto L_08939D00;
    case 506u: goto L_08939D0C;
    case 507u: goto L_08939D20;
    case 508u: goto L_08939D38;
    case 509u: goto L_08939D54;
    case 510u: goto L_08939D60;
    case 511u: goto L_08939D64;
    case 512u: goto L_08939D88;
    case 513u: goto L_08939DB4;
    case 514u: goto L_08939DC0;
    case 515u: goto L_08939DE8;
    case 516u: goto L_08939E04;
    case 517u: goto L_08939E18;
    case 518u: goto L_08939E28;
    case 519u: goto L_08939E48;
    case 520u: goto L_08939E54;
    case 521u: goto L_08939E68;
    case 522u: goto L_08939E70;
    case 523u: goto L_08939E88;
    case 524u: goto L_08939EA8;
    case 525u: goto L_08939EB4;
    case 526u: goto L_08939EC0;
    case 527u: goto L_08939EDC;
    case 528u: goto L_08939EE4;
    case 529u: goto L_08939EF0;
    case 530u: goto L_08939EF8;
    case 531u: goto L_08939F04;
    case 532u: goto L_08939F24;
    case 533u: goto L_08939F2C;
    case 534u: goto L_08939F40;
    case 535u: goto L_08939F48;
    case 536u: goto L_08939F5C;
    case 537u: goto L_08939F68;
    case 538u: goto L_08939F7C;
    case 539u: goto L_08939FA0;
    case 540u: goto L_08939FC0;
    case 541u: goto L_08939FDC;
    case 542u: goto L_08939FE8;
    case 543u: goto L_08939FF8;
    case 544u: goto L_08939FFC;
    case 545u: goto L_0893A020;
    case 546u: goto L_0893A04C;
    case 547u: goto L_0893A058;
    case 548u: goto L_0893A064;
    case 549u: goto L_0893A070;
    case 550u: goto L_0893A0D0;
    case 551u: goto L_0893A0DC;
    case 552u: goto L_0893A0EC;
    case 553u: goto L_0893A0F8;
    case 554u: goto L_0893A10C;
    case 555u: goto L_0893A118;
    case 556u: goto L_0893A140;
    case 557u: goto L_0893A14C;
    case 558u: goto L_0893A15C;
    case 559u: goto L_0893A168;
    case 560u: goto L_0893A17C;
    case 561u: goto L_0893A1A0;
    case 562u: goto L_0893A1AC;
    case 563u: goto L_0893A1D4;
    case 564u: goto L_0893A1E0;
    case 565u: goto L_0893A208;
    case 566u: goto L_0893A214;
    case 567u: goto L_0893A23C;
    case 568u: goto L_0893A248;
    case 569u: goto L_0893A270;
    case 570u: goto L_0893A27C;
    case 571u: goto L_0893A2A4;
    case 572u: goto L_0893A2B0;
    case 573u: goto L_0893A2D8;
    case 574u: goto L_0893A2E4;
    case 575u: goto L_0893A314;
    case 576u: goto L_0893A338;
    case 577u: goto L_0893A344;
    case 578u: goto L_0893A36C;
    case 579u: goto L_0893A378;
    case 580u: goto L_0893A3A0;
    case 581u: goto L_0893A3B4;
    case 582u: goto L_0893A3C4;
    case 583u: goto L_0893A3E8;
    case 584u: goto L_0893A3FC;
    case 585u: goto L_0893A40C;
    case 586u: goto L_0893A430;
    case 587u: goto L_0893A444;
    case 588u: goto L_0893A454;
    case 589u: goto L_0893A478;
    case 590u: goto L_0893A484;
    case 591u: goto L_0893A4A8;
    case 592u: goto L_0893A4B4;
    case 593u: goto L_0893A4DC;
    case 594u: goto L_0893A4F0;
    case 595u: goto L_0893A500;
    case 596u: goto L_0893A524;
    case 597u: goto L_0893A538;
    case 598u: goto L_0893A548;
    case 599u: goto L_0893A56C;
    case 600u: goto L_0893A580;
    case 601u: goto L_0893A590;
    case 602u: goto L_0893A59C;
    case 603u: goto L_0893A5A8;
    case 604u: goto L_0893A5BC;
    case 605u: goto L_0893A5D0;
    case 606u: goto L_0893A5D8;
    case 607u: goto L_0893A5F4;
    case 608u: goto L_0893A5FC;
    case 609u: goto L_0893A608;
    case 610u: goto L_0893A61C;
    case 611u: goto L_0893A630;
    case 612u: goto L_0893A648;
    case 613u: goto L_0893A664;
    case 614u: goto L_0893A670;
    case 615u: goto L_0893A684;
    case 616u: goto L_0893A694;
    case 617u: goto L_0893A6AC;
    case 618u: goto L_0893A6B0;
    case 619u: goto L_0893A6B8;
    case 620u: goto L_0893A6D0;
    case 621u: goto L_0893A6DC;
    case 622u: goto L_0893A6EC;
    case 623u: goto L_0893A704;
    case 624u: goto L_0893A708;
    case 625u: goto L_0893A710;
    case 626u: goto L_0893A728;
    case 627u: goto L_0893A734;
    case 628u: goto L_0893A744;
    case 629u: goto L_0893A75C;
    case 630u: goto L_0893A760;
    case 631u: goto L_0893A768;
    case 632u: goto L_0893A780;
    case 633u: goto L_0893A78C;
    case 634u: goto L_0893A79C;
    case 635u: goto L_0893A7B4;
    case 636u: goto L_0893A7B8;
    case 637u: goto L_0893A7C0;
    case 638u: goto L_0893A7D8;
    case 639u: goto L_0893A7E4;
    case 640u: goto L_0893A7F4;
    case 641u: goto L_0893A80C;
    case 642u: goto L_0893A810;
    case 643u: goto L_0893A818;
    case 644u: goto L_0893A830;
    case 645u: goto L_0893A83C;
    case 646u: goto L_0893A84C;
    case 647u: goto L_0893A864;
    case 648u: goto L_0893A868;
    case 649u: goto L_0893A870;
    case 650u: goto L_0893A888;
    case 651u: goto L_0893A894;
    case 652u: goto L_0893A8BC;
    case 653u: goto L_0893A8D4;
    case 654u: goto L_0893A8E4;
    case 655u: goto L_0893A90C;
    case 656u: goto L_0893A918;
    case 657u: goto L_0893A920;
    case 658u: goto L_0893A92C;
    case 659u: goto L_0893A938;
    case 660u: goto L_0893A944;
    case 661u: goto L_0893A95C;
    case 662u: goto L_0893A974;
    case 663u: goto L_0893A984;
    case 664u: goto L_0893A98C;
    case 665u: goto L_0893A998;
    case 666u: goto L_0893A9A4;
    case 667u: goto L_0893A9B4;
    case 668u: goto L_0893A9D0;
    case 669u: goto L_0893A9D8;
    case 670u: goto L_0893A9E4;
    case 671u: goto L_0893AA00;
    case 672u: goto L_0893AA0C;
    case 673u: goto L_0893AA48;
    case 674u: goto L_0893AA60;
    case 675u: goto L_0893AA84;
    case 676u: goto L_0893AA8C;
    case 677u: goto L_0893AA90;
    case 678u: goto L_0893AA9C;
    case 679u: goto L_0893AAA4;
    case 680u: goto L_0893AAB0;
    case 681u: goto L_0893AB44;
    case 682u: goto L_0893AB50;
    case 683u: goto L_0893AB68;
    case 684u: goto L_0893AB78;
    case 685u: goto L_0893AB90;
    case 686u: goto L_0893ABA8;
    case 687u: goto L_0893ABB0;
    case 688u: goto L_0893ABB4;
    case 689u: goto L_0893ABC0;
    case 690u: goto L_0893ABFC;
    case 691u: goto L_0893AC04;
    case 692u: goto L_0893AC0C;
    case 693u: goto L_0893AC20;
    case 694u: goto L_0893AC2C;
    case 695u: goto L_0893AC34;
    case 696u: goto L_0893AC48;
    case 697u: goto L_0893AC5C;
    case 698u: goto L_0893AC60;
    case 699u: goto L_0893AC68;
    case 700u: goto L_0893AC70;
    case 701u: goto L_0893AC7C;
    case 702u: goto L_0893AC84;
    case 703u: goto L_0893ACA4;
    case 704u: goto L_0893ACAC;
    case 705u: goto L_0893ACB4;
    case 706u: goto L_0893ACB8;
    case 707u: goto L_0893ACE0;
    case 708u: goto L_0893ACF8;
    case 709u: goto L_0893AD04;
    case 710u: goto L_0893AD10;
    case 711u: goto L_0893AD18;
    case 712u: goto L_0893AD2C;
    case 713u: goto L_0893AD34;
    case 714u: goto L_0893AD48;
    case 715u: goto L_0893AD54;
    case 716u: goto L_0893AD60;
    case 717u: goto L_0893AD6C;
    case 718u: goto L_0893AD74;
    case 719u: goto L_0893AD80;
    case 720u: goto L_0893AD94;
    case 721u: goto L_0893AD98;
    case 722u: goto L_0893ADA0;
    case 723u: goto L_0893ADB8;
    case 724u: goto L_0893ADEC;
    case 725u: goto L_0893ADF8;
    case 726u: goto L_0893AE20;
    case 727u: goto L_0893AE2C;
    case 728u: goto L_0893AE38;
    case 729u: goto L_0893AE5C;
    case 730u: goto L_0893AE70;
    case 731u: goto L_0893AE78;
    case 732u: goto L_0893AE90;
    case 733u: goto L_0893AE9C;
    case 734u: goto L_0893AEA4;
    case 735u: goto L_0893AEB8;
    case 736u: goto L_0893AEC0;
    case 737u: goto L_0893AEC8;
    case 738u: goto L_0893AED0;
    case 739u: goto L_0893AEE4;
    case 740u: goto L_0893AEEC;
    case 741u: goto L_0893AEF8;
    case 742u: goto L_0893AF04;
    case 743u: goto L_0893AF18;
    case 744u: goto L_0893AF1C;
    case 745u: goto L_0893AF28;
    case 746u: goto L_0893AF3C;
    case 747u: goto L_0893AF54;
    case 748u: goto L_0893AF70;
    case 749u: goto L_0893AF7C;
    case 750u: goto L_0893AF84;
    case 751u: goto L_0893AF9C;
    case 752u: goto L_0893AFA0;
    case 753u: goto L_0893AFAC;
    case 754u: goto L_0893AFB4;
    case 755u: goto L_0893AFC0;
    case 756u: goto L_0893AFCC;
    case 757u: goto L_0893AFF0;
    case 758u: goto L_0893B004;
    case 759u: goto L_0893B00C;
    case 760u: goto L_0893B024;
    case 761u: goto L_0893B030;
    case 762u: goto L_0893B038;
    case 763u: goto L_0893B048;
    case 764u: goto L_0893B050;
    case 765u: goto L_0893B05C;
    case 766u: goto L_0893B068;
    case 767u: goto L_0893B07C;
    case 768u: goto L_0893B080;
    case 769u: goto L_0893B08C;
    case 770u: goto L_0893B0A0;
    case 771u: goto L_0893B0B8;
    case 772u: goto L_0893B0D4;
    case 773u: goto L_0893B0E0;
    case 774u: goto L_0893B0E4;
    case 775u: goto L_0893B0F0;
    case 776u: goto L_0893B120;
    case 777u: goto L_0893B150;
    case 778u: goto L_0893B164;
    case 779u: goto L_0893B188;
    case 780u: goto L_0893B198;
    case 781u: goto L_0893B1A4;
    case 782u: goto L_0893B1B4;
    case 783u: goto L_0893B1D8;
    case 784u: goto L_0893B1E8;
    case 785u: goto L_0893B1F0;
    case 786u: goto L_0893B1FC;
    case 787u: goto L_0893B200;
    case 788u: goto L_0893B20C;
    case 789u: goto L_0893B21C;
    case 790u: goto L_0893B224;
    case 791u: goto L_0893B228;
    case 792u: goto L_0893B230;
    case 793u: goto L_0893B238;
    case 794u: goto L_0893B240;
    case 795u: goto L_0893B24C;
    case 796u: goto L_0893B260;
    case 797u: goto L_0893B268;
    case 798u: goto L_0893B280;
    case 799u: goto L_0893B294;
    case 800u: goto L_0893B2A8;
    case 801u: goto L_0893B2AC;
    case 802u: goto L_0893B2B8;
    case 803u: goto L_0893B2C4;
    case 804u: goto L_0893B2E8;
    case 805u: goto L_0893B2FC;
    case 806u: goto L_0893B304;
    case 807u: goto L_0893B31C;
    case 808u: goto L_0893B320;
    case 809u: goto L_0893B32C;
    case 810u: goto L_0893B35C;
    case 811u: goto L_0893B38C;
    case 812u: goto L_0893B3A0;
    case 813u: goto L_0893B3C4;
    case 814u: goto L_0893B3D4;
    case 815u: goto L_0893B3E0;
    case 816u: goto L_0893B3F0;
    case 817u: goto L_0893B414;
    case 818u: goto L_0893B424;
    case 819u: goto L_0893B42C;
    case 820u: goto L_0893B438;
    case 821u: goto L_0893B43C;
    case 822u: goto L_0893B448;
    case 823u: goto L_0893B458;
    case 824u: goto L_0893B460;
    case 825u: goto L_0893B464;
    case 826u: goto L_0893B46C;
    case 827u: goto L_0893B474;
    case 828u: goto L_0893B480;
    case 829u: goto L_0893B488;
    case 830u: goto L_0893B494;
    case 831u: goto L_0893B49C;
    case 832u: goto L_0893B4A8;
    case 833u: goto L_0893B4B0;
    case 834u: goto L_0893B4C4;
    case 835u: goto L_0893B4D0;
    case 836u: goto L_0893B4DC;
    case 837u: goto L_0893B4E4;
    case 838u: goto L_0893B4F8;
    case 839u: goto L_0893B500;
    case 840u: goto L_0893B504;
    case 841u: goto L_0893B510;
    case 842u: goto L_0893B528;
    case 843u: goto L_0893B540;
    case 844u: goto L_0893B54C;
    case 845u: goto L_0893B554;
    case 846u: goto L_0893B56C;
    case 847u: goto L_0893B570;
    case 848u: goto L_0893B57C;
    case 849u: goto L_0893B5A8;
    case 850u: goto L_0893B5E8;
    case 851u: goto L_0893B600;
    case 852u: goto L_0893B610;
    case 853u: goto L_0893B618;
    case 854u: goto L_0893B624;
    case 855u: goto L_0893B634;
    case 856u: goto L_0893B644;
    case 857u: goto L_0893B658;
    case 858u: goto L_0893B670;
    case 859u: goto L_0893B678;
    case 860u: goto L_0893B688;
    case 861u: goto L_0893B6A4;
    case 862u: goto L_0893B6B0;
    case 863u: goto L_0893B6B4;
    case 864u: goto L_0893B6BC;
    case 865u: goto L_0893B6C8;
    case 866u: goto L_0893B6F4;
    case 867u: goto L_0893B728;
    case 868u: goto L_0893B74C;
    case 869u: goto L_0893B75C;
    case 870u: goto L_0893B768;
    case 871u: goto L_0893B778;
    case 872u: goto L_0893B79C;
    case 873u: goto L_0893B7AC;
    case 874u: goto L_0893B7B4;
    case 875u: goto L_0893B7C0;
    case 876u: goto L_0893B7C4;
    case 877u: goto L_0893B7D0;
    case 878u: goto L_0893B7D8;
    case 879u: goto L_0893B7E0;
    case 880u: goto L_0893B7F0;
    case 881u: goto L_0893B7F4;
    case 882u: goto L_0893B800;
    case 883u: goto L_0893B828;
    case 884u: goto L_0893B86C;
    case 885u: goto L_0893B890;
    case 886u: goto L_0893B8A0;
    case 887u: goto L_0893B8AC;
    case 888u: goto L_0893B8BC;
    case 889u: goto L_0893B8E0;
    case 890u: goto L_0893B8F0;
    case 891u: goto L_0893B8F8;
    case 892u: goto L_0893B904;
    case 893u: goto L_0893B908;
    case 894u: goto L_0893B914;
    case 895u: goto L_0893B91C;
    case 896u: goto L_0893B924;
    case 897u: goto L_0893B92C;
    case 898u: goto L_0893B94C;
    case 899u: goto L_0893B950;
    case 900u: goto L_0893B95C;
    case 901u: goto L_0893B98C;
    case 902u: goto L_0893B9C8;
    case 903u: goto L_0893B9EC;
    case 904u: goto L_0893B9FC;
    case 905u: goto L_0893BA08;
    case 906u: goto L_0893BA18;
    case 907u: goto L_0893BA3C;
    case 908u: goto L_0893BA4C;
    case 909u: goto L_0893BA54;
    case 910u: goto L_0893BA60;
    case 911u: goto L_0893BA64;
    case 912u: goto L_0893BA70;
    case 913u: goto L_0893BA78;
    case 914u: goto L_0893BA80;
    case 915u: goto L_0893BA88;
    case 916u: goto L_0893BA98;
    case 917u: goto L_0893BAA0;
    case 918u: goto L_0893BAA4;
    case 919u: goto L_0893BAB0;
    case 920u: goto L_0893BADC;
    case 921u: goto L_0893BB10;
    case 922u: goto L_0893BB34;
    case 923u: goto L_0893BB44;
    case 924u: goto L_0893BB50;
    case 925u: goto L_0893BB60;
    case 926u: goto L_0893BB84;
    case 927u: goto L_0893BB94;
    case 928u: goto L_0893BB9C;
    case 929u: goto L_0893BBA8;
    case 930u: goto L_0893BBAC;
    case 931u: goto L_0893BBB8;
    case 932u: goto L_0893BBC0;
    case 933u: goto L_0893BBC8;
    case 934u: goto L_0893BBD8;
    case 935u: goto L_0893BBDC;
    case 936u: goto L_0893BBE8;
    case 937u: goto L_0893BC10;
    case 938u: goto L_0893BC54;
    case 939u: goto L_0893BC78;
    case 940u: goto L_0893BC88;
    case 941u: goto L_0893BC94;
    case 942u: goto L_0893BCA4;
    case 943u: goto L_0893BCC8;
    case 944u: goto L_0893BCD8;
    case 945u: goto L_0893BCE0;
    case 946u: goto L_0893BCEC;
    case 947u: goto L_0893BCF0;
    case 948u: goto L_0893BCFC;
    case 949u: goto L_0893BD04;
    case 950u: goto L_0893BD0C;
    case 951u: goto L_0893BD14;
    case 952u: goto L_0893BD34;
    case 953u: goto L_0893BD38;
    case 954u: goto L_0893BD44;
    case 955u: goto L_0893BD74;
    case 956u: goto L_0893BDB0;
    case 957u: goto L_0893BDD4;
    case 958u: goto L_0893BDE4;
    case 959u: goto L_0893BDF0;
    case 960u: goto L_0893BE00;
    case 961u: goto L_0893BE24;
    case 962u: goto L_0893BE34;
    case 963u: goto L_0893BE3C;
    case 964u: goto L_0893BE48;
    case 965u: goto L_0893BE4C;
    case 966u: goto L_0893BE58;
    case 967u: goto L_0893BE60;
    case 968u: goto L_0893BE68;
    case 969u: goto L_0893BE70;
    case 970u: goto L_0893BE80;
    case 971u: goto L_0893BE88;
    case 972u: goto L_0893BE8C;
    case 973u: goto L_0893BE98;
    case 974u: goto L_0893BEC4;
    case 975u: goto L_0893BF08;
    case 976u: goto L_0893BF2C;
    case 977u: goto L_0893BF3C;
    case 978u: goto L_0893BF48;
    case 979u: goto L_0893BF58;
    case 980u: goto L_0893BF7C;
    case 981u: goto L_0893BF8C;
    case 982u: goto L_0893BF94;
    case 983u: goto L_0893BFA0;
    case 984u: goto L_0893BFA4;
    case 985u: goto L_0893BFB0;
    case 986u: goto L_0893BFB8;
    case 987u: goto L_0893BFC0;
    case 988u: goto L_0893BFD4;
    case 989u: goto L_0893BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938000:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938020;
      }
      goto L_0893800C;
    }
L_0893800C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08938018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938018u) goto L_08938018;
    return;
L_08938018:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938020;
L_08938020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938038;
      }
      goto L_08938028;
    }
L_08938028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938038u) goto L_08938038;
    return;
L_08938038:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938074;
      }
      goto L_0893804C;
    }
L_0893804C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938058u) goto L_08938058;
    return;
L_08938058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893806C;
      }
      goto L_08938060;
    }
L_08938060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893806Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893806Cu) goto L_0893806C;
    return;
L_0893806C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938074;
L_08938074:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5940));
    ctx.set_gpr(31, 0x0893808Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893808Cu) goto L_0893808C;
    return;
L_0893808C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089380B4;
      }
      goto L_089380A0;
    }
L_089380A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089380ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089380ACu) goto L_089380AC;
    return;
L_089380AC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089380B4;
L_089380B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089380CC;
      }
      goto L_089380BC;
    }
L_089380BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089380CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089380CCu) goto L_089380CC;
    return;
L_089380CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938178;
      }
      goto L_089380E0;
    }
L_089380E0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938120;
      }
      goto L_089380F8;
    }
L_089380F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938104u) goto L_08938104;
    return;
L_08938104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938118;
      }
      goto L_0893810C;
    }
L_0893810C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938118u) goto L_08938118;
    return;
L_08938118:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938120;
L_08938120:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938134u) goto L_08938134;
    return;
L_08938134:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893815C;
      }
      goto L_08938148;
    }
L_08938148:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08938154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938154u) goto L_08938154;
    return;
L_08938154:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893815C;
L_0893815C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938174;
      }
      goto L_08938164;
    }
L_08938164:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938174u) goto L_08938174;
    return;
L_08938174:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    goto L_08938178;
L_08938178:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938198;
      }
      goto L_0893818C;
    }
L_0893818C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938198;
    }
L_08938198:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089381D0;
      }
      goto L_089381A8;
    }
L_089381A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089381B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089381B4u) goto L_089381B4;
    return;
L_089381B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089381C8;
      }
      goto L_089381BC;
    }
L_089381BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089381C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089381C8u) goto L_089381C8;
    return;
L_089381C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089381D0;
L_089381D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x089381E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089381E8u) goto L_089381E8;
    return;
L_089381E8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938210;
      }
      goto L_089381FC;
    }
L_089381FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938208u) goto L_08938208;
    return;
L_08938208:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938210;
L_08938210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938228;
      }
      goto L_08938218;
    }
L_08938218:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938228u) goto L_08938228;
    return;
L_08938228:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938234;
    }
L_08938234:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938274;
      }
      goto L_0893824C;
    }
L_0893824C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938258u) goto L_08938258;
    return;
L_08938258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893826C;
      }
      goto L_08938260;
    }
L_08938260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893826Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893826Cu) goto L_0893826C;
    return;
L_0893826C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938274;
L_08938274:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938288u) goto L_08938288;
    return;
L_08938288:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089382B0;
      }
      goto L_0893829C;
    }
L_0893829C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089382A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089382A8u) goto L_089382A8;
    return;
L_089382A8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089382B0;
L_089382B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089382C8;
      }
      goto L_089382B8;
    }
L_089382B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089382C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089382C8u) goto L_089382C8;
    return;
L_089382C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089382EC;
      }
      goto L_089382E0;
    }
L_089382E0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_089382EC;
    }
L_089382EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938324;
      }
      goto L_089382FC;
    }
L_089382FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938308u) goto L_08938308;
    return;
L_08938308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893831C;
      }
      goto L_08938310;
    }
L_08938310:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893831Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893831Cu) goto L_0893831C;
    return;
L_0893831C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938324;
L_08938324:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x0893833Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893833Cu) goto L_0893833C;
    return;
L_0893833C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_08938350;
    }
L_08938350:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0893835Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893835Cu) goto L_0893835C;
    return;
L_0893835C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938364;
L_08938364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893837C;
      }
      goto L_0893836C;
    }
L_0893836C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893837Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893837Cu) goto L_0893837C;
    return;
L_0893837C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938388;
    }
L_08938388:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6740)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089383C8;
      }
      goto L_089383A0;
    }
L_089383A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089383ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089383ACu) goto L_089383AC;
    return;
L_089383AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089383C0;
      }
      goto L_089383B4;
    }
L_089383B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089383C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089383C0u) goto L_089383C0;
    return;
L_089383C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089383C8;
L_089383C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089383DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089383DCu) goto L_089383DC;
    return;
L_089383DC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938404;
      }
      goto L_089383F0;
    }
L_089383F0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089383FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089383FCu) goto L_089383FC;
    return;
L_089383FC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938404;
L_08938404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893841C;
      }
      goto L_0893840C;
    }
L_0893840C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893841Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893841Cu) goto L_0893841C;
    return;
L_0893841C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938440;
      }
      goto L_08938434;
    }
L_08938434:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938440;
    }
L_08938440:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938478;
      }
      goto L_08938450;
    }
L_08938450:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0893845Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0893845Cu) goto L_0893845C;
    return;
L_0893845C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938470;
      }
      goto L_08938464;
    }
L_08938464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938470u) goto L_08938470;
    return;
L_08938470:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938478;
L_08938478:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08938490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938490u) goto L_08938490;
    return;
L_08938490:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089384B8;
      }
      goto L_089384A4;
    }
L_089384A4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089384B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089384B0u) goto L_089384B0;
    return;
L_089384B0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089384B8;
L_089384B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089384D0;
      }
      goto L_089384C0;
    }
L_089384C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089384D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089384D0u) goto L_089384D0;
    return;
L_089384D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_089384DC;
    }
L_089384DC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6736)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893851C;
      }
      goto L_089384F4;
    }
L_089384F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938500u) goto L_08938500;
    return;
L_08938500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938514;
      }
      goto L_08938508;
    }
L_08938508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938514u) goto L_08938514;
    return;
L_08938514:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0893851C;
L_0893851C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938530u) goto L_08938530;
    return;
L_08938530:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938558;
      }
      goto L_08938544;
    }
L_08938544:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08938550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938550u) goto L_08938550;
    return;
L_08938550:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938558;
L_08938558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938570;
      }
      goto L_08938560;
    }
L_08938560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938570u) goto L_08938570;
    return;
L_08938570:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938594;
      }
      goto L_08938588;
    }
L_08938588:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938594;
    }
L_08938594:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089385CC;
      }
      goto L_089385A4;
    }
L_089385A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089385B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089385B0u) goto L_089385B0;
    return;
L_089385B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089385C4;
      }
      goto L_089385B8;
    }
L_089385B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089385C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089385C4u) goto L_089385C4;
    return;
L_089385C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089385CC;
L_089385CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x089385E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089385E4u) goto L_089385E4;
    return;
L_089385E4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893860C;
      }
      goto L_089385F8;
    }
L_089385F8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938604u) goto L_08938604;
    return;
L_08938604:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0893860C;
L_0893860C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938624;
      }
      goto L_08938614;
    }
L_08938614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938624u) goto L_08938624;
    return;
L_08938624:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938630;
    }
L_08938630:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6732)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938670;
      }
      goto L_08938648;
    }
L_08938648:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938654u) goto L_08938654;
    return;
L_08938654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938668;
      }
      goto L_0893865C;
    }
L_0893865C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938668u) goto L_08938668;
    return;
L_08938668:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938670;
L_08938670:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938684u) goto L_08938684;
    return;
L_08938684:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089386AC;
      }
      goto L_08938698;
    }
L_08938698:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089386A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089386A4u) goto L_089386A4;
    return;
L_089386A4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089386AC;
L_089386AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089386C4;
      }
      goto L_089386B4;
    }
L_089386B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089386C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089386C4u) goto L_089386C4;
    return;
L_089386C4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089386E8;
      }
      goto L_089386DC;
    }
L_089386DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_089386E8;
    }
L_089386E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938720;
      }
      goto L_089386F8;
    }
L_089386F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938704u) goto L_08938704;
    return;
L_08938704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938718;
      }
      goto L_0893870C;
    }
L_0893870C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938718u) goto L_08938718;
    return;
L_08938718:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938720;
L_08938720:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08938738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938738u) goto L_08938738;
    return;
L_08938738:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938760;
      }
      goto L_0893874C;
    }
L_0893874C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938758u) goto L_08938758;
    return;
L_08938758:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938760;
L_08938760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938778;
      }
      goto L_08938768;
    }
L_08938768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938778u) goto L_08938778;
    return;
L_08938778:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938784;
    }
L_08938784:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6724)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089387C4;
      }
      goto L_0893879C;
    }
L_0893879C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089387A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089387A8u) goto L_089387A8;
    return;
L_089387A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089387BC;
      }
      goto L_089387B0;
    }
L_089387B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089387BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089387BCu) goto L_089387BC;
    return;
L_089387BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089387C4;
L_089387C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089387D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089387D8u) goto L_089387D8;
    return;
L_089387D8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938800;
      }
      goto L_089387EC;
    }
L_089387EC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089387F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089387F8u) goto L_089387F8;
    return;
L_089387F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938800;
L_08938800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938818;
      }
      goto L_08938808;
    }
L_08938808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938818u) goto L_08938818;
    return;
L_08938818:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893883C;
      }
      goto L_08938830;
    }
L_08938830:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_0893883C;
    }
L_0893883C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938874;
      }
      goto L_0893884C;
    }
L_0893884C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938858u) goto L_08938858;
    return;
L_08938858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893886C;
      }
      goto L_08938860;
    }
L_08938860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893886Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0893886Cu) goto L_0893886C;
    return;
L_0893886C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938874;
L_08938874:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x0893888Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893888Cu) goto L_0893888C;
    return;
L_0893888C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089388B4;
      }
      goto L_089388A0;
    }
L_089388A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089388ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089388ACu) goto L_089388AC;
    return;
L_089388AC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089388B4;
L_089388B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089388CC;
      }
      goto L_089388BC;
    }
L_089388BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089388CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089388CCu) goto L_089388CC;
    return;
L_089388CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_089388D8;
    }
L_089388D8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6736)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938918;
      }
      goto L_089388F0;
    }
L_089388F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089388FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089388FCu) goto L_089388FC;
    return;
L_089388FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938910;
      }
      goto L_08938904;
    }
L_08938904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938910u) goto L_08938910;
    return;
L_08938910:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938918;
L_08938918:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893892Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0893892Cu) goto L_0893892C;
    return;
L_0893892C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938954;
      }
      goto L_08938940;
    }
L_08938940:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0893894Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0893894Cu) goto L_0893894C;
    return;
L_0893894C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938954;
L_08938954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893896C;
      }
      goto L_0893895C;
    }
L_0893895C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0893896Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0893896Cu) goto L_0893896C;
    return;
L_0893896C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938990;
      }
      goto L_08938984;
    }
L_08938984:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938990;
    }
L_08938990:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089389C8;
      }
      goto L_089389A0;
    }
L_089389A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089389ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089389ACu) goto L_089389AC;
    return;
L_089389AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089389C0;
      }
      goto L_089389B4;
    }
L_089389B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089389C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089389C0u) goto L_089389C0;
    return;
L_089389C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089389C8;
L_089389C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x089389E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089389E0u) goto L_089389E0;
    return;
L_089389E0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A08;
      }
      goto L_089389F4;
    }
L_089389F4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938A00u) goto L_08938A00;
    return;
L_08938A00:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938A08;
L_08938A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A20;
      }
      goto L_08938A10;
    }
L_08938A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938A20u) goto L_08938A20;
    return;
L_08938A20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938A2C;
    }
L_08938A2C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6736)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938A6C;
      }
      goto L_08938A44;
    }
L_08938A44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938A50u) goto L_08938A50;
    return;
L_08938A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A64;
      }
      goto L_08938A58;
    }
L_08938A58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938A64u) goto L_08938A64;
    return;
L_08938A64:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938A6C;
L_08938A6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938A80u) goto L_08938A80;
    return;
L_08938A80:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AA8;
      }
      goto L_08938A94;
    }
L_08938A94:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08938AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938AA0u) goto L_08938AA0;
    return;
L_08938AA0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938AA8;
L_08938AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AC0;
      }
      goto L_08938AB0;
    }
L_08938AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938AC0u) goto L_08938AC0;
    return;
L_08938AC0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AE4;
      }
      goto L_08938AD8;
    }
L_08938AD8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938AE4;
    }
L_08938AE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938B1C;
      }
      goto L_08938AF4;
    }
L_08938AF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938B00u) goto L_08938B00;
    return;
L_08938B00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B14;
      }
      goto L_08938B08;
    }
L_08938B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938B14u) goto L_08938B14;
    return;
L_08938B14:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938B1C;
L_08938B1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08938B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938B34u) goto L_08938B34;
    return;
L_08938B34:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B5C;
      }
      goto L_08938B48;
    }
L_08938B48:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938B54u) goto L_08938B54;
    return;
L_08938B54:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938B5C;
L_08938B5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B74;
      }
      goto L_08938B64;
    }
L_08938B64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938B74u) goto L_08938B74;
    return;
L_08938B74:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938B80;
    }
L_08938B80:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938BC0;
      }
      goto L_08938B98;
    }
L_08938B98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938BA4u) goto L_08938BA4;
    return;
L_08938BA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938BB8;
      }
      goto L_08938BAC;
    }
L_08938BAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938BB8u) goto L_08938BB8;
    return;
L_08938BB8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938BC0;
L_08938BC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938BD4u) goto L_08938BD4;
    return;
L_08938BD4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938BFC;
      }
      goto L_08938BE8;
    }
L_08938BE8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08938BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938BF4u) goto L_08938BF4;
    return;
L_08938BF4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938BFC;
L_08938BFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938C14;
      }
      goto L_08938C04;
    }
L_08938C04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938C14u) goto L_08938C14;
    return;
L_08938C14:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938C38;
      }
      goto L_08938C2C;
    }
L_08938C2C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938C38;
    }
L_08938C38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938C70;
      }
      goto L_08938C48;
    }
L_08938C48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938C54u) goto L_08938C54;
    return;
L_08938C54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938C68;
      }
      goto L_08938C5C;
    }
L_08938C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938C68u) goto L_08938C68;
    return;
L_08938C68:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938C70;
L_08938C70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08938C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938C88u) goto L_08938C88;
    return;
L_08938C88:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938CB0;
      }
      goto L_08938C9C;
    }
L_08938C9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938CA8u) goto L_08938CA8;
    return;
L_08938CA8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938CB0;
L_08938CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938CC8;
      }
      goto L_08938CB8;
    }
L_08938CB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938CC8u) goto L_08938CC8;
    return;
L_08938CC8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938CD4;
    }
L_08938CD4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-6760)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938D14;
      }
      goto L_08938CEC;
    }
L_08938CEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938CF8u) goto L_08938CF8;
    return;
L_08938CF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D0C;
      }
      goto L_08938D00;
    }
L_08938D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938D0Cu) goto L_08938D0C;
    return;
L_08938D0C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938D14;
L_08938D14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08938D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938D28u) goto L_08938D28;
    return;
L_08938D28:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D50;
      }
      goto L_08938D3C;
    }
L_08938D3C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08938D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938D48u) goto L_08938D48;
    return;
L_08938D48:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938D50;
L_08938D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D68;
      }
      goto L_08938D58;
    }
L_08938D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938D68u) goto L_08938D68;
    return;
L_08938D68:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D8C;
      }
      goto L_08938D80;
    }
L_08938D80:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E20;
      }
      goto L_08938D8C;
    }
L_08938D8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938DC4;
      }
      goto L_08938D9C;
    }
L_08938D9C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08938DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08938DA8u) goto L_08938DA8;
    return;
L_08938DA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938DBC;
      }
      goto L_08938DB0;
    }
L_08938DB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08938DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08938DBCu) goto L_08938DBC;
    return;
L_08938DBC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08938DC4;
L_08938DC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08938DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08938DDCu) goto L_08938DDC;
    return;
L_08938DDC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E04;
      }
      goto L_08938DF0;
    }
L_08938DF0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08938DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08938DFCu) goto L_08938DFC;
    return;
L_08938DFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08938E04;
L_08938E04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E1C;
      }
      goto L_08938E0C;
    }
L_08938E0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08938E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08938E1Cu) goto L_08938E1C;
    return;
L_08938E1C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    goto L_08938E20;
L_08938E20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08938E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 240u, 0x0893CF68u>(ctx, &aot_mem) && ctx.pc == 0x08938E30u) goto L_08938E30;
    return;
L_08938E30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08938E3C;
L_08938E3C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 922u, 0x0893781Cu>(ctx, &aot_mem); return;
      }
      goto L_08938E48;
    }
L_08938E48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08938E8C;
      }
      goto L_08938E58;
    }
L_08938E58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30884)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E8C;
      }
      goto L_08938E68;
    }
L_08938E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08938E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 461u, 0x0893DBB8u>(ctx, &aot_mem) && ctx.pc == 0x08938E74u) goto L_08938E74;
    return;
L_08938E74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08938E8C;
      }
      goto L_08938E80;
    }
L_08938E80:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938EC8;
      }
      goto L_08938E8C;
    }
L_08938E8C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938EC4;
      }
      goto L_08938E94;
    }
L_08938E94:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938EC4;
      }
      goto L_08938E9C;
    }
L_08938E9C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938EC4;
      }
      goto L_08938EA8;
    }
L_08938EA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08938EC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08938EC4u) goto L_08938EC4;
    return;
L_08938EC4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08938EC8;
L_08938EC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938F24;
      }
      goto L_08938F18;
    }
L_08938F18:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_08938F24;
L_08938F24:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938F18;
      }
      goto L_08938F30;
    }
L_08938F30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938F54;
      }
      goto L_08938F3C;
    }
L_08938F3C:
    ctx.set_gpr(31, 0x08938F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 249u, 0x0893D014u>(ctx, &aot_mem) && ctx.pc == 0x08938F44u) goto L_08938F44;
    return;
L_08938F44:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08938F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08938F54u) goto L_08938F54;
    return;
L_08938F54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938F68:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08938F94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08938F94u) goto L_08938F94;
    return;
L_08938F94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
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
    ctx.set_gpr(2, ctx.gpr[23] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939048;
      }
      goto L_08939030;
    }
L_08939030:
    ctx.set_gpr(31, 0x08939038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08939038u) goto L_08939038;
    return;
L_08939038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08939044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08939044u) goto L_08939044;
    return;
L_08939044:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08939048;
L_08939048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939078;
      }
      goto L_08939054;
    }
L_08939054:
    ctx.set_gpr(31, 0x0893905Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 220u, 0x0893CE1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893905Cu) goto L_0893905C;
    return;
L_0893905C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08939068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08939068u) goto L_08939068;
    return;
L_08939068:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939078;
      }
      goto L_08939074;
    }
L_08939074:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    goto L_08939078;
L_08939078:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939094;
      }
      goto L_08939080;
    }
L_08939080:
    ctx.set_gpr(31, 0x08939088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08939088u) goto L_08939088;
    return;
L_08939088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08939094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08939094u) goto L_08939094;
    return;
L_08939094:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089390A8;
      }
      goto L_0893909C;
    }
L_0893909C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_089390A8;
    }
L_089390A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_089390BC;
    }
L_089390BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7336));
    ctx.set_gpr(31, 0x089390D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089390D8u) goto L_089390D8;
    return;
L_089390D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939148;
      }
      goto L_089390E0;
    }
L_089390E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7260));
    ctx.set_gpr(31, 0x089390FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089390FCu) goto L_089390FC;
    return;
L_089390FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939118;
      }
      goto L_08939104;
    }
L_08939104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939148;
      }
      goto L_08939118;
    }
L_08939118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7128));
    ctx.set_gpr(31, 0x08939134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939134u) goto L_08939134;
    return;
L_08939134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939148;
      }
      goto L_0893913C;
    }
L_0893913C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08939148;
L_08939148:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5928));
    ctx.set_gpr(31, 0x08939164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939164u) goto L_08939164;
    return;
L_08939164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893917C;
      }
      goto L_0893916C;
    }
L_0893916C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_0893917C;
L_0893917C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5920));
    ctx.set_gpr(31, 0x08939198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939198u) goto L_08939198;
    return;
L_08939198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089391B0;
      }
      goto L_089391A0;
    }
L_089391A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 512u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_089391B0;
L_089391B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x089391CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x089391CCu) goto L_089391CC;
    return;
L_089391CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089391E4;
      }
      goto L_089391D4;
    }
L_089391D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 1024u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_089391E4;
L_089391E4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_089391EC;
    }
L_089391EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_08939200;
    }
L_08939200:
    ctx.set_gpr(2, 1280u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_08939210;
    }
L_08939210:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_0893921C;
    }
L_0893921C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893927C;
      }
      goto L_08939224;
    }
L_08939224:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_08939230;
    }
L_08939230:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893925C;
      }
      goto L_08939244;
    }
L_08939244:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5912));
    ctx.set_gpr(31, 0x08939254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08939254u) goto L_08939254;
    return;
L_08939254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_0893925C;
    }
L_0893925C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939274u) goto L_08939274;
    return;
L_08939274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_0893927C;
    }
L_0893927C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939650;
      }
      goto L_08939290;
    }
L_08939290:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939650;
      }
      goto L_0893929C;
    }
L_0893929C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089392B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089392B0u) goto L_089392B0;
    return;
L_089392B0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089392F0;
      }
      goto L_089392C0;
    }
L_089392C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089392D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 185u, 0x0893CBACu>(ctx, &aot_mem) && ctx.pc == 0x089392D4u) goto L_089392D4;
    return;
L_089392D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089392ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089392ECu) goto L_089392EC;
    return;
L_089392EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089392F0;
L_089392F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893940C;
      }
      goto L_089392FC;
    }
L_089392FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08939650;
      }
      goto L_08939308;
    }
L_08939308:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939400;
      }
      goto L_08939320;
    }
L_08939320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939400;
      }
      goto L_0893932C;
    }
L_0893932C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893936C;
      }
      goto L_08939340;
    }
L_08939340:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08939350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939350u) goto L_08939350;
    return;
L_08939350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893936C;
      }
      goto L_08939358;
    }
L_08939358:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893936C;
      }
      goto L_08939360;
    }
L_08939360:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_0893936C;
    }
L_0893936C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08939378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 410u, 0x088E6228u>(ctx, &aot_mem) && ctx.pc == 0x08939378u) goto L_08939378;
    return;
L_08939378:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939394u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939394u) goto L_08939394;
    return;
L_08939394:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089393B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089393B0u) goto L_089393B0;
    return;
L_089393B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089393D8;
      }
      goto L_089393CC;
    }
L_089393CC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089393D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089393D8u) goto L_089393D8;
    return;
L_089393D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089393E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x089393E4u) goto L_089393E4;
    return;
L_089393E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939400;
      }
      goto L_089393EC;
    }
L_089393EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939400u) goto L_08939400;
    return;
L_08939400:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_0893940C;
    }
L_0893940C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089394CC;
      }
      goto L_08939418;
    }
L_08939418:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089394E4;
      }
      goto L_08939440;
    }
L_08939440:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893944Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x0893944Cu) goto L_0893944C;
    return;
L_0893944C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939470;
      }
      goto L_08939454;
    }
L_08939454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893946Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893946Cu) goto L_0893946C;
    return;
L_0893946C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08939470;
L_08939470:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939488;
      }
      goto L_08939478;
    }
L_08939478:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08939484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08939484u) goto L_08939484;
    return;
L_08939484:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08939488;
L_08939488:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089394E4;
      }
      goto L_08939490;
    }
L_08939490:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089394ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089394ACu) goto L_089394AC;
    return;
L_089394AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089394C0;
      }
      goto L_089394B4;
    }
L_089394B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_089394C0;
    }
L_089394C0:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089394E4;
      }
      goto L_089394CC;
    }
L_089394CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089394E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x089394E0u) goto L_089394E0;
    return;
L_089394E0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_089394E4;
L_089394E4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939650;
      }
      goto L_089394EC;
    }
L_089394EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089395C4;
      }
      goto L_08939500;
    }
L_08939500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089395C4;
      }
      goto L_0893950C;
    }
L_0893950C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893954C;
      }
      goto L_08939520;
    }
L_08939520:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5996));
    ctx.set_gpr(31, 0x08939530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939530u) goto L_08939530;
    return;
L_08939530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893954C;
      }
      goto L_08939538;
    }
L_08939538:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893954C;
      }
      goto L_08939540;
    }
L_08939540:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_0893954C;
    }
L_0893954C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08939578;
      }
      goto L_08939558;
    }
L_08939558:
    ctx.set_gpr(31, 0x08939560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08939560u) goto L_08939560;
    return;
L_08939560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893956Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0893956Cu) goto L_0893956C;
    return;
L_0893956C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939578;
      }
      goto L_08939574;
    }
L_08939574:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    goto L_08939578;
L_08939578:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08939584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 410u, 0x088E6228u>(ctx, &aot_mem) && ctx.pc == 0x08939584u) goto L_08939584;
    return;
L_08939584:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089395A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089395A0u) goto L_089395A0;
    return;
L_089395A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089395CC;
      }
      goto L_089395AC;
    }
L_089395AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089395CC;
      }
      goto L_089395B8;
    }
L_089395B8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(240), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089395CC;
      }
      goto L_089395C4;
    }
L_089395C4:
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_089395CC;
L_089395CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089395E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089395E8u) goto L_089395E8;
    return;
L_089395E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893961C;
      }
      goto L_089395F4;
    }
L_089395F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893961C;
      }
      goto L_08939610;
    }
L_08939610:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893961Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893961Cu) goto L_0893961C;
    return;
L_0893961C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08939628u) goto L_08939628;
    return;
L_08939628:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939644;
      }
      goto L_08939630;
    }
L_08939630:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939644u) goto L_08939644;
    return;
L_08939644:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_08939650;
    }
L_08939650:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939690;
      }
      goto L_08939664;
    }
L_08939664:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939690;
      }
      goto L_08939670;
    }
L_08939670:
    ctx.set_gpr(31, 0x08939678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08939678u) goto L_08939678;
    return;
L_08939678:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939690;
      }
      goto L_08939684;
    }
L_08939684:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_08939690;
L_08939690:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089396A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089396A0u) goto L_089396A0;
    return;
L_089396A0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089396B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089396B8u) goto L_089396B8;
    return;
L_089396B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939708;
      }
      goto L_089396C4;
    }
L_089396C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089396D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 373u, 0x0893278Cu>(ctx, &aot_mem) && ctx.pc == 0x089396D0u) goto L_089396D0;
    return;
L_089396D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089396F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089396F0u) goto L_089396F0;
    return;
L_089396F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939708u) goto L_08939708;
    return;
L_08939708:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939724u) goto L_08939724;
    return;
L_08939724:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939744u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939744u) goto L_08939744;
    return;
L_08939744:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(30, ctx.gpr[17] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_08939758;
    }
L_08939758:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939784;
      }
      goto L_0893976C;
    }
L_0893976C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5912));
    ctx.set_gpr(31, 0x0893977Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893977Cu) goto L_0893977C;
    return;
L_0893977C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089397A4;
      }
      goto L_08939784;
    }
L_08939784:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893979Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893979Cu) goto L_0893979C;
    return;
L_0893979C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_089397A4;
    }
L_089397A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5948));
    ctx.set_gpr(31, 0x089397C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089397C0u) goto L_089397C0;
    return;
L_089397C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_089397C8;
    }
L_089397C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939804;
      }
      goto L_089397DC;
    }
L_089397DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939804;
      }
      goto L_089397E8;
    }
L_089397E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5904));
    ctx.set_gpr(31, 0x089397FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089397FCu) goto L_089397FC;
    return;
L_089397FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939848;
      }
      goto L_08939804;
    }
L_08939804:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893981Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893981Cu) goto L_0893981C;
    return;
L_0893981C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08939834;
      }
      goto L_08939828;
    }
L_08939828:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939A6C;
      }
      goto L_08939834;
    }
L_08939834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_08939848;
    }
L_08939848:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5888));
    ctx.set_gpr(31, 0x0893985Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893985Cu) goto L_0893985C;
    return;
L_0893985C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939804;
      }
      goto L_08939864;
    }
L_08939864:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5884));
    ctx.set_gpr(31, 0x08939878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08939878u) goto L_08939878;
    return;
L_08939878:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089398E8;
      }
      goto L_08939880;
    }
L_08939880:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893989Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893989Cu) goto L_0893989C;
    return;
L_0893989C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089398BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089398BCu) goto L_089398BC;
    return;
L_089398BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089398D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089398D4u) goto L_089398D4;
    return;
L_089398D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_089398E8;
    }
L_089398E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5876));
    ctx.set_gpr(31, 0x089398FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089398FCu) goto L_089398FC;
    return;
L_089398FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939804;
      }
      goto L_08939904;
    }
L_08939904:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5940));
    ctx.set_gpr(31, 0x08939918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08939918u) goto L_08939918;
    return;
L_08939918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939928;
      }
      goto L_08939920;
    }
L_08939920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939988;
      }
      goto L_08939928;
    }
L_08939928:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5868));
    ctx.set_gpr(31, 0x0893993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893993Cu) goto L_0893993C;
    return;
L_0893993C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_08939944;
    }
L_08939944:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5864));
    ctx.set_gpr(31, 0x08939958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08939958u) goto L_08939958;
    return;
L_08939958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089399E4;
      }
      goto L_08939960;
    }
L_08939960:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939978u) goto L_08939978;
    return;
L_08939978:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939988;
      }
      goto L_08939984;
    }
L_08939984:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08939988;
L_08939988:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08939994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08939994u) goto L_08939994;
    return;
L_08939994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089399B0;
      }
      goto L_0893999C;
    }
L_0893999C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089399B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089399B0u) goto L_089399B0;
    return;
L_089399B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089399CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089399CCu) goto L_089399CC;
    return;
L_089399CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089399E4;
L_089399E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089399FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089399FCu) goto L_089399FC;
    return;
L_089399FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939A18u) goto L_08939A18;
    return;
L_08939A18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_08939A34;
    }
L_08939A34:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08939A40u) goto L_08939A40;
    return;
L_08939A40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08939A4Cu) goto L_08939A4C;
    return;
L_08939A4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939A68;
      }
      goto L_08939A54;
    }
L_08939A54:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939A68u) goto L_08939A68;
    return;
L_08939A68:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08939A6C;
L_08939A6C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939AD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939AD8u) goto L_08939AD8;
    return;
L_08939AD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939AEC;
      }
      goto L_08939AE4;
    }
L_08939AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D64;
      }
      goto L_08939AEC;
    }
L_08939AEC:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C78;
      }
      goto L_08939B1C;
    }
L_08939B1C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939B3C;
      }
      goto L_08939B30;
    }
L_08939B30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08939B3C;
L_08939B3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939B60;
      }
      goto L_08939B44;
    }
L_08939B44:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6096));
    ctx.set_gpr(31, 0x08939B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939B58u) goto L_08939B58;
    return;
L_08939B58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939B60;
    }
L_08939B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939B98;
      }
      goto L_08939B74;
    }
L_08939B74:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C48;
      }
      goto L_08939B7C;
    }
L_08939B7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6076));
    ctx.set_gpr(31, 0x08939B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939B90u) goto L_08939B90;
    return;
L_08939B90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C48;
      }
      goto L_08939B98;
    }
L_08939B98:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939BB0u) goto L_08939BB0;
    return;
L_08939BB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08939BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x08939BBCu) goto L_08939BBC;
    return;
L_08939BBC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08939BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08939BC8u) goto L_08939BC8;
    return;
L_08939BC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939BE0;
      }
      goto L_08939BDC;
    }
L_08939BDC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08939BE0;
L_08939BE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x08939BECu) goto L_08939BEC;
    return;
L_08939BEC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939C00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939C00u) goto L_08939C00;
    return;
L_08939C00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939C18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939C18u) goto L_08939C18;
    return;
L_08939C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939C34;
    }
L_08939C34:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08939C40u) goto L_08939C40;
    return;
L_08939C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939C48;
    }
L_08939C48:
    ctx.set_gpr(31, 0x08939C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08939C50u) goto L_08939C50;
    return;
L_08939C50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939C5C;
    }
L_08939C5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939C70u) goto L_08939C70;
    return;
L_08939C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939C78;
    }
L_08939C78:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939C98;
      }
      goto L_08939C8C;
    }
L_08939C8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08939C98;
L_08939C98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939CA0;
    }
L_08939CA0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6076));
    ctx.set_gpr(31, 0x08939CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08939CB0u) goto L_08939CB0;
    return;
L_08939CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939CB8;
    }
L_08939CB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939CD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939CD0u) goto L_08939CD0;
    return;
L_08939CD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08939CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x08939CDCu) goto L_08939CDC;
    return;
L_08939CDC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08939CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08939CE8u) goto L_08939CE8;
    return;
L_08939CE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D00;
      }
      goto L_08939CFC;
    }
L_08939CFC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08939D00;
L_08939D00:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x08939D0Cu) goto L_08939D0C;
    return;
L_08939D0C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939D20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939D20u) goto L_08939D20;
    return;
L_08939D20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939D38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939D38u) goto L_08939D38;
    return;
L_08939D38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939D60;
      }
      goto L_08939D54;
    }
L_08939D54:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08939D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08939D60u) goto L_08939D60;
    return;
L_08939D60:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08939D64;
L_08939D64:
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
L_08939D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08939FFC;
      }
      goto L_08939DB4;
    }
L_08939DB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FFC;
      }
      goto L_08939DC0;
    }
L_08939DC0:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FFC;
      }
      goto L_08939DE8;
    }
L_08939DE8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939E04;
    }
L_08939E04:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939E18u) goto L_08939E18;
    return;
L_08939E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939EF8;
      }
      goto L_08939E28;
    }
L_08939E28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939E48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939E48u) goto L_08939E48;
    return;
L_08939E48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939E54;
    }
L_08939E54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939E68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939E68u) goto L_08939E68;
    return;
L_08939E68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939E88;
      }
      goto L_08939E70;
    }
L_08939E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939E88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939E88u) goto L_08939E88;
    return;
L_08939E88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939EA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939EA8u) goto L_08939EA8;
    return;
L_08939EA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08939EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08939EB4u) goto L_08939EB4;
    return;
L_08939EB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939EC0;
    }
L_08939EC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939EE4;
      }
      goto L_08939EDC;
    }
L_08939EDC:
    ctx.set_gpr(31, 0x08939EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08939EE4u) goto L_08939EE4;
    return;
L_08939EE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08939EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08939EF0u) goto L_08939EF0;
    return;
L_08939EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939EF8;
    }
L_08939EF8:
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939F04;
    }
L_08939F04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939F24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939F24u) goto L_08939F24;
    return;
L_08939F24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939F48;
      }
      goto L_08939F2C;
    }
L_08939F2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939F40u) goto L_08939F40;
    return;
L_08939F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939F48;
    }
L_08939F48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939F5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939F5Cu) goto L_08939F5C;
    return;
L_08939F5C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FC0;
      }
      goto L_08939F68;
    }
L_08939F68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939F7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939F7Cu) goto L_08939F7C;
    return;
L_08939F7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939FA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939FA0u) goto L_08939FA0;
    return;
L_08939FA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08939FC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939FC0u) goto L_08939FC0;
    return;
L_08939FC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08939FE8;
      }
      goto L_08939FDC;
    }
L_08939FDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08939FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08939FE8u) goto L_08939FE8;
    return;
L_08939FE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08939FFC;
      }
      goto L_08939FF8;
    }
L_08939FF8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    goto L_08939FFC;
L_08939FFC:
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
L_0893A020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893A04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A04Cu) goto L_0893A04C;
    return;
L_0893A04C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0893A058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A058u) goto L_0893A058;
    return;
L_0893A058:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0893A064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A064u) goto L_0893A064;
    return;
L_0893A064:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0893A070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 430u, 0x0892DD74u>(ctx, &aot_mem) && ctx.pc == 0x0893A070u) goto L_0893A070;
    return;
L_0893A070:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5856));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A0D0u) goto L_0893A0D0;
    return;
L_0893A0D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A0EC;
      }
      goto L_0893A0DC;
    }
L_0893A0DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A0F8;
      }
      goto L_0893A0EC;
    }
L_0893A0EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0893A0F8;
L_0893A0F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A10Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A10Cu) goto L_0893A10C;
    return;
L_0893A10C:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.set_gpr(31, 0x0893A118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A118u) goto L_0893A118;
    return;
L_0893A118:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5832));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A140u) goto L_0893A140;
    return;
L_0893A140:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A15C;
      }
      goto L_0893A14C;
    }
L_0893A14C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A168;
      }
      goto L_0893A15C;
    }
L_0893A15C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0893A168;
L_0893A168:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A17Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A17Cu) goto L_0893A17C;
    return;
L_0893A17C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5804));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(93));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A1A0u) goto L_0893A1A0;
    return;
L_0893A1A0:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.set_gpr(31, 0x0893A1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A1ACu) goto L_0893A1AC;
    return;
L_0893A1AC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5788));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(91));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A1D4u) goto L_0893A1D4;
    return;
L_0893A1D4:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    ctx.set_gpr(31, 0x0893A1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A1E0u) goto L_0893A1E0;
    return;
L_0893A1E0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5760));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A208u) goto L_0893A208;
    return;
L_0893A208:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.set_gpr(31, 0x0893A214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A214u) goto L_0893A214;
    return;
L_0893A214:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5724));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A23Cu) goto L_0893A23C;
    return;
L_0893A23C:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.set_gpr(31, 0x0893A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A248u) goto L_0893A248;
    return;
L_0893A248:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5696));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(8, 8u << 16u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A270u) goto L_0893A270;
    return;
L_0893A270:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0893A27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A27Cu) goto L_0893A27C;
    return;
L_0893A27C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5668));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A2A4u) goto L_0893A2A4;
    return;
L_0893A2A4:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0893A2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A2B0u) goto L_0893A2B0;
    return;
L_0893A2B0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5640));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A2D8u) goto L_0893A2D8;
    return;
L_0893A2D8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0893A2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A2E4u) goto L_0893A2E4;
    return;
L_0893A2E4:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5608));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12980));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12980)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A314u) goto L_0893A314;
    return;
L_0893A314:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5576));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A338u) goto L_0893A338;
    return;
L_0893A338:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0893A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A344u) goto L_0893A344;
    return;
L_0893A344:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5540));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A36Cu) goto L_0893A36C;
    return;
L_0893A36C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0893A378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A378u) goto L_0893A378;
    return;
L_0893A378:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5504));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A3A0u) goto L_0893A3A0;
    return;
L_0893A3A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A3B4u) goto L_0893A3B4;
    return;
L_0893A3B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 710u, 0x089071B8u>(ctx, &aot_mem) && ctx.pc == 0x0893A3C4u) goto L_0893A3C4;
    return;
L_0893A3C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5484));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A3E8u) goto L_0893A3E8;
    return;
L_0893A3E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A3FCu) goto L_0893A3FC;
    return;
L_0893A3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 718u, 0x08907230u>(ctx, &aot_mem) && ctx.pc == 0x0893A40Cu) goto L_0893A40C;
    return;
L_0893A40C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5464));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A430u) goto L_0893A430;
    return;
L_0893A430:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A444u) goto L_0893A444;
    return;
L_0893A444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 726u, 0x089072A8u>(ctx, &aot_mem) && ctx.pc == 0x0893A454u) goto L_0893A454;
    return;
L_0893A454:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5440));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A478u) goto L_0893A478;
    return;
L_0893A478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0893A484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 52u, 0x0893056Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A484u) goto L_0893A484;
    return;
L_0893A484:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5416));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0893A4A8u) goto L_0893A4A8;
    return;
L_0893A4A8:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x0893A4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A4B4u) goto L_0893A4B4;
    return;
L_0893A4B4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5392));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A4DCu) goto L_0893A4DC;
    return;
L_0893A4DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A4F0u) goto L_0893A4F0;
    return;
L_0893A4F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 734u, 0x08907320u>(ctx, &aot_mem) && ctx.pc == 0x0893A500u) goto L_0893A500;
    return;
L_0893A500:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5368));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A524u) goto L_0893A524;
    return;
L_0893A524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A538u) goto L_0893A538;
    return;
L_0893A538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 740u, 0x08907378u>(ctx, &aot_mem) && ctx.pc == 0x0893A548u) goto L_0893A548;
    return;
L_0893A548:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5336));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0893A56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x0893A56Cu) goto L_0893A56C;
    return;
L_0893A56C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0893A580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A580u) goto L_0893A580;
    return;
L_0893A580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 746u, 0x089073D0u>(ctx, &aot_mem) && ctx.pc == 0x0893A590u) goto L_0893A590;
    return;
L_0893A590:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A670;
      }
      goto L_0893A59C;
    }
L_0893A59C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893A5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x0893A5A8u) goto L_0893A5A8;
    return;
L_0893A5A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0893A5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x0893A5BCu) goto L_0893A5BC;
    return;
L_0893A5BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A5D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A5D0u) goto L_0893A5D0;
    return;
L_0893A5D0:
    ctx.set_gpr(31, 0x0893A5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A5D8u) goto L_0893A5D8;
    return;
L_0893A5D8:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A670;
      }
      goto L_0893A5F4;
    }
L_0893A5F4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0893A670;
      }
      goto L_0893A5FC;
    }
L_0893A5FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893A608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x0893A608u) goto L_0893A608;
    return;
L_0893A608:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24576));
    ctx.set_gpr(31, 0x0893A61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x0893A61Cu) goto L_0893A61C;
    return;
L_0893A61C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A630u) goto L_0893A630;
    return;
L_0893A630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A648u) goto L_0893A648;
    return;
L_0893A648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A670;
      }
      goto L_0893A664;
    }
L_0893A664:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893A670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893A670u) goto L_0893A670;
    return;
L_0893A670:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893A684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A684u) goto L_0893A684;
    return;
L_0893A684:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A6B0;
      }
      goto L_0893A694;
    }
L_0893A694:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A6B0;
      }
      goto L_0893A6AC;
    }
L_0893A6AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A6B0;
L_0893A6B0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A6DC;
      }
      goto L_0893A6B8;
    }
L_0893A6B8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A6DC;
      }
      goto L_0893A6D0;
    }
L_0893A6D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A6DCu) goto L_0893A6DC;
    return;
L_0893A6DC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A708;
      }
      goto L_0893A6EC;
    }
L_0893A6EC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A708;
      }
      goto L_0893A704;
    }
L_0893A704:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A708;
L_0893A708:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A734;
      }
      goto L_0893A710;
    }
L_0893A710:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A734;
      }
      goto L_0893A728;
    }
L_0893A728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A734u) goto L_0893A734;
    return;
L_0893A734:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A760;
      }
      goto L_0893A744;
    }
L_0893A744:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A760;
      }
      goto L_0893A75C;
    }
L_0893A75C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A760;
L_0893A760:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A78C;
      }
      goto L_0893A768;
    }
L_0893A768:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A78C;
      }
      goto L_0893A780;
    }
L_0893A780:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A78Cu) goto L_0893A78C;
    return;
L_0893A78C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A7B8;
      }
      goto L_0893A79C;
    }
L_0893A79C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A7B8;
      }
      goto L_0893A7B4;
    }
L_0893A7B4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A7B8;
L_0893A7B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A7E4;
      }
      goto L_0893A7C0;
    }
L_0893A7C0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A7E4;
      }
      goto L_0893A7D8;
    }
L_0893A7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A7E4u) goto L_0893A7E4;
    return;
L_0893A7E4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A810;
      }
      goto L_0893A7F4;
    }
L_0893A7F4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A810;
      }
      goto L_0893A80C;
    }
L_0893A80C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A810;
L_0893A810:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A83C;
      }
      goto L_0893A818;
    }
L_0893A818:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A83C;
      }
      goto L_0893A830;
    }
L_0893A830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A83Cu) goto L_0893A83C;
    return;
L_0893A83C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A868;
      }
      goto L_0893A84C;
    }
L_0893A84C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A868;
      }
      goto L_0893A864;
    }
L_0893A864:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0893A868;
L_0893A868:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A894;
      }
      goto L_0893A870;
    }
L_0893A870:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A894;
      }
      goto L_0893A888;
    }
L_0893A888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A894u) goto L_0893A894;
    return;
L_0893A894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A8BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893A8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893A8D4u) goto L_0893A8D4;
    return;
L_0893A8D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0893A90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A90Cu) goto L_0893A90C;
    return;
L_0893A90C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AC04;
      }
      goto L_0893A918;
    }
L_0893A918:
    ctx.set_gpr(31, 0x0893A920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893A920u) goto L_0893A920;
    return;
L_0893A920:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(137)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA9C;
      }
      goto L_0893A92C;
    }
L_0893A92C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA9C;
      }
      goto L_0893A938;
    }
L_0893A938:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893A944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 149u, 0x0895C974u>(ctx, &aot_mem) && ctx.pc == 0x0893A944u) goto L_0893A944;
    return;
L_0893A944:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[19] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 737u, 0x0892B084u>(ctx, &aot_mem) && ctx.pc == 0x0893A95Cu) goto L_0893A95C;
    return;
L_0893A95C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893A974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0893A974u) goto L_0893A974;
    return;
L_0893A974:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5320));
    ctx.set_gpr(31, 0x0893A984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893A984u) goto L_0893A984;
    return;
L_0893A984:
    ctx.set_gpr(31, 0x0893A98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893A98Cu) goto L_0893A98C;
    return;
L_0893A98C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A9D8;
      }
      goto L_0893A998;
    }
L_0893A998:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893A9E4;
      }
      goto L_0893A9A4;
    }
L_0893A9A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893A9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0895CACCu>(ctx, &aot_mem) && ctx.pc == 0x0893A9B4u) goto L_0893A9B4;
    return;
L_0893A9B4:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893A9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 219u, 0x0895CDD8u>(ctx, &aot_mem) && ctx.pc == 0x0893A9D0u) goto L_0893A9D0;
    return;
L_0893A9D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0893A9D8;
L_0893A9D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A998;
      }
      goto L_0893A9E4;
    }
L_0893A9E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 2196u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-22340));
    ctx.set_gpr(31, 0x0893AA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 48u, 0x08814578u>(ctx, &aot_mem) && ctx.pc == 0x0893AA00u) goto L_0893AA00;
    return;
L_0893AA00:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA90;
      }
      goto L_0893AA0C;
    }
L_0893AA0C:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(476));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AA48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AA48u) goto L_0893AA48;
    return;
L_0893AA48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5232));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0893AA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893AA60u) goto L_0893AA60;
    return;
L_0893AA60:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5228));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(31, 0x0893AA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893AA84u) goto L_0893AA84;
    return;
L_0893AA84:
    ctx.set_gpr(31, 0x0893AA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893AA8Cu) goto L_0893AA8C;
    return;
L_0893AA8C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0893AA90;
L_0893AA90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA0C;
      }
      goto L_0893AA9C;
    }
L_0893AA9C:
    ctx.set_gpr(31, 0x0893AAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AAA4u) goto L_0893AAA4;
    return;
L_0893AAA4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(135)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AC04;
      }
      goto L_0893AAB0;
    }
L_0893AAB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AB44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AB44u) goto L_0893AB44;
    return;
L_0893AB44:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ABB4;
      }
      goto L_0893AB50;
    }
L_0893AB50:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ABB0;
      }
      goto L_0893AB68;
    }
L_0893AB68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893AB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 775u, 0x0891AC54u>(ctx, &aot_mem) && ctx.pc == 0x0893AB78u) goto L_0893AB78;
    return;
L_0893AB78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893AB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893AB90u) goto L_0893AB90;
    return;
L_0893AB90:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5196));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893ABA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893ABA8u) goto L_0893ABA8;
    return;
L_0893ABA8:
    ctx.set_gpr(31, 0x0893ABB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893ABB0u) goto L_0893ABB0;
    return;
L_0893ABB0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893ABB4;
L_0893ABB4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AB50;
      }
      goto L_0893ABC0;
    }
L_0893ABC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5176));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x0893ABFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0893ABFCu) goto L_0893ABFC;
    return;
L_0893ABFC:
    ctx.set_gpr(31, 0x0893AC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0893AC04u) goto L_0893AC04;
    return;
L_0893AC04:
    ctx.set_gpr(31, 0x0893AC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 195u, 0x0893CC40u>(ctx, &aot_mem) && ctx.pc == 0x0893AC0Cu) goto L_0893AC0C;
    return;
L_0893AC0C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30960), 0u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AC60;
      }
      goto L_0893AC20;
    }
L_0893AC20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893AC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 191u, 0x0893CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AC2Cu) goto L_0893AC2C;
    return;
L_0893AC2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AC5C;
      }
      goto L_0893AC34;
    }
L_0893AC34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AC48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AC48u) goto L_0893AC48;
    return;
L_0893AC48:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30960)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30960), ctx.gpr[3]);
    goto L_0893AC5C;
L_0893AC5C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0893AC60;
L_0893AC60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893AC20;
      }
      goto L_0893AC68;
    }
L_0893AC68:
    ctx.set_gpr(31, 0x0893AC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AC70u) goto L_0893AC70;
    return;
L_0893AC70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ACB8;
      }
      goto L_0893AC7C;
    }
L_0893AC7C:
    ctx.set_gpr(31, 0x0893AC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AC84u) goto L_0893AC84;
    return;
L_0893AC84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ACAC;
      }
      goto L_0893ACA4;
    }
L_0893ACA4:
    ctx.set_gpr(31, 0x0893ACACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893ACACu) goto L_0893ACAC;
    return;
L_0893ACAC:
    ctx.set_gpr(31, 0x0893ACB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893ACB4u) goto L_0893ACB4;
    return;
L_0893ACB4:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), 0u);
    goto L_0893ACB8;
L_0893ACB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893ACE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0893ACF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 195u, 0x0893CC40u>(ctx, &aot_mem) && ctx.pc == 0x0893ACF8u) goto L_0893ACF8;
    return;
L_0893ACF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893AD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AD04u) goto L_0893AD04;
    return;
L_0893AD04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AD48;
      }
      goto L_0893AD10;
    }
L_0893AD10:
    ctx.set_gpr(31, 0x0893AD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AD18u) goto L_0893AD18;
    return;
L_0893AD18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AD2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AD2Cu) goto L_0893AD2C;
    return;
L_0893AD2C:
    ctx.set_gpr(31, 0x0893AD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AD34u) goto L_0893AD34;
    return;
L_0893AD34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13392));
    ctx.set_gpr(31, 0x0893AD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 529u, 0x08915DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893AD48u) goto L_0893AD48;
    return;
L_0893AD48:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AD98;
      }
      goto L_0893AD54;
    }
L_0893AD54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893AD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 191u, 0x0893CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AD60u) goto L_0893AD60;
    return;
L_0893AD60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AD94;
      }
      goto L_0893AD6C;
    }
L_0893AD6C:
    ctx.set_gpr(31, 0x0893AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AD74u) goto L_0893AD74;
    return;
L_0893AD74:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(133)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AD94;
      }
      goto L_0893AD80;
    }
L_0893AD80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AD94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AD94u) goto L_0893AD94;
    return;
L_0893AD94:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0893AD98;
L_0893AD98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_0893AD54;
      }
      goto L_0893ADA0;
    }
L_0893ADA0:
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
L_0893ADB8:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0893ADECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 430u, 0x0892DD74u>(ctx, &aot_mem) && ctx.pc == 0x0893ADECu) goto L_0893ADEC;
    return;
L_0893ADEC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893ADF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893ADF8u) goto L_0893ADF8;
    return;
L_0893ADF8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(23, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AFB4;
      }
      goto L_0893AE20;
    }
L_0893AE20:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AFA0;
      }
      goto L_0893AE2C;
    }
L_0893AE2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AE38;
    }
L_0893AE38:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AE5C;
    }
L_0893AE5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AE70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AE70u) goto L_0893AE70;
    return;
L_0893AE70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AE78;
    }
L_0893AE78:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE9C;
      }
      goto L_0893AE90;
    }
L_0893AE90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0893AE9C;
L_0893AE9C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AEC0;
      }
      goto L_0893AEA4;
    }
L_0893AEA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6096));
    ctx.set_gpr(31, 0x0893AEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x0893AEB8u) goto L_0893AEB8;
    return;
L_0893AEB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AEC0;
    }
L_0893AEC0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AEEC;
      }
      goto L_0893AEC8;
    }
L_0893AEC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF84;
      }
      goto L_0893AED0;
    }
L_0893AED0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6076));
    ctx.set_gpr(31, 0x0893AEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x0893AEE4u) goto L_0893AEE4;
    return;
L_0893AEE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF84;
      }
      goto L_0893AEEC;
    }
L_0893AEEC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893AEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x0893AEF8u) goto L_0893AEF8;
    return;
L_0893AEF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893AF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893AF04u) goto L_0893AF04;
    return;
L_0893AF04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF1C;
      }
      goto L_0893AF18;
    }
L_0893AF18:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0893AF1C;
L_0893AF1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893AF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x0893AF28u) goto L_0893AF28;
    return;
L_0893AF28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AF3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AF3Cu) goto L_0893AF3C;
    return;
L_0893AF3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AF54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AF54u) goto L_0893AF54;
    return;
L_0893AF54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AF70;
    }
L_0893AF70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893AF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893AF7Cu) goto L_0893AF7C;
    return;
L_0893AF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AF9C;
      }
      goto L_0893AF84;
    }
L_0893AF84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893AF9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AF9Cu) goto L_0893AF9C;
    return;
L_0893AF9C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893AFA0;
L_0893AFA0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE2C;
      }
      goto L_0893AFAC;
    }
L_0893AFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0F0;
      }
      goto L_0893AFB4;
    }
L_0893AFB4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E4;
      }
      goto L_0893AFC0;
    }
L_0893AFC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893AFCC;
    }
L_0893AFCC:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893AFF0;
    }
L_0893AFF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B004u) goto L_0893B004;
    return;
L_0893B004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893B00C;
    }
L_0893B00C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B030;
      }
      goto L_0893B024;
    }
L_0893B024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    goto L_0893B030;
L_0893B030:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893B038;
    }
L_0893B038:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6076));
    ctx.set_gpr(31, 0x0893B048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 721u, 0x0892F0FCu>(ctx, &aot_mem) && ctx.pc == 0x0893B048u) goto L_0893B048;
    return;
L_0893B048:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893B050;
    }
L_0893B050:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893B05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x0893B05Cu) goto L_0893B05C;
    return;
L_0893B05C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893B068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B068u) goto L_0893B068;
    return;
L_0893B068:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B080;
      }
      goto L_0893B07C;
    }
L_0893B07C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0893B080;
L_0893B080:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893B08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x0893B08Cu) goto L_0893B08C;
    return;
L_0893B08C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B0A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B0A0u) goto L_0893B0A0;
    return;
L_0893B0A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B0B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B0B8u) goto L_0893B0B8;
    return;
L_0893B0B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893B0D4;
    }
L_0893B0D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893B0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0893B0E0u) goto L_0893B0E0;
    return;
L_0893B0E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893B0E4;
L_0893B0E4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AFC0;
      }
      goto L_0893B0F0;
    }
L_0893B0F0:
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
L_0893B120:
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
    ctx.set_gpr(31, 0x0893B150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B150u) goto L_0893B150;
    return;
L_0893B150:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2AC;
      }
      goto L_0893B164;
    }
L_0893B164:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2A8;
      }
      goto L_0893B188;
    }
L_0893B188:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B198u) goto L_0893B198;
    return;
L_0893B198:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2A8;
      }
      goto L_0893B1A4;
    }
L_0893B1A4:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B200;
      }
      goto L_0893B1B4;
    }
L_0893B1B4:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B1FC;
      }
      goto L_0893B1D8;
    }
L_0893B1D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B1E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B1E8u) goto L_0893B1E8;
    return;
L_0893B1E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893B1FC;
      }
      goto L_0893B1F0;
    }
L_0893B1F0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B20C;
      }
      goto L_0893B1FC;
    }
L_0893B1FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893B200;
L_0893B200:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B1B4;
      }
      goto L_0893B20C;
    }
L_0893B20C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893B228;
      }
      goto L_0893B21C;
    }
L_0893B21C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0893B228;
      }
      goto L_0893B224;
    }
L_0893B224:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0893B228;
L_0893B228:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2A8;
      }
      goto L_0893B230;
    }
L_0893B230:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2A8;
      }
      goto L_0893B238;
    }
L_0893B238:
    ctx.set_gpr(31, 0x0893B240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B240u) goto L_0893B240;
    return;
L_0893B240:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B294;
      }
      goto L_0893B24C;
    }
L_0893B24C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B260u) goto L_0893B260;
    return;
L_0893B260:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893B294;
      }
      goto L_0893B268;
    }
L_0893B268:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B280u) goto L_0893B280;
    return;
L_0893B280:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B294u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B294u) goto L_0893B294;
    return;
L_0893B294:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B2A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B2A8u) goto L_0893B2A8;
    return;
L_0893B2A8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893B2AC;
L_0893B2AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B164;
      }
      goto L_0893B2B8;
    }
L_0893B2B8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B320;
      }
      goto L_0893B2C4;
    }
L_0893B2C4:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B31C;
      }
      goto L_0893B2E8;
    }
L_0893B2E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B2FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B2FCu) goto L_0893B2FC;
    return;
L_0893B2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B31C;
      }
      goto L_0893B304;
    }
L_0893B304:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B31Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B31Cu) goto L_0893B31C;
    return;
L_0893B31C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893B320;
L_0893B320:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B2C4;
      }
      goto L_0893B32C;
    }
L_0893B32C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_0893B35C:
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
    ctx.set_gpr(31, 0x0893B38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B38Cu) goto L_0893B38C;
    return;
L_0893B38C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B570;
      }
      goto L_0893B3A0;
    }
L_0893B3A0:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B56C;
      }
      goto L_0893B3C4;
    }
L_0893B3C4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B3D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B3D4u) goto L_0893B3D4;
    return;
L_0893B3D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B56C;
      }
      goto L_0893B3E0;
    }
L_0893B3E0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B43C;
      }
      goto L_0893B3F0;
    }
L_0893B3F0:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B438;
      }
      goto L_0893B414;
    }
L_0893B414:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B424u) goto L_0893B424;
    return;
L_0893B424:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0893B438;
      }
      goto L_0893B42C;
    }
L_0893B42C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B448;
      }
      goto L_0893B438;
    }
L_0893B438:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893B43C;
L_0893B43C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3F0;
      }
      goto L_0893B448;
    }
L_0893B448:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893B464;
      }
      goto L_0893B458;
    }
L_0893B458:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0893B464;
      }
      goto L_0893B460;
    }
L_0893B460:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_0893B464;
L_0893B464:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B56C;
      }
      goto L_0893B46C;
    }
L_0893B46C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B56C;
      }
      goto L_0893B474;
    }
L_0893B474:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(287), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B4D0;
      }
      goto L_0893B480;
    }
L_0893B480:
    ctx.set_gpr(31, 0x0893B488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B488u) goto L_0893B488;
    return;
L_0893B488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893B4A8;
      }
      goto L_0893B494;
    }
L_0893B494:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B4A8;
      }
      goto L_0893B49C;
    }
L_0893B49C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893B4D0;
      }
      goto L_0893B4A8;
    }
L_0893B4A8:
    ctx.set_gpr(31, 0x0893B4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B4B0u) goto L_0893B4B0;
    return;
L_0893B4B0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0893B4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0893B4C4u) goto L_0893B4C4;
    return;
L_0893B4C4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B504;
      }
      goto L_0893B4D0;
    }
L_0893B4D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893B500;
      }
      goto L_0893B4DC;
    }
L_0893B4DC:
    ctx.set_gpr(31, 0x0893B4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B4E4u) goto L_0893B4E4;
    return;
L_0893B4E4:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(672));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0893B4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0893B4F8u) goto L_0893B4F8;
    return;
L_0893B4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B504;
      }
      goto L_0893B500;
    }
L_0893B500:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_0893B504;
L_0893B504:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B540;
      }
      goto L_0893B510;
    }
L_0893B510:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B528u) goto L_0893B528;
    return;
L_0893B528:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4868));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0893B540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0893B540u) goto L_0893B540;
    return;
L_0893B540:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893B54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 528u, 0x08915DD0u>(ctx, &aot_mem) && ctx.pc == 0x0893B54Cu) goto L_0893B54C;
    return;
L_0893B54C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B56C;
      }
      goto L_0893B554;
    }
L_0893B554:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B56Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B56Cu) goto L_0893B56C;
    return;
L_0893B56C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0893B570;
L_0893B570:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3A0;
      }
      goto L_0893B57C;
    }
L_0893B57C:
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
L_0893B5A8:
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
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6BC;
      }
      goto L_0893B5E8;
    }
L_0893B5E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 64511u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B600;
    }
L_0893B600:
    ctx.set_gpr(2, ctx.gpr[3] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B610;
    }
L_0893B610:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B678;
      }
      goto L_0893B618;
    }
L_0893B618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B624;
    }
L_0893B624:
    ctx.set_gpr(2, 512u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B644;
      }
      goto L_0893B634;
    }
L_0893B634:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B644u) goto L_0893B644;
    return;
L_0893B644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B658;
    }
L_0893B658:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B670u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B670u) goto L_0893B670;
    return;
L_0893B670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B678;
    }
L_0893B678:
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B688;
    }
L_0893B688:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B6A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B6A4u) goto L_0893B6A4;
    return;
L_0893B6A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0893B6B4;
      }
      goto L_0893B6B0;
    }
L_0893B6B0:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0893B6B4;
L_0893B6B4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_0893B6BC;
L_0893B6BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B5E8;
      }
      goto L_0893B6C8;
    }
L_0893B6C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0893B6F4:
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
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7F4;
      }
      goto L_0893B728;
    }
L_0893B728:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7F0;
      }
      goto L_0893B74C;
    }
L_0893B74C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B75Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B75Cu) goto L_0893B75C;
    return;
L_0893B75C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7F0;
      }
      goto L_0893B768;
    }
L_0893B768:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7C4;
      }
      goto L_0893B778;
    }
L_0893B778:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7C0;
      }
      goto L_0893B79C;
    }
L_0893B79C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B7ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B7ACu) goto L_0893B7AC;
    return;
L_0893B7AC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893B7C0;
      }
      goto L_0893B7B4;
    }
L_0893B7B4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7D0;
      }
      goto L_0893B7C0;
    }
L_0893B7C0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893B7C4;
L_0893B7C4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B778;
      }
      goto L_0893B7D0;
    }
L_0893B7D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7F0;
      }
      goto L_0893B7D8;
    }
L_0893B7D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7F0;
      }
      goto L_0893B7E0;
    }
L_0893B7E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893B7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 529u, 0x08915DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893B7F0u) goto L_0893B7F0;
    return;
L_0893B7F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893B7F4;
L_0893B7F4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B728;
      }
      goto L_0893B800;
    }
L_0893B800:
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
L_0893B828:
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B950;
      }
      goto L_0893B86C;
    }
L_0893B86C:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B94C;
      }
      goto L_0893B890;
    }
L_0893B890:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B8A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B8A0u) goto L_0893B8A0;
    return;
L_0893B8A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B94C;
      }
      goto L_0893B8AC;
    }
L_0893B8AC:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B908;
      }
      goto L_0893B8BC;
    }
L_0893B8BC:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B904;
      }
      goto L_0893B8E0;
    }
L_0893B8E0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B8F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B8F0u) goto L_0893B8F0;
    return;
L_0893B8F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893B904;
      }
      goto L_0893B8F8;
    }
L_0893B8F8:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B914;
      }
      goto L_0893B904;
    }
L_0893B904:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893B908;
L_0893B908:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B8BC;
      }
      goto L_0893B914;
    }
L_0893B914:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B94C;
      }
      goto L_0893B91C;
    }
L_0893B91C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B94C;
      }
      goto L_0893B924;
    }
L_0893B924:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893B95C;
      }
      goto L_0893B92C;
    }
L_0893B92C:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(9004));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0893B94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 529u, 0x08915DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893B94Cu) goto L_0893B94C;
    return;
L_0893B94C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893B950;
L_0893B950:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B86C;
      }
      goto L_0893B95C;
    }
L_0893B95C:
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
L_0893B98C:
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
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA4;
      }
      goto L_0893B9C8;
    }
L_0893B9C8:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893B9EC;
    }
L_0893B9EC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893B9FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B9FCu) goto L_0893B9FC;
    return;
L_0893B9FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA08;
    }
L_0893BA08:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BA64;
      }
      goto L_0893BA18;
    }
L_0893BA18:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BA60;
      }
      goto L_0893BA3C;
    }
L_0893BA3C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BA4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BA4Cu) goto L_0893BA4C;
    return;
L_0893BA4C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893BA60;
      }
      goto L_0893BA54;
    }
L_0893BA54:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BA70;
      }
      goto L_0893BA60;
    }
L_0893BA60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893BA64;
L_0893BA64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BA18;
      }
      goto L_0893BA70;
    }
L_0893BA70:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA78;
    }
L_0893BA78:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA80;
    }
L_0893BA80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893BAB0;
      }
      goto L_0893BA88;
    }
L_0893BA88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893BA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 529u, 0x08915DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893BA98u) goto L_0893BA98;
    return;
L_0893BA98:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0893BAA0;
L_0893BAA0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893BAA4;
L_0893BAA4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B9C8;
      }
      goto L_0893BAB0;
    }
L_0893BAB0:
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
L_0893BADC:
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
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBDC;
      }
      goto L_0893BB10;
    }
L_0893BB10:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBD8;
      }
      goto L_0893BB34;
    }
L_0893BB34:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BB44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BB44u) goto L_0893BB44;
    return;
L_0893BB44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBD8;
      }
      goto L_0893BB50;
    }
L_0893BB50:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBAC;
      }
      goto L_0893BB60;
    }
L_0893BB60:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBA8;
      }
      goto L_0893BB84;
    }
L_0893BB84:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BB94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BB94u) goto L_0893BB94;
    return;
L_0893BB94:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893BBA8;
      }
      goto L_0893BB9C;
    }
L_0893BB9C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBB8;
      }
      goto L_0893BBA8;
    }
L_0893BBA8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893BBAC;
L_0893BBAC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BB60;
      }
      goto L_0893BBB8;
    }
L_0893BBB8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBD8;
      }
      goto L_0893BBC0;
    }
L_0893BBC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBD8;
      }
      goto L_0893BBC8;
    }
L_0893BBC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893BBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 549u, 0x08915F10u>(ctx, &aot_mem) && ctx.pc == 0x0893BBD8u) goto L_0893BBD8;
    return;
L_0893BBD8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893BBDC;
L_0893BBDC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BB10;
      }
      goto L_0893BBE8;
    }
L_0893BBE8:
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
L_0893BC10:
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD38;
      }
      goto L_0893BC54;
    }
L_0893BC54:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD34;
      }
      goto L_0893BC78;
    }
L_0893BC78:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BC88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BC88u) goto L_0893BC88;
    return;
L_0893BC88:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD34;
      }
      goto L_0893BC94;
    }
L_0893BC94:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCF0;
      }
      goto L_0893BCA4;
    }
L_0893BCA4:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCEC;
      }
      goto L_0893BCC8;
    }
L_0893BCC8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BCD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BCD8u) goto L_0893BCD8;
    return;
L_0893BCD8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893BCEC;
      }
      goto L_0893BCE0;
    }
L_0893BCE0:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCFC;
      }
      goto L_0893BCEC;
    }
L_0893BCEC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893BCF0;
L_0893BCF0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCA4;
      }
      goto L_0893BCFC;
    }
L_0893BCFC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD34;
      }
      goto L_0893BD04;
    }
L_0893BD04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BD34;
      }
      goto L_0893BD0C;
    }
L_0893BD0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893BD44;
      }
      goto L_0893BD14;
    }
L_0893BD14:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(9264));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0893BD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 549u, 0x08915F10u>(ctx, &aot_mem) && ctx.pc == 0x0893BD34u) goto L_0893BD34;
    return;
L_0893BD34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893BD38;
L_0893BD38:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC54;
      }
      goto L_0893BD44;
    }
L_0893BD44:
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
L_0893BD74:
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
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE8C;
      }
      goto L_0893BDB0;
    }
L_0893BDB0:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE88;
      }
      goto L_0893BDD4;
    }
L_0893BDD4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BDE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BDE4u) goto L_0893BDE4;
    return;
L_0893BDE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE88;
      }
      goto L_0893BDF0;
    }
L_0893BDF0:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE4C;
      }
      goto L_0893BE00;
    }
L_0893BE00:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE48;
      }
      goto L_0893BE24;
    }
L_0893BE24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BE34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BE34u) goto L_0893BE34;
    return;
L_0893BE34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893BE48;
      }
      goto L_0893BE3C;
    }
L_0893BE3C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE58;
      }
      goto L_0893BE48;
    }
L_0893BE48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893BE4C;
L_0893BE4C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE00;
      }
      goto L_0893BE58;
    }
L_0893BE58:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE88;
      }
      goto L_0893BE60;
    }
L_0893BE60:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE88;
      }
      goto L_0893BE68;
    }
L_0893BE68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893BE98;
      }
      goto L_0893BE70;
    }
L_0893BE70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0893BE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 549u, 0x08915F10u>(ctx, &aot_mem) && ctx.pc == 0x0893BE80u) goto L_0893BE80;
    return;
L_0893BE80:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0893BE88;
L_0893BE88:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893BE8C;
L_0893BE8C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BDB0;
      }
      goto L_0893BE98;
    }
L_0893BE98:
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
L_0893BEC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 5u, 0x0893C050u>(ctx, &aot_mem); return;
      }
      goto L_0893BF08;
    }
L_0893BF08:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BF2C;
    }
L_0893BF2C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BF3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BF3Cu) goto L_0893BF3C;
    return;
L_0893BF3C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BF48;
    }
L_0893BF48:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFA4;
      }
      goto L_0893BF58;
    }
L_0893BF58:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFA0;
      }
      goto L_0893BF7C;
    }
L_0893BF7C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893BF8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BF8Cu) goto L_0893BF8C;
    return;
L_0893BF8C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0893BFA0;
      }
      goto L_0893BF94;
    }
L_0893BF94:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFB0;
      }
      goto L_0893BFA0;
    }
L_0893BFA0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893BFA4;
L_0893BFA4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BF58;
      }
      goto L_0893BFB0;
    }
L_0893BFB0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BFB8;
    }
L_0893BFB8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BFC0;
    }
L_0893BFC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 8192u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BFD4;
    }
L_0893BFD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[20] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 4u, 0x0893C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0893BFF0;
    }
L_0893BFF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.pc = 0x0893C000u; return;
}

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08938000u, 16384u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893800Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938018u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938020u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938028u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938038u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893804Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893806Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938074u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893808Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893810Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938118u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938120u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938134u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938148u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938154u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893815Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938174u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938178u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893818Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938218u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938234u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893824Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893826Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938288u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893829Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938308u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938310u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893831Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938324u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893833Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893835Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938364u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893836Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893837Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938388u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893840Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893841Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938434u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938440u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938450u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893845Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938470u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938478u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938508u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893851Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938544u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938550u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938588u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938594u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938604u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893860Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938614u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938630u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938648u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938654u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893865Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938684u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938698u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893870Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938718u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938738u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893874Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938760u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938778u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938784u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893879Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938808u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938818u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893883Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893884Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938858u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938860u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893886Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893888Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938904u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893892Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938940u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893894Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938954u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893895Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893896Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938990u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939030u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939038u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939054u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893905Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939068u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939074u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939088u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893909Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939118u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939134u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893913Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939148u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893916Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893917Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893921Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893925Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893927Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893929Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939308u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939320u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893932Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939340u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939358u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939360u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893936Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893940Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939418u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939440u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893944Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939454u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893946Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939470u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939478u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939484u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939488u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893950Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939520u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939540u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893954Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893956Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939574u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939578u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939610u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893961Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939630u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939644u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939650u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939664u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939678u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939684u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939690u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939708u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893976Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893977Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939784u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893979Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939804u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893981Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939828u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939848u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893985Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939878u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939880u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893989Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939904u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939920u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939928u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893993Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939944u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939958u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939960u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939978u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939988u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939994u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893999Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A020u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A04Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A064u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A070u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A10Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A118u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A140u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A14Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A15Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A168u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A17Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A214u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A23Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A248u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A270u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A27Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A314u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A36Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A40Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A444u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A454u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A478u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A484u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A524u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A548u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A56Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A580u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A59Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A608u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A61Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A630u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A648u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A664u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A684u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A694u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A708u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A710u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A728u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A75Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A760u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A780u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A78Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A79Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A80Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A810u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A818u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A83Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A868u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A870u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A888u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A90Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A920u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A92Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A938u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A944u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A95Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A98Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A998u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AED0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B004u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B00Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B024u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B030u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B038u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B05Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B068u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B07Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B08Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B120u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B20Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B21Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B240u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B24Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B294u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B304u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B31Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B320u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B32Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B35Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B38Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B424u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B42Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B438u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B43Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B448u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B458u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B46Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B474u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B480u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B488u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B494u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B49Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B510u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B528u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B540u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B554u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B56Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B57Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B600u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B610u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B618u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B644u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B678u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B688u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B728u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B74Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B75Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B778u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B79Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B828u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B86Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B890u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B904u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B914u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B91Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B92Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B94Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B950u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B95Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B98Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BADCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFF0u, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp
