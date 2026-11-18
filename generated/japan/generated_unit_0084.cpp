#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45,
    0, 46, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 61, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    0, 0, 110, 0, 111, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121,
    0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0,
    141, 0, 0, 142, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0,
    164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0,
    180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191,
    0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 200, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223,
    0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 232, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0,
    0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 255, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 275, 0, 276, 0, 0, 0, 277, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 283, 0, 0, 284, 0,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 308, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 314, 0, 315, 0,
    0, 316, 0, 0, 0, 317, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0,
    323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    357, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0,
    0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0,
    413, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 424, 425, 0, 0,
    426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 433, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 437, 438, 0, 0, 439,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442,
    0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0,
    0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459,
    0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471,
    0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479,
    0, 0, 480, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0,
    489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 494, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0,
    0, 499, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0,
    0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0,
    0, 0, 514, 0, 515, 0, 0, 516, 0, 517, 518, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0,
    0, 0, 0, 523, 0, 524, 0, 0, 525, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0,
    0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537,
    0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0,
    543, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0,
    559, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0,
    0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0,
    0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589,
    0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0,
    597, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0,
    612, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619,
    0, 620, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 628, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0,
    0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0,
    641, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647,
    0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0,
    0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 662, 663, 0, 0, 664, 0, 665, 0, 666,
    0, 0, 667, 0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0,
    0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0,
    0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0,
    694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 0, 702, 0, 703, 0, 0,
    704, 0, 705, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 711,
    0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0,
    722, 0, 0, 0, 723, 0, 724, 0, 725, 726, 0, 0, 727, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 0, 734, 0, 735,
    0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0,
    743, 0, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0,
    752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 0, 765, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 773, 0, 0, 0, 774, 0,
    775, 0, 0, 0, 776, 777, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782,
    783, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 790, 0, 791, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798,
    0, 799, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    807, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 0, 0, 812, 813, 0, 0, 814, 815, 0, 0, 816, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0,
    820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825,
    0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 0, 829, 0, 0, 830, 0, 0, 831, 0, 832, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0, 0, 836,
    0, 0, 0, 837, 0, 0, 0, 838, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 0, 846,
    847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0, 853, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0,
    0, 863, 0, 864, 0, 865, 866, 0, 867, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 0,
    875, 0, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 878, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0,
    882, 0, 0, 883, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 888, 0, 0, 889, 0, 0,
    0, 890, 0, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 0, 0, 894, 0, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 0, 0, 0, 899,
    0, 900, 0, 0, 0, 901, 0, 0, 902, 0, 903, 0, 0, 904, 0, 905, 906, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    908, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 0, 910, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 914, 0, 915, 0,
    0, 0, 916, 0, 0, 917, 0, 918, 0, 0, 919, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 921, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0,
    0, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 0, 928, 0, 0, 0, 0, 929, 0, 930, 0, 931, 932,
    0, 0, 0, 0, 933, 0, 0, 0, 0, 934, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 0, 937, 0, 938, 0, 939, 940, 0, 0, 0, 0,
    941, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 944, 0, 945, 0, 946, 947, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 950,
    0, 951, 952, 0, 953, 0, 0, 0, 954, 0, 0, 0, 0, 955, 0, 0, 0, 956, 0, 0, 957, 0, 958, 0, 0, 0, 0, 0, 0, 0, 959, 0,
    0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0, 0, 0, 0, 962, 0, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 0, 0, 0, 0, 0, 966,
    0, 0, 0, 967, 0, 0, 968, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 973, 0, 0,
    974, 0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0,
    0, 0, 0, 981, 0, 0, 982, 0, 0, 0, 0, 983, 0, 0, 984, 0, 0, 0, 0, 0, 0, 985, 0, 0, 986, 0, 0, 0, 987, 0, 988, 0,
    0, 0, 0, 0, 0, 989, 0, 0, 0, 990, 991, 0, 0, 0, 992, 0, 0, 0, 0, 993, 0, 0, 0, 994, 995, 0, 0, 0, 996, 0, 0, 997,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_08954008;
    case 3u: goto L_08954010;
    case 4u: goto L_08954028;
    case 5u: goto L_08954030;
    case 6u: goto L_0895403C;
    case 7u: goto L_08954054;
    case 8u: goto L_08954064;
    case 9u: goto L_0895406C;
    case 10u: goto L_0895409C;
    case 11u: goto L_089540B4;
    case 12u: goto L_089540CC;
    case 13u: goto L_089540DC;
    case 14u: goto L_089540F4;
    case 15u: goto L_08954104;
    case 16u: goto L_08954120;
    case 17u: goto L_08954134;
    case 18u: goto L_0895413C;
    case 19u: goto L_08954174;
    case 20u: goto L_08954180;
    case 21u: goto L_08954188;
    case 22u: goto L_08954190;
    case 23u: goto L_0895419C;
    case 24u: goto L_089541B4;
    case 25u: goto L_089541C0;
    case 26u: goto L_089541C8;
    case 27u: goto L_089541CC;
    case 28u: goto L_089541E0;
    case 29u: goto L_08954214;
    case 30u: goto L_08954220;
    case 31u: goto L_08954228;
    case 32u: goto L_08954230;
    case 33u: goto L_0895423C;
    case 34u: goto L_08954254;
    case 35u: goto L_08954260;
    case 36u: goto L_08954268;
    case 37u: goto L_0895426C;
    case 38u: goto L_08954280;
    case 39u: goto L_089542B8;
    case 40u: goto L_089542C4;
    case 41u: goto L_089542CC;
    case 42u: goto L_089542D4;
    case 43u: goto L_089542E0;
    case 44u: goto L_089542F0;
    case 45u: goto L_089542FC;
    case 46u: goto L_08954304;
    case 47u: goto L_08954308;
    case 48u: goto L_0895431C;
    case 49u: goto L_08954354;
    case 50u: goto L_08954360;
    case 51u: goto L_08954368;
    case 52u: goto L_08954370;
    case 53u: goto L_0895437C;
    case 54u: goto L_08954390;
    case 55u: goto L_0895439C;
    case 56u: goto L_089543A4;
    case 57u: goto L_089543A8;
    case 58u: goto L_089543BC;
    case 59u: goto L_089543DC;
    case 60u: goto L_089543F4;
    case 61u: goto L_089543F8;
    case 62u: goto L_0895440C;
    case 63u: goto L_08954414;
    case 64u: goto L_08954424;
    case 65u: goto L_08954434;
    case 66u: goto L_08954444;
    case 67u: goto L_08954450;
    case 68u: goto L_08954458;
    case 69u: goto L_08954468;
    case 70u: goto L_08954474;
    case 71u: goto L_0895447C;
    case 72u: goto L_0895448C;
    case 73u: goto L_089544A4;
    case 74u: goto L_089544DC;
    case 75u: goto L_089544E8;
    case 76u: goto L_08954500;
    case 77u: goto L_08954508;
    case 78u: goto L_08954518;
    case 79u: goto L_08954534;
    case 80u: goto L_0895453C;
    case 81u: goto L_08954554;
    case 82u: goto L_08954560;
    case 83u: goto L_08954570;
    case 84u: goto L_0895457C;
    case 85u: goto L_0895459C;
    case 86u: goto L_089545A4;
    case 87u: goto L_089545B0;
    case 88u: goto L_089545BC;
    case 89u: goto L_089545CC;
    case 90u: goto L_089545D8;
    case 91u: goto L_089545DC;
    case 92u: goto L_089545E4;
    case 93u: goto L_08954600;
    case 94u: goto L_08954610;
    case 95u: goto L_08954618;
    case 96u: goto L_08954620;
    case 97u: goto L_08954638;
    case 98u: goto L_08954650;
    case 99u: goto L_08954658;
    case 100u: goto L_08954660;
    case 101u: goto L_08954690;
    case 102u: goto L_089546A4;
    case 103u: goto L_089546AC;
    case 104u: goto L_089546D0;
    case 105u: goto L_089546F4;
    case 106u: goto L_0895473C;
    case 107u: goto L_08954758;
    case 108u: goto L_08954764;
    case 109u: goto L_08954770;
    case 110u: goto L_08954788;
    case 111u: goto L_08954790;
    case 112u: goto L_08954794;
    case 113u: goto L_0895479C;
    case 114u: goto L_089547A8;
    case 115u: goto L_089547BC;
    case 116u: goto L_089547C4;
    case 117u: goto L_089547D0;
    case 118u: goto L_089547D8;
    case 119u: goto L_089547E4;
    case 120u: goto L_089547F0;
    case 121u: goto L_089547FC;
    case 122u: goto L_08954804;
    case 123u: goto L_08954814;
    case 124u: goto L_08954820;
    case 125u: goto L_08954828;
    case 126u: goto L_0895483C;
    case 127u: goto L_08954848;
    case 128u: goto L_08954854;
    case 129u: goto L_08954860;
    case 130u: goto L_08954874;
    case 131u: goto L_08954880;
    case 132u: goto L_08954888;
    case 133u: goto L_08954898;
    case 134u: goto L_089548A4;
    case 135u: goto L_089548AC;
    case 136u: goto L_089548C0;
    case 137u: goto L_089548CC;
    case 138u: goto L_089548DC;
    case 139u: goto L_089548E8;
    case 140u: goto L_089548F4;
    case 141u: goto L_08954900;
    case 142u: goto L_0895490C;
    case 143u: goto L_08954910;
    case 144u: goto L_08954918;
    case 145u: goto L_08954920;
    case 146u: goto L_08954938;
    case 147u: goto L_0895493C;
    case 148u: goto L_08954954;
    case 149u: goto L_08954960;
    case 150u: goto L_08954968;
    case 151u: goto L_08954970;
    case 152u: goto L_0895497C;
    case 153u: goto L_0895498C;
    case 154u: goto L_08954998;
    case 155u: goto L_0895499C;
    case 156u: goto L_089549D8;
    case 157u: goto L_08954A2C;
    case 158u: goto L_08954A38;
    case 159u: goto L_08954A44;
    case 160u: goto L_08954A54;
    case 161u: goto L_08954A60;
    case 162u: goto L_08954A6C;
    case 163u: goto L_08954A74;
    case 164u: goto L_08954A80;
    case 165u: goto L_08954A88;
    case 166u: goto L_08954A94;
    case 167u: goto L_08954AA0;
    case 168u: goto L_08954AC4;
    case 169u: goto L_08954AC8;
    case 170u: goto L_08954AD8;
    case 171u: goto L_08954AF8;
    case 172u: goto L_08954B0C;
    case 173u: goto L_08954B2C;
    case 174u: goto L_08954B38;
    case 175u: goto L_08954B44;
    case 176u: goto L_08954B54;
    case 177u: goto L_08954B5C;
    case 178u: goto L_08954B68;
    case 179u: goto L_08954B70;
    case 180u: goto L_08954B80;
    case 181u: goto L_08954B8C;
    case 182u: goto L_08954B98;
    case 183u: goto L_08954BA0;
    case 184u: goto L_08954BAC;
    case 185u: goto L_08954BB4;
    case 186u: goto L_08954BC0;
    case 187u: goto L_08954BD0;
    case 188u: goto L_08954BD8;
    case 189u: goto L_08954BE4;
    case 190u: goto L_08954BEC;
    case 191u: goto L_08954BFC;
    case 192u: goto L_08954C08;
    case 193u: goto L_08954C14;
    case 194u: goto L_08954C1C;
    case 195u: goto L_08954C28;
    case 196u: goto L_08954C30;
    case 197u: goto L_08954C3C;
    case 198u: goto L_08954C44;
    case 199u: goto L_08954C4C;
    case 200u: goto L_08954C50;
    case 201u: goto L_08954C54;
    case 202u: goto L_08954C60;
    case 203u: goto L_08954C68;
    case 204u: goto L_08954C74;
    case 205u: goto L_08954C80;
    case 206u: goto L_08954C90;
    case 207u: goto L_08954C98;
    case 208u: goto L_08954CA8;
    case 209u: goto L_08954CB0;
    case 210u: goto L_08954CC4;
    case 211u: goto L_08954CCC;
    case 212u: goto L_08954CE4;
    case 213u: goto L_08954CEC;
    case 214u: goto L_08954D00;
    case 215u: goto L_08954D1C;
    case 216u: goto L_08954D2C;
    case 217u: goto L_08954D38;
    case 218u: goto L_08954D44;
    case 219u: goto L_08954D4C;
    case 220u: goto L_08954D58;
    case 221u: goto L_08954D60;
    case 222u: goto L_08954D6C;
    case 223u: goto L_08954D7C;
    case 224u: goto L_08954D88;
    case 225u: goto L_08954D94;
    case 226u: goto L_08954D9C;
    case 227u: goto L_08954DA8;
    case 228u: goto L_08954DB0;
    case 229u: goto L_08954DB4;
    case 230u: goto L_08954DE4;
    case 231u: goto L_08954E00;
    case 232u: goto L_08954E20;
    case 233u: goto L_08954E24;
    case 234u: goto L_08954E30;
    case 235u: goto L_08954E64;
    case 236u: goto L_08954EA8;
    case 237u: goto L_08954EB4;
    case 238u: goto L_08954EC4;
    case 239u: goto L_08954ED0;
    case 240u: goto L_08954EDC;
    case 241u: goto L_08954EE8;
    case 242u: goto L_08954EF4;
    case 243u: goto L_08954F04;
    case 244u: goto L_08954F0C;
    case 245u: goto L_08954F20;
    case 246u: goto L_08954F38;
    case 247u: goto L_08954F44;
    case 248u: goto L_08954F58;
    case 249u: goto L_08954F64;
    case 250u: goto L_08954F80;
    case 251u: goto L_08954F8C;
    case 252u: goto L_08954F9C;
    case 253u: goto L_08954FAC;
    case 254u: goto L_08954FB4;
    case 255u: goto L_08954FC0;
    case 256u: goto L_08954FC4;
    case 257u: goto L_08954FCC;
    case 258u: goto L_08954FE0;
    case 259u: goto L_08954FE8;
    case 260u: goto L_08954FFC;
    case 261u: goto L_0895501C;
    case 262u: goto L_08955024;
    case 263u: goto L_08955030;
    case 264u: goto L_08955038;
    case 265u: goto L_08955058;
    case 266u: goto L_08955080;
    case 267u: goto L_0895508C;
    case 268u: goto L_089550B0;
    case 269u: goto L_089550B4;
    case 270u: goto L_089550C0;
    case 271u: goto L_089550CC;
    case 272u: goto L_089550D8;
    case 273u: goto L_089550E4;
    case 274u: goto L_08955100;
    case 275u: goto L_0895510C;
    case 276u: goto L_08955114;
    case 277u: goto L_08955124;
    case 278u: goto L_08955128;
    case 279u: goto L_08955134;
    case 280u: goto L_08955148;
    case 281u: goto L_08955160;
    case 282u: goto L_08955168;
    case 283u: goto L_0895516C;
    case 284u: goto L_08955178;
    case 285u: goto L_08955188;
    case 286u: goto L_0895519C;
    case 287u: goto L_089551A8;
    case 288u: goto L_089551BC;
    case 289u: goto L_089551C8;
    case 290u: goto L_089551D8;
    case 291u: goto L_089551F4;
    case 292u: goto L_08955208;
    case 293u: goto L_08955210;
    case 294u: goto L_08955224;
    case 295u: goto L_0895522C;
    case 296u: goto L_08955238;
    case 297u: goto L_0895523C;
    case 298u: goto L_08955248;
    case 299u: goto L_08955254;
    case 300u: goto L_08955264;
    case 301u: goto L_08955284;
    case 302u: goto L_0895528C;
    case 303u: goto L_089552A4;
    case 304u: goto L_089552B4;
    case 305u: goto L_089552D4;
    case 306u: goto L_089552DC;
    case 307u: goto L_089552F4;
    case 308u: goto L_089552F8;
    case 309u: goto L_08955310;
    case 310u: goto L_0895533C;
    case 311u: goto L_08955348;
    case 312u: goto L_08955354;
    case 313u: goto L_0895536C;
    case 314u: goto L_08955370;
    case 315u: goto L_08955378;
    case 316u: goto L_08955384;
    case 317u: goto L_08955394;
    case 318u: goto L_08955398;
    case 319u: goto L_089553B4;
    case 320u: goto L_089553D4;
    case 321u: goto L_089553E0;
    case 322u: goto L_089553F0;
    case 323u: goto L_08955400;
    case 324u: goto L_0895540C;
    case 325u: goto L_0895541C;
    case 326u: goto L_0895542C;
    case 327u: goto L_08955438;
    case 328u: goto L_08955448;
    case 329u: goto L_08955458;
    case 330u: goto L_08955464;
    case 331u: goto L_08955474;
    case 332u: goto L_08955488;
    case 333u: goto L_089554D0;
    case 334u: goto L_089554E4;
    case 335u: goto L_089554EC;
    case 336u: goto L_089554F4;
    case 337u: goto L_0895550C;
    case 338u: goto L_08955520;
    case 339u: goto L_08955534;
    case 340u: goto L_0895555C;
    case 341u: goto L_08955570;
    case 342u: goto L_08955584;
    case 343u: goto L_089555A0;
    case 344u: goto L_089555C4;
    case 345u: goto L_089555CC;
    case 346u: goto L_089555D4;
    case 347u: goto L_089555EC;
    case 348u: goto L_08955600;
    case 349u: goto L_08955614;
    case 350u: goto L_0895563C;
    case 351u: goto L_08955650;
    case 352u: goto L_08955664;
    case 353u: goto L_08955678;
    case 354u: goto L_08955684;
    case 355u: goto L_089556BC;
    case 356u: goto L_089556F4;
    case 357u: goto L_08955700;
    case 358u: goto L_08955704;
    case 359u: goto L_08955714;
    case 360u: goto L_08955720;
    case 361u: goto L_08955738;
    case 362u: goto L_08955748;
    case 363u: goto L_0895574C;
    case 364u: goto L_08955758;
    case 365u: goto L_08955760;
    case 366u: goto L_08955768;
    case 367u: goto L_08955774;
    case 368u: goto L_0895577C;
    case 369u: goto L_089557A4;
    case 370u: goto L_08955804;
    case 371u: goto L_08955810;
    case 372u: goto L_08955824;
    case 373u: goto L_0895582C;
    case 374u: goto L_08955830;
    case 375u: goto L_08955844;
    case 376u: goto L_08955854;
    case 377u: goto L_08955878;
    case 378u: goto L_0895589C;
    case 379u: goto L_089558AC;
    case 380u: goto L_089558B8;
    case 381u: goto L_089558C4;
    case 382u: goto L_089558CC;
    case 383u: goto L_089558D8;
    case 384u: goto L_089558E4;
    case 385u: goto L_089558F8;
    case 386u: goto L_08955904;
    case 387u: goto L_0895592C;
    case 388u: goto L_0895594C;
    case 389u: goto L_08955960;
    case 390u: goto L_08955988;
    case 391u: goto L_08955998;
    case 392u: goto L_089559A4;
    case 393u: goto L_089559B0;
    case 394u: goto L_089559D0;
    case 395u: goto L_089559E0;
    case 396u: goto L_089559EC;
    case 397u: goto L_089559F8;
    case 398u: goto L_08955A10;
    case 399u: goto L_08955A1C;
    case 400u: goto L_08955A4C;
    case 401u: goto L_08955A5C;
    case 402u: goto L_08955A68;
    case 403u: goto L_08955A70;
    case 404u: goto L_08955A7C;
    case 405u: goto L_08955A84;
    case 406u: goto L_08955AB8;
    case 407u: goto L_08955AC8;
    case 408u: goto L_08955B0C;
    case 409u: goto L_08955B30;
    case 410u: goto L_08955B54;
    case 411u: goto L_08955B70;
    case 412u: goto L_08955B78;
    case 413u: goto L_08955B80;
    case 414u: goto L_08955B84;
    case 415u: goto L_08955B9C;
    case 416u: goto L_08955BC4;
    case 417u: goto L_08955BEC;
    case 418u: goto L_08955C38;
    case 419u: goto L_08955C40;
    case 420u: goto L_08955C44;
    case 421u: goto L_08955C4C;
    case 422u: goto L_08955C58;
    case 423u: goto L_08955C68;
    case 424u: goto L_08955C70;
    case 425u: goto L_08955C74;
    case 426u: goto L_08955C80;
    case 427u: goto L_08955C90;
    case 428u: goto L_08955CB0;
    case 429u: goto L_08955D04;
    case 430u: goto L_08955D24;
    case 431u: goto L_08955D34;
    case 432u: goto L_08955D3C;
    case 433u: goto L_08955D40;
    case 434u: goto L_08955D48;
    case 435u: goto L_08955D54;
    case 436u: goto L_08955D64;
    case 437u: goto L_08955D6C;
    case 438u: goto L_08955D70;
    case 439u: goto L_08955D7C;
    case 440u: goto L_08955D90;
    case 441u: goto L_08955DC4;
    case 442u: goto L_08955DFC;
    case 443u: goto L_08955E08;
    case 444u: goto L_08955E14;
    case 445u: goto L_08955E2C;
    case 446u: goto L_08955E3C;
    case 447u: goto L_08955E74;
    case 448u: goto L_08955E80;
    case 449u: goto L_08955E8C;
    case 450u: goto L_08955EA4;
    case 451u: goto L_08955EB4;
    case 452u: goto L_08955EEC;
    case 453u: goto L_08955EF8;
    case 454u: goto L_08955F04;
    case 455u: goto L_08955F1C;
    case 456u: goto L_08955F2C;
    case 457u: goto L_08955F64;
    case 458u: goto L_08955F70;
    case 459u: goto L_08955F7C;
    case 460u: goto L_08955F94;
    case 461u: goto L_08955FA4;
    case 462u: goto L_08955FDC;
    case 463u: goto L_08955FE8;
    case 464u: goto L_08955FF4;
    case 465u: goto L_0895600C;
    case 466u: goto L_0895601C;
    case 467u: goto L_08956030;
    case 468u: goto L_0895604C;
    case 469u: goto L_0895605C;
    case 470u: goto L_0895606C;
    case 471u: goto L_0895607C;
    case 472u: goto L_0895608C;
    case 473u: goto L_0895609C;
    case 474u: goto L_089560AC;
    case 475u: goto L_089560BC;
    case 476u: goto L_089560C4;
    case 477u: goto L_089560CC;
    case 478u: goto L_089560F4;
    case 479u: goto L_089560FC;
    case 480u: goto L_08956108;
    case 481u: goto L_0895611C;
    case 482u: goto L_08956124;
    case 483u: goto L_08956130;
    case 484u: goto L_08956144;
    case 485u: goto L_0895614C;
    case 486u: goto L_08956158;
    case 487u: goto L_0895616C;
    case 488u: goto L_08956174;
    case 489u: goto L_08956180;
    case 490u: goto L_08956194;
    case 491u: goto L_0895619C;
    case 492u: goto L_089561A4;
    case 493u: goto L_089561B8;
    case 494u: goto L_089561C0;
    case 495u: goto L_089561C4;
    case 496u: goto L_089561E0;
    case 497u: goto L_089561EC;
    case 498u: goto L_089561F8;
    case 499u: goto L_08956204;
    case 500u: goto L_08956208;
    case 501u: goto L_08956210;
    case 502u: goto L_08956234;
    case 503u: goto L_08956244;
    case 504u: goto L_0895624C;
    case 505u: goto L_08956264;
    case 506u: goto L_08956270;
    case 507u: goto L_08956278;
    case 508u: goto L_08956290;
    case 509u: goto L_0895629C;
    case 510u: goto L_089562BC;
    case 511u: goto L_089562E4;
    case 512u: goto L_089562F0;
    case 513u: goto L_089562F8;
    case 514u: goto L_08956308;
    case 515u: goto L_08956310;
    case 516u: goto L_0895631C;
    case 517u: goto L_08956324;
    case 518u: goto L_08956328;
    case 519u: goto L_0895632C;
    case 520u: goto L_08956344;
    case 521u: goto L_0895636C;
    case 522u: goto L_08956378;
    case 523u: goto L_0895638C;
    case 524u: goto L_08956394;
    case 525u: goto L_089563A0;
    case 526u: goto L_089563A4;
    case 527u: goto L_089563BC;
    case 528u: goto L_089563D0;
    case 529u: goto L_089563EC;
    case 530u: goto L_089563F8;
    case 531u: goto L_0895641C;
    case 532u: goto L_08956424;
    case 533u: goto L_08956430;
    case 534u: goto L_0895643C;
    case 535u: goto L_08956464;
    case 536u: goto L_0895646C;
    case 537u: goto L_0895647C;
    case 538u: goto L_08956484;
    case 539u: goto L_0895648C;
    case 540u: goto L_08956494;
    case 541u: goto L_089564BC;
    case 542u: goto L_089564EC;
    case 543u: goto L_08956500;
    case 544u: goto L_08956508;
    case 545u: goto L_0895651C;
    case 546u: goto L_08956534;
    case 547u: goto L_0895653C;
    case 548u: goto L_0895654C;
    case 549u: goto L_0895655C;
    case 550u: goto L_08956590;
    case 551u: goto L_08956598;
    case 552u: goto L_089565A4;
    case 553u: goto L_089565B0;
    case 554u: goto L_089565BC;
    case 555u: goto L_089565C4;
    case 556u: goto L_089565D0;
    case 557u: goto L_089565E8;
    case 558u: goto L_089565F4;
    case 559u: goto L_08956600;
    case 560u: goto L_0895660C;
    case 561u: goto L_0895661C;
    case 562u: goto L_08956628;
    case 563u: goto L_08956634;
    case 564u: goto L_0895663C;
    case 565u: goto L_08956640;
    case 566u: goto L_0895665C;
    case 567u: goto L_08956688;
    case 568u: goto L_089566A0;
    case 569u: goto L_089566AC;
    case 570u: goto L_089566B8;
    case 571u: goto L_089566C4;
    case 572u: goto L_089566D4;
    case 573u: goto L_089566E0;
    case 574u: goto L_089566EC;
    case 575u: goto L_089566F4;
    case 576u: goto L_08956714;
    case 577u: goto L_08956734;
    case 578u: goto L_08956744;
    case 579u: goto L_08956750;
    case 580u: goto L_08956768;
    case 581u: goto L_08956788;
    case 582u: goto L_08956798;
    case 583u: goto L_089567A4;
    case 584u: goto L_089567BC;
    case 585u: goto L_089567D8;
    case 586u: goto L_089567E0;
    case 587u: goto L_089567EC;
    case 588u: goto L_089567F4;
    case 589u: goto L_089567FC;
    case 590u: goto L_0895680C;
    case 591u: goto L_08956838;
    case 592u: goto L_08956840;
    case 593u: goto L_0895684C;
    case 594u: goto L_08956860;
    case 595u: goto L_0895686C;
    case 596u: goto L_08956874;
    case 597u: goto L_08956880;
    case 598u: goto L_0895688C;
    case 599u: goto L_089568A0;
    case 600u: goto L_089568AC;
    case 601u: goto L_089568B4;
    case 602u: goto L_089568C0;
    case 603u: goto L_089568CC;
    case 604u: goto L_089568E0;
    case 605u: goto L_08956908;
    case 606u: goto L_08956914;
    case 607u: goto L_08956924;
    case 608u: goto L_0895693C;
    case 609u: goto L_08956950;
    case 610u: goto L_08956964;
    case 611u: goto L_08956974;
    case 612u: goto L_08956980;
    case 613u: goto L_08956988;
    case 614u: goto L_089569A4;
    case 615u: goto L_089569C8;
    case 616u: goto L_089569D0;
    case 617u: goto L_089569DC;
    case 618u: goto L_089569F0;
    case 619u: goto L_089569FC;
    case 620u: goto L_08956A04;
    case 621u: goto L_08956A18;
    case 622u: goto L_08956A24;
    case 623u: goto L_08956A2C;
    case 624u: goto L_08956A38;
    case 625u: goto L_08956A40;
    case 626u: goto L_08956A58;
    case 627u: goto L_08956A6C;
    case 628u: goto L_08956A78;
    case 629u: goto L_08956A80;
    case 630u: goto L_08956A88;
    case 631u: goto L_08956A98;
    case 632u: goto L_08956AB4;
    case 633u: goto L_08956ABC;
    case 634u: goto L_08956AC8;
    case 635u: goto L_08956AE8;
    case 636u: goto L_08956B08;
    case 637u: goto L_08956B28;
    case 638u: goto L_08956B44;
    case 639u: goto L_08956B5C;
    case 640u: goto L_08956B68;
    case 641u: goto L_08956B80;
    case 642u: goto L_08956B94;
    case 643u: goto L_08956BA4;
    case 644u: goto L_08956BB4;
    case 645u: goto L_08956BC4;
    case 646u: goto L_08956BDC;
    case 647u: goto L_08956BFC;
    case 648u: goto L_08956C04;
    case 649u: goto L_08956C14;
    case 650u: goto L_08956C24;
    case 651u: goto L_08956C30;
    case 652u: goto L_08956C44;
    case 653u: goto L_08956C78;
    case 654u: goto L_08956C88;
    case 655u: goto L_08956C90;
    case 656u: goto L_08956C9C;
    case 657u: goto L_08956CA8;
    case 658u: goto L_08956CB4;
    case 659u: goto L_08956CC0;
    case 660u: goto L_08956CCC;
    case 661u: goto L_08956CD4;
    case 662u: goto L_08956CDC;
    case 663u: goto L_08956CE0;
    case 664u: goto L_08956CEC;
    case 665u: goto L_08956CF4;
    case 666u: goto L_08956CFC;
    case 667u: goto L_08956D08;
    case 668u: goto L_08956D10;
    case 669u: goto L_08956D1C;
    case 670u: goto L_08956D24;
    case 671u: goto L_08956D30;
    case 672u: goto L_08956D38;
    case 673u: goto L_08956D44;
    case 674u: goto L_08956D50;
    case 675u: goto L_08956D78;
    case 676u: goto L_08956D84;
    case 677u: goto L_08956D90;
    case 678u: goto L_08956DA0;
    case 679u: goto L_08956DAC;
    case 680u: goto L_08956DBC;
    case 681u: goto L_08956DC8;
    case 682u: goto L_08956DD8;
    case 683u: goto L_08956DE8;
    case 684u: goto L_08956DF4;
    case 685u: goto L_08956E08;
    case 686u: goto L_08956E1C;
    case 687u: goto L_08956E28;
    case 688u: goto L_08956E30;
    case 689u: goto L_08956E3C;
    case 690u: goto L_08956E44;
    case 691u: goto L_08956E58;
    case 692u: goto L_08956E6C;
    case 693u: goto L_08956E78;
    case 694u: goto L_08956E80;
    case 695u: goto L_08956E88;
    case 696u: goto L_08956E98;
    case 697u: goto L_08956EAC;
    case 698u: goto L_08956EBC;
    case 699u: goto L_08956ED0;
    case 700u: goto L_08956ED8;
    case 701u: goto L_08956EE0;
    case 702u: goto L_08956EEC;
    case 703u: goto L_08956EF4;
    case 704u: goto L_08956F00;
    case 705u: goto L_08956F08;
    case 706u: goto L_08956F0C;
    case 707u: goto L_08956F2C;
    case 708u: goto L_08956F58;
    case 709u: goto L_08956F60;
    case 710u: goto L_08956F68;
    case 711u: goto L_08956F7C;
    case 712u: goto L_08956F88;
    case 713u: goto L_08956F94;
    case 714u: goto L_08956F9C;
    case 715u: goto L_08956FA8;
    case 716u: goto L_08956FB4;
    case 717u: goto L_08956FC8;
    case 718u: goto L_08956FD4;
    case 719u: goto L_08956FE0;
    case 720u: goto L_08956FE8;
    case 721u: goto L_08956FF4;
    case 722u: goto L_08957000;
    case 723u: goto L_08957010;
    case 724u: goto L_08957018;
    case 725u: goto L_08957020;
    case 726u: goto L_08957024;
    case 727u: goto L_08957030;
    case 728u: goto L_08957038;
    case 729u: goto L_08957040;
    case 730u: goto L_0895704C;
    case 731u: goto L_08957054;
    case 732u: goto L_08957060;
    case 733u: goto L_08957068;
    case 734u: goto L_08957074;
    case 735u: goto L_0895707C;
    case 736u: goto L_08957088;
    case 737u: goto L_08957094;
    case 738u: goto L_089570BC;
    case 739u: goto L_089570C8;
    case 740u: goto L_089570D4;
    case 741u: goto L_089570E4;
    case 742u: goto L_089570F0;
    case 743u: goto L_08957100;
    case 744u: goto L_0895710C;
    case 745u: goto L_0895711C;
    case 746u: goto L_08957128;
    case 747u: goto L_08957144;
    case 748u: goto L_08957158;
    case 749u: goto L_08957164;
    case 750u: goto L_0895716C;
    case 751u: goto L_08957178;
    case 752u: goto L_08957180;
    case 753u: goto L_08957194;
    case 754u: goto L_089571A8;
    case 755u: goto L_089571B4;
    case 756u: goto L_089571BC;
    case 757u: goto L_089571C4;
    case 758u: goto L_089571D4;
    case 759u: goto L_089571E8;
    case 760u: goto L_089571F8;
    case 761u: goto L_08957220;
    case 762u: goto L_08957228;
    case 763u: goto L_08957230;
    case 764u: goto L_0895723C;
    case 765u: goto L_08957248;
    case 766u: goto L_0895724C;
    case 767u: goto L_0895726C;
    case 768u: goto L_089572A0;
    case 769u: goto L_089572AC;
    case 770u: goto L_089572B8;
    case 771u: goto L_089572D0;
    case 772u: goto L_089572E0;
    case 773u: goto L_089572E8;
    case 774u: goto L_089572F8;
    case 775u: goto L_08957300;
    case 776u: goto L_08957310;
    case 777u: goto L_08957314;
    case 778u: goto L_0895732C;
    case 779u: goto L_08957334;
    case 780u: goto L_0895733C;
    case 781u: goto L_08957364;
    case 782u: goto L_0895737C;
    case 783u: goto L_08957380;
    case 784u: goto L_08957388;
    case 785u: goto L_0895739C;
    case 786u: goto L_089573A4;
    case 787u: goto L_089573AC;
    case 788u: goto L_089573D4;
    case 789u: goto L_089573EC;
    case 790u: goto L_089573F0;
    case 791u: goto L_089573F8;
    case 792u: goto L_08957418;
    case 793u: goto L_08957420;
    case 794u: goto L_0895742C;
    case 795u: goto L_08957430;
    case 796u: goto L_08957454;
    case 797u: goto L_08957468;
    case 798u: goto L_0895747C;
    case 799u: goto L_08957484;
    case 800u: goto L_08957488;
    case 801u: goto L_08957498;
    case 802u: goto L_089574AC;
    case 803u: goto L_089574BC;
    case 804u: goto L_089574C4;
    case 805u: goto L_089574C8;
    case 806u: goto L_089574D8;
    case 807u: goto L_08957500;
    case 808u: goto L_0895750C;
    case 809u: goto L_08957514;
    case 810u: goto L_0895751C;
    case 811u: goto L_08957524;
    case 812u: goto L_08957534;
    case 813u: goto L_08957538;
    case 814u: goto L_08957544;
    case 815u: goto L_08957548;
    case 816u: goto L_08957554;
    case 817u: goto L_0895755C;
    case 818u: goto L_08957564;
    case 819u: goto L_08957574;
    case 820u: goto L_08957580;
    case 821u: goto L_08957588;
    case 822u: goto L_089575A0;
    case 823u: goto L_089575B0;
    case 824u: goto L_089575C4;
    case 825u: goto L_089575FC;
    case 826u: goto L_08957608;
    case 827u: goto L_08957614;
    case 828u: goto L_08957620;
    case 829u: goto L_0895762C;
    case 830u: goto L_08957638;
    case 831u: goto L_08957644;
    case 832u: goto L_0895764C;
    case 833u: goto L_08957658;
    case 834u: goto L_08957660;
    case 835u: goto L_0895766C;
    case 836u: goto L_0895767C;
    case 837u: goto L_0895768C;
    case 838u: goto L_0895769C;
    case 839u: goto L_089576A4;
    case 840u: goto L_089576B4;
    case 841u: goto L_089576C4;
    case 842u: goto L_089576D4;
    case 843u: goto L_089576DC;
    case 844u: goto L_089576E8;
    case 845u: goto L_089576F0;
    case 846u: goto L_089576FC;
    case 847u: goto L_08957700;
    case 848u: goto L_0895770C;
    case 849u: goto L_08957718;
    case 850u: goto L_08957724;
    case 851u: goto L_0895772C;
    case 852u: goto L_08957738;
    case 853u: goto L_08957740;
    case 854u: goto L_08957744;
    case 855u: goto L_08957760;
    case 856u: goto L_0895779C;
    case 857u: goto L_089577A8;
    case 858u: goto L_089577B8;
    case 859u: goto L_089577C4;
    case 860u: goto L_089577D4;
    case 861u: goto L_089577E4;
    case 862u: goto L_089577F0;
    case 863u: goto L_08957804;
    case 864u: goto L_0895780C;
    case 865u: goto L_08957814;
    case 866u: goto L_08957818;
    case 867u: goto L_08957820;
    case 868u: goto L_08957830;
    case 869u: goto L_08957838;
    case 870u: goto L_08957840;
    case 871u: goto L_08957850;
    case 872u: goto L_0895785C;
    case 873u: goto L_08957868;
    case 874u: goto L_08957874;
    case 875u: goto L_08957880;
    case 876u: goto L_089578A0;
    case 877u: goto L_089578A8;
    case 878u: goto L_089578B4;
    case 879u: goto L_089578C8;
    case 880u: goto L_089578D4;
    case 881u: goto L_089578E4;
    case 882u: goto L_08957900;
    case 883u: goto L_0895790C;
    case 884u: goto L_08957920;
    case 885u: goto L_08957930;
    case 886u: goto L_08957940;
    case 887u: goto L_08957964;
    case 888u: goto L_08957968;
    case 889u: goto L_08957974;
    case 890u: goto L_08957984;
    case 891u: goto L_08957990;
    case 892u: goto L_089579A0;
    case 893u: goto L_089579AC;
    case 894u: goto L_089579C0;
    case 895u: goto L_089579CC;
    case 896u: goto L_089579D4;
    case 897u: goto L_089579E0;
    case 898u: goto L_089579E8;
    case 899u: goto L_089579FC;
    case 900u: goto L_08957A04;
    case 901u: goto L_08957A14;
    case 902u: goto L_08957A20;
    case 903u: goto L_08957A28;
    case 904u: goto L_08957A34;
    case 905u: goto L_08957A3C;
    case 906u: goto L_08957A40;
    case 907u: goto L_08957A4C;
    case 908u: goto L_08957A80;
    case 909u: goto L_08957AA4;
    case 910u: goto L_08957AB4;
    case 911u: goto L_08957AC0;
    case 912u: goto L_08957AD4;
    case 913u: goto L_08957AE0;
    case 914u: goto L_08957AF0;
    case 915u: goto L_08957AF8;
    case 916u: goto L_08957B08;
    case 917u: goto L_08957B14;
    case 918u: goto L_08957B1C;
    case 919u: goto L_08957B28;
    case 920u: goto L_08957B34;
    case 921u: goto L_08957B54;
    case 922u: goto L_08957B5C;
    case 923u: goto L_08957B70;
    case 924u: goto L_08957B90;
    case 925u: goto L_08957BA0;
    case 926u: goto L_08957BB4;
    case 927u: goto L_08957BC8;
    case 928u: goto L_08957BD4;
    case 929u: goto L_08957BE8;
    case 930u: goto L_08957BF0;
    case 931u: goto L_08957BF8;
    case 932u: goto L_08957BFC;
    case 933u: goto L_08957C10;
    case 934u: goto L_08957C24;
    case 935u: goto L_08957C38;
    case 936u: goto L_08957C44;
    case 937u: goto L_08957C58;
    case 938u: goto L_08957C60;
    case 939u: goto L_08957C68;
    case 940u: goto L_08957C6C;
    case 941u: goto L_08957C80;
    case 942u: goto L_08957C94;
    case 943u: goto L_08957CA0;
    case 944u: goto L_08957CB4;
    case 945u: goto L_08957CBC;
    case 946u: goto L_08957CC4;
    case 947u: goto L_08957CC8;
    case 948u: goto L_08957CE0;
    case 949u: goto L_08957CF4;
    case 950u: goto L_08957CFC;
    case 951u: goto L_08957D04;
    case 952u: goto L_08957D08;
    case 953u: goto L_08957D10;
    case 954u: goto L_08957D20;
    case 955u: goto L_08957D34;
    case 956u: goto L_08957D44;
    case 957u: goto L_08957D50;
    case 958u: goto L_08957D58;
    case 959u: goto L_08957D78;
    case 960u: goto L_08957D94;
    case 961u: goto L_08957D9C;
    case 962u: goto L_08957DB8;
    case 963u: goto L_08957DC4;
    case 964u: goto L_08957DCC;
    case 965u: goto L_08957DE0;
    case 966u: goto L_08957DFC;
    case 967u: goto L_08957E0C;
    case 968u: goto L_08957E18;
    case 969u: goto L_08957E24;
    case 970u: goto L_08957E44;
    case 971u: goto L_08957E5C;
    case 972u: goto L_08957E64;
    case 973u: goto L_08957E74;
    case 974u: goto L_08957E80;
    case 975u: goto L_08957E8C;
    case 976u: goto L_08957E98;
    case 977u: goto L_08957EA4;
    case 978u: goto L_08957EB4;
    case 979u: goto L_08957EC8;
    case 980u: goto L_08957EEC;
    case 981u: goto L_08957F0C;
    case 982u: goto L_08957F18;
    case 983u: goto L_08957F2C;
    case 984u: goto L_08957F38;
    case 985u: goto L_08957F54;
    case 986u: goto L_08957F60;
    case 987u: goto L_08957F70;
    case 988u: goto L_08957F78;
    case 989u: goto L_08957F94;
    case 990u: goto L_08957FA4;
    case 991u: goto L_08957FA8;
    case 992u: goto L_08957FB8;
    case 993u: goto L_08957FCC;
    case 994u: goto L_08957FDC;
    case 995u: goto L_08957FE0;
    case 996u: goto L_08957FF0;
    case 997u: goto L_08957FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08954000:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954010;
      }
      goto L_08954008;
    }
L_08954008:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08954010;
L_08954010:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(31, 0x08954028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 827u, 0x08953900u>(ctx, &aot_mem) && ctx.pc == 0x08954028u) goto L_08954028;
    return;
L_08954028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954054;
      }
      goto L_08954030;
    }
L_08954030:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954054;
      }
      goto L_0895403C;
    }
L_0895403C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08954054u);
    // nop
    goto L_0895413C;
L_08954054:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895406C;
      }
      goto L_08954064;
    }
L_08954064:
    ctx.set_gpr(31, 0x0895406Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895406Cu) goto L_0895406C;
    return;
L_0895406C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0895409C:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089540CC;
      }
      goto L_089540B4;
    }
L_089540B4:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089540CC;
L_089540CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089540B4;
      }
      goto L_089540DC;
    }
L_089540DC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089540F4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954120;
      }
      goto L_08954104;
    }
L_08954104:
    ctx.set_gpr(5, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08954120;
L_08954120:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954104;
      }
      goto L_08954134;
    }
L_08954134:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895413C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08954174u);
    // nop
    goto L_089549D8;
L_08954174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895419C;
      }
      goto L_08954180;
    }
L_08954180:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954190;
      }
      goto L_08954188;
    }
L_08954188:
    ctx.set_gpr(31, 0x08954190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954190u) goto L_08954190;
    return;
L_08954190:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089541CC;
      }
      goto L_0895419C;
    }
L_0895419C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(31, 0x089541B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 617u, 0x0895A98Cu>(ctx, &aot_mem) && ctx.pc == 0x089541B4u) goto L_089541B4;
    return;
L_089541B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089541C8;
      }
      goto L_089541C0;
    }
L_089541C0:
    ctx.set_gpr(31, 0x089541C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089541C8u) goto L_089541C8;
    return;
L_089541C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089541CC;
L_089541CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089541E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08954214u);
    // nop
    goto L_089549D8;
L_08954214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895423C;
      }
      goto L_08954220;
    }
L_08954220:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_08954228;
    }
L_08954228:
    ctx.set_gpr(31, 0x08954230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954230u) goto L_08954230;
    return;
L_08954230:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895426C;
      }
      goto L_0895423C;
    }
L_0895423C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11912));
    ctx.set_gpr(31, 0x08954254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 619u, 0x0895A9B8u>(ctx, &aot_mem) && ctx.pc == 0x08954254u) goto L_08954254;
    return;
L_08954254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954268;
      }
      goto L_08954260;
    }
L_08954260:
    ctx.set_gpr(31, 0x08954268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954268u) goto L_08954268;
    return;
L_08954268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895426C;
L_0895426C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089542B8u);
    // nop
    goto L_089549D8;
L_089542B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089542E0;
      }
      goto L_089542C4;
    }
L_089542C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089542D4;
      }
      goto L_089542CC;
    }
L_089542CC:
    ctx.set_gpr(31, 0x089542D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089542D4u) goto L_089542D4;
    return;
L_089542D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954308;
      }
      goto L_089542E0;
    }
L_089542E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089542F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089542F0u) goto L_089542F0;
    return;
L_089542F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954304;
      }
      goto L_089542FC;
    }
L_089542FC:
    ctx.set_gpr(31, 0x08954304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954304u) goto L_08954304;
    return;
L_08954304:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08954308;
L_08954308:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895431C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08954354u);
    // nop
    goto L_089549D8;
L_08954354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895437C;
      }
      goto L_08954360;
    }
L_08954360:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954370;
      }
      goto L_08954368;
    }
L_08954368:
    ctx.set_gpr(31, 0x08954370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954370u) goto L_08954370;
    return;
L_08954370:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089543A8;
      }
      goto L_0895437C;
    }
L_0895437C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08954390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 622u, 0x0895AA08u>(ctx, &aot_mem) && ctx.pc == 0x08954390u) goto L_08954390;
    return;
L_08954390:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089543A4;
      }
      goto L_0895439C;
    }
L_0895439C:
    ctx.set_gpr(31, 0x089543A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089543A4u) goto L_089543A4;
    return;
L_089543A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089543A8;
L_089543A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089543BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089543F8;
      }
      goto L_089543DC;
    }
L_089543DC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089543F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x089543F4u) goto L_089543F4;
    return;
L_089543F4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089543F8;
L_089543F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089543DC;
      }
      goto L_0895440C;
    }
L_0895440C:
    ctx.set_gpr(31, 0x08954414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x08954414u) goto L_08954414;
    return;
L_08954414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08954424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08954424u) goto L_08954424;
    return;
L_08954424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08954444;
      }
      goto L_08954434;
    }
L_08954434:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08954444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08954444u) goto L_08954444;
    return;
L_08954444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954468;
      }
      goto L_08954450;
    }
L_08954450:
    ctx.set_gpr(31, 0x08954458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x08954458u) goto L_08954458;
    return;
L_08954458:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08954468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08954468u) goto L_08954468;
    return;
L_08954468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895448C;
      }
      goto L_08954474;
    }
L_08954474:
    ctx.set_gpr(31, 0x0895447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x0895447Cu) goto L_0895447C;
    return;
L_0895447C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895448Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895448Cu) goto L_0895448C;
    return;
L_0895448C:
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
L_089544A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-12336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_089544DC;
    }
L_089544DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8236))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_089544E8;
    }
L_089544E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2024));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08954500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08954500u) goto L_08954500;
    return;
L_08954500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_08954508;
    }
L_08954508:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895453C;
      }
      goto L_08954518;
    }
L_08954518:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08954534u);
    // nop
    goto L_08954E64;
L_08954534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_0895453C;
    }
L_0895453C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2016));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08954554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08954554u) goto L_08954554;
    return;
L_08954554:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895457C;
      }
      goto L_08954560;
    }
L_08954560:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08954570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08954570u) goto L_08954570;
    return;
L_08954570:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_0895457C;
    }
L_0895457C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1940));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4140));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12335));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0895459Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895459Cu) goto L_0895459C;
    return;
L_0895459C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_089545A4;
    }
L_089545A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_089545B0;
    }
L_089545B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089545CC;
      }
      goto L_089545BC;
    }
L_089545BC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12335))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(61));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_089545CC;
    }
L_089545CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089545DC;
      }
      goto L_089545D8;
    }
L_089545D8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_089545DC;
L_089545DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954620;
      }
      goto L_089545E4;
    }
L_089545E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(4140));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08954600u);
    // nop
    goto L_089549D8;
L_08954600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954618;
      }
      goto L_08954610;
    }
L_08954610:
    ctx.set_gpr(31, 0x08954618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954618u) goto L_08954618;
    return;
L_08954618:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954638;
      }
      goto L_08954620;
    }
L_08954620:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4140));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08954638u);
    // nop
    goto L_08954280;
L_08954638:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08954650u);
    // nop
    goto L_089546F4;
L_08954650:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089544DC;
      }
      goto L_08954658;
    }
L_08954658:
    ctx.set_gpr(31, 0x08954660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08954660u) goto L_08954660;
    return;
L_08954660:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12334), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1856));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12334));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12334)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08954690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08954690u) goto L_08954690;
    return;
L_08954690:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12334)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089546D0;
      }
      goto L_089546A4;
    }
L_089546A4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089546D0;
      }
      goto L_089546AC;
    }
L_089546AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1856));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12334));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12334)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089546D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089546D0u) goto L_089546D0;
    return;
L_089546D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(12336));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089546F4:
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895473Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895473Cu) goto L_0895473C;
    return;
L_0895473C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954954;
      }
      goto L_08954758;
    }
L_08954758:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954770;
      }
      goto L_08954764;
    }
L_08954764:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954790;
      }
      goto L_08954770;
    }
L_08954770:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08954788u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954788u) goto L_08954788;
    return;
L_08954788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954794;
      }
      goto L_08954790;
    }
L_08954790:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08954794;
L_08954794:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954758;
      }
      goto L_0895479C;
    }
L_0895479C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089547C4;
      }
      goto L_089547A8;
    }
L_089547A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089547BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089547BCu) goto L_089547BC;
    return;
L_089547BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954954;
      }
      goto L_089547C4;
    }
L_089547C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954898;
      }
      goto L_089547D0;
    }
L_089547D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_089547D8;
    }
L_089547D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089547F0;
      }
      goto L_089547E4;
    }
L_089547E4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_089547F0;
    }
L_089547F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954814;
      }
      goto L_089547FC;
    }
L_089547FC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954814;
      }
      goto L_08954804;
    }
L_08954804:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_08954814;
    }
L_08954814:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 4095 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954828;
      }
      goto L_08954820;
    }
L_08954820:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08954828;
L_08954828:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 129 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954848;
      }
      goto L_0895483C;
    }
L_0895483C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954860;
      }
      goto L_08954848;
    }
L_08954848:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_08954854;
    }
L_08954854:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_08954860;
    }
L_08954860:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08954874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954874u) goto L_08954874;
    return;
L_08954874:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 4095 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954888;
      }
      goto L_08954880;
    }
L_08954880:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08954888;
L_08954888:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_08954898;
    }
L_08954898:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954920;
      }
      goto L_089548A4;
    }
L_089548A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954910;
      }
      goto L_089548AC;
    }
L_089548AC:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954968;
      }
      goto L_089548C0;
    }
L_089548C0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895490C;
      }
      goto L_089548CC;
    }
L_089548CC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 129 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089548E8;
      }
      goto L_089548DC;
    }
L_089548DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954968;
      }
      goto L_089548E8;
    }
L_089548E8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954900;
      }
      goto L_089548F4;
    }
L_089548F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954968;
      }
      goto L_08954900;
    }
L_08954900:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954910;
      }
      goto L_0895490C;
    }
L_0895490C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08954910;
L_08954910:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_089548AC;
      }
      goto L_08954918;
    }
L_08954918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954968;
      }
      goto L_08954920;
    }
L_08954920:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895493C;
      }
      goto L_08954938;
    }
L_08954938:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0895493C;
L_0895493C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08954954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954954u) goto L_08954954;
    return;
L_08954954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954968;
      }
      goto L_08954960;
    }
L_08954960:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954794;
      }
      goto L_08954968;
    }
L_08954968:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895497C;
      }
      goto L_08954970;
    }
L_08954970:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895498C;
      }
      goto L_0895497C;
    }
L_0895497C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    goto L_0895498C;
L_0895498C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895499C;
      }
      goto L_08954998;
    }
L_08954998:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4095));
    goto L_0895499C;
L_0895499C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
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
L_089549D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A38;
      }
      goto L_08954A2C;
    }
L_08954A2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954A38;
L_08954A38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08954A94;
      }
      goto L_08954A44;
    }
L_08954A44:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A60;
      }
      goto L_08954A54;
    }
L_08954A54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954A60;
L_08954A60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A74;
      }
      goto L_08954A6C;
    }
L_08954A6C:
    ctx.set_gpr(31, 0x08954A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954A74u) goto L_08954A74;
    return;
L_08954A74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954A88;
      }
      goto L_08954A80;
    }
L_08954A80:
    ctx.set_gpr(31, 0x08954A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954A88u) goto L_08954A88;
    return;
L_08954A88:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB4;
      }
      goto L_08954A94;
    }
L_08954A94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954AC8;
      }
      goto L_08954AA0;
    }
L_08954AA0:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08954AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08954AC4u) goto L_08954AC4;
    return;
L_08954AC4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08954AC8;
L_08954AC8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08954AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 633u, 0x08952BA8u>(ctx, &aot_mem) && ctx.pc == 0x08954AD8u) goto L_08954AD8;
    return;
L_08954AD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08954AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08954AF8u) goto L_08954AF8;
    return;
L_08954AF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954C54;
      }
      goto L_08954B0C;
    }
L_08954B0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08954B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08954B2Cu) goto L_08954B2C;
    return;
L_08954B2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954C3C;
      }
      goto L_08954B38;
    }
L_08954B38:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954BC0;
      }
      goto L_08954B44;
    }
L_08954B44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954B5C;
      }
      goto L_08954B54;
    }
L_08954B54:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08954B5C;
L_08954B5C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08954B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08954B68u) goto L_08954B68;
    return;
L_08954B68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954C50;
      }
      goto L_08954B70;
    }
L_08954B70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954B8C;
      }
      goto L_08954B80;
    }
L_08954B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954B8C;
L_08954B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954BA0;
      }
      goto L_08954B98;
    }
L_08954B98:
    ctx.set_gpr(31, 0x08954BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954BA0u) goto L_08954BA0;
    return;
L_08954BA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954BB4;
      }
      goto L_08954BAC;
    }
L_08954BAC:
    ctx.set_gpr(31, 0x08954BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954BB4u) goto L_08954BB4;
    return;
L_08954BB4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB4;
      }
      goto L_08954BC0;
    }
L_08954BC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954BD8;
      }
      goto L_08954BD0;
    }
L_08954BD0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08954BD8;
L_08954BD8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08954BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 748u, 0x0895B21Cu>(ctx, &aot_mem) && ctx.pc == 0x08954BE4u) goto L_08954BE4;
    return;
L_08954BE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954C50;
      }
      goto L_08954BEC;
    }
L_08954BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954C08;
      }
      goto L_08954BFC;
    }
L_08954BFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954C08;
L_08954C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954C1C;
      }
      goto L_08954C14;
    }
L_08954C14:
    ctx.set_gpr(31, 0x08954C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954C1Cu) goto L_08954C1C;
    return;
L_08954C1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954C30;
      }
      goto L_08954C28;
    }
L_08954C28:
    ctx.set_gpr(31, 0x08954C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954C30u) goto L_08954C30;
    return;
L_08954C30:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB4;
      }
      goto L_08954C3C;
    }
L_08954C3C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954C50;
      }
      goto L_08954C44;
    }
L_08954C44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08954C50;
      }
      goto L_08954C4C;
    }
L_08954C4C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08954C50;
L_08954C50:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08954C54;
L_08954C54:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954B0C;
      }
      goto L_08954C60;
    }
L_08954C60:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D6C;
      }
      goto L_08954C68;
    }
L_08954C68:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08954C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08954C74u) goto L_08954C74;
    return;
L_08954C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08954C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 630u, 0x088EAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08954C80u) goto L_08954C80;
    return;
L_08954C80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08954C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08954C90u) goto L_08954C90;
    return;
L_08954C90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08954CB0;
      }
      goto L_08954C98;
    }
L_08954C98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08954CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08954CA8u) goto L_08954CA8;
    return;
L_08954CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D00;
      }
      goto L_08954CB0;
    }
L_08954CB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954CCC;
      }
      goto L_08954CC4;
    }
L_08954CC4:
    ctx.set_gpr(31, 0x08954CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08954CCCu) goto L_08954CCC;
    return;
L_08954CCC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954CEC;
      }
      goto L_08954CE4;
    }
L_08954CE4:
    ctx.set_gpr(31, 0x08954CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954CECu) goto L_08954CEC;
    return;
L_08954CEC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08954D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08954D00u) goto L_08954D00;
    return;
L_08954D00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08954D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08954D1Cu) goto L_08954D1C;
    return;
L_08954D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D38;
      }
      goto L_08954D2C;
    }
L_08954D2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954D38;
L_08954D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D4C;
      }
      goto L_08954D44;
    }
L_08954D44:
    ctx.set_gpr(31, 0x08954D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954D4Cu) goto L_08954D4C;
    return;
L_08954D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D60;
      }
      goto L_08954D58;
    }
L_08954D58:
    ctx.set_gpr(31, 0x08954D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954D60u) goto L_08954D60;
    return;
L_08954D60:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB4;
      }
      goto L_08954D6C;
    }
L_08954D6C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D88;
      }
      goto L_08954D7C;
    }
L_08954D7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08954D88;
L_08954D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954D9C;
      }
      goto L_08954D94;
    }
L_08954D94:
    ctx.set_gpr(31, 0x08954D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954D9Cu) goto L_08954D9C;
    return;
L_08954D9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DB0;
      }
      goto L_08954DA8;
    }
L_08954DA8:
    ctx.set_gpr(31, 0x08954DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08954DB0u) goto L_08954DB0;
    return;
L_08954DB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08954DB4;
L_08954DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08954DE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954E24;
      }
      goto L_08954E00;
    }
L_08954E00:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08954E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08954E20u) goto L_08954E20;
    return;
L_08954E20:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08954E24;
L_08954E24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08954E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 633u, 0x08952BA8u>(ctx, &aot_mem) && ctx.pc == 0x08954E30u) goto L_08954E30;
    return;
L_08954E30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954E64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1836));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4143));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4142));
    ctx.set_gpr(31, 0x08954EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08954EA8u) goto L_08954EA8;
    return;
L_08954EA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955038;
      }
      goto L_08954EB4;
    }
L_08954EB4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4143))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954ED0;
      }
      goto L_08954EC4;
    }
L_08954EC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955038;
      }
      goto L_08954ED0;
    }
L_08954ED0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08954EE8;
      }
      goto L_08954EDC;
    }
L_08954EDC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4142))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08954F04;
      }
      goto L_08954EE8;
    }
L_08954EE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954F0C;
      }
      goto L_08954EF4;
    }
L_08954EF4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4142))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(62));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08954F0C;
      }
      goto L_08954F04;
    }
L_08954F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955038;
      }
      goto L_08954F0C;
    }
L_08954F0C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31388)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955038;
      }
      goto L_08954F20;
    }
L_08954F20:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31388), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08954F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08954F38u) goto L_08954F38;
    return;
L_08954F38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08954F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 727u, 0x088EB704u>(ctx, &aot_mem) && ctx.pc == 0x08954F44u) goto L_08954F44;
    return;
L_08954F44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08954F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08954F58u) goto L_08954F58;
    return;
L_08954F58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08954F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08954F64u) goto L_08954F64;
    return;
L_08954F64:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08954F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08954F80u) goto L_08954F80;
    return;
L_08954F80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08954F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 644u, 0x0895AB78u>(ctx, &aot_mem) && ctx.pc == 0x08954F8Cu) goto L_08954F8C;
    return;
L_08954F8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FC4;
      }
      goto L_08954F9C;
    }
L_08954F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FB4;
      }
      goto L_08954FAC;
    }
L_08954FAC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08954FB4;
L_08954FB4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08954FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 468u, 0x089521C4u>(ctx, &aot_mem) && ctx.pc == 0x08954FC0u) goto L_08954FC0;
    return;
L_08954FC0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08954FC4;
L_08954FC4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FE8;
      }
      goto L_08954FCC;
    }
L_08954FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(31, 0x08954FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 468u, 0x089521C4u>(ctx, &aot_mem) && ctx.pc == 0x08954FE0u) goto L_08954FE0;
    return;
L_08954FE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FFC;
      }
      goto L_08954FE8;
    }
L_08954FE8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08954FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 579u, 0x089527FCu>(ctx, &aot_mem) && ctx.pc == 0x08954FFCu) goto L_08954FFC;
    return;
L_08954FFC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31388)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31388), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955024;
      }
      goto L_0895501C;
    }
L_0895501C:
    ctx.set_gpr(31, 0x08955024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08955024u) goto L_08955024;
    return;
L_08955024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955038;
      }
      goto L_08955030;
    }
L_08955030:
    ctx.set_gpr(31, 0x08955038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08955038u) goto L_08955038;
    return;
L_08955038:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089550C0;
      }
      goto L_08955080;
    }
L_08955080:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089550B4;
      }
      goto L_0895508C;
    }
L_0895508C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089550B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x089550B0u) goto L_089550B0;
    return;
L_089550B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089550B4;
L_089550B4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895508C;
      }
      goto L_089550C0;
    }
L_089550C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089551BC;
      }
      goto L_089550CC;
    }
L_089550CC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089551BC;
      }
      goto L_089550D8;
    }
L_089550D8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955128;
      }
      goto L_089550E4;
    }
L_089550E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955124;
      }
      goto L_08955100;
    }
L_08955100:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955114;
      }
      goto L_0895510C;
    }
L_0895510C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08955114;
L_08955114:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08955124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08955124u) goto L_08955124;
    return;
L_08955124:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08955128;
L_08955128:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089550E4;
      }
      goto L_08955134;
    }
L_08955134:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895516C;
      }
      goto L_08955148;
    }
L_08955148:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955168;
      }
      goto L_08955160;
    }
L_08955160:
    ctx.set_gpr(31, 0x08955168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08955168u) goto L_08955168;
    return;
L_08955168:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895516C;
L_0895516C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955148;
      }
      goto L_08955178;
    }
L_08955178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895519C;
      }
      goto L_08955188;
    }
L_08955188:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0895519C;
L_0895519C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955188;
      }
      goto L_089551A8;
    }
L_089551A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089551BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089551BCu) goto L_089551BC;
    return;
L_089551BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955264;
      }
      goto L_089551C8;
    }
L_089551C8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895523C;
      }
      goto L_089551D8;
    }
L_089551D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955238;
      }
      goto L_089551F4;
    }
L_089551F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955210;
      }
      goto L_08955208;
    }
L_08955208:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08955210;
L_08955210:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895522C;
      }
      goto L_08955224;
    }
L_08955224:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895522C;
L_0895522C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08955238u);
    // nop
    goto L_08954280;
L_08955238:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0895523C;
L_0895523C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089551D8;
      }
      goto L_08955248;
    }
L_08955248:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08955254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x08955254u) goto L_08955254;
    return;
L_08955254:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08955264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08955264u) goto L_08955264;
    return;
L_08955264:
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
L_08955284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895528C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2197u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21124));
    ctx.set_gpr(31, 0x089552A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 23u, 0x089841B4u>(ctx, &aot_mem) && ctx.pc == 0x089552A4u) goto L_089552A4;
    return;
L_089552A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089552B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089552F8;
      }
      goto L_089552D4;
    }
L_089552D4:
    ctx.set_gpr(31, 0x089552DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089552DCu) goto L_089552DC;
    return;
L_089552DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089552F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552F4u) goto L_089552F4;
    return;
L_089552F4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    goto L_089552F8;
L_089552F8:
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
L_08955310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895533Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895533Cu) goto L_0895533C;
    return;
L_0895533C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955370;
      }
      goto L_08955348;
    }
L_08955348:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08955354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08955354u) goto L_08955354;
    return;
L_08955354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895536Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895536Cu) goto L_0895536C;
    return;
L_0895536C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_08955370;
L_08955370:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955398;
      }
      goto L_08955378;
    }
L_08955378:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08955384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08955384u) goto L_08955384;
    return;
L_08955384:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08955394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 24u, 0x089841C4u>(ctx, &aot_mem) && ctx.pc == 0x08955394u) goto L_08955394;
    return;
L_08955394:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08955398;
L_08955398:
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
L_089553B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089553E0;
      }
      goto L_089553D4;
    }
L_089553D4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089553F0;
      }
      goto L_089553E0;
    }
L_089553E0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089553F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089553F0u) goto L_089553F0;
    return;
L_089553F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895540C;
      }
      goto L_08955400;
    }
L_08955400:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895541C;
      }
      goto L_0895540C;
    }
L_0895540C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895541Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895541Cu) goto L_0895541C;
    return;
L_0895541C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955438;
      }
      goto L_0895542C;
    }
L_0895542C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955448;
      }
      goto L_08955438;
    }
L_08955438:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955448u) goto L_08955448;
    return;
L_08955448:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955464;
      }
      goto L_08955458;
    }
L_08955458:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955474;
      }
      goto L_08955464;
    }
L_08955464:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955474u) goto L_08955474;
    return;
L_08955474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955488:
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
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955684;
      }
      goto L_089554D0;
    }
L_089554D0:
    ctx.set_gpr(20, ctx.gpr[3] - ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089554EC;
      }
      goto L_089554E4;
    }
L_089554E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089554F4;
      }
      goto L_089554EC;
    }
L_089554EC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    goto L_089554F4;
L_089554F4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955520;
      }
      goto L_0895550C;
    }
L_0895550C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955534;
      }
      goto L_08955520;
    }
L_08955520:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955534u) goto L_08955534;
    return;
L_08955534:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955570;
      }
      goto L_0895555C;
    }
L_0895555C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955584;
      }
      goto L_08955570;
    }
L_08955570:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955584u) goto L_08955584;
    return;
L_08955584:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955678;
      }
      goto L_089555A0;
    }
L_089555A0:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[3] - ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089555CC;
      }
      goto L_089555C4;
    }
L_089555C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089555D4;
      }
      goto L_089555CC;
    }
L_089555CC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    goto L_089555D4;
L_089555D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955600;
      }
      goto L_089555EC;
    }
L_089555EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955614;
      }
      goto L_08955600;
    }
L_08955600:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955614u) goto L_08955614;
    return;
L_08955614:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955650;
      }
      goto L_0895563C;
    }
L_0895563C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955664;
      }
      goto L_08955650;
    }
L_08955650:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08955664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08955664u) goto L_08955664;
    return;
L_08955664:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08955678;
L_08955678:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089555A0;
      }
      goto L_08955684;
    }
L_08955684:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
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
L_089556BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089556F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089556F4u) goto L_089556F4;
    return;
L_089556F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895577C;
      }
      goto L_08955700;
    }
L_08955700:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    goto L_08955704;
L_08955704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08955714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 294u, 0x0898525Cu>(ctx, &aot_mem) && ctx.pc == 0x08955714u) goto L_08955714;
    return;
L_08955714:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955748;
      }
      goto L_08955720;
    }
L_08955720:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955738u) goto L_08955738;
    return;
L_08955738:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895574C;
      }
      goto L_08955748;
    }
L_08955748:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0895574C;
L_0895574C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895577C;
      }
      goto L_08955758;
    }
L_08955758:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895577C;
      }
      goto L_08955760;
    }
L_08955760:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895577C;
      }
      goto L_08955768;
    }
L_08955768:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08955774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08955774u) goto L_08955774;
    return;
L_08955774:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955704;
      }
      goto L_0895577C;
    }
L_0895577C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089557A4:
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
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.set_gpr(19, ctx.gpr[30] + 0u);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955854;
      }
      goto L_08955804;
    }
L_08955804:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08955810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08955810u) goto L_08955810;
    return;
L_08955810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895582C;
      }
      goto L_08955824;
    }
L_08955824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955830;
      }
      goto L_0895582C;
    }
L_0895582C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08955830;
L_08955830:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08955844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08955844u) goto L_08955844;
    return;
L_08955844:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A84;
      }
      goto L_08955854;
    }
L_08955854:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A70;
      }
      goto L_08955878;
    }
L_08955878:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089558AC;
      }
      goto L_0895589C;
    }
L_0895589C:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A84;
      }
      goto L_089558AC;
    }
L_089558AC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089558C4;
      }
      goto L_089558B8;
    }
L_089558B8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955878;
      }
      goto L_089558C4;
    }
L_089558C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089559F8;
      }
      goto L_089558CC;
    }
L_089558CC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089559E0;
      }
      goto L_089558D8;
    }
L_089558D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089559B0;
      }
      goto L_089558E4;
    }
L_089558E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089559B0;
      }
      goto L_089558F8;
    }
L_089558F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089559B0;
      }
      goto L_08955904;
    }
L_08955904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895592Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895592Cu) goto L_0895592C;
    return;
L_0895592C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895594Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895594Cu) goto L_0895594C;
    return;
L_0895594C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955998;
      }
      goto L_08955960;
    }
L_08955960:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955998;
      }
      goto L_08955988;
    }
L_08955988:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A84;
      }
      goto L_08955998;
    }
L_08955998:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955960;
      }
      goto L_089559A4;
    }
L_089559A4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089559E0;
      }
      goto L_089559B0;
    }
L_089559B0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089559E0;
      }
      goto L_089559D0;
    }
L_089559D0:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A84;
      }
      goto L_089559E0;
    }
L_089559E0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089558D8;
      }
      goto L_089559EC;
    }
L_089559EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(23, ctx.gpr[23] + ctx.gpr[2]);
    goto L_089559F8;
L_089559F8:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955A10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955A10u) goto L_08955A10;
    return;
L_08955A10:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A5C;
      }
      goto L_08955A1C;
    }
L_08955A1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[22] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A70;
      }
      goto L_08955A4C;
    }
L_08955A4C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08955A5C;
L_08955A5C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955A4C;
      }
      goto L_08955A68;
    }
L_08955A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A7C;
      }
      goto L_08955A70;
    }
L_08955A70:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089558AC;
      }
      goto L_08955A7C;
    }
L_08955A7C:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08955A84;
L_08955A84:
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
L_08955AB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955AC8:
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
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955B0Cu) goto L_08955B0C;
    return;
L_08955B0C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955B30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955B30u) goto L_08955B30;
    return;
L_08955B30:
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
L_08955B54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955B84;
      }
      goto L_08955B70;
    }
L_08955B70:
    ctx.set_gpr(31, 0x08955B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 294u, 0x0898525Cu>(ctx, &aot_mem) && ctx.pc == 0x08955B78u) goto L_08955B78;
    return;
L_08955B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955B84;
      }
      goto L_08955B80;
    }
L_08955B80:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08955B84;
L_08955B84:
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
L_08955B9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955BC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C40;
      }
      goto L_08955C38;
    }
L_08955C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C44;
      }
      goto L_08955C40;
    }
L_08955C40:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_08955C44;
L_08955C44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955C58;
      }
      goto L_08955C4C;
    }
L_08955C4C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C74;
      }
      goto L_08955C58;
    }
L_08955C58:
    ctx.set_gpr(17, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C70;
      }
      goto L_08955C68;
    }
L_08955C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C74;
      }
      goto L_08955C70;
    }
L_08955C70:
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08955C74;
L_08955C74:
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955C90;
      }
      goto L_08955C80;
    }
L_08955C80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08955C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08955C90u) goto L_08955C90;
    return;
L_08955C90:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_08955CB0:
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
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955D04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955D04u) goto L_08955D04;
    return;
L_08955D04:
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08955D24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955D24u) goto L_08955D24;
    return;
L_08955D24:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D3C;
      }
      goto L_08955D34;
    }
L_08955D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D40;
      }
      goto L_08955D3C;
    }
L_08955D3C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08955D40;
L_08955D40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955D54;
      }
      goto L_08955D48;
    }
L_08955D48:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D70;
      }
      goto L_08955D54;
    }
L_08955D54:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D6C;
      }
      goto L_08955D64;
    }
L_08955D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955D70;
      }
      goto L_08955D6C;
    }
L_08955D6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08955D70;
L_08955D70:
    ctx.set_gpr(3, ctx.gpr[22] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955D90;
      }
      goto L_08955D7C;
    }
L_08955D7C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08955D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08955D90u) goto L_08955D90;
    return;
L_08955D90:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_08955DC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955E08;
      }
      goto L_08955DFC;
    }
L_08955DFC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955E14;
      }
      goto L_08955E08;
    }
L_08955E08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08955E14;
L_08955E14:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08955E2Cu);
    // nop
    goto L_08956344;
L_08955E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955E80;
      }
      goto L_08955E74;
    }
L_08955E74:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955E8C;
      }
      goto L_08955E80;
    }
L_08955E80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08955E8C;
L_08955E8C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08955EA4u);
    // nop
    goto L_08956344;
L_08955EA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955EF8;
      }
      goto L_08955EEC;
    }
L_08955EEC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955F04;
      }
      goto L_08955EF8;
    }
L_08955EF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08955F04;
L_08955F04:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08955F1Cu);
    // nop
    goto L_08956344;
L_08955F1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955F70;
      }
      goto L_08955F64;
    }
L_08955F64:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955F7C;
      }
      goto L_08955F70;
    }
L_08955F70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08955F7C;
L_08955F7C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08955F94u);
    // nop
    goto L_08956344;
L_08955F94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955FE8;
      }
      goto L_08955FDC;
    }
L_08955FDC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955FF4;
      }
      goto L_08955FE8;
    }
L_08955FE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08955FF4;
L_08955FF4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0895600Cu);
    // nop
    goto L_08956344;
L_0895600C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895601C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1792));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_08956030;
    }
L_08956030:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32576));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895604C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1784));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_0895605C;
    }
L_0895605C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1768));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_0895606C;
    }
L_0895606C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1760));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_0895607C;
    }
L_0895607C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1808));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_0895608C;
    }
L_0895608C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1752));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_0895609C;
    }
L_0895609C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1740));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_089560AC;
    }
L_089560AC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1732));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089560C4;
      }
      goto L_089560BC;
    }
L_089560BC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1724));
    goto L_089560C4;
L_089560C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089560CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1716));
    ctx.set_gpr(31, 0x089560F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089560F4u) goto L_089560F4;
    return;
L_089560F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956108;
      }
      goto L_089560FC;
    }
L_089560FC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_08956108;
    }
L_08956108:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1708));
    ctx.set_gpr(31, 0x0895611Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895611Cu) goto L_0895611C;
    return;
L_0895611C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956124;
    }
L_08956124:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_08956130;
    }
L_08956130:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1700));
    ctx.set_gpr(31, 0x08956144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08956144u) goto L_08956144;
    return;
L_08956144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956158;
      }
      goto L_0895614C;
    }
L_0895614C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_08956158;
    }
L_08956158:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-21216));
    ctx.set_gpr(31, 0x0895616Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895616Cu) goto L_0895616C;
    return;
L_0895616C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956180;
      }
      goto L_08956174;
    }
L_08956174:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_08956180;
    }
L_08956180:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30308));
    ctx.set_gpr(31, 0x08956194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08956194u) goto L_08956194;
    return;
L_08956194:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089561A4;
      }
      goto L_0895619C;
    }
L_0895619C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_089561A4;
    }
L_089561A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-21116));
    ctx.set_gpr(31, 0x089561B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089561B8u) goto L_089561B8;
    return;
L_089561B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089561C4;
      }
      goto L_089561C0;
    }
L_089561C0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089561C4;
L_089561C4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089561E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089561EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32632)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956204;
      }
      goto L_089561F8;
    }
L_089561F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956208;
      }
      goto L_08956204;
    }
L_08956204:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08956208;
L_08956208:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08956234u);
    // nop
    goto L_0895601C;
L_08956234:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08956244u);
    // nop
    goto L_089561E0;
L_08956244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956278;
      }
      goto L_0895624C;
    }
L_0895624C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1688));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 8u, 0x0894C064u>(ctx, &aot_mem) && ctx.pc == 0x08956264u) goto L_08956264;
    return;
L_08956264:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08956270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 34u, 0x0894C238u>(ctx, &aot_mem) && ctx.pc == 0x08956270u) goto L_08956270;
    return;
L_08956270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895629C;
      }
      goto L_08956278;
    }
L_08956278:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1688));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08956290u) goto L_08956290;
    return;
L_08956290:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895629Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0895629Cu) goto L_0895629C;
    return;
L_0895629C:
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
L_089562BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1692)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089562F0;
      }
      goto L_089562E4;
    }
L_089562E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895632C;
      }
      goto L_089562F0;
    }
L_089562F0:
    ctx.set_gpr(31, 0x089562F8u);
    // nop
    goto L_08956210;
L_089562F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956310;
      }
      goto L_08956308;
    }
L_08956308:
    ctx.set_gpr(31, 0x08956310u);
    // nop
    goto L_0895651C;
L_08956310:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895631Cu);
    // nop
    goto L_089561EC;
L_0895631C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956328;
      }
      goto L_08956324;
    }
L_08956324:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08956328;
L_08956328:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0895632C;
L_0895632C:
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
L_08956344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1680)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956378;
      }
      goto L_0895636C;
    }
L_0895636C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089563BC;
      }
      goto L_08956378;
    }
L_08956378:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0895638Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1063u, 0x0881BF28u>(ctx, &aot_mem) && ctx.pc == 0x0895638Cu) goto L_0895638C;
    return;
L_0895638C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089563A0;
      }
      goto L_08956394;
    }
L_08956394:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089563A4;
      }
      goto L_089563A0;
    }
L_089563A0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4111), static_cast<std::uint8_t>(0u));
    goto L_089563A4;
L_089563A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1680)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089563BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089563BCu) goto L_089563BC;
    return;
L_089563BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089563D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32187), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x089563ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089563ECu) goto L_089563EC;
    return;
L_089563EC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956508;
      }
      goto L_089563F8;
    }
L_089563F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1676));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32632));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0895641Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x0895641Cu) goto L_0895641C;
    return;
L_0895641C:
    ctx.set_gpr(31, 0x08956424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x08956424u) goto L_08956424;
    return;
L_08956424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08956430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08956430u) goto L_08956430;
    return;
L_08956430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895643Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895643Cu) goto L_0895643C;
    return;
L_0895643C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1660));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08956464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08956464u) goto L_08956464;
    return;
L_08956464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956494;
      }
      goto L_0895646C;
    }
L_0895646C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956484;
      }
      goto L_0895647C;
    }
L_0895647C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08956484;
L_08956484:
    ctx.set_gpr(31, 0x0895648Cu);
    // nop
    goto L_089560CC;
L_0895648C:
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-1692), ctx.gpr[2]);
    goto L_08956494;
L_08956494:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32196)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1640));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089564BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089564BCu) goto L_089564BC;
    return;
L_089564BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32196), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32644)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1612));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089564ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089564ECu) goto L_089564EC;
    return;
L_089564EC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32644), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956508;
      }
      goto L_08956500;
    }
L_08956500:
    ctx.set_gpr(31, 0x08956508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956508u) goto L_08956508;
    return;
L_08956508:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895651C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1584));
    ctx.set_gpr(31, 0x08956534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 8u, 0x0894C064u>(ctx, &aot_mem) && ctx.pc == 0x08956534u) goto L_08956534;
    return;
L_08956534:
    ctx.set_gpr(31, 0x0895653Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 34u, 0x0894C238u>(ctx, &aot_mem) && ctx.pc == 0x0895653Cu) goto L_0895653C;
    return;
L_0895653C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895654C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895655C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32544));
    ctx.set_gpr(31, 0x08956590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08956590u) goto L_08956590;
    return;
L_08956590:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089565C4;
      }
      goto L_08956598;
    }
L_08956598:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089565A4u);
    // nop
    goto L_089569A4;
L_089565A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089565BC;
      }
      goto L_089565B0;
    }
L_089565B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089565BC;
L_089565BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956640;
      }
      goto L_089565C4;
    }
L_089565C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089565D0u);
    // nop
    goto L_08957454;
L_089565D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29772)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089565E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x089565E8u) goto L_089565E8;
    return;
L_089565E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956600;
      }
      goto L_089565F4;
    }
L_089565F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08956600;
L_08956600:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895660Cu);
    // nop
    goto L_08957498;
L_0895660C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956628;
      }
      goto L_0895661C;
    }
L_0895661C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08956628;
L_08956628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895663C;
      }
      goto L_08956634;
    }
L_08956634:
    ctx.set_gpr(31, 0x0895663Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895663Cu) goto L_0895663C;
    return;
L_0895663C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08956640;
L_08956640:
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
L_0895665C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08956688u);
    // nop
    goto L_08957454;
L_08956688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29772)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089566A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x089566A0u) goto L_089566A0;
    return;
L_089566A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089566B8;
      }
      goto L_089566AC;
    }
L_089566AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089566B8;
L_089566B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089566C4u);
    // nop
    goto L_08957498;
L_089566C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089566E0;
      }
      goto L_089566D4;
    }
L_089566D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089566E0;
L_089566E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089566F4;
      }
      goto L_089566EC;
    }
L_089566EC:
    ctx.set_gpr(31, 0x089566F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089566F4u) goto L_089566F4;
    return;
L_089566F4:
    ctx.set_gpr(2, 0u + 0u);
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
L_08956714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08956734u);
    // nop
    goto L_08957454;
L_08956734:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08956744u) goto L_08956744;
    return;
L_08956744:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956750u);
    // nop
    goto L_08957498;
L_08956750:
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
L_08956768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08956788u);
    // nop
    goto L_08957454;
L_08956788:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08956798u) goto L_08956798;
    return;
L_08956798:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089567A4u);
    // nop
    goto L_08957498;
L_089567A4:
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
L_089567BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089567E0;
      }
      goto L_089567D8;
    }
L_089567D8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089567E0;
L_089567E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089567F4;
      }
      goto L_089567EC;
    }
L_089567EC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089567F4;
L_089567F4:
    ctx.set_gpr(31, 0x089567FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 748u, 0x0895B21Cu>(ctx, &aot_mem) && ctx.pc == 0x089567FCu) goto L_089567FC;
    return;
L_089567FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895680C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089568B4;
      }
      goto L_08956838;
    }
L_08956838:
    ctx.set_gpr(31, 0x08956840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08956840u) goto L_08956840;
    return;
L_08956840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895684Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 50u, 0x088E8484u>(ctx, &aot_mem) && ctx.pc == 0x0895684Cu) goto L_0895684C;
    return;
L_0895684C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08956860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956860u) goto L_08956860;
    return;
L_08956860:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956874;
      }
      goto L_0895686C;
    }
L_0895686C:
    ctx.set_gpr(31, 0x08956874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956874u) goto L_08956874;
    return;
L_08956874:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08956880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08956880u) goto L_08956880;
    return;
L_08956880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895688Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x0895688Cu) goto L_0895688C;
    return;
L_0895688C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089568A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089568A0u) goto L_089568A0;
    return;
L_089568A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089568B4;
      }
      goto L_089568AC;
    }
L_089568AC:
    ctx.set_gpr(31, 0x089568B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089568B4u) goto L_089568B4;
    return;
L_089568B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089568C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089568C0u) goto L_089568C0;
    return;
L_089568C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089568CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089568CCu) goto L_089568CC;
    return;
L_089568CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089568E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089568E0u) goto L_089568E0;
    return;
L_089568E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2197u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26556));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08956908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 829u, 0x0890FE60u>(ctx, &aot_mem) && ctx.pc == 0x08956908u) goto L_08956908;
    return;
L_08956908:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08956974;
      }
      goto L_08956914;
    }
L_08956914:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08956924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08956924u) goto L_08956924;
    return;
L_08956924:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956950;
      }
      goto L_0895693C;
    }
L_0895693C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956964;
      }
      goto L_08956950;
    }
L_08956950:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08956964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08956964u) goto L_08956964;
    return;
L_08956964:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08956974;
L_08956974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956988;
      }
      goto L_08956980;
    }
L_08956980:
    ctx.set_gpr(31, 0x08956988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956988u) goto L_08956988;
    return;
L_08956988:
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
L_089569A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956AB4;
      }
      goto L_089569C8;
    }
L_089569C8:
    ctx.set_gpr(31, 0x089569D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089569D0u) goto L_089569D0;
    return;
L_089569D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089569DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 88u, 0x088F4808u>(ctx, &aot_mem) && ctx.pc == 0x089569DCu) goto L_089569DC;
    return;
L_089569DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089569F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089569F0u) goto L_089569F0;
    return;
L_089569F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A04;
      }
      goto L_089569FC;
    }
L_089569FC:
    ctx.set_gpr(31, 0x08956A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956A04u) goto L_08956A04;
    return;
L_08956A04:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956A40;
      }
      goto L_08956A18;
    }
L_08956A18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08956A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08956A24u) goto L_08956A24;
    return;
L_08956A24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A38;
      }
      goto L_08956A2C;
    }
L_08956A2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08956A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08956A38u) goto L_08956A38;
    return;
L_08956A38:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08956A40;
L_08956A40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32544));
    ctx.set_gpr(31, 0x08956A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08956A58u) goto L_08956A58;
    return;
L_08956A58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A80;
      }
      goto L_08956A6C;
    }
L_08956A6C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08956A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08956A78u) goto L_08956A78;
    return;
L_08956A78:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08956A80;
L_08956A80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A98;
      }
      goto L_08956A88;
    }
L_08956A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08956A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08956A98u) goto L_08956A98;
    return;
L_08956A98:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08956AB4u);
    // nop
    goto L_08956714;
L_08956AB4:
    ctx.set_gpr(31, 0x08956ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08956ABCu) goto L_08956ABC;
    return;
L_08956ABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08956AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x08956AC8u) goto L_08956AC8;
    return;
L_08956AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
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
L_08956AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956BC4;
      }
      goto L_08956B08;
    }
L_08956B08:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08956B28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956B28u) goto L_08956B28;
    return;
L_08956B28:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08956B44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956B44u) goto L_08956B44;
    return;
L_08956B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08956B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956B5Cu) goto L_08956B5C;
    return;
L_08956B5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08956B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 275u, 0x08951348u>(ctx, &aot_mem) && ctx.pc == 0x08956B68u) goto L_08956B68;
    return;
L_08956B68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08956B80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956B80u) goto L_08956B80;
    return;
L_08956B80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08956B94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956B94u) goto L_08956B94;
    return;
L_08956B94:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08956BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956BA4u) goto L_08956BA4;
    return;
L_08956BA4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08956BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956BB4u) goto L_08956BB4;
    return;
L_08956BB4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08956BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956BC4u) goto L_08956BC4;
    return;
L_08956BC4:
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
L_08956BDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08956C04;
      }
      goto L_08956BFC;
    }
L_08956BFC:
    ctx.set_gpr(31, 0x08956C04u);
    // nop
    goto L_08956AE8;
L_08956C04:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08956C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956C14u) goto L_08956C14;
    return;
L_08956C14:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08956C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956C24u) goto L_08956C24;
    return;
L_08956C24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x08956C30u) goto L_08956C30;
    return;
L_08956C30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956C78u);
    // nop
    goto L_0895655C;
L_08956C78:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CC0;
      }
      goto L_08956C88;
    }
L_08956C88:
    ctx.set_gpr(31, 0x08956C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 556u, 0x08912464u>(ctx, &aot_mem) && ctx.pc == 0x08956C90u) goto L_08956C90;
    return;
L_08956C90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08956C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x08956C9Cu) goto L_08956C9C;
    return;
L_08956C9C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CB4;
      }
      goto L_08956CA8;
    }
L_08956CA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956CB4u) goto L_08956CB4;
    return;
L_08956CB4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956F0C;
      }
      goto L_08956CC0;
    }
L_08956CC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D24;
      }
      goto L_08956CCC;
    }
L_08956CCC:
    ctx.set_gpr(31, 0x08956CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 187u, 0x0893CBCCu>(ctx, &aot_mem) && ctx.pc == 0x08956CD4u) goto L_08956CD4;
    return;
L_08956CD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956CE0;
      }
      goto L_08956CDC;
    }
L_08956CDC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08956CE0;
L_08956CE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CF4;
      }
      goto L_08956CEC;
    }
L_08956CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D08;
      }
      goto L_08956CF4;
    }
L_08956CF4:
    ctx.set_gpr(31, 0x08956CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08956CFCu) goto L_08956CFC;
    return;
L_08956CFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08956D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08956D08u) goto L_08956D08;
    return;
L_08956D08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956D44;
      }
      goto L_08956D10;
    }
L_08956D10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08956D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08956D1Cu) goto L_08956D1C;
    return;
L_08956D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D44;
      }
      goto L_08956D24;
    }
L_08956D24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D38;
      }
      goto L_08956D30;
    }
L_08956D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D44;
      }
      goto L_08956D38;
    }
L_08956D38:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08956D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08956D44u) goto L_08956D44;
    return;
L_08956D44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08956D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 250u, 0x088E13E8u>(ctx, &aot_mem) && ctx.pc == 0x08956D50u) goto L_08956D50;
    return;
L_08956D50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D84;
      }
      goto L_08956D78;
    }
L_08956D78:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08956D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956D84u) goto L_08956D84;
    return;
L_08956D84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956DA0;
      }
      goto L_08956D90;
    }
L_08956D90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(31, 0x08956DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956DA0u) goto L_08956DA0;
    return;
L_08956DA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956DBC;
      }
      goto L_08956DAC;
    }
L_08956DAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(31, 0x08956DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956DBCu) goto L_08956DBC;
    return;
L_08956DBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956DD8;
      }
      goto L_08956DC8;
    }
L_08956DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08956DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08956DD8u) goto L_08956DD8;
    return;
L_08956DD8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08956DF4;
      }
      goto L_08956DE8;
    }
L_08956DE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(317), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08956DF4;
L_08956DF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08956E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 560u, 0x089124B8u>(ctx, &aot_mem) && ctx.pc == 0x08956E08u) goto L_08956E08;
    return;
L_08956E08:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956E44;
      }
      goto L_08956E1C;
    }
L_08956E1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08956E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08956E28u) goto L_08956E28;
    return;
L_08956E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E3C;
      }
      goto L_08956E30;
    }
L_08956E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08956E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08956E3Cu) goto L_08956E3C;
    return;
L_08956E3C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08956E44;
L_08956E44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08956E58u) goto L_08956E58;
    return;
L_08956E58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E80;
      }
      goto L_08956E6C;
    }
L_08956E6C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08956E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08956E78u) goto L_08956E78;
    return;
L_08956E78:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08956E80;
L_08956E80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E98;
      }
      goto L_08956E88;
    }
L_08956E88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08956E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08956E98u) goto L_08956E98;
    return;
L_08956E98:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.set_gpr(31, 0x08956EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x08956EACu) goto L_08956EAC;
    return;
L_08956EAC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08956EBCu);
    // nop
    goto L_0895726C;
L_08956EBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08956ED0u);
    // nop
    goto L_08956714;
L_08956ED0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956EE0;
      }
      goto L_08956ED8;
    }
L_08956ED8:
    ctx.set_gpr(31, 0x08956EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 189u, 0x0893CBECu>(ctx, &aot_mem) && ctx.pc == 0x08956EE0u) goto L_08956EE0;
    return;
L_08956EE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956EF4;
      }
      goto L_08956EEC;
    }
L_08956EEC:
    ctx.set_gpr(31, 0x08956EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956EF4u) goto L_08956EF4;
    return;
L_08956EF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956F08;
      }
      goto L_08956F00;
    }
L_08956F00:
    ctx.set_gpr(31, 0x08956F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956F08u) goto L_08956F08;
    return;
L_08956F08:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08956F0C;
L_08956F0C:
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
L_08956F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956F68;
      }
      goto L_08956F58;
    }
L_08956F58:
    ctx.set_gpr(31, 0x08956F60u);
    // nop
    goto L_08956C44;
L_08956F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895724C;
      }
      goto L_08956F68;
    }
L_08956F68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956F7Cu);
    // nop
    goto L_0895655C;
L_08956F7C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956F94;
      }
      goto L_08956F88;
    }
L_08956F88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956F94u) goto L_08956F94;
    return;
L_08956F94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956FB4;
      }
      goto L_08956F9C;
    }
L_08956F9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x08956FA8u) goto L_08956FA8;
    return;
L_08956FA8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895724C;
      }
      goto L_08956FB4;
    }
L_08956FB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08956FC8u);
    // nop
    goto L_0895665C;
L_08956FC8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956FE0;
      }
      goto L_08956FD4;
    }
L_08956FD4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08956FE0u) goto L_08956FE0;
    return;
L_08956FE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957000;
      }
      goto L_08956FE8;
    }
L_08956FE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08956FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x08956FF4u) goto L_08956FF4;
    return;
L_08956FF4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895724C;
      }
      goto L_08957000;
    }
L_08957000:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957068;
      }
      goto L_08957010;
    }
L_08957010:
    ctx.set_gpr(31, 0x08957018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 187u, 0x0893CBCCu>(ctx, &aot_mem) && ctx.pc == 0x08957018u) goto L_08957018;
    return;
L_08957018:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957024;
      }
      goto L_08957020;
    }
L_08957020:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08957024;
L_08957024:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957038;
      }
      goto L_08957030;
    }
L_08957030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895704C;
      }
      goto L_08957038;
    }
L_08957038:
    ctx.set_gpr(31, 0x08957040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08957040u) goto L_08957040;
    return;
L_08957040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895704Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895704Cu) goto L_0895704C;
    return;
L_0895704C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957088;
      }
      goto L_08957054;
    }
L_08957054:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08957060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08957060u) goto L_08957060;
    return;
L_08957060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957088;
      }
      goto L_08957068;
    }
L_08957068:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895707C;
      }
      goto L_08957074;
    }
L_08957074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957088;
      }
      goto L_0895707C;
    }
L_0895707C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08957088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08957088u) goto L_08957088;
    return;
L_08957088:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08957094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 250u, 0x088E13E8u>(ctx, &aot_mem) && ctx.pc == 0x08957094u) goto L_08957094;
    return;
L_08957094:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089570C8;
      }
      goto L_089570BC;
    }
L_089570BC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x089570C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089570C8u) goto L_089570C8;
    return;
L_089570C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089570E4;
      }
      goto L_089570D4;
    }
L_089570D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(31, 0x089570E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089570E4u) goto L_089570E4;
    return;
L_089570E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957100;
      }
      goto L_089570F0;
    }
L_089570F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(31, 0x08957100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08957100u) goto L_08957100;
    return;
L_08957100:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895711C;
      }
      goto L_0895710C;
    }
L_0895710C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0895711Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895711Cu) goto L_0895711C;
    return;
L_0895711C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08957128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 531u, 0x089122E4u>(ctx, &aot_mem) && ctx.pc == 0x08957128u) goto L_08957128;
    return;
L_08957128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(317), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08957144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 560u, 0x089124B8u>(ctx, &aot_mem) && ctx.pc == 0x08957144u) goto L_08957144;
    return;
L_08957144:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957180;
      }
      goto L_08957158;
    }
L_08957158:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08957164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08957164u) goto L_08957164;
    return;
L_08957164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957178;
      }
      goto L_0895716C;
    }
L_0895716C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08957178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08957178u) goto L_08957178;
    return;
L_08957178:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08957180;
L_08957180:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08957194u) goto L_08957194;
    return;
L_08957194:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089571BC;
      }
      goto L_089571A8;
    }
L_089571A8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089571B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089571B4u) goto L_089571B4;
    return;
L_089571B4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089571BC;
L_089571BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089571D4;
      }
      goto L_089571C4;
    }
L_089571C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089571D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089571D4u) goto L_089571D4;
    return;
L_089571D4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.set_gpr(31, 0x089571E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x089571E8u) goto L_089571E8;
    return;
L_089571E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089571F8u);
    // nop
    goto L_08956768;
L_089571F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957220u) goto L_08957220;
    return;
L_08957220:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957230;
      }
      goto L_08957228;
    }
L_08957228:
    ctx.set_gpr(31, 0x08957230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 189u, 0x0893CBECu>(ctx, &aot_mem) && ctx.pc == 0x08957230u) goto L_08957230;
    return;
L_08957230:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957248;
      }
      goto L_0895723C;
    }
L_0895723C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957248u) goto L_08957248;
    return;
L_08957248:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0895724C;
L_0895724C:
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
L_0895726C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089572AC;
      }
      goto L_089572A0;
    }
L_089572A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957430;
      }
      goto L_089572AC;
    }
L_089572AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957314;
      }
      goto L_089572B8;
    }
L_089572B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089572D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089572D0u) goto L_089572D0;
    return;
L_089572D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089572E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 544u, 0x0895E370u>(ctx, &aot_mem) && ctx.pc == 0x089572E0u) goto L_089572E0;
    return;
L_089572E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957314;
      }
      goto L_089572E8;
    }
L_089572E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089572F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 520u, 0x0895E1F8u>(ctx, &aot_mem) && ctx.pc == 0x089572F8u) goto L_089572F8;
    return;
L_089572F8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08957314;
      }
      goto L_08957300;
    }
L_08957300:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08957310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 529u, 0x0895E268u>(ctx, &aot_mem) && ctx.pc == 0x08957310u) goto L_08957310;
    return;
L_08957310:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08957314;
L_08957314:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957380;
      }
      goto L_0895732C;
    }
L_0895732C:
    ctx.set_gpr(31, 0x08957334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08957334u) goto L_08957334;
    return;
L_08957334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957380;
      }
      goto L_0895733C;
    }
L_0895733C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11908));
    ctx.set_gpr(31, 0x08957364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08957364u) goto L_08957364;
    return;
L_08957364:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895737Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895737Cu) goto L_0895737C;
    return;
L_0895737C:
    ctx.set_gpr(16, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    goto L_08957380;
L_08957380:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089573F0;
      }
      goto L_08957388;
    }
L_08957388:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089573F0;
      }
      goto L_0895739C;
    }
L_0895739C:
    ctx.set_gpr(31, 0x089573A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089573A4u) goto L_089573A4;
    return;
L_089573A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089573F0;
      }
      goto L_089573AC;
    }
L_089573AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11908));
    ctx.set_gpr(31, 0x089573D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089573D4u) goto L_089573D4;
    return;
L_089573D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089573ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089573ECu) goto L_089573EC;
    return;
L_089573EC:
    ctx.set_gpr(16, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    goto L_089573F0;
L_089573F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957418;
      }
      goto L_089573F8;
    }
L_089573F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957418u) goto L_08957418;
    return;
L_08957418:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895742C;
      }
      goto L_08957420;
    }
L_08957420:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895742Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 537u, 0x0895E2E4u>(ctx, &aot_mem) && ctx.pc == 0x0895742Cu) goto L_0895742C;
    return;
L_0895742C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08957430;
L_08957430:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2080));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957484;
      }
      goto L_08957468;
    }
L_08957468:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895747Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895747Cu) goto L_0895747C;
    return;
L_0895747C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957488;
      }
      goto L_08957484;
    }
L_08957484:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08957488;
L_08957488:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089574C4;
      }
      goto L_089574AC;
    }
L_089574AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089574BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089574BCu) goto L_089574BC;
    return;
L_089574BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089574C8;
      }
      goto L_089574C4;
    }
L_089574C4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089574C8;
L_089574C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957500u);
    // nop
    goto L_0895655C;
L_08957500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957524;
      }
      goto L_0895750C;
    }
L_0895750C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895751C;
      }
      goto L_08957514;
    }
L_08957514:
    ctx.set_gpr(31, 0x0895751Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895751Cu) goto L_0895751C;
    return;
L_0895751C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957588;
      }
      goto L_08957524;
    }
L_08957524:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08957538;
      }
      goto L_08957534;
    }
L_08957534:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08957538;
L_08957538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957548;
      }
      goto L_08957544;
    }
L_08957544:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    goto L_08957548;
L_08957548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08957554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 511u, 0x0891212Cu>(ctx, &aot_mem) && ctx.pc == 0x08957554u) goto L_08957554;
    return;
L_08957554:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957574;
      }
      goto L_0895755C;
    }
L_0895755C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08957574;
      }
      goto L_08957564;
    }
L_08957564:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08957574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08957574u) goto L_08957574;
    return;
L_08957574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957588;
      }
      goto L_08957580;
    }
L_08957580:
    ctx.set_gpr(31, 0x08957588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957588u) goto L_08957588;
    return;
L_08957588:
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
L_089575A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089575B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089575B0u) goto L_089575B0;
    return;
L_089575B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089575C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089575FCu);
    // nop
    goto L_0895655C;
L_089575FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08957608u) goto L_08957608;
    return;
L_08957608:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957620;
      }
      goto L_08957614;
    }
L_08957614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08957620;
L_08957620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957638;
      }
      goto L_0895762C;
    }
L_0895762C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895766C;
      }
      goto L_08957638;
    }
L_08957638:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895764C;
      }
      goto L_08957644;
    }
L_08957644:
    ctx.set_gpr(31, 0x0895764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895764Cu) goto L_0895764C;
    return;
L_0895764C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957660;
      }
      goto L_08957658;
    }
L_08957658:
    ctx.set_gpr(31, 0x08957660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957660u) goto L_08957660;
    return;
L_08957660:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957744;
      }
      goto L_0895766C;
    }
L_0895766C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957700;
      }
      goto L_0895767C;
    }
L_0895767C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895768Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 273u, 0x089111DCu>(ctx, &aot_mem) && ctx.pc == 0x0895768Cu) goto L_0895768C;
    return;
L_0895768C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0895769Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895769Cu) goto L_0895769C;
    return;
L_0895769C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576A4;
    }
L_089576A4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576B4;
    }
L_089576B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089576C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 273u, 0x089111DCu>(ctx, &aot_mem) && ctx.pc == 0x089576C4u) goto L_089576C4;
    return;
L_089576C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089576DC;
      }
      goto L_089576D4;
    }
L_089576D4:
    ctx.set_gpr(31, 0x089576DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089576DCu) goto L_089576DC;
    return;
L_089576DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089576E8;
    }
L_089576E8:
    ctx.set_gpr(31, 0x089576F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089576F0u) goto L_089576F0;
    return;
L_089576F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957744;
      }
      goto L_089576FC;
    }
L_089576FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08957700;
L_08957700:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0895770Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 509u, 0x08912108u>(ctx, &aot_mem) && ctx.pc == 0x0895770Cu) goto L_0895770C;
    return;
L_0895770C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895767C;
      }
      goto L_08957718;
    }
L_08957718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895772C;
      }
      goto L_08957724;
    }
L_08957724:
    ctx.set_gpr(31, 0x0895772Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895772Cu) goto L_0895772C;
    return;
L_0895772C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957740;
      }
      goto L_08957738;
    }
L_08957738:
    ctx.set_gpr(31, 0x08957740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957740u) goto L_08957740;
    return;
L_08957740:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08957744;
L_08957744:
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
L_08957760:
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A4C;
      }
      goto L_0895779C;
    }
L_0895779C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089577A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x089577A8u) goto L_089577A8;
    return;
L_089577A8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089577B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x089577B8u) goto L_089577B8;
    return;
L_089577B8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A4C;
      }
      goto L_089577C4;
    }
L_089577C4:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A40;
      }
      goto L_089577D4;
    }
L_089577D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089577E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089577E4u) goto L_089577E4;
    return;
L_089577E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957814;
      }
      goto L_089577F0;
    }
L_089577F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, 0x08957804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957804u) goto L_08957804;
    return;
L_08957804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957814;
      }
      goto L_0895780C;
    }
L_0895780C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957818;
      }
      goto L_08957814;
    }
L_08957814:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08957818;
L_08957818:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A3C;
      }
      goto L_08957820;
    }
L_08957820:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08957830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957830u) goto L_08957830;
    return;
L_08957830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A3C;
      }
      goto L_08957838;
    }
L_08957838:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A4C;
      }
      goto L_08957840;
    }
L_08957840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895785C;
      }
      goto L_08957850;
    }
L_08957850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0895785C;
L_0895785C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08957868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 47u, 0x08944398u>(ctx, &aot_mem) && ctx.pc == 0x08957868u) goto L_08957868;
    return;
L_08957868:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957880;
      }
      goto L_08957874;
    }
L_08957874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08957880;
L_08957880:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089578A8;
      }
      goto L_089578A0;
    }
L_089578A0:
    ctx.set_gpr(31, 0x089578A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089578A8u) goto L_089578A8;
    return;
L_089578A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089578B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089578B4u) goto L_089578B4;
    return;
L_089578B4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x089578C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089578C8u) goto L_089578C8;
    return;
L_089578C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957968;
      }
      goto L_089578D4;
    }
L_089578D4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089578E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089578E4u) goto L_089578E4;
    return;
L_089578E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08957900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08957900u) goto L_08957900;
    return;
L_08957900:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957964;
      }
      goto L_0895790C;
    }
L_0895790C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957920u) goto L_08957920;
    return;
L_08957920:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08957930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957930u) goto L_08957930;
    return;
L_08957930:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957964;
      }
      goto L_08957940;
    }
L_08957940:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08957964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 647u, 0x08942DB8u>(ctx, &aot_mem) && ctx.pc == 0x08957964u) goto L_08957964;
    return;
L_08957964:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08957968;
L_08957968:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089578D4;
      }
      goto L_08957974;
    }
L_08957974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957990;
      }
      goto L_08957984;
    }
L_08957984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08957990;
L_08957990:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089579AC;
      }
      goto L_089579A0;
    }
L_089579A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089579AC;
L_089579AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089579C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 165u, 0x08910B0Cu>(ctx, &aot_mem) && ctx.pc == 0x089579C0u) goto L_089579C0;
    return;
L_089579C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089579D4;
      }
      goto L_089579CC;
    }
L_089579CC:
    ctx.set_gpr(31, 0x089579D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089579D4u) goto L_089579D4;
    return;
L_089579D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089579E8;
      }
      goto L_089579E0;
    }
L_089579E0:
    ctx.set_gpr(31, 0x089579E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089579E8u) goto L_089579E8;
    return;
L_089579E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    ctx.set_gpr(31, 0x089579FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089579FCu) goto L_089579FC;
    return;
L_089579FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A14;
      }
      goto L_08957A04;
    }
L_08957A04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08957A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x08957A14u) goto L_08957A14;
    return;
L_08957A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A28;
      }
      goto L_08957A20;
    }
L_08957A20:
    ctx.set_gpr(31, 0x08957A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957A28u) goto L_08957A28;
    return;
L_08957A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A3C;
      }
      goto L_08957A34;
    }
L_08957A34:
    ctx.set_gpr(31, 0x08957A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957A3Cu) goto L_08957A3C;
    return;
L_08957A3C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08957A40;
L_08957A40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089577D4;
      }
      goto L_08957A4C;
    }
L_08957A4C:
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
L_08957A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957AA4;
    }
L_08957AA4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1540));
    ctx.set_gpr(31, 0x08957AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08957AB4u) goto L_08957AB4;
    return;
L_08957AB4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957AC0;
    }
L_08957AC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11996));
    ctx.set_gpr(31, 0x08957AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 461u, 0x08911DF8u>(ctx, &aot_mem) && ctx.pc == 0x08957AD4u) goto L_08957AD4;
    return;
L_08957AD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957AE0;
    }
L_08957AE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957AF0u) goto L_08957AF0;
    return;
L_08957AF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957AF8;
    }
L_08957AF8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1532));
    ctx.set_gpr(31, 0x08957B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08957B08u) goto L_08957B08;
    return;
L_08957B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957B14;
    }
L_08957B14:
    ctx.set_gpr(31, 0x08957B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 47u, 0x08944398u>(ctx, &aot_mem) && ctx.pc == 0x08957B1Cu) goto L_08957B1C;
    return;
L_08957B1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B34;
      }
      goto L_08957B28;
    }
L_08957B28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08957B34;
L_08957B34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957B5C;
      }
      goto L_08957B54;
    }
L_08957B54:
    ctx.set_gpr(31, 0x08957B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08957B5Cu) goto L_08957B5C;
    return;
L_08957B5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957B70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957B70u) goto L_08957B70;
    return;
L_08957B70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1520));
    ctx.set_gpr(31, 0x08957B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08957B90u) goto L_08957B90;
    return;
L_08957B90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08957BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08957BA0u) goto L_08957BA0;
    return;
L_08957BA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957BB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957BB4u) goto L_08957BB4;
    return;
L_08957BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1464));
    ctx.set_gpr(31, 0x08957BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08957BC8u) goto L_08957BC8;
    return;
L_08957BC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BF8;
      }
      goto L_08957BD4;
    }
L_08957BD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08957BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957BE8u) goto L_08957BE8;
    return;
L_08957BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BF8;
      }
      goto L_08957BF0;
    }
L_08957BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BFC;
      }
      goto L_08957BF8;
    }
L_08957BF8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08957BFC;
L_08957BFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08957C10u) goto L_08957C10;
    return;
L_08957C10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957C24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957C24u) goto L_08957C24;
    return;
L_08957C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1452));
    ctx.set_gpr(31, 0x08957C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08957C38u) goto L_08957C38;
    return;
L_08957C38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C68;
      }
      goto L_08957C44;
    }
L_08957C44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08957C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957C58u) goto L_08957C58;
    return;
L_08957C58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C68;
      }
      goto L_08957C60;
    }
L_08957C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C6C;
      }
      goto L_08957C68;
    }
L_08957C68:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08957C6C;
L_08957C6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08957C80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957C80u) goto L_08957C80;
    return;
L_08957C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1440));
    ctx.set_gpr(31, 0x08957C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08957C94u) goto L_08957C94;
    return;
L_08957C94:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC4;
      }
      goto L_08957CA0;
    }
L_08957CA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08957CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957CB4u) goto L_08957CB4;
    return;
L_08957CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC4;
      }
      goto L_08957CBC;
    }
L_08957CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC8;
      }
      goto L_08957CC4;
    }
L_08957CC4:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08957CC8;
L_08957CC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D04;
      }
      goto L_08957CE0;
    }
L_08957CE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, 0x08957CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08957CF4u) goto L_08957CF4;
    return;
L_08957CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D04;
      }
      goto L_08957CFC;
    }
L_08957CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D08;
      }
      goto L_08957D04;
    }
L_08957D04:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08957D08;
L_08957D08:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D20;
      }
      goto L_08957D10;
    }
L_08957D10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x08957D20u) goto L_08957D20;
    return;
L_08957D20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08957D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08957D34u) goto L_08957D34;
    return;
L_08957D34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.set_gpr(31, 0x08957D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x08957D44u) goto L_08957D44;
    return;
L_08957D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D58;
      }
      goto L_08957D50;
    }
L_08957D50:
    ctx.set_gpr(31, 0x08957D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08957D58u) goto L_08957D58;
    return;
L_08957D58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957DCC;
      }
      goto L_08957D94;
    }
L_08957D94:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957DCC;
      }
      goto L_08957D9C;
    }
L_08957D9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1424));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1532));
    ctx.set_gpr(31, 0x08957DB8u);
    // nop
    goto L_08957760;
L_08957DB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957DC4u);
    // nop
    goto L_08957A80;
L_08957DC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08957DCC;
L_08957DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08957DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 618u, 0x08916360u>(ctx, &aot_mem) && ctx.pc == 0x08957DFCu) goto L_08957DFC;
    return;
L_08957DFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08957E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x08957E0Cu) goto L_08957E0C;
    return;
L_08957E0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 569u, 0x08916044u>(ctx, &aot_mem) && ctx.pc == 0x08957E18u) goto L_08957E18;
    return;
L_08957E18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9532)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957E5C;
      }
      goto L_08957E24;
    }
L_08957E24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9524)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08957E44u) goto L_08957E44;
    return;
L_08957E44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9532), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08957E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08957E5Cu) goto L_08957E5C;
    return;
L_08957E5C:
    ctx.set_gpr(31, 0x08957E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08957E64u) goto L_08957E64;
    return;
L_08957E64:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9536)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957E80;
      }
      goto L_08957E74;
    }
L_08957E74:
    ctx.set_gpr(3, 2198u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32648));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9536), ctx.gpr[3]);
    goto L_08957E80;
L_08957E80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9544)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957EC8;
      }
      goto L_08957E8C;
    }
L_08957E8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08957E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08957E98u) goto L_08957E98;
    return;
L_08957E98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08957EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08957EA4u) goto L_08957EA4;
    return;
L_08957EA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(9544));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08957EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08957EB4u) goto L_08957EB4;
    return;
L_08957EB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9544)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1408));
    ctx.set_gpr(31, 0x08957EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08957EC8u) goto L_08957EC8;
    return;
L_08957EC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9528), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9548), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_08957EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08957F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 599u, 0x08916234u>(ctx, &aot_mem) && ctx.pc == 0x08957F0Cu) goto L_08957F0C;
    return;
L_08957F0C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(9548), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08957F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08957F18u) goto L_08957F18;
    return;
L_08957F18:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9532)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957FE0;
      }
      goto L_08957F2C;
    }
L_08957F2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08957F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1005u, 0x0891BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08957F38u) goto L_08957F38;
    return;
L_08957F38:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957F78;
      }
      goto L_08957F54;
    }
L_08957F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957F78;
      }
      goto L_08957F60;
    }
L_08957F60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08957F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08957F70u) goto L_08957F70;
    return;
L_08957F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957FF0;
      }
      goto L_08957F78;
    }
L_08957F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957FA4;
      }
      goto L_08957F94;
    }
L_08957F94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957FA8;
      }
      goto L_08957FA4;
    }
L_08957FA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08957FA8;
L_08957FA8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08957FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 49u, 0x0891C38Cu>(ctx, &aot_mem) && ctx.pc == 0x08957FB8u) goto L_08957FB8;
    return;
L_08957FB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08957FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 636u, 0x08916470u>(ctx, &aot_mem) && ctx.pc == 0x08957FCCu) goto L_08957FCC;
    return;
L_08957FCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08957FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08957FDCu) goto L_08957FDC;
    return;
L_08957FDC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08957FE0;
L_08957FE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9524)));
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957F2C;
      }
      goto L_08957FF0;
    }
L_08957FF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 2u, 0x08958008u>(ctx, &aot_mem); return;
      }
      goto L_08957FFC;
    }
L_08957FFC:
    ctx.set_gpr(31, 0x08958004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08954000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954008u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954010u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954028u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954030u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895403Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954054u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954064u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895406Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895409Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954120u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895413Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954188u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954190u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895419Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954214u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954220u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895423Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954254u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954260u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895426Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954280u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895431Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954354u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954360u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954368u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954370u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895437Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954390u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895439Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895440Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954414u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954424u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954444u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895447Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895448Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954508u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954518u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895453Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954554u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954560u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954570u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895457Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895459Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954610u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954618u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954650u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954660u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954690u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895473Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954764u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954788u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954790u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954794u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895479Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954804u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954814u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954820u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954828u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895483Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954848u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954860u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954888u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954898u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954900u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895490Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954910u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954918u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954920u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954938u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895493Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954954u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895497Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895498Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895499Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954CECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ED0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895501Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955024u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955030u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955038u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955058u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895508Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955100u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895510Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955114u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955134u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955148u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895516Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955178u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955188u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895519Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955224u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895522Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955238u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895523Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955248u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955254u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955264u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955284u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895528Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895533Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955348u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955354u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895536Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955370u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955398u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955400u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895540Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895541Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895542Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955438u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955464u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895550Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955520u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895555Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955570u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955584u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955614u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895563Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955650u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955664u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955678u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955684u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955700u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955714u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955720u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955738u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955748u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895574Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955768u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955774u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895577Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955804u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955810u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955824u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895582Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955830u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955844u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955878u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895589Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895592Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895594Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895600Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895601Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956030u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895604Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895605Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895606Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895607Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895608Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895609Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956108u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895611Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956144u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895614Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895616Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895619Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956204u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956210u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956234u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956244u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895624Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956264u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956270u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956290u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895629Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895631Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956324u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956328u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895632Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895636Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895638Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956394u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895641Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956424u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956430u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895643Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956464u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895646Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895647Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956484u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895648Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956494u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956508u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895651Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895653Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895654Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895655Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956590u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956598u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895660Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895661Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956628u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956634u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895663Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956640u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895665Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956688u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956714u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956734u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956744u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956750u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956768u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956788u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956798u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895680Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895684Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956860u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895686Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895688Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956908u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956924u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895693Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956950u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956964u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956974u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956980u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ABCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ED0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ED8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957010u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957018u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957024u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957030u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957038u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957040u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895704Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957054u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957060u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957068u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957074u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895707Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957088u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957094u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957100u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895710Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895711Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957144u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957164u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895716Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957178u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957220u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895723Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957248u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895724Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895726Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957300u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957314u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895732Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957334u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895733Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957364u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895737Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957380u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895739Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957420u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895742Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957430u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957454u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895747Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957484u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957498u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895750Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895751Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957524u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957534u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957538u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957544u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957548u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957554u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895755Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957564u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957574u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957580u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957588u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957608u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957614u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895762Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895764Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957660u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895766Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895767Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895768Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895769Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957700u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895770Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957718u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957724u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895772Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957738u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957744u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895779Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957804u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895780Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957814u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957818u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957820u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957830u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957850u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895785Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957900u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895790Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957920u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957930u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957940u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957964u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957974u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957984u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957990u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FFCu, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp
