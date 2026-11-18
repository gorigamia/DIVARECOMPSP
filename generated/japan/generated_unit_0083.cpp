#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0083[4095] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 78, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 88, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 0,
    101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 116, 117, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0,
    0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0,
    171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0,
    0, 0, 0, 232, 0, 233, 234, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 240, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 264, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291,
    292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    321, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333,
    0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 351, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373,
    374, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 383, 0, 0, 384, 0, 0, 385, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0,
    0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 408,
    0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 423, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0,
    439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447,
    448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463,
    0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470,
    0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480,
    0, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 488, 0, 489, 0, 0,
    0, 0, 0, 490, 0, 0, 491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499,
    500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 0,
    0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0,
    0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0,
    538, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0,
    545, 0, 546, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 562, 0,
    0, 0, 0, 0, 563, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 574, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0,
    0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589,
    0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 597, 598, 0, 0, 599, 600,
    0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 610, 611, 612,
    0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 0,
    622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 632,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 637, 0, 0, 638, 0,
    639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0,
    0, 0, 0, 0, 645, 646, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650,
    0, 0, 0, 0, 0, 0, 0, 651, 652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0,
    657, 0, 0, 0, 658, 0, 0, 659, 660, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0,
    670, 671, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0,
    0, 682, 0, 0, 0, 683, 0, 684, 685, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0,
    0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0,
    0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0,
    715, 0, 716, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    724, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 0,
    0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 738, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 0,
    0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0,
    753, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 761, 0,
    0, 0, 762, 0, 0, 763, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 0, 771,
    0, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0,
    0, 783, 0, 0, 0, 0, 0, 784, 785, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 788, 789, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793,
    0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0,
    801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 804, 0, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0,
    808, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 0,
    0, 819, 0, 820, 821, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 830, 0, 0, 831, 0, 0, 832, 0, 833, 0,
    834, 0, 835, 0, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 840, 841, 0, 0, 842, 0, 0, 0, 843, 0, 844,
    0, 0, 845, 846, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 0,
    0, 0, 854, 0, 0, 855, 0, 0, 856, 857, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861, 862, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0,
    866, 0, 0, 867, 0, 0, 0, 868, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 873, 874, 0,
    0, 875, 0, 0, 876, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879,
    0, 0, 880, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 885, 0, 886, 0, 0, 887, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 890, 0, 0,
    0, 0, 891, 892, 0, 0, 893, 0, 0, 0, 894, 0, 895, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 899, 0, 0, 0, 0, 0, 900, 0, 901,
    0, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 908, 909, 0, 0, 910, 0,
    0, 911, 0, 912, 0, 0, 913, 0, 0, 914, 0, 0, 0, 915, 916, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 920,
    0, 0, 921, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 926, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 931, 0, 932,
    0, 0, 933, 0, 0, 0, 0, 0, 934, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 940, 0, 941, 0, 0, 942,
};
void recomp_unit_0083_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08950000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0083[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08950000;
    case 2u: goto L_08950010;
    case 3u: goto L_0895001C;
    case 4u: goto L_08950028;
    case 5u: goto L_08950040;
    case 6u: goto L_0895005C;
    case 7u: goto L_08950068;
    case 8u: goto L_089500A0;
    case 9u: goto L_089500AC;
    case 10u: goto L_089500B8;
    case 11u: goto L_089500C4;
    case 12u: goto L_089500E8;
    case 13u: goto L_08950100;
    case 14u: goto L_08950108;
    case 15u: goto L_08950114;
    case 16u: goto L_08950134;
    case 17u: goto L_08950158;
    case 18u: goto L_08950168;
    case 19u: goto L_08950180;
    case 20u: goto L_0895018C;
    case 21u: goto L_089501B0;
    case 22u: goto L_089501C8;
    case 23u: goto L_089501E0;
    case 24u: goto L_08950218;
    case 25u: goto L_08950224;
    case 26u: goto L_08950234;
    case 27u: goto L_08950240;
    case 28u: goto L_0895024C;
    case 29u: goto L_08950258;
    case 30u: goto L_08950284;
    case 31u: goto L_089502B0;
    case 32u: goto L_089502D4;
    case 33u: goto L_089502DC;
    case 34u: goto L_089502FC;
    case 35u: goto L_08950318;
    case 36u: goto L_08950320;
    case 37u: goto L_08950344;
    case 38u: goto L_08950350;
    case 39u: goto L_08950364;
    case 40u: goto L_08950370;
    case 41u: goto L_089503A4;
    case 42u: goto L_089503B0;
    case 43u: goto L_089503B8;
    case 44u: goto L_089503C8;
    case 45u: goto L_089503D4;
    case 46u: goto L_089503F4;
    case 47u: goto L_08950400;
    case 48u: goto L_0895040C;
    case 49u: goto L_08950414;
    case 50u: goto L_08950420;
    case 51u: goto L_08950428;
    case 52u: goto L_0895045C;
    case 53u: goto L_0895047C;
    case 54u: goto L_08950488;
    case 55u: goto L_08950494;
    case 56u: goto L_089504AC;
    case 57u: goto L_089504C0;
    case 58u: goto L_089504CC;
    case 59u: goto L_089504E0;
    case 60u: goto L_089504F8;
    case 61u: goto L_08950500;
    case 62u: goto L_08950510;
    case 63u: goto L_0895052C;
    case 64u: goto L_08950548;
    case 65u: goto L_0895059C;
    case 66u: goto L_089505A4;
    case 67u: goto L_089505BC;
    case 68u: goto L_089505C8;
    case 69u: goto L_089505D0;
    case 70u: goto L_089505DC;
    case 71u: goto L_089505E4;
    case 72u: goto L_089505FC;
    case 73u: goto L_08950640;
    case 74u: goto L_0895064C;
    case 75u: goto L_08950664;
    case 76u: goto L_0895069C;
    case 77u: goto L_089506A4;
    case 78u: goto L_089506A8;
    case 79u: goto L_089506AC;
    case 80u: goto L_089506B8;
    case 81u: goto L_089506EC;
    case 82u: goto L_08950700;
    case 83u: goto L_08950714;
    case 84u: goto L_0895072C;
    case 85u: goto L_08950738;
    case 86u: goto L_08950750;
    case 87u: goto L_0895077C;
    case 88u: goto L_08950784;
    case 89u: goto L_08950788;
    case 90u: goto L_08950798;
    case 91u: goto L_089507A4;
    case 92u: goto L_089507AC;
    case 93u: goto L_089507B8;
    case 94u: goto L_089507C0;
    case 95u: goto L_089507F0;
    case 96u: goto L_08950834;
    case 97u: goto L_08950844;
    case 98u: goto L_08950850;
    case 99u: goto L_0895086C;
    case 100u: goto L_08950870;
    case 101u: goto L_08950880;
    case 102u: goto L_0895088C;
    case 103u: goto L_08950898;
    case 104u: goto L_089508B8;
    case 105u: goto L_089508D0;
    case 106u: goto L_089508DC;
    case 107u: goto L_089508E8;
    case 108u: goto L_089508F4;
    case 109u: goto L_08950900;
    case 110u: goto L_08950908;
    case 111u: goto L_08950914;
    case 112u: goto L_08950920;
    case 113u: goto L_0895092C;
    case 114u: goto L_08950948;
    case 115u: goto L_0895094C;
    case 116u: goto L_08950958;
    case 117u: goto L_0895095C;
    case 118u: goto L_0895096C;
    case 119u: goto L_08950998;
    case 120u: goto L_089509B8;
    case 121u: goto L_089509C8;
    case 122u: goto L_089509E0;
    case 123u: goto L_089509F8;
    case 124u: goto L_08950A28;
    case 125u: goto L_08950A34;
    case 126u: goto L_08950A48;
    case 127u: goto L_08950A5C;
    case 128u: goto L_08950A68;
    case 129u: goto L_08950A70;
    case 130u: goto L_08950A7C;
    case 131u: goto L_08950A84;
    case 132u: goto L_08950A98;
    case 133u: goto L_08950AAC;
    case 134u: goto L_08950AB8;
    case 135u: goto L_08950AC0;
    case 136u: goto L_08950AC8;
    case 137u: goto L_08950AD8;
    case 138u: goto L_08950AF0;
    case 139u: goto L_08950AFC;
    case 140u: goto L_08950B04;
    case 141u: goto L_08950B24;
    case 142u: goto L_08950B54;
    case 143u: goto L_08950B64;
    case 144u: goto L_08950B74;
    case 145u: goto L_08950B80;
    case 146u: goto L_08950B90;
    case 147u: goto L_08950BA0;
    case 148u: goto L_08950BAC;
    case 149u: goto L_08950BB8;
    case 150u: goto L_08950BCC;
    case 151u: goto L_08950BEC;
    case 152u: goto L_08950BF4;
    case 153u: goto L_08950C08;
    case 154u: goto L_08950C14;
    case 155u: goto L_08950C1C;
    case 156u: goto L_08950C28;
    case 157u: goto L_08950C30;
    case 158u: goto L_08950C44;
    case 159u: goto L_08950C58;
    case 160u: goto L_08950C64;
    case 161u: goto L_08950C6C;
    case 162u: goto L_08950C74;
    case 163u: goto L_08950C84;
    case 164u: goto L_08950C9C;
    case 165u: goto L_08950CBC;
    case 166u: goto L_08950CC4;
    case 167u: goto L_08950CD8;
    case 168u: goto L_08950CE4;
    case 169u: goto L_08950CEC;
    case 170u: goto L_08950CF8;
    case 171u: goto L_08950D00;
    case 172u: goto L_08950D14;
    case 173u: goto L_08950D28;
    case 174u: goto L_08950D34;
    case 175u: goto L_08950D3C;
    case 176u: goto L_08950D44;
    case 177u: goto L_08950D54;
    case 178u: goto L_08950D6C;
    case 179u: goto L_08950D80;
    case 180u: goto L_08950D8C;
    case 181u: goto L_08950D94;
    case 182u: goto L_08950DA0;
    case 183u: goto L_08950DA8;
    case 184u: goto L_08950DBC;
    case 185u: goto L_08950DD0;
    case 186u: goto L_08950DDC;
    case 187u: goto L_08950DE4;
    case 188u: goto L_08950DEC;
    case 189u: goto L_08950DFC;
    case 190u: goto L_08950E08;
    case 191u: goto L_08950E18;
    case 192u: goto L_08950E24;
    case 193u: goto L_08950E2C;
    case 194u: goto L_08950E4C;
    case 195u: goto L_08950E5C;
    case 196u: goto L_08950E68;
    case 197u: goto L_08950E70;
    case 198u: goto L_08950EA8;
    case 199u: goto L_08950EC4;
    case 200u: goto L_08950ED0;
    case 201u: goto L_08950ED8;
    case 202u: goto L_08950EE4;
    case 203u: goto L_08950EF0;
    case 204u: goto L_08950F04;
    case 205u: goto L_08950F14;
    case 206u: goto L_08950F30;
    case 207u: goto L_08950F38;
    case 208u: goto L_08950F44;
    case 209u: goto L_08950F4C;
    case 210u: goto L_08950F54;
    case 211u: goto L_08950F64;
    case 212u: goto L_08950F6C;
    case 213u: goto L_08950F7C;
    case 214u: goto L_08950F94;
    case 215u: goto L_08950FA4;
    case 216u: goto L_08950FAC;
    case 217u: goto L_08950FBC;
    case 218u: goto L_08950FC4;
    case 219u: goto L_08950FCC;
    case 220u: goto L_08950FD8;
    case 221u: goto L_08950FE4;
    case 222u: goto L_08951004;
    case 223u: goto L_0895100C;
    case 224u: goto L_08951018;
    case 225u: goto L_08951020;
    case 226u: goto L_0895102C;
    case 227u: goto L_08951034;
    case 228u: goto L_0895103C;
    case 229u: goto L_08951048;
    case 230u: goto L_08951070;
    case 231u: goto L_08951078;
    case 232u: goto L_0895108C;
    case 233u: goto L_08951094;
    case 234u: goto L_08951098;
    case 235u: goto L_0895109C;
    case 236u: goto L_089510B0;
    case 237u: goto L_089510B8;
    case 238u: goto L_089510C0;
    case 239u: goto L_089510CC;
    case 240u: goto L_089510D4;
    case 241u: goto L_089510D8;
    case 242u: goto L_089510E4;
    case 243u: goto L_089510EC;
    case 244u: goto L_0895110C;
    case 245u: goto L_08951118;
    case 246u: goto L_08951120;
    case 247u: goto L_08951150;
    case 248u: goto L_0895117C;
    case 249u: goto L_0895119C;
    case 250u: goto L_089511A8;
    case 251u: goto L_089511C0;
    case 252u: goto L_089511CC;
    case 253u: goto L_089511D4;
    case 254u: goto L_089511D8;
    case 255u: goto L_089511E4;
    case 256u: goto L_08951200;
    case 257u: goto L_0895120C;
    case 258u: goto L_08951234;
    case 259u: goto L_0895123C;
    case 260u: goto L_0895124C;
    case 261u: goto L_08951258;
    case 262u: goto L_08951264;
    case 263u: goto L_08951274;
    case 264u: goto L_08951278;
    case 265u: goto L_08951290;
    case 266u: goto L_089512B8;
    case 267u: goto L_089512C0;
    case 268u: goto L_089512D0;
    case 269u: goto L_089512D4;
    case 270u: goto L_089512EC;
    case 271u: goto L_08951314;
    case 272u: goto L_0895131C;
    case 273u: goto L_0895132C;
    case 274u: goto L_08951330;
    case 275u: goto L_08951348;
    case 276u: goto L_08951378;
    case 277u: goto L_089513A0;
    case 278u: goto L_089513A8;
    case 279u: goto L_089513BC;
    case 280u: goto L_089513D0;
    case 281u: goto L_089513D8;
    case 282u: goto L_089513F0;
    case 283u: goto L_08951408;
    case 284u: goto L_08951424;
    case 285u: goto L_08951430;
    case 286u: goto L_08951434;
    case 287u: goto L_08951440;
    case 288u: goto L_08951448;
    case 289u: goto L_0895145C;
    case 290u: goto L_08951474;
    case 291u: goto L_0895147C;
    case 292u: goto L_08951480;
    case 293u: goto L_0895148C;
    case 294u: goto L_0895149C;
    case 295u: goto L_089514B0;
    case 296u: goto L_089514BC;
    case 297u: goto L_089514C0;
    case 298u: goto L_089514E0;
    case 299u: goto L_089514F0;
    case 300u: goto L_08951500;
    case 301u: goto L_08951528;
    case 302u: goto L_0895154C;
    case 303u: goto L_08951568;
    case 304u: goto L_089515B0;
    case 305u: goto L_089515CC;
    case 306u: goto L_089515D8;
    case 307u: goto L_089515E8;
    case 308u: goto L_08951618;
    case 309u: goto L_08951660;
    case 310u: goto L_0895167C;
    case 311u: goto L_08951688;
    case 312u: goto L_08951698;
    case 313u: goto L_089516D4;
    case 314u: goto L_089516E8;
    case 315u: goto L_089516F4;
    case 316u: goto L_08951728;
    case 317u: goto L_08951730;
    case 318u: goto L_08951740;
    case 319u: goto L_08951758;
    case 320u: goto L_08951778;
    case 321u: goto L_08951780;
    case 322u: goto L_08951784;
    case 323u: goto L_08951794;
    case 324u: goto L_089517AC;
    case 325u: goto L_089517C0;
    case 326u: goto L_089517CC;
    case 327u: goto L_089517E4;
    case 328u: goto L_089517FC;
    case 329u: goto L_08951820;
    case 330u: goto L_08951838;
    case 331u: goto L_0895185C;
    case 332u: goto L_0895186C;
    case 333u: goto L_0895187C;
    case 334u: goto L_08951888;
    case 335u: goto L_08951894;
    case 336u: goto L_089518A0;
    case 337u: goto L_089518C4;
    case 338u: goto L_089518D8;
    case 339u: goto L_089518EC;
    case 340u: goto L_08951910;
    case 341u: goto L_08951924;
    case 342u: goto L_08951938;
    case 343u: goto L_08951958;
    case 344u: goto L_08951968;
    case 345u: goto L_08951974;
    case 346u: goto L_0895197C;
    case 347u: goto L_08951998;
    case 348u: goto L_089519A8;
    case 349u: goto L_089519B0;
    case 350u: goto L_089519C0;
    case 351u: goto L_089519CC;
    case 352u: goto L_089519D0;
    case 353u: goto L_089519EC;
    case 354u: goto L_08951A20;
    case 355u: goto L_08951A2C;
    case 356u: goto L_08951A38;
    case 357u: goto L_08951A48;
    case 358u: goto L_08951A50;
    case 359u: goto L_08951A5C;
    case 360u: goto L_08951A70;
    case 361u: goto L_08951AA8;
    case 362u: goto L_08951AB0;
    case 363u: goto L_08951AC4;
    case 364u: goto L_08951AE8;
    case 365u: goto L_08951AF0;
    case 366u: goto L_08951B00;
    case 367u: goto L_08951B10;
    case 368u: goto L_08951B18;
    case 369u: goto L_08951B20;
    case 370u: goto L_08951B3C;
    case 371u: goto L_08951B64;
    case 372u: goto L_08951B74;
    case 373u: goto L_08951B7C;
    case 374u: goto L_08951B80;
    case 375u: goto L_08951B90;
    case 376u: goto L_08951B98;
    case 377u: goto L_08951BA4;
    case 378u: goto L_08951BAC;
    case 379u: goto L_08951BB8;
    case 380u: goto L_08951BBC;
    case 381u: goto L_08951BC4;
    case 382u: goto L_08951C08;
    case 383u: goto L_08951C0C;
    case 384u: goto L_08951C18;
    case 385u: goto L_08951C24;
    case 386u: goto L_08951C28;
    case 387u: goto L_08951C40;
    case 388u: goto L_08951C48;
    case 389u: goto L_08951C54;
    case 390u: goto L_08951C64;
    case 391u: goto L_08951C84;
    case 392u: goto L_08951C98;
    case 393u: goto L_08951CAC;
    case 394u: goto L_08951CB4;
    case 395u: goto L_08951CC0;
    case 396u: goto L_08951CD8;
    case 397u: goto L_08951CE0;
    case 398u: goto L_08951CF8;
    case 399u: goto L_08951D04;
    case 400u: goto L_08951D10;
    case 401u: goto L_08951D20;
    case 402u: goto L_08951D28;
    case 403u: goto L_08951D40;
    case 404u: goto L_08951D48;
    case 405u: goto L_08951D5C;
    case 406u: goto L_08951D64;
    case 407u: goto L_08951D78;
    case 408u: goto L_08951D7C;
    case 409u: goto L_08951D88;
    case 410u: goto L_08951D90;
    case 411u: goto L_08951D9C;
    case 412u: goto L_08951DAC;
    case 413u: goto L_08951DB8;
    case 414u: goto L_08951DC0;
    case 415u: goto L_08951DCC;
    case 416u: goto L_08951DD4;
    case 417u: goto L_08951DE8;
    case 418u: goto L_08951DF4;
    case 419u: goto L_08951E00;
    case 420u: goto L_08951E18;
    case 421u: goto L_08951E2C;
    case 422u: goto L_08951E44;
    case 423u: goto L_08951E48;
    case 424u: goto L_08951E50;
    case 425u: goto L_08951E5C;
    case 426u: goto L_08951E6C;
    case 427u: goto L_08951E84;
    case 428u: goto L_08951E88;
    case 429u: goto L_08951E90;
    case 430u: goto L_08951EA8;
    case 431u: goto L_08951EB4;
    case 432u: goto L_08951EE8;
    case 433u: goto L_08951F28;
    case 434u: goto L_08951F38;
    case 435u: goto L_08951F44;
    case 436u: goto L_08951F54;
    case 437u: goto L_08951F70;
    case 438u: goto L_08951F78;
    case 439u: goto L_08951F80;
    case 440u: goto L_08951F8C;
    case 441u: goto L_08951F9C;
    case 442u: goto L_08951FA8;
    case 443u: goto L_08951FB0;
    case 444u: goto L_08951FC8;
    case 445u: goto L_08951FDC;
    case 446u: goto L_08951FF0;
    case 447u: goto L_08951FFC;
    case 448u: goto L_08952000;
    case 449u: goto L_0895200C;
    case 450u: goto L_08952038;
    case 451u: goto L_08952058;
    case 452u: goto L_08952070;
    case 453u: goto L_08952084;
    case 454u: goto L_08952090;
    case 455u: goto L_089520A8;
    case 456u: goto L_089520C0;
    case 457u: goto L_089520EC;
    case 458u: goto L_0895210C;
    case 459u: goto L_08952144;
    case 460u: goto L_08952154;
    case 461u: goto L_08952164;
    case 462u: goto L_08952170;
    case 463u: goto L_0895217C;
    case 464u: goto L_08952184;
    case 465u: goto L_0895218C;
    case 466u: goto L_089521A4;
    case 467u: goto L_089521B0;
    case 468u: goto L_089521C4;
    case 469u: goto L_089521F0;
    case 470u: goto L_089521FC;
    case 471u: goto L_0895220C;
    case 472u: goto L_08952218;
    case 473u: goto L_08952220;
    case 474u: goto L_0895222C;
    case 475u: goto L_08952234;
    case 476u: goto L_08952248;
    case 477u: goto L_0895225C;
    case 478u: goto L_08952264;
    case 479u: goto L_0895226C;
    case 480u: goto L_0895227C;
    case 481u: goto L_08952288;
    case 482u: goto L_08952290;
    case 483u: goto L_0895229C;
    case 484u: goto L_089522A4;
    case 485u: goto L_089522BC;
    case 486u: goto L_089522D0;
    case 487u: goto L_089522E8;
    case 488u: goto L_089522EC;
    case 489u: goto L_089522F4;
    case 490u: goto L_0895230C;
    case 491u: goto L_08952318;
    case 492u: goto L_0895231C;
    case 493u: goto L_08952340;
    case 494u: goto L_0895234C;
    case 495u: goto L_08952354;
    case 496u: goto L_08952360;
    case 497u: goto L_08952368;
    case 498u: goto L_08952370;
    case 499u: goto L_0895237C;
    case 500u: goto L_08952380;
    case 501u: goto L_08952388;
    case 502u: goto L_08952394;
    case 503u: goto L_0895239C;
    case 504u: goto L_089523A8;
    case 505u: goto L_089523B4;
    case 506u: goto L_089523CC;
    case 507u: goto L_089523D8;
    case 508u: goto L_089523E0;
    case 509u: goto L_089523EC;
    case 510u: goto L_089523F4;
    case 511u: goto L_08952408;
    case 512u: goto L_0895241C;
    case 513u: goto L_08952428;
    case 514u: goto L_08952430;
    case 515u: goto L_08952438;
    case 516u: goto L_08952448;
    case 517u: goto L_08952470;
    case 518u: goto L_08952484;
    case 519u: goto L_0895248C;
    case 520u: goto L_089524A0;
    case 521u: goto L_089524B0;
    case 522u: goto L_089524B8;
    case 523u: goto L_089524C4;
    case 524u: goto L_089524CC;
    case 525u: goto L_089524D4;
    case 526u: goto L_089524E0;
    case 527u: goto L_089524EC;
    case 528u: goto L_089524F8;
    case 529u: goto L_08952504;
    case 530u: goto L_0895251C;
    case 531u: goto L_08952528;
    case 532u: goto L_08952530;
    case 533u: goto L_0895253C;
    case 534u: goto L_08952544;
    case 535u: goto L_08952558;
    case 536u: goto L_0895256C;
    case 537u: goto L_08952578;
    case 538u: goto L_08952580;
    case 539u: goto L_08952588;
    case 540u: goto L_08952598;
    case 541u: goto L_089525C0;
    case 542u: goto L_089525D4;
    case 543u: goto L_089525DC;
    case 544u: goto L_089525F0;
    case 545u: goto L_08952600;
    case 546u: goto L_08952608;
    case 547u: goto L_08952610;
    case 548u: goto L_0895261C;
    case 549u: goto L_08952628;
    case 550u: goto L_08952634;
    case 551u: goto L_0895264C;
    case 552u: goto L_0895266C;
    case 553u: goto L_08952684;
    case 554u: goto L_08952698;
    case 555u: goto L_089526A0;
    case 556u: goto L_089526B4;
    case 557u: goto L_089526C4;
    case 558u: goto L_089526CC;
    case 559u: goto L_089526D8;
    case 560u: goto L_089526E0;
    case 561u: goto L_089526E8;
    case 562u: goto L_089526F8;
    case 563u: goto L_08952710;
    case 564u: goto L_08952714;
    case 565u: goto L_0895271C;
    case 566u: goto L_08952734;
    case 567u: goto L_08952740;
    case 568u: goto L_0895274C;
    case 569u: goto L_08952758;
    case 570u: goto L_0895276C;
    case 571u: goto L_08952780;
    case 572u: goto L_08952790;
    case 573u: goto L_089527A8;
    case 574u: goto L_089527AC;
    case 575u: goto L_089527B4;
    case 576u: goto L_089527CC;
    case 577u: goto L_089527D8;
    case 578u: goto L_089527DC;
    case 579u: goto L_089527FC;
    case 580u: goto L_0895284C;
    case 581u: goto L_08952870;
    case 582u: goto L_0895288C;
    case 583u: goto L_08952898;
    case 584u: goto L_089528A8;
    case 585u: goto L_089528BC;
    case 586u: goto L_089528C8;
    case 587u: goto L_089528DC;
    case 588u: goto L_089528E4;
    case 589u: goto L_089528FC;
    case 590u: goto L_08952910;
    case 591u: goto L_08952918;
    case 592u: goto L_08952924;
    case 593u: goto L_0895293C;
    case 594u: goto L_08952944;
    case 595u: goto L_08952950;
    case 596u: goto L_08952958;
    case 597u: goto L_08952968;
    case 598u: goto L_0895296C;
    case 599u: goto L_08952978;
    case 600u: goto L_0895297C;
    case 601u: goto L_08952988;
    case 602u: goto L_08952994;
    case 603u: goto L_0895299C;
    case 604u: goto L_089529D4;
    case 605u: goto L_08952A1C;
    case 606u: goto L_08952A38;
    case 607u: goto L_08952A50;
    case 608u: goto L_08952A58;
    case 609u: goto L_08952A64;
    case 610u: goto L_08952A74;
    case 611u: goto L_08952A78;
    case 612u: goto L_08952A7C;
    case 613u: goto L_08952A88;
    case 614u: goto L_08952A94;
    case 615u: goto L_08952AA0;
    case 616u: goto L_08952AAC;
    case 617u: goto L_08952AC4;
    case 618u: goto L_08952AD0;
    case 619u: goto L_08952AD8;
    case 620u: goto L_08952AE4;
    case 621u: goto L_08952AEC;
    case 622u: goto L_08952B00;
    case 623u: goto L_08952B14;
    case 624u: goto L_08952B20;
    case 625u: goto L_08952B28;
    case 626u: goto L_08952B30;
    case 627u: goto L_08952B40;
    case 628u: goto L_08952B58;
    case 629u: goto L_08952B64;
    case 630u: goto L_08952B6C;
    case 631u: goto L_08952B78;
    case 632u: goto L_08952B7C;
    case 633u: goto L_08952BA8;
    case 634u: goto L_08952BC0;
    case 635u: goto L_08952BDC;
    case 636u: goto L_08952BE8;
    case 637u: goto L_08952BEC;
    case 638u: goto L_08952BF8;
    case 639u: goto L_08952C00;
    case 640u: goto L_08952C24;
    case 641u: goto L_08952C44;
    case 642u: goto L_08952C48;
    case 643u: goto L_08952C54;
    case 644u: goto L_08952C78;
    case 645u: goto L_08952C90;
    case 646u: goto L_08952C94;
    case 647u: goto L_08952C98;
    case 648u: goto L_08952CA4;
    case 649u: goto L_08952CC0;
    case 650u: goto L_08952CFC;
    case 651u: goto L_08952D1C;
    case 652u: goto L_08952D20;
    case 653u: goto L_08952D2C;
    case 654u: goto L_08952D40;
    case 655u: goto L_08952D60;
    case 656u: goto L_08952D78;
    case 657u: goto L_08952D80;
    case 658u: goto L_08952D90;
    case 659u: goto L_08952D9C;
    case 660u: goto L_08952DA0;
    case 661u: goto L_08952DA4;
    case 662u: goto L_08952DB0;
    case 663u: goto L_08952DD8;
    case 664u: goto L_08952E38;
    case 665u: goto L_08952E48;
    case 666u: goto L_08952E54;
    case 667u: goto L_08952E5C;
    case 668u: goto L_08952E68;
    case 669u: goto L_08952E78;
    case 670u: goto L_08952E80;
    case 671u: goto L_08952E84;
    case 672u: goto L_08952E8C;
    case 673u: goto L_08952E98;
    case 674u: goto L_08952EB0;
    case 675u: goto L_08952EBC;
    case 676u: goto L_08952EC4;
    case 677u: goto L_08952EF4;
    case 678u: goto L_08952F54;
    case 679u: goto L_08952F64;
    case 680u: goto L_08952F70;
    case 681u: goto L_08952F78;
    case 682u: goto L_08952F84;
    case 683u: goto L_08952F94;
    case 684u: goto L_08952F9C;
    case 685u: goto L_08952FA0;
    case 686u: goto L_08952FA8;
    case 687u: goto L_08952FB4;
    case 688u: goto L_08952FCC;
    case 689u: goto L_08952FD8;
    case 690u: goto L_08952FE0;
    case 691u: goto L_08953010;
    case 692u: goto L_08953068;
    case 693u: goto L_08953078;
    case 694u: goto L_08953084;
    case 695u: goto L_0895308C;
    case 696u: goto L_08953098;
    case 697u: goto L_089530A8;
    case 698u: goto L_089530B0;
    case 699u: goto L_089530BC;
    case 700u: goto L_089530C8;
    case 701u: goto L_089530DC;
    case 702u: goto L_089530EC;
    case 703u: goto L_089530F4;
    case 704u: goto L_0895310C;
    case 705u: goto L_08953118;
    case 706u: goto L_08953120;
    case 707u: goto L_08953130;
    case 708u: goto L_08953138;
    case 709u: goto L_08953164;
    case 710u: goto L_089531C0;
    case 711u: goto L_089531D0;
    case 712u: goto L_089531DC;
    case 713u: goto L_089531E4;
    case 714u: goto L_089531F0;
    case 715u: goto L_08953200;
    case 716u: goto L_08953208;
    case 717u: goto L_08953218;
    case 718u: goto L_08953224;
    case 719u: goto L_0895322C;
    case 720u: goto L_08953238;
    case 721u: goto L_08953240;
    case 722u: goto L_08953254;
    case 723u: goto L_08953268;
    case 724u: goto L_08953280;
    case 725u: goto L_08953284;
    case 726u: goto L_0895328C;
    case 727u: goto L_089532A4;
    case 728u: goto L_089532B0;
    case 729u: goto L_089532BC;
    case 730u: goto L_089532CC;
    case 731u: goto L_089532D8;
    case 732u: goto L_089532E0;
    case 733u: goto L_089532EC;
    case 734u: goto L_089532F4;
    case 735u: goto L_08953308;
    case 736u: goto L_0895331C;
    case 737u: goto L_08953334;
    case 738u: goto L_08953338;
    case 739u: goto L_08953340;
    case 740u: goto L_08953358;
    case 741u: goto L_08953364;
    case 742u: goto L_08953370;
    case 743u: goto L_08953388;
    case 744u: goto L_08953398;
    case 745u: goto L_089533A0;
    case 746u: goto L_089533D0;
    case 747u: goto L_08953430;
    case 748u: goto L_08953440;
    case 749u: goto L_0895344C;
    case 750u: goto L_08953454;
    case 751u: goto L_08953460;
    case 752u: goto L_08953474;
    case 753u: goto L_08953480;
    case 754u: goto L_0895348C;
    case 755u: goto L_0895349C;
    case 756u: goto L_089534C0;
    case 757u: goto L_089534CC;
    case 758u: goto L_089534DC;
    case 759u: goto L_089534E4;
    case 760u: goto L_089534EC;
    case 761u: goto L_089534F8;
    case 762u: goto L_08953508;
    case 763u: goto L_08953514;
    case 764u: goto L_0895351C;
    case 765u: goto L_08953528;
    case 766u: goto L_08953530;
    case 767u: goto L_08953544;
    case 768u: goto L_08953554;
    case 769u: goto L_0895355C;
    case 770u: goto L_08953568;
    case 771u: goto L_0895357C;
    case 772u: goto L_08953588;
    case 773u: goto L_08953590;
    case 774u: goto L_08953598;
    case 775u: goto L_089535A4;
    case 776u: goto L_089535B0;
    case 777u: goto L_089535C0;
    case 778u: goto L_089535CC;
    case 779u: goto L_089535D4;
    case 780u: goto L_089535DC;
    case 781u: goto L_089535EC;
    case 782u: goto L_089535F4;
    case 783u: goto L_08953604;
    case 784u: goto L_0895361C;
    case 785u: goto L_08953620;
    case 786u: goto L_08953628;
    case 787u: goto L_08953640;
    case 788u: goto L_0895364C;
    case 789u: goto L_08953650;
    case 790u: goto L_08953660;
    case 791u: goto L_0895366C;
    case 792u: goto L_08953674;
    case 793u: goto L_0895367C;
    case 794u: goto L_08953684;
    case 795u: goto L_08953690;
    case 796u: goto L_0895369C;
    case 797u: goto L_089536AC;
    case 798u: goto L_089536C8;
    case 799u: goto L_089536D4;
    case 800u: goto L_089536E8;
    case 801u: goto L_08953700;
    case 802u: goto L_0895372C;
    case 803u: goto L_08953744;
    case 804u: goto L_08953748;
    case 805u: goto L_08953754;
    case 806u: goto L_08953764;
    case 807u: goto L_0895376C;
    case 808u: goto L_08953780;
    case 809u: goto L_0895378C;
    case 810u: goto L_08953794;
    case 811u: goto L_089537A4;
    case 812u: goto L_089537AC;
    case 813u: goto L_089537E4;
    case 814u: goto L_08953844;
    case 815u: goto L_08953854;
    case 816u: goto L_08953860;
    case 817u: goto L_08953868;
    case 818u: goto L_08953874;
    case 819u: goto L_08953884;
    case 820u: goto L_0895388C;
    case 821u: goto L_08953890;
    case 822u: goto L_08953898;
    case 823u: goto L_089538A4;
    case 824u: goto L_089538BC;
    case 825u: goto L_089538C8;
    case 826u: goto L_089538D0;
    case 827u: goto L_08953900;
    case 828u: goto L_08953940;
    case 829u: goto L_08953954;
    case 830u: goto L_08953958;
    case 831u: goto L_08953964;
    case 832u: goto L_08953970;
    case 833u: goto L_08953978;
    case 834u: goto L_08953980;
    case 835u: goto L_08953988;
    case 836u: goto L_08953994;
    case 837u: goto L_089539A0;
    case 838u: goto L_089539B0;
    case 839u: goto L_089539C0;
    case 840u: goto L_089539D4;
    case 841u: goto L_089539D8;
    case 842u: goto L_089539E4;
    case 843u: goto L_089539F4;
    case 844u: goto L_089539FC;
    case 845u: goto L_08953A08;
    case 846u: goto L_08953A0C;
    case 847u: goto L_08953A18;
    case 848u: goto L_08953A20;
    case 849u: goto L_08953A38;
    case 850u: goto L_08953A40;
    case 851u: goto L_08953A58;
    case 852u: goto L_08953A64;
    case 853u: goto L_08953A70;
    case 854u: goto L_08953A88;
    case 855u: goto L_08953A94;
    case 856u: goto L_08953AA0;
    case 857u: goto L_08953AA4;
    case 858u: goto L_08953AB0;
    case 859u: goto L_08953ABC;
    case 860u: goto L_08953AC4;
    case 861u: goto L_08953AD0;
    case 862u: goto L_08953AD4;
    case 863u: goto L_08953AE0;
    case 864u: goto L_08953AEC;
    case 865u: goto L_08953AF4;
    case 866u: goto L_08953B00;
    case 867u: goto L_08953B0C;
    case 868u: goto L_08953B1C;
    case 869u: goto L_08953B20;
    case 870u: goto L_08953B34;
    case 871u: goto L_08953B54;
    case 872u: goto L_08953B5C;
    case 873u: goto L_08953B74;
    case 874u: goto L_08953B78;
    case 875u: goto L_08953B84;
    case 876u: goto L_08953B90;
    case 877u: goto L_08953B94;
    case 878u: goto L_08953BC0;
    case 879u: goto L_08953BFC;
    case 880u: goto L_08953C08;
    case 881u: goto L_08953C0C;
    case 882u: goto L_08953C18;
    case 883u: goto L_08953C24;
    case 884u: goto L_08953C2C;
    case 885u: goto L_08953C34;
    case 886u: goto L_08953C3C;
    case 887u: goto L_08953C48;
    case 888u: goto L_08953C54;
    case 889u: goto L_08953C64;
    case 890u: goto L_08953C74;
    case 891u: goto L_08953C88;
    case 892u: goto L_08953C8C;
    case 893u: goto L_08953C98;
    case 894u: goto L_08953CA8;
    case 895u: goto L_08953CB0;
    case 896u: goto L_08953CBC;
    case 897u: goto L_08953CC8;
    case 898u: goto L_08953CD4;
    case 899u: goto L_08953CDC;
    case 900u: goto L_08953CF4;
    case 901u: goto L_08953CFC;
    case 902u: goto L_08953D14;
    case 903u: goto L_08953D20;
    case 904u: goto L_08953D2C;
    case 905u: goto L_08953D44;
    case 906u: goto L_08953D50;
    case 907u: goto L_08953D5C;
    case 908u: goto L_08953D68;
    case 909u: goto L_08953D6C;
    case 910u: goto L_08953D78;
    case 911u: goto L_08953D84;
    case 912u: goto L_08953D8C;
    case 913u: goto L_08953D98;
    case 914u: goto L_08953DA4;
    case 915u: goto L_08953DB4;
    case 916u: goto L_08953DB8;
    case 917u: goto L_08953DCC;
    case 918u: goto L_08953DE8;
    case 919u: goto L_08953DF0;
    case 920u: goto L_08953DFC;
    case 921u: goto L_08953E08;
    case 922u: goto L_08953E0C;
    case 923u: goto L_08953E34;
    case 924u: goto L_08953E94;
    case 925u: goto L_08953EA4;
    case 926u: goto L_08953EB0;
    case 927u: goto L_08953EB8;
    case 928u: goto L_08953EC4;
    case 929u: goto L_08953ED4;
    case 930u: goto L_08953EDC;
    case 931u: goto L_08953EF4;
    case 932u: goto L_08953EFC;
    case 933u: goto L_08953F08;
    case 934u: goto L_08953F20;
    case 935u: goto L_08953F30;
    case 936u: goto L_08953F38;
    case 937u: goto L_08953F68;
    case 938u: goto L_08953FC8;
    case 939u: goto L_08953FD8;
    case 940u: goto L_08953FE4;
    case 941u: goto L_08953FEC;
    case 942u: goto L_08953FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08950000:
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08950010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08950010u) goto L_08950010;
    return;
L_08950010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895001Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895001Cu) goto L_0895001C;
    return;
L_0895001C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 581u, 0x088E2C84u>(ctx, &aot_mem) && ctx.pc == 0x08950028u) goto L_08950028;
    return;
L_08950028:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08950040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08950040u) goto L_08950040;
    return;
L_08950040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950068;
      }
      goto L_0895005C;
    }
L_0895005C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08950068;
L_08950068:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089500A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089500A0u) goto L_089500A0;
    return;
L_089500A0:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950100;
      }
      goto L_089500AC;
    }
L_089500AC:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089500C4;
      }
      goto L_089500B8;
    }
L_089500B8:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950100;
      }
      goto L_089500C4;
    }
L_089500C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089500E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089500E8u) goto L_089500E8;
    return;
L_089500E8:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950108;
      }
      goto L_08950100;
    }
L_08950100:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08950108;
L_08950108:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950344;
      }
      goto L_08950114;
    }
L_08950114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08950134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x08950134u) goto L_08950134;
    return;
L_08950134:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08950158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 752u, 0x0894F72Cu>(ctx, &aot_mem) && ctx.pc == 0x08950158u) goto L_08950158;
    return;
L_08950158:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895018C;
      }
      goto L_08950168;
    }
L_08950168:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08950180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x08950180u) goto L_08950180;
    return;
L_08950180:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089501E0;
      }
      goto L_0895018C;
    }
L_0895018C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089501B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089501B0u) goto L_089501B0;
    return;
L_089501B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089501C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 752u, 0x0894F72Cu>(ctx, &aot_mem) && ctx.pc == 0x089501C8u) goto L_089501C8;
    return;
L_089501C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    goto L_089501E0;
L_089501E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[4] - ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950350;
      }
      goto L_08950218;
    }
L_08950218:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950234;
      }
      goto L_08950224;
    }
L_08950224:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950350;
      }
      goto L_08950234;
    }
L_08950234:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950350;
      }
      goto L_08950240;
    }
L_08950240:
    ctx.set_gpr(1, ctx.gpr[23] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950258;
      }
      goto L_0895024C;
    }
L_0895024C:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950350;
      }
      goto L_08950258;
    }
L_08950258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(19, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08950284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x08950284u) goto L_08950284;
    return;
L_08950284:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089502DC;
      }
      goto L_089502B0;
    }
L_089502B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089502D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089502D4u) goto L_089502D4;
    return;
L_089502D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950320;
      }
      goto L_089502DC;
    }
L_089502DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089502FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089502FCu) goto L_089502FC;
    return;
L_089502FC:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08950318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08950318u) goto L_08950318;
    return;
L_08950318:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    goto L_08950320;
L_08950320:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[30]);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08950344;
L_08950344:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950114;
      }
      goto L_08950350;
    }
L_08950350:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089503B8;
      }
      goto L_08950364;
    }
L_08950364:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089503A4;
      }
      goto L_08950370;
    }
L_08950370:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089503A4;
L_089503A4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950370;
      }
      goto L_089503B0;
    }
L_089503B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950400;
      }
      goto L_089503B8;
    }
L_089503B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08950400;
      }
      goto L_089503C8;
    }
L_089503C8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089503F4;
      }
      goto L_089503D4;
    }
L_089503D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089503F4;
L_089503F4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089503D4;
      }
      goto L_08950400;
    }
L_08950400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950414;
      }
      goto L_0895040C;
    }
L_0895040C:
    ctx.set_gpr(31, 0x08950414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08950414u) goto L_08950414;
    return;
L_08950414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950428;
      }
      goto L_08950420;
    }
L_08950420:
    ctx.set_gpr(31, 0x08950428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08950428u) goto L_08950428;
    return;
L_08950428:
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
L_0895045C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895047Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895047Cu) goto L_0895047C;
    return;
L_0895047C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08950488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08950488u) goto L_08950488;
    return;
L_08950488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 581u, 0x088E2C84u>(ctx, &aot_mem) && ctx.pc == 0x08950494u) goto L_08950494;
    return;
L_08950494:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089504ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089504ACu) goto L_089504AC;
    return;
L_089504AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089504CC;
      }
      goto L_089504C0;
    }
L_089504C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089504CC;
L_089504CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089504F8;
      }
      goto L_089504E0;
    }
L_089504E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_089504F8;
    }
L_089504F8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_08950500;
    }
L_08950500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_08950510;
    }
L_08950510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950548;
      }
      goto L_0895052C;
    }
L_0895052C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x08950548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08950548u) goto L_08950548;
    return;
L_08950548:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_0895059C;
    }
L_0895059C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089505BC;
      }
      goto L_089505A4;
    }
L_089505A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), 0u);
    goto L_089505BC;
L_089505BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089505D0;
      }
      goto L_089505C8;
    }
L_089505C8:
    ctx.set_gpr(31, 0x089505D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089505D0u) goto L_089505D0;
    return;
L_089505D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089505E4;
      }
      goto L_089505DC;
    }
L_089505DC:
    ctx.set_gpr(31, 0x089505E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089505E4u) goto L_089505E4;
    return;
L_089505E4:
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
L_089505FC:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08950640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08950640u) goto L_08950640;
    return;
L_08950640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895064Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 236u, 0x088E52F4u>(ctx, &aot_mem) && ctx.pc == 0x0895064Cu) goto L_0895064C;
    return;
L_0895064C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089506AC;
      }
      goto L_08950664;
    }
L_08950664:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x0895069Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 682u, 0x0894F278u>(ctx, &aot_mem) && ctx.pc == 0x0895069Cu) goto L_0895069C;
    return;
L_0895069C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089506A8;
      }
      goto L_089506A4;
    }
L_089506A4:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089506A8;
L_089506A8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089506AC;
L_089506AC:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950664;
      }
      goto L_089506B8;
    }
L_089506B8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089506ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089506ECu) goto L_089506EC;
    return;
L_089506EC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08950700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 752u, 0x0894F72Cu>(ctx, &aot_mem) && ctx.pc == 0x08950700u) goto L_08950700;
    return;
L_08950700:
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08950714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x08950714u) goto L_08950714;
    return;
L_08950714:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950738;
      }
      goto L_0895072C;
    }
L_0895072C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08950738;
L_08950738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08950750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x08950750u) goto L_08950750;
    return;
L_08950750:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0895077Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 682u, 0x0894F278u>(ctx, &aot_mem) && ctx.pc == 0x0895077Cu) goto L_0895077C;
    return;
L_0895077C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950788;
      }
      goto L_08950784;
    }
L_08950784:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08950788;
L_08950788:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08950798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08950798u) goto L_08950798;
    return;
L_08950798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089507AC;
      }
      goto L_089507A4;
    }
L_089507A4:
    ctx.set_gpr(31, 0x089507ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089507ACu) goto L_089507AC;
    return;
L_089507AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089507C0;
      }
      goto L_089507B8;
    }
L_089507B8:
    ctx.set_gpr(31, 0x089507C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089507C0u) goto L_089507C0;
    return;
L_089507C0:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089507F0:
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
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950844;
      }
      goto L_08950834;
    }
L_08950834:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08950844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08950844u) goto L_08950844;
    return;
L_08950844:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950870;
      }
      goto L_08950850;
    }
L_08950850:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0895086Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0895086Cu) goto L_0895086C;
    return;
L_0895086C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08950870;
L_08950870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950850;
      }
      goto L_08950880;
    }
L_08950880:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895095C;
      }
      goto L_0895088C;
    }
L_0895088C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895094C;
      }
      goto L_08950898;
    }
L_08950898:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089508B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089508B8u) goto L_089508B8;
    return;
L_089508B8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089508D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 749u, 0x0894F6ACu>(ctx, &aot_mem) && ctx.pc == 0x089508D0u) goto L_089508D0;
    return;
L_089508D0:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_089508DC;
    }
L_089508DC:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089508F4;
      }
      goto L_089508E8;
    }
L_089508E8:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_089508F4;
    }
L_089508F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_08950900;
    }
L_08950900:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_08950908;
    }
L_08950908:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_08950914;
    }
L_08950914:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_08950920;
    }
L_08950920:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950948;
      }
      goto L_0895092C;
    }
L_0895092C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08950948;
L_08950948:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0895094C;
L_0895094C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950898;
      }
      goto L_08950958;
    }
L_08950958:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895095C;
L_0895095C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895088C;
      }
      goto L_0895096C;
    }
L_0895096C:
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
L_08950998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089509B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089509B8u) goto L_089509B8;
    return;
L_089509B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089509C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 455u, 0x0891E160u>(ctx, &aot_mem) && ctx.pc == 0x089509C8u) goto L_089509C8;
    return;
L_089509C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089509E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089509E0u) goto L_089509E0;
    return;
L_089509E0:
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
L_089509F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08950A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08950A28u) goto L_08950A28;
    return;
L_08950A28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 797u, 0x088EBCE8u>(ctx, &aot_mem) && ctx.pc == 0x08950A34u) goto L_08950A34;
    return;
L_08950A34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08950A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08950A48u) goto L_08950A48;
    return;
L_08950A48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950A84;
      }
      goto L_08950A5C;
    }
L_08950A5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08950A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08950A68u) goto L_08950A68;
    return;
L_08950A68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A7C;
      }
      goto L_08950A70;
    }
L_08950A70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08950A7Cu) goto L_08950A7C;
    return;
L_08950A7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08950A84;
L_08950A84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08950A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08950A98u) goto L_08950A98;
    return;
L_08950A98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950AC0;
      }
      goto L_08950AAC;
    }
L_08950AAC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08950AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08950AB8u) goto L_08950AB8;
    return;
L_08950AB8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08950AC0;
L_08950AC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950AD8;
      }
      goto L_08950AC8;
    }
L_08950AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08950AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08950AD8u) goto L_08950AD8;
    return;
L_08950AD8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08950AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08950AF0u) goto L_08950AF0;
    return;
L_08950AF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950B04;
      }
      goto L_08950AFC;
    }
L_08950AFC:
    ctx.set_gpr(31, 0x08950B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08950B04u) goto L_08950B04;
    return;
L_08950B04:
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
L_08950B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32195))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950B74;
      }
      goto L_08950B54;
    }
L_08950B54:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2464)));
    ctx.set_gpr(31, 0x08950B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08950B64u) goto L_08950B64;
    return;
L_08950B64:
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32624), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32195), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08950B74;
L_08950B74:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32194))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950BA0;
      }
      goto L_08950B80;
    }
L_08950B80:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2440)));
    ctx.set_gpr(31, 0x08950B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08950B90u) goto L_08950B90;
    return;
L_08950B90:
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32620), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32194), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08950BA0;
L_08950BA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08950BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08950BACu) goto L_08950BAC;
    return;
L_08950BAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 797u, 0x088EBCE8u>(ctx, &aot_mem) && ctx.pc == 0x08950BB8u) goto L_08950BB8;
    return;
L_08950BB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08950BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08950BCCu) goto L_08950BCC;
    return;
L_08950BCC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32624)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2464)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08950BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08950BECu) goto L_08950BEC;
    return;
L_08950BEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950C9C;
      }
      goto L_08950BF4;
    }
L_08950BF4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950C30;
      }
      goto L_08950C08;
    }
L_08950C08:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08950C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08950C14u) goto L_08950C14;
    return;
L_08950C14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950C28;
      }
      goto L_08950C1C;
    }
L_08950C1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08950C28u) goto L_08950C28;
    return;
L_08950C28:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08950C30;
L_08950C30:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(31, 0x08950C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08950C44u) goto L_08950C44;
    return;
L_08950C44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950C6C;
      }
      goto L_08950C58;
    }
L_08950C58:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08950C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08950C64u) goto L_08950C64;
    return;
L_08950C64:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08950C6C;
L_08950C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950C84;
      }
      goto L_08950C74;
    }
L_08950C74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08950C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08950C84u) goto L_08950C84;
    return;
L_08950C84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950E08;
      }
      goto L_08950C9C;
    }
L_08950C9C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32620)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2440)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08950CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08950CBCu) goto L_08950CBC;
    return;
L_08950CBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950D6C;
      }
      goto L_08950CC4;
    }
L_08950CC4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950D00;
      }
      goto L_08950CD8;
    }
L_08950CD8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08950CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08950CE4u) goto L_08950CE4;
    return;
L_08950CE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CF8;
      }
      goto L_08950CEC;
    }
L_08950CEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08950CF8u) goto L_08950CF8;
    return;
L_08950CF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08950D00;
L_08950D00:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(31, 0x08950D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08950D14u) goto L_08950D14;
    return;
L_08950D14:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D3C;
      }
      goto L_08950D28;
    }
L_08950D28:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08950D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08950D34u) goto L_08950D34;
    return;
L_08950D34:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08950D3C;
L_08950D3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D54;
      }
      goto L_08950D44;
    }
L_08950D44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08950D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08950D54u) goto L_08950D54;
    return;
L_08950D54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950E08;
      }
      goto L_08950D6C;
    }
L_08950D6C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950DA8;
      }
      goto L_08950D80;
    }
L_08950D80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08950D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08950D8Cu) goto L_08950D8C;
    return;
L_08950D8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950DA0;
      }
      goto L_08950D94;
    }
L_08950D94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08950DA0u) goto L_08950DA0;
    return;
L_08950DA0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08950DA8;
L_08950DA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08950DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08950DBCu) goto L_08950DBC;
    return;
L_08950DBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950DE4;
      }
      goto L_08950DD0;
    }
L_08950DD0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08950DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08950DDCu) goto L_08950DDC;
    return;
L_08950DDC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08950DE4;
L_08950DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950DFC;
      }
      goto L_08950DEC;
    }
L_08950DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08950DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08950DFCu) goto L_08950DFC;
    return;
L_08950DFC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    goto L_08950E08;
L_08950E08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08950E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08950E18u) goto L_08950E18;
    return;
L_08950E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950E2C;
      }
      goto L_08950E24;
    }
L_08950E24:
    ctx.set_gpr(31, 0x08950E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08950E2Cu) goto L_08950E2C;
    return;
L_08950E2C:
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
L_08950E4C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950E68;
      }
      goto L_08950E5C;
    }
L_08950E5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08950E68;
L_08950E68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950E70:
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08950EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08950EA8u) goto L_08950EA8;
    return;
L_08950EA8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2436));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08950EC4u);
    // nop
    goto L_089529D4;
L_08950EC4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08951120;
      }
      goto L_08950ED0;
    }
L_08950ED0:
    ctx.set_gpr(31, 0x08950ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08950ED8u) goto L_08950ED8;
    return;
L_08950ED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08950EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08950EE4u) goto L_08950EE4;
    return;
L_08950EE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08950EF0u) goto L_08950EF0;
    return;
L_08950EF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08950F04u);
    // nop
    goto L_08952C00;
L_08950F04:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D8;
      }
      goto L_08950F14;
    }
L_08950F14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08950F30u);
    // nop
    goto L_08952CC0;
L_08950F30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950F54;
      }
      goto L_08950F38;
    }
L_08950F38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D4;
      }
      goto L_08950F44;
    }
L_08950F44:
    ctx.set_gpr(31, 0x08950F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08950F4Cu) goto L_08950F4C;
    return;
L_08950F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D4;
      }
      goto L_08950F54;
    }
L_08950F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950F6C;
      }
      goto L_08950F64;
    }
L_08950F64:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08950F6C;
L_08950F6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08950F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08950F7Cu) goto L_08950F7C;
    return;
L_08950F7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08950F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 689u, 0x0895AE84u>(ctx, &aot_mem) && ctx.pc == 0x08950F94u) goto L_08950F94;
    return;
L_08950F94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950FAC;
      }
      goto L_08950FA4;
    }
L_08950FA4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08950FAC;
L_08950FAC:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2428));
    ctx.set_gpr(31, 0x08950FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x08950FBCu) goto L_08950FBC;
    return;
L_08950FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089510C0;
      }
      goto L_08950FC4;
    }
L_08950FC4:
    ctx.set_gpr(31, 0x08950FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08950FCCu) goto L_08950FCC;
    return;
L_08950FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08950FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08950FD8u) goto L_08950FD8;
    return;
L_08950FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08950FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08950FE4u) goto L_08950FE4;
    return;
L_08950FE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08951004u);
    // nop
    goto L_089533D0;
L_08951004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895103C;
      }
      goto L_0895100C;
    }
L_0895100C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951020;
      }
      goto L_08951018;
    }
L_08951018:
    ctx.set_gpr(31, 0x08951020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08951020u) goto L_08951020;
    return;
L_08951020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D4;
      }
      goto L_0895102C;
    }
L_0895102C:
    ctx.set_gpr(31, 0x08951034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08951034u) goto L_08951034;
    return;
L_08951034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D4;
      }
      goto L_0895103C;
    }
L_0895103C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895109C;
      }
      goto L_08951048;
    }
L_08951048:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08951070u);
    // nop
    goto L_08950B24;
L_08951070:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951098;
      }
      goto L_08951078;
    }
L_08951078:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2416));
    ctx.set_gpr(31, 0x0895108Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895108Cu) goto L_0895108C;
    return;
L_0895108C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951098;
      }
      goto L_08951094;
    }
L_08951094:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08951098;
L_08951098:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0895109C;
L_0895109C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951048;
      }
      goto L_089510B0;
    }
L_089510B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089510C0;
      }
      goto L_089510B8;
    }
L_089510B8:
    ctx.set_gpr(31, 0x089510C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089510C0u) goto L_089510C0;
    return;
L_089510C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089510D4;
      }
      goto L_089510CC;
    }
L_089510CC:
    ctx.set_gpr(31, 0x089510D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089510D4u) goto L_089510D4;
    return;
L_089510D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089510D8;
L_089510D8:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950F14;
      }
      goto L_089510E4;
    }
L_089510E4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895110C;
      }
      goto L_089510EC;
    }
L_089510EC:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2416));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-2408));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895110Cu);
    // nop
    goto L_089509F8;
L_0895110C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951120;
      }
      goto L_08951118;
    }
L_08951118:
    ctx.set_gpr(31, 0x08951120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08951120u) goto L_08951120;
    return;
L_08951120:
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
L_08951150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089511D8;
      }
      goto L_0895117C;
    }
L_0895117C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089511A8;
      }
      goto L_0895119C;
    }
L_0895119C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089511A8;
L_089511A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089511C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089511C0u) goto L_089511C0;
    return;
L_089511C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089511D4;
      }
      goto L_089511CC;
    }
L_089511CC:
    ctx.set_gpr(31, 0x089511D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089511D4u) goto L_089511D4;
    return;
L_089511D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089511D8;
L_089511D8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895117C;
      }
      goto L_089511E4;
    }
L_089511E4:
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
L_08951200:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895120C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951234u) goto L_08951234;
    return;
L_08951234:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951274;
      }
      goto L_0895123C;
    }
L_0895123C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951264;
      }
      goto L_0895124C;
    }
L_0895124C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951264;
      }
      goto L_08951258;
    }
L_08951258:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08951264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08951264u) goto L_08951264;
    return;
L_08951264:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951278;
      }
      goto L_08951274;
    }
L_08951274:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08951278;
L_08951278:
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
L_08951290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089512B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089512B8u) goto L_089512B8;
    return;
L_089512B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089512D0;
      }
      goto L_089512C0;
    }
L_089512C0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089512D4;
      }
      goto L_089512D0;
    }
L_089512D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089512D4;
L_089512D4:
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
L_089512EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951314u) goto L_08951314;
    return;
L_08951314:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895132C;
      }
      goto L_0895131C;
    }
L_0895131C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951330;
      }
      goto L_0895132C;
    }
L_0895132C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08951330;
L_08951330:
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
L_08951348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951434;
      }
      goto L_08951378;
    }
L_08951378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089513A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089513A0u) goto L_089513A0;
    return;
L_089513A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089513BC;
      }
      goto L_089513A8;
    }
L_089513A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089513BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089513BCu) goto L_089513BC;
    return;
L_089513BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089513D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089513D0u) goto L_089513D0;
    return;
L_089513D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951408;
      }
      goto L_089513D8;
    }
L_089513D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089513F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089513F0u) goto L_089513F0;
    return;
L_089513F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951408u) goto L_08951408;
    return;
L_08951408:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951430;
      }
      goto L_08951424;
    }
L_08951424:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08951430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08951430u) goto L_08951430;
    return;
L_08951430:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08951434;
L_08951434:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951378;
      }
      goto L_08951440;
    }
L_08951440:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089514C0;
      }
      goto L_08951448;
    }
L_08951448:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951480;
      }
      goto L_0895145C;
    }
L_0895145C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895147C;
      }
      goto L_08951474;
    }
L_08951474:
    ctx.set_gpr(31, 0x0895147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895147Cu) goto L_0895147C;
    return;
L_0895147C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08951480;
L_08951480:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895145C;
      }
      goto L_0895148C;
    }
L_0895148C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089514B0;
      }
      goto L_0895149C;
    }
L_0895149C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089514B0;
L_089514B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895149C;
      }
      goto L_089514BC;
    }
L_089514BC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_089514C0;
L_089514C0:
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
L_089514E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089514F0u);
    // nop
    goto L_08951348;
L_089514F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08951528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 85u, 0x088DC6D0u>(ctx, &aot_mem) && ctx.pc == 0x08951528u) goto L_08951528;
    return;
L_08951528:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895154Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895154Cu) goto L_0895154C;
    return;
L_0895154C:
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
L_08951568:
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
          goto L_089515D8;
      }
      goto L_089515B0;
    }
L_089515B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089515CCu);
    // nop
    goto L_08951938;
L_089515CC:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089515D8;
L_089515D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089515B0;
      }
      goto L_089515E8;
    }
L_089515E8:
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
L_08951618:
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
          goto L_08951688;
      }
      goto L_08951660;
    }
L_08951660:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895167Cu);
    // nop
    goto L_089519EC;
L_0895167C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08951688;
L_08951688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951660;
      }
      goto L_08951698;
    }
L_08951698:
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
L_089516D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089516E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089516F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2648));
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08951728u) goto L_08951728;
    return;
L_08951728:
    ctx.set_gpr(31, 0x08951730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08951730u) goto L_08951730;
    return;
L_08951730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08951780;
      }
      goto L_08951758;
    }
L_08951758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08951778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 437u, 0x08911C44u>(ctx, &aot_mem) && ctx.pc == 0x08951778u) goto L_08951778;
    return;
L_08951778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951784;
      }
      goto L_08951780;
    }
L_08951780:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08951784;
L_08951784:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089517ACu);
    // nop
    goto L_08952058;
L_089517AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16900));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089517CC;
      }
      goto L_089517C0;
    }
L_089517C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089517CCu);
    // nop
    goto L_089517E4;
L_089517CC:
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
L_089517E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089517FCu);
    // nop
    goto L_089520A8;
L_089517FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16900));
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
L_08951820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08951838u);
    // nop
    goto L_089520EC;
L_08951838:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16900));
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
L_0895185C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895186Cu);
    // nop
    goto L_08952144;
L_0895186C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895187C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951888:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951894:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089518A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089518C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089518C4u) goto L_089518C4;
    return;
L_089518C4:
    ctx.set_gpr(6, ctx.gpr[2] & 65535u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089518D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089518D8u) goto L_089518D8;
    return;
L_089518D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089518EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951910u) goto L_08951910;
    return;
L_08951910:
    ctx.set_gpr(6, ctx.gpr[2] & 65535u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08951924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08951924u) goto L_08951924;
    return;
L_08951924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089519CC;
      }
      goto L_08951958;
    }
L_08951958:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089519CC;
      }
      goto L_08951968;
    }
L_08951968:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951998;
      }
      goto L_08951974;
    }
L_08951974:
    ctx.set_gpr(31, 0x0895197Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x0895197Cu) goto L_0895197C;
    return;
L_0895197C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951998u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951998u) goto L_08951998;
    return;
L_08951998:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089519A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089519A8u) goto L_089519A8;
    return;
L_089519A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089519C0;
      }
      goto L_089519B0;
    }
L_089519B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089519D0;
      }
      goto L_089519C0;
    }
L_089519C0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089519D0;
      }
      goto L_089519CC;
    }
L_089519CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089519D0;
L_089519D0:
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
L_089519EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B10;
      }
      goto L_08951A20;
    }
L_08951A20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B10;
      }
      goto L_08951A2C;
    }
L_08951A2C:
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08951A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 106u, 0x089106CCu>(ctx, &aot_mem) && ctx.pc == 0x08951A38u) goto L_08951A38;
    return;
L_08951A38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951AE8;
      }
      goto L_08951A48;
    }
L_08951A48:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951AE8;
      }
      goto L_08951A50;
    }
L_08951A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951AB0;
      }
      goto L_08951A5C;
    }
L_08951A5C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951A70u) goto L_08951A70;
    return;
L_08951A70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2400));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08951AA8u) goto L_08951AA8;
    return;
L_08951AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951AE8;
      }
      goto L_08951AB0;
    }
L_08951AB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951AC4u) goto L_08951AC4;
    return;
L_08951AC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2280));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08951AE8u) goto L_08951AE8;
    return;
L_08951AE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B00;
      }
      goto L_08951AF0;
    }
L_08951AF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B18;
      }
      goto L_08951B00;
    }
L_08951B00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B18;
      }
      goto L_08951B10;
    }
L_08951B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08951B18;
L_08951B18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B3C;
      }
      goto L_08951B20;
    }
L_08951B20:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951B3Cu) goto L_08951B3C;
    return;
L_08951B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
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
L_08951B64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951B80;
      }
      goto L_08951B7C;
    }
L_08951B7C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08951B80;
L_08951B80:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08951BA4;
      }
      goto L_08951B90;
    }
L_08951B90:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951BA4;
      }
      goto L_08951B98;
    }
L_08951B98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08951B7C;
      }
      goto L_08951BA4;
    }
L_08951BA4:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08951BB8;
      }
      goto L_08951BAC;
    }
L_08951BAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951BBC;
      }
      goto L_08951BB8;
    }
L_08951BB8:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08951BBC;
L_08951BBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951C0C;
      }
      goto L_08951C08;
    }
L_08951C08:
    ctx.set_gpr(16, ctx.gpr[28] + static_cast<std::uint32_t>(-32188));
    goto L_08951C0C;
L_08951C0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08951C28;
      }
      goto L_08951C18;
    }
L_08951C18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08951C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08951C24u) goto L_08951C24;
    return;
L_08951C24:
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(5));
    goto L_08951C28;
L_08951C28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2168));
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x08951C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951C40u) goto L_08951C40;
    return;
L_08951C40:
    ctx.set_gpr(31, 0x08951C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08951C48u) goto L_08951C48;
    return;
L_08951C48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08951C54u) goto L_08951C54;
    return;
L_08951C54:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08951C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08951C64u) goto L_08951C64;
    return;
L_08951C64:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951C84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951C84u) goto L_08951C84;
    return;
L_08951C84:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[21] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D7C;
      }
      goto L_08951C98;
    }
L_08951C98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08951CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951CACu) goto L_08951CAC;
    return;
L_08951CAC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951CB4;
    }
L_08951CB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951CC0;
    }
L_08951CC0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2160));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08951CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951CD8u) goto L_08951CD8;
    return;
L_08951CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CF8;
      }
      goto L_08951CE0;
    }
L_08951CE0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2152));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08951CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951CF8u) goto L_08951CF8;
    return;
L_08951CF8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08951D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08951D04u) goto L_08951D04;
    return;
L_08951D04:
    ctx.set_gpr(20, ctx.gpr[21] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D64;
      }
      goto L_08951D10;
    }
L_08951D10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 106u, 0x089106CCu>(ctx, &aot_mem) && ctx.pc == 0x08951D20u) goto L_08951D20;
    return;
L_08951D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D48;
      }
      goto L_08951D28;
    }
L_08951D28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2144));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08951D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951D40u) goto L_08951D40;
    return;
L_08951D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D78;
      }
      goto L_08951D48;
    }
L_08951D48:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2128));
    ctx.set_gpr(31, 0x08951D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951D5Cu) goto L_08951D5C;
    return;
L_08951D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D78;
      }
      goto L_08951D64;
    }
L_08951D64:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2128));
    ctx.set_gpr(31, 0x08951D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08951D78u) goto L_08951D78;
    return;
L_08951D78:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08951D7C;
L_08951D7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951C98;
      }
      goto L_08951D88;
    }
L_08951D88:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951D9C;
      }
      goto L_08951D90;
    }
L_08951D90:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951DE8;
      }
      goto L_08951D9C;
    }
L_08951D9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951DD4;
      }
      goto L_08951DAC;
    }
L_08951DAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08951DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08951DB8u) goto L_08951DB8;
    return;
L_08951DB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951DCC;
      }
      goto L_08951DC0;
    }
L_08951DC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08951DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08951DCCu) goto L_08951DCC;
    return;
L_08951DCC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08951DD4;
L_08951DD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08951DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08951DE8u) goto L_08951DE8;
    return;
L_08951DE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08951DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08951DF4u) goto L_08951DF4;
    return;
L_08951DF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08951E00u) goto L_08951E00;
    return;
L_08951E00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08951E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08951E18u) goto L_08951E18;
    return;
L_08951E18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E48;
      }
      goto L_08951E2C;
    }
L_08951E2C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E48;
      }
      goto L_08951E44;
    }
L_08951E44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08951E48;
L_08951E48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E5C;
      }
      goto L_08951E50;
    }
L_08951E50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08951E5C;
L_08951E5C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E88;
      }
      goto L_08951E6C;
    }
L_08951E6C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951E88;
      }
      goto L_08951E84;
    }
L_08951E84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08951E88;
L_08951E88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951EB4;
      }
      goto L_08951E90;
    }
L_08951E90:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951EB4;
      }
      goto L_08951EA8;
    }
L_08951EA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08951EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08951EB4u) goto L_08951EB4;
    return;
L_08951EB4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952000;
      }
      goto L_08951F28;
    }
L_08951F28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(31, 0x08951F38u);
    // nop
    goto L_08951B74;
L_08951F38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FF0;
      }
      goto L_08951F44;
    }
L_08951F44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08951F54u);
    // nop
    goto L_08951B74;
L_08951F54:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08951F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08951F70u) goto L_08951F70;
    return;
L_08951F70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951F80;
      }
      goto L_08951F78;
    }
L_08951F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08951F80;
L_08951F80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08951FDC;
      }
      goto L_08951F8C;
    }
L_08951F8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FDC;
      }
      goto L_08951F9C;
    }
L_08951F9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08951FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08951FA8u) goto L_08951FA8;
    return;
L_08951FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FC8;
      }
      goto L_08951FB0;
    }
L_08951FB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FFC;
      }
      goto L_08951FC8;
    }
L_08951FC8:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FFC;
      }
      goto L_08951FDC;
    }
L_08951FDC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FFC;
      }
      goto L_08951FF0;
    }
L_08951FF0:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08951FFC;
L_08951FFC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08952000;
L_08952000:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951F28;
      }
      goto L_0895200C;
    }
L_0895200C:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[21]);
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
L_08952038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08952070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x08952070u) goto L_08952070;
    return;
L_08952070:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952090;
      }
      goto L_08952084;
    }
L_08952084:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08952090u);
    // nop
    goto L_089520A8;
L_08952090:
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
L_089520A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089520C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x089520C0u) goto L_089520C0;
    return;
L_089520C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
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
L_089520EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895210Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0895210Cu) goto L_0895210C;
    return;
L_0895210C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
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
L_08952144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08952154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x08952154u) goto L_08952154;
    return;
L_08952154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952164:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952170:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895217C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952184:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895218C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089521A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x089521A4u) goto L_089521A4;
    return;
L_089521A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089521B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 58u, 0x089543BCu>(ctx, &aot_mem) && ctx.pc == 0x089521B0u) goto L_089521B0;
    return;
L_089521B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089521C4:
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
          goto L_089521FC;
      }
      goto L_089521F0;
    }
L_089521F0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952248;
      }
      goto L_089521FC;
    }
L_089521FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952234;
      }
      goto L_0895220C;
    }
L_0895220C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08952218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08952218u) goto L_08952218;
    return;
L_08952218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895222C;
      }
      goto L_08952220;
    }
L_08952220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895222Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895222Cu) goto L_0895222C;
    return;
L_0895222C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08952234;
L_08952234:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08952248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08952248u) goto L_08952248;
    return;
L_08952248:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895226C;
      }
      goto L_0895225C;
    }
L_0895225C:
    ctx.set_gpr(31, 0x08952264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08952264u) goto L_08952264;
    return;
L_08952264:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895231C;
      }
      goto L_0895226C;
    }
L_0895226C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089522A4;
      }
      goto L_0895227C;
    }
L_0895227C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08952288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08952288u) goto L_08952288;
    return;
L_08952288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895229C;
      }
      goto L_08952290;
    }
L_08952290:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895229Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895229Cu) goto L_0895229C;
    return;
L_0895229C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089522A4;
L_089522A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14020));
    ctx.set_gpr(31, 0x089522BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089522BCu) goto L_089522BC;
    return;
L_089522BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089522EC;
      }
      goto L_089522D0;
    }
L_089522D0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089522EC;
      }
      goto L_089522E8;
    }
L_089522E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089522EC;
L_089522EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952318;
      }
      goto L_089522F4;
    }
L_089522F4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952318;
      }
      goto L_0895230C;
    }
L_0895230C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08952318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08952318u) goto L_08952318;
    return;
L_08952318:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    goto L_0895231C;
L_0895231C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08952340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08952340u) goto L_08952340;
    return;
L_08952340:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089524CC;
      }
      goto L_0895234C;
    }
L_0895234C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952368;
      }
      goto L_08952354;
    }
L_08952354:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08952360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08952360u) goto L_08952360;
    return;
L_08952360:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952380;
      }
      goto L_08952368;
    }
L_08952368:
    ctx.set_gpr(31, 0x08952370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08952370u) goto L_08952370;
    return;
L_08952370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 503u, 0x089063B8u>(ctx, &aot_mem) && ctx.pc == 0x0895237Cu) goto L_0895237C;
    return;
L_0895237C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08952380;
L_08952380:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089524CC;
      }
      goto L_08952388;
    }
L_08952388:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08952394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08952394u) goto L_08952394;
    return;
L_08952394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089524CC;
      }
      goto L_0895239C;
    }
L_0895239C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089523A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089523A8u) goto L_089523A8;
    return;
L_089523A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089523B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 267u, 0x088F168Cu>(ctx, &aot_mem) && ctx.pc == 0x089523B4u) goto L_089523B4;
    return;
L_089523B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089523F4;
      }
      goto L_089523CC;
    }
L_089523CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089523D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089523D8u) goto L_089523D8;
    return;
L_089523D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089523EC;
      }
      goto L_089523E0;
    }
L_089523E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089523ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089523ECu) goto L_089523EC;
    return;
L_089523EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089523F4;
L_089523F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08952408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08952408u) goto L_08952408;
    return;
L_08952408:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952430;
      }
      goto L_0895241C;
    }
L_0895241C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08952428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08952428u) goto L_08952428;
    return;
L_08952428:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08952430;
L_08952430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952448;
      }
      goto L_08952438;
    }
L_08952438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08952448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08952448u) goto L_08952448;
    return;
L_08952448:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08952470u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08952470u) goto L_08952470;
    return;
L_08952470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895248C;
      }
      goto L_08952484;
    }
L_08952484:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895248C;
L_0895248C:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089524A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089524A0u) goto L_089524A0;
    return;
L_089524A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089524B8;
      }
      goto L_089524B0;
    }
L_089524B0:
    ctx.set_gpr(31, 0x089524B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089524B8u) goto L_089524B8;
    return;
L_089524B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089524CC;
      }
      goto L_089524C4;
    }
L_089524C4:
    ctx.set_gpr(31, 0x089524CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089524CCu) goto L_089524CC;
    return;
L_089524CC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089526E0;
      }
      goto L_089524D4;
    }
L_089524D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089524E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089524E0u) goto L_089524E0;
    return;
L_089524E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089524ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 267u, 0x088F168Cu>(ctx, &aot_mem) && ctx.pc == 0x089524ECu) goto L_089524EC;
    return;
L_089524EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089524F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089524F8u) goto L_089524F8;
    return;
L_089524F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08952504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 504u, 0x089063CCu>(ctx, &aot_mem) && ctx.pc == 0x08952504u) goto L_08952504;
    return;
L_08952504:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952544;
      }
      goto L_0895251C;
    }
L_0895251C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08952528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08952528u) goto L_08952528;
    return;
L_08952528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895253C;
      }
      goto L_08952530;
    }
L_08952530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895253Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895253Cu) goto L_0895253C;
    return;
L_0895253C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08952544;
L_08952544:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08952558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08952558u) goto L_08952558;
    return;
L_08952558:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952580;
      }
      goto L_0895256C;
    }
L_0895256C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08952578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08952578u) goto L_08952578;
    return;
L_08952578:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08952580;
L_08952580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952598;
      }
      goto L_08952588;
    }
L_08952588:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08952598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08952598u) goto L_08952598;
    return;
L_08952598:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089525C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089525C0u) goto L_089525C0;
    return;
L_089525C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089525DC;
      }
      goto L_089525D4;
    }
L_089525D4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089525DC;
L_089525DC:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089525F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089525F0u) goto L_089525F0;
    return;
L_089525F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952608;
      }
      goto L_08952600;
    }
L_08952600:
    ctx.set_gpr(31, 0x08952608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952608u) goto L_08952608;
    return;
L_08952608:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089526CC;
      }
      goto L_08952610;
    }
L_08952610:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32640)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089526CC;
      }
      goto L_0895261C;
    }
L_0895261C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08952628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08952628u) goto L_08952628;
    return;
L_08952628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08952634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08952634u) goto L_08952634;
    return;
L_08952634:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2040));
    ctx.set_gpr(31, 0x0895264Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x0895264Cu) goto L_0895264C;
    return;
L_0895264C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895266Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895266Cu) goto L_0895266C;
    return;
L_0895266C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08952684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08952684u) goto L_08952684;
    return;
L_08952684:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089526A0;
      }
      goto L_08952698;
    }
L_08952698:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089526A0;
L_089526A0:
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089526B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089526B4u) goto L_089526B4;
    return;
L_089526B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089526CC;
      }
      goto L_089526C4;
    }
L_089526C4:
    ctx.set_gpr(31, 0x089526CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089526CCu) goto L_089526CC;
    return;
L_089526CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089526E0;
      }
      goto L_089526D8;
    }
L_089526D8:
    ctx.set_gpr(31, 0x089526E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089526E0u) goto L_089526E0;
    return;
L_089526E0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895274C;
      }
      goto L_089526E8;
    }
L_089526E8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952714;
      }
      goto L_089526F8;
    }
L_089526F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952714;
      }
      goto L_08952710;
    }
L_08952710:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08952714;
L_08952714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952740;
      }
      goto L_0895271C;
    }
L_0895271C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952740;
      }
      goto L_08952734;
    }
L_08952734:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08952740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08952740u) goto L_08952740;
    return;
L_08952740:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089527DC;
      }
      goto L_0895274C;
    }
L_0895274C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08952758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 58u, 0x089543BCu>(ctx, &aot_mem) && ctx.pc == 0x08952758u) goto L_08952758;
    return;
L_08952758:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895276Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 73u, 0x089544A4u>(ctx, &aot_mem) && ctx.pc == 0x0895276Cu) goto L_0895276C;
    return;
L_0895276C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08952780u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08952780u) goto L_08952780;
    return;
L_08952780:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089527AC;
      }
      goto L_08952790;
    }
L_08952790:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089527AC;
      }
      goto L_089527A8;
    }
L_089527A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089527AC;
L_089527AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089527D8;
      }
      goto L_089527B4;
    }
L_089527B4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089527D8;
      }
      goto L_089527CC;
    }
L_089527CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089527D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089527D8u) goto L_089527D8;
    return;
L_089527D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089527DC;
L_089527DC:
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
L_089527FC:
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
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_0895284C;
    }
L_0895284C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895296C;
      }
      goto L_08952870;
    }
L_08952870:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0895288Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895288Cu) goto L_0895288C;
    return;
L_0895288C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952968;
      }
      goto L_08952898;
    }
L_08952898:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089528A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 230u, 0x08954DE4u>(ctx, &aot_mem) && ctx.pc == 0x089528A8u) goto L_089528A8;
    return;
L_089528A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089528BCu);
    // nop
    goto L_089529D4;
L_089528BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952924;
      }
      goto L_089528C8;
    }
L_089528C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089528E4;
      }
      goto L_089528DC;
    }
L_089528DC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089528E4;
L_089528E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089528FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x089528FCu) goto L_089528FC;
    return;
L_089528FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952918;
      }
      goto L_08952910;
    }
L_08952910:
    ctx.set_gpr(31, 0x08952918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952918u) goto L_08952918;
    return;
L_08952918:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952968;
      }
      goto L_08952924;
    }
L_08952924:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952944;
      }
      goto L_0895293C;
    }
L_0895293C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08952944;
L_08952944:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952958;
      }
      goto L_08952950;
    }
L_08952950:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08952958;
L_08952958:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08952968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 38u, 0x08954280u>(ctx, &aot_mem) && ctx.pc == 0x08952968u) goto L_08952968;
    return;
L_08952968:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895296C;
L_0895296C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952870;
      }
      goto L_08952978;
    }
L_08952978:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0895297C;
L_0895297C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895284C;
      }
      goto L_08952988;
    }
L_08952988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895299C;
      }
      goto L_08952994;
    }
L_08952994:
    ctx.set_gpr(31, 0x0895299Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895299Cu) goto L_0895299C;
    return;
L_0895299C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_089529D4:
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
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A7C;
      }
      goto L_08952A1C;
    }
L_08952A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A88;
      }
      goto L_08952A38;
    }
L_08952A38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08952A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 748u, 0x0895B21Cu>(ctx, &aot_mem) && ctx.pc == 0x08952A50u) goto L_08952A50;
    return;
L_08952A50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952A64;
      }
      goto L_08952A58;
    }
L_08952A58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B7C;
      }
      goto L_08952A64;
    }
L_08952A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952A78;
      }
      goto L_08952A74;
    }
L_08952A74:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08952A78;
L_08952A78:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08952A7C;
L_08952A7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952A1C;
      }
      goto L_08952A88;
    }
L_08952A88:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B78;
      }
      goto L_08952A94;
    }
L_08952A94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08952AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08952AA0u) goto L_08952AA0;
    return;
L_08952AA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08952AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 661u, 0x088EB150u>(ctx, &aot_mem) && ctx.pc == 0x08952AACu) goto L_08952AAC;
    return;
L_08952AAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952AEC;
      }
      goto L_08952AC4;
    }
L_08952AC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08952AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08952AD0u) goto L_08952AD0;
    return;
L_08952AD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952AE4;
      }
      goto L_08952AD8;
    }
L_08952AD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08952AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08952AE4u) goto L_08952AE4;
    return;
L_08952AE4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08952AEC;
L_08952AEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08952B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08952B00u) goto L_08952B00;
    return;
L_08952B00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B28;
      }
      goto L_08952B14;
    }
L_08952B14:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08952B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08952B20u) goto L_08952B20;
    return;
L_08952B20:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08952B28;
L_08952B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B40;
      }
      goto L_08952B30;
    }
L_08952B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08952B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08952B40u) goto L_08952B40;
    return;
L_08952B40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08952B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08952B58u) goto L_08952B58;
    return;
L_08952B58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B6C;
      }
      goto L_08952B64;
    }
L_08952B64:
    ctx.set_gpr(31, 0x08952B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952B6Cu) goto L_08952B6C;
    return;
L_08952B6C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952B7C;
      }
      goto L_08952B78;
    }
L_08952B78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08952B7C;
L_08952B7C:
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
L_08952BA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952BEC;
      }
      goto L_08952BC0;
    }
L_08952BC0:
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08952BE8;
      }
      goto L_08952BDC;
    }
L_08952BDC:
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952BF8;
      }
      goto L_08952BE8;
    }
L_08952BE8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08952BEC;
L_08952BEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952BC0;
      }
      goto L_08952BF8;
    }
L_08952BF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952C48;
      }
      goto L_08952C24;
    }
L_08952C24:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08952C44u);
    // nop
    goto L_089529D4;
L_08952C44:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08952C48;
L_08952C48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08952C54u);
    // nop
    goto L_08952BA8;
L_08952C54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952C98;
      }
      goto L_08952C78;
    }
L_08952C78:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952C94;
      }
      goto L_08952C90;
    }
L_08952C90:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08952C94;
L_08952C94:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08952C98;
L_08952C98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952C78;
      }
      goto L_08952CA4;
    }
L_08952CA4:
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
L_08952CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952D20;
      }
      goto L_08952CFC;
    }
L_08952CFC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08952D1Cu);
    // nop
    goto L_089529D4;
L_08952D1C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08952D20;
L_08952D20:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08952D2Cu);
    // nop
    goto L_08952BA8;
L_08952D2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DB0;
      }
      goto L_08952D40;
    }
L_08952D40:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DA4;
      }
      goto L_08952D60;
    }
L_08952D60:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DA0;
      }
      goto L_08952D78;
    }
L_08952D78:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952D9C;
      }
      goto L_08952D80;
    }
L_08952D80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08952D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08952D90u) goto L_08952D90;
    return;
L_08952D90:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DB0;
      }
      goto L_08952D9C;
    }
L_08952D9C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08952DA0;
L_08952DA0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08952DA4;
L_08952DA4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952D60;
      }
      goto L_08952DB0;
    }
L_08952DB0:
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
L_08952DD8:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08952E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08952E38u) goto L_08952E38;
    return;
L_08952E38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08952E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08952E48u) goto L_08952E48;
    return;
L_08952E48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952E5C;
      }
      goto L_08952E54;
    }
L_08952E54:
    ctx.set_gpr(31, 0x08952E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952E5Cu) goto L_08952E5C;
    return;
L_08952E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952E84;
      }
      goto L_08952E68;
    }
L_08952E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08952E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 598u, 0x0895A874u>(ctx, &aot_mem) && ctx.pc == 0x08952E78u) goto L_08952E78;
    return;
L_08952E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952E84;
      }
      goto L_08952E80;
    }
L_08952E80:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08952E84;
L_08952E84:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952EB0;
      }
      goto L_08952E8C;
    }
L_08952E8C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952EB0;
      }
      goto L_08952E98;
    }
L_08952E98:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08952EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 18u, 0x0895413Cu>(ctx, &aot_mem) && ctx.pc == 0x08952EB0u) goto L_08952EB0;
    return;
L_08952EB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952EC4;
      }
      goto L_08952EBC;
    }
L_08952EBC:
    ctx.set_gpr(31, 0x08952EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952EC4u) goto L_08952EC4;
    return;
L_08952EC4:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_08952EF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08952F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08952F54u) goto L_08952F54;
    return;
L_08952F54:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08952F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08952F64u) goto L_08952F64;
    return;
L_08952F64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952F78;
      }
      goto L_08952F70;
    }
L_08952F70:
    ctx.set_gpr(31, 0x08952F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952F78u) goto L_08952F78;
    return;
L_08952F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FA0;
      }
      goto L_08952F84;
    }
L_08952F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08952F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 602u, 0x0895A8BCu>(ctx, &aot_mem) && ctx.pc == 0x08952F94u) goto L_08952F94;
    return;
L_08952F94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FA0;
      }
      goto L_08952F9C;
    }
L_08952F9C:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_08952FA0;
L_08952FA0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952FCC;
      }
      goto L_08952FA8;
    }
L_08952FA8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FCC;
      }
      goto L_08952FB4;
    }
L_08952FB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08952FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 28u, 0x089541E0u>(ctx, &aot_mem) && ctx.pc == 0x08952FCCu) goto L_08952FCC;
    return;
L_08952FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FE0;
      }
      goto L_08952FD8;
    }
L_08952FD8:
    ctx.set_gpr(31, 0x08952FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08952FE0u) goto L_08952FE0;
    return;
L_08952FE0:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08953068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08953068u) goto L_08953068;
    return;
L_08953068:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08953078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08953078u) goto L_08953078;
    return;
L_08953078:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895308C;
      }
      goto L_08953084;
    }
L_08953084:
    ctx.set_gpr(31, 0x0895308Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895308Cu) goto L_0895308C;
    return;
L_0895308C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089530B0;
      }
      goto L_08953098;
    }
L_08953098:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089530A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089530A8u) goto L_089530A8;
    return;
L_089530A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953120;
      }
      goto L_089530B0;
    }
L_089530B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089530BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089530BCu) goto L_089530BC;
    return;
L_089530BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089530C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089530C8u) goto L_089530C8;
    return;
L_089530C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089530DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089530DCu) goto L_089530DC;
    return;
L_089530DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089530ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089530ECu) goto L_089530EC;
    return;
L_089530EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895310C;
      }
      goto L_089530F4;
    }
L_089530F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895310Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 38u, 0x08954280u>(ctx, &aot_mem) && ctx.pc == 0x0895310Cu) goto L_0895310C;
    return;
L_0895310C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953120;
      }
      goto L_08953118;
    }
L_08953118:
    ctx.set_gpr(31, 0x08953120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953120u) goto L_08953120;
    return;
L_08953120:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953138;
      }
      goto L_08953130;
    }
L_08953130:
    ctx.set_gpr(31, 0x08953138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953138u) goto L_08953138;
    return;
L_08953138:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08953164:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089531C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x089531C0u) goto L_089531C0;
    return;
L_089531C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089531D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089531D0u) goto L_089531D0;
    return;
L_089531D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089531E4;
      }
      goto L_089531DC;
    }
L_089531DC:
    ctx.set_gpr(31, 0x089531E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089531E4u) goto L_089531E4;
    return;
L_089531E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089532BC;
      }
      goto L_089531F0;
    }
L_089531F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953208;
      }
      goto L_08953200;
    }
L_08953200:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08953208;
L_08953208:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953240;
      }
      goto L_08953218;
    }
L_08953218:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08953224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08953224u) goto L_08953224;
    return;
L_08953224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953238;
      }
      goto L_0895322C;
    }
L_0895322C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08953238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08953238u) goto L_08953238;
    return;
L_08953238:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08953240;
L_08953240:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08953254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08953254u) goto L_08953254;
    return;
L_08953254:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953284;
      }
      goto L_08953268;
    }
L_08953268:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953284;
      }
      goto L_08953280;
    }
L_08953280:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08953284;
L_08953284:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089532B0;
      }
      goto L_0895328C;
    }
L_0895328C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532B0;
      }
      goto L_089532A4;
    }
L_089532A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089532B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089532B0u) goto L_089532B0;
    return;
L_089532B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_089532BC;
    }
L_089532BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532F4;
      }
      goto L_089532CC;
    }
L_089532CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089532D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089532D8u) goto L_089532D8;
    return;
L_089532D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089532EC;
      }
      goto L_089532E0;
    }
L_089532E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089532ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089532ECu) goto L_089532EC;
    return;
L_089532EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089532F4;
L_089532F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08953308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08953308u) goto L_08953308;
    return;
L_08953308:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953338;
      }
      goto L_0895331C;
    }
L_0895331C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953338;
      }
      goto L_08953334;
    }
L_08953334:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08953338;
L_08953338:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953364;
      }
      goto L_08953340;
    }
L_08953340:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953364;
      }
      goto L_08953358;
    }
L_08953358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08953364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08953364u) goto L_08953364;
    return;
L_08953364:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_08953370;
    }
L_08953370:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08953388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 38u, 0x08954280u>(ctx, &aot_mem) && ctx.pc == 0x08953388u) goto L_08953388;
    return;
L_08953388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089533A0;
      }
      goto L_08953398;
    }
L_08953398:
    ctx.set_gpr(31, 0x089533A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089533A0u) goto L_089533A0;
    return;
L_089533A0:
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
L_089533D0:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08953430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08953430u) goto L_08953430;
    return;
L_08953430:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08953440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08953440u) goto L_08953440;
    return;
L_08953440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953454;
      }
      goto L_0895344C;
    }
L_0895344C:
    ctx.set_gpr(31, 0x08953454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953454u) goto L_08953454;
    return;
L_08953454:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895367C;
      }
      goto L_08953460;
    }
L_08953460:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08953474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 703u, 0x0895AF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08953474u) goto L_08953474;
    return;
L_08953474:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08953480u) goto L_08953480;
    return;
L_08953480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895348Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895348Cu) goto L_0895348C;
    return;
L_0895348C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953650;
      }
      goto L_0895349C;
    }
L_0895349C:
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089534C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089534C0u) goto L_089534C0;
    return;
L_089534C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089534CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 750u, 0x0895B23Cu>(ctx, &aot_mem) && ctx.pc == 0x089534CCu) goto L_089534CC;
    return;
L_089534CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089534E4;
      }
      goto L_089534DC;
    }
L_089534DC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089534E4;
L_089534E4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089534F8;
      }
      goto L_089534EC;
    }
L_089534EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953544;
      }
      goto L_089534F8;
    }
L_089534F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953530;
      }
      goto L_08953508;
    }
L_08953508:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08953514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08953514u) goto L_08953514;
    return;
L_08953514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953528;
      }
      goto L_0895351C;
    }
L_0895351C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08953528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08953528u) goto L_08953528;
    return;
L_08953528:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08953530;
L_08953530:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08953544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08953544u) goto L_08953544;
    return;
L_08953544:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_08953554;
    }
L_08953554:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_0895355C;
    }
L_0895355C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_08953568;
    }
L_08953568:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953590;
      }
      goto L_0895357C;
    }
L_0895357C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08953588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08953588u) goto L_08953588;
    return;
L_08953588:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08953590;
L_08953590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089535B0;
      }
      goto L_08953598;
    }
L_08953598:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089535A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089535A4u) goto L_089535A4;
    return;
L_089535A4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089535B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089535B0u) goto L_089535B0;
    return;
L_089535B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089535D4;
      }
      goto L_089535C0;
    }
L_089535C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089535CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089535CCu) goto L_089535CC;
    return;
L_089535CC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089535D4;
L_089535D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089535EC;
      }
      goto L_089535DC;
    }
L_089535DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089535ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089535ECu) goto L_089535EC;
    return;
L_089535EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089535F4;
L_089535F4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953620;
      }
      goto L_08953604;
    }
L_08953604:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953620;
      }
      goto L_0895361C;
    }
L_0895361C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08953620;
L_08953620:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895364C;
      }
      goto L_08953628;
    }
L_08953628:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895364C;
      }
      goto L_08953640;
    }
L_08953640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895364Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895364Cu) goto L_0895364C;
    return;
L_0895364C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08953650;
L_08953650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895349C;
      }
      goto L_08953660;
    }
L_08953660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953794;
      }
      goto L_0895366C;
    }
L_0895366C:
    ctx.set_gpr(31, 0x08953674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953674u) goto L_08953674;
    return;
L_08953674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953794;
      }
      goto L_0895367C;
    }
L_0895367C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953794;
      }
      goto L_08953684;
    }
L_08953684:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08953690u) goto L_08953690;
    return;
L_08953690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895369Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895369Cu) goto L_0895369C;
    return;
L_0895369C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089536C8;
      }
      goto L_089536AC;
    }
L_089536AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089536C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x089536C8u) goto L_089536C8;
    return;
L_089536C8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953748;
      }
      goto L_089536D4;
    }
L_089536D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32636));
    ctx.set_gpr(31, 0x089536E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089536E8u) goto L_089536E8;
    return;
L_089536E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32636));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08953700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08953700u) goto L_08953700;
    return;
L_08953700:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895372Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895372Cu) goto L_0895372C;
    return;
L_0895372C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08953744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08953744u) goto L_08953744;
    return;
L_08953744:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08953748;
L_08953748:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089536D4;
      }
      goto L_08953754;
    }
L_08953754:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895376C;
      }
      goto L_08953764;
    }
L_08953764:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895376C;
L_0895376C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08953780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 38u, 0x08954280u>(ctx, &aot_mem) && ctx.pc == 0x08953780u) goto L_08953780;
    return;
L_08953780:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953794;
      }
      goto L_0895378C;
    }
L_0895378C:
    ctx.set_gpr(31, 0x08953794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953794u) goto L_08953794;
    return;
L_08953794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089537AC;
      }
      goto L_089537A4;
    }
L_089537A4:
    ctx.set_gpr(31, 0x089537ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089537ACu) goto L_089537AC;
    return;
L_089537AC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089537E4:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08953844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08953844u) goto L_08953844;
    return;
L_08953844:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08953854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08953854u) goto L_08953854;
    return;
L_08953854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953868;
      }
      goto L_08953860;
    }
L_08953860:
    ctx.set_gpr(31, 0x08953868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953868u) goto L_08953868;
    return;
L_08953868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953890;
      }
      goto L_08953874;
    }
L_08953874:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08953884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 606u, 0x0895A904u>(ctx, &aot_mem) && ctx.pc == 0x08953884u) goto L_08953884;
    return;
L_08953884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953890;
      }
      goto L_0895388C;
    }
L_0895388C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08953890;
L_08953890:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089538BC;
      }
      goto L_08953898;
    }
L_08953898:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089538BC;
      }
      goto L_089538A4;
    }
L_089538A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089538BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 48u, 0x0895431Cu>(ctx, &aot_mem) && ctx.pc == 0x089538BCu) goto L_089538BC;
    return;
L_089538BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089538D0;
      }
      goto L_089538C8;
    }
L_089538C8:
    ctx.set_gpr(31, 0x089538D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089538D0u) goto L_089538D0;
    return;
L_089538D0:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_08953900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08953940u) goto L_08953940;
    return;
L_08953940:
    ctx.set_gpr(19, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953958;
      }
      goto L_08953954;
    }
L_08953954:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08953958;
L_08953958:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953988;
      }
      goto L_08953964;
    }
L_08953964:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08953970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08953970u) goto L_08953970;
    return;
L_08953970:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953954;
      }
      goto L_08953978;
    }
L_08953978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953988;
      }
      goto L_08953980;
    }
L_08953980:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08953988;
L_08953988:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089539B0;
      }
      goto L_08953994;
    }
L_08953994:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089539B0;
      }
      goto L_089539A0;
    }
L_089539A0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08953980;
      }
      goto L_089539B0;
    }
L_089539B0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089539D8;
      }
      goto L_089539C0;
    }
L_089539C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089539D8;
      }
      goto L_089539D4;
    }
L_089539D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089539D8;
L_089539D8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A0C;
      }
      goto L_089539E4;
    }
L_089539E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089539F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x089539F4u) goto L_089539F4;
    return;
L_089539F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A08;
      }
      goto L_089539FC;
    }
L_089539FC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A0C;
      }
      goto L_08953A08;
    }
L_08953A08:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08953A0C;
L_08953A0C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08953A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x08953A18u) goto L_08953A18;
    return;
L_08953A18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B78;
      }
      goto L_08953A20;
    }
L_08953A20:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2036));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08953A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08953A38u) goto L_08953A38;
    return;
L_08953A38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953A70;
      }
      goto L_08953A40;
    }
L_08953A40:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2032));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08953A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08953A58u) goto L_08953A58;
    return;
L_08953A58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08953B90;
      }
      goto L_08953A64;
    }
L_08953A64:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B94;
      }
      goto L_08953A70;
    }
L_08953A70:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08953A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08953A88u) goto L_08953A88;
    return;
L_08953A88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08953B90;
      }
      goto L_08953A94;
    }
L_08953A94:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B94;
      }
      goto L_08953AA0;
    }
L_08953AA0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08953AA4;
L_08953AA4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953AC4;
      }
      goto L_08953AB0;
    }
L_08953AB0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08953ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08953ABCu) goto L_08953ABC;
    return;
L_08953ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953AA0;
      }
      goto L_08953AC4;
    }
L_08953AC4:
    ctx.set_gpr(20, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953AD4;
      }
      goto L_08953AD0;
    }
L_08953AD0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08953AD4;
L_08953AD4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B00;
      }
      goto L_08953AE0;
    }
L_08953AE0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08953AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08953AECu) goto L_08953AEC;
    return;
L_08953AEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953B00;
      }
      goto L_08953AF4;
    }
L_08953AF4:
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953AD0;
      }
      goto L_08953B00;
    }
L_08953B00:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B78;
      }
      goto L_08953B0C;
    }
L_08953B0C:
    ctx.set_gpr(17, ctx.gpr[21] - ctx.gpr[20]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953B20;
      }
      goto L_08953B1C;
    }
L_08953B1C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(255));
    goto L_08953B20;
L_08953B20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08953B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08953B34u) goto L_08953B34;
    return;
L_08953B34:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08953B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x08953B54u) goto L_08953B54;
    return;
L_08953B54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953B74;
      }
      goto L_08953B5C;
    }
L_08953B5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B78;
      }
      goto L_08953B74;
    }
L_08953B74:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08953B78;
L_08953B78:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B90;
      }
      goto L_08953B84;
    }
L_08953B84:
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953AA4;
      }
      goto L_08953B90;
    }
L_08953B90:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08953B94;
L_08953B94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
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
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08953BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08953BFCu) goto L_08953BFC;
    return;
L_08953BFC:
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C0C;
      }
      goto L_08953C08;
    }
L_08953C08:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08953C0C;
L_08953C0C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C3C;
      }
      goto L_08953C18;
    }
L_08953C18:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08953C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08953C24u) goto L_08953C24;
    return;
L_08953C24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953C08;
      }
      goto L_08953C2C;
    }
L_08953C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C3C;
      }
      goto L_08953C34;
    }
L_08953C34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08953C3C;
L_08953C3C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C64;
      }
      goto L_08953C48;
    }
L_08953C48:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C64;
      }
      goto L_08953C54;
    }
L_08953C54:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08953C34;
      }
      goto L_08953C64;
    }
L_08953C64:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08953C8C;
      }
      goto L_08953C74;
    }
L_08953C74:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08953C8C;
      }
      goto L_08953C88;
    }
L_08953C88:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08953C8C;
L_08953C8C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953CC8;
      }
      goto L_08953C98;
    }
L_08953C98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08953CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08953CA8u) goto L_08953CA8;
    return;
L_08953CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953CBC;
      }
      goto L_08953CB0;
    }
L_08953CB0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953CC8;
      }
      goto L_08953CBC;
    }
L_08953CBC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E0C;
      }
      goto L_08953CC8;
    }
L_08953CC8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08953CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x08953CD4u) goto L_08953CD4;
    return;
L_08953CD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953D5C;
      }
      goto L_08953CDC;
    }
L_08953CDC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2036));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08953CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08953CF4u) goto L_08953CF4;
    return;
L_08953CF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953D2C;
      }
      goto L_08953CFC;
    }
L_08953CFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2032));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08953D14u) goto L_08953D14;
    return;
L_08953D14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08953E08;
      }
      goto L_08953D20;
    }
L_08953D20:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E0C;
      }
      goto L_08953D2C;
    }
L_08953D2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08953D44u) goto L_08953D44;
    return;
L_08953D44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08953E08;
      }
      goto L_08953D50;
    }
L_08953D50:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E0C;
      }
      goto L_08953D5C;
    }
L_08953D5C:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953D6C;
      }
      goto L_08953D68;
    }
L_08953D68:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08953D6C;
L_08953D6C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953D98;
      }
      goto L_08953D78;
    }
L_08953D78:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08953D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08953D84u) goto L_08953D84;
    return;
L_08953D84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953D98;
      }
      goto L_08953D8C;
    }
L_08953D8C:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953D68;
      }
      goto L_08953D98;
    }
L_08953D98:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E08;
      }
      goto L_08953DA4;
    }
L_08953DA4:
    ctx.set_gpr(16, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953DB8;
      }
      goto L_08953DB4;
    }
L_08953DB4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(255));
    goto L_08953DB8;
L_08953DB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08953DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08953DCCu) goto L_08953DCC;
    return;
L_08953DCC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08953DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x08953DE8u) goto L_08953DE8;
    return;
L_08953DE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953DFC;
      }
      goto L_08953DF0;
    }
L_08953DF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E0C;
      }
      goto L_08953DFC;
    }
L_08953DFC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E0C;
      }
      goto L_08953E08;
    }
L_08953E08:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08953E0C;
L_08953E0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953E34:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08953E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08953E94u) goto L_08953E94;
    return;
L_08953E94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08953EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08953EA4u) goto L_08953EA4;
    return;
L_08953EA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953EB8;
      }
      goto L_08953EB0;
    }
L_08953EB0:
    ctx.set_gpr(31, 0x08953EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953EB8u) goto L_08953EB8;
    return;
L_08953EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953EFC;
      }
      goto L_08953EC4;
    }
L_08953EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953EDC;
      }
      goto L_08953ED4;
    }
L_08953ED4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08953EDC;
L_08953EDC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(31, 0x08953EF4u);
    // nop
    goto L_08953BC0;
L_08953EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F20;
      }
      goto L_08953EFC;
    }
L_08953EFC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F20;
      }
      goto L_08953F08;
    }
L_08953F08:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08953F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 18u, 0x0895413Cu>(ctx, &aot_mem) && ctx.pc == 0x08953F20u) goto L_08953F20;
    return;
L_08953F20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F38;
      }
      goto L_08953F30;
    }
L_08953F30:
    ctx.set_gpr(31, 0x08953F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953F38u) goto L_08953F38;
    return;
L_08953F38:
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
L_08953F68:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08953FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 156u, 0x089549D8u>(ctx, &aot_mem) && ctx.pc == 0x08953FC8u) goto L_08953FC8;
    return;
L_08953FC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08953FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08953FD8u) goto L_08953FD8;
    return;
L_08953FD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FEC;
      }
      goto L_08953FE4;
    }
L_08953FE4:
    ctx.set_gpr(31, 0x08953FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08953FECu) goto L_08953FEC;
    return;
L_08953FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 5u, 0x08954030u>(ctx, &aot_mem); return;
      }
      goto L_08953FF8;
    }
L_08953FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08954000u; return;
}

void recomp_unit_0083(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0083_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_83(Runtime &runtime) {
    runtime.register_generated_unit(83u, 0x08950000u, 16384u, &recomp_unit_0083, &recomp_unit_0083_entry);
    runtime.register_function(0x08950000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950010u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895001Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950028u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950040u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895005Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950068u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950100u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950108u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950114u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950134u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950158u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950168u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950180u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895018Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950218u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950224u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950234u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950240u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895024Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950258u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950284u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950320u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950344u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950350u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950364u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950400u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895040Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950414u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950420u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950428u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895045Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895047Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950488u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950494u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950500u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950510u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895052Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950548u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895059Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950640u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895064Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950664u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895069Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950700u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950714u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895072Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950738u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950750u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895077Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950784u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950798u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950834u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950844u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950850u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895086Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950870u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950880u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895088Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950900u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950908u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950914u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950920u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895092Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950948u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895094Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950958u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895095Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895096Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950998u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ED0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ED8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951004u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895100Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951018u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951020u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895102Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951034u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895103Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951048u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951070u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895108Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951094u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951098u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895109Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895110Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951118u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951120u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951150u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895117Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895119Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951200u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895120Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951234u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895123Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895124Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951258u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951264u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951274u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951278u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951290u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895131Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895132Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951330u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951348u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951378u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951408u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951424u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951430u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951434u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951440u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951448u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895145Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951474u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895147Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951480u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895148Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895149Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951500u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951528u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895154Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951568u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951618u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951660u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895167Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951688u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951698u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951730u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951740u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951758u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951778u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951784u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951820u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951838u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895185Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895186Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895187Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951888u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951894u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951910u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951924u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951938u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951958u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951968u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951974u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895197Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951998u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895200Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952038u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952058u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952070u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952084u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952090u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895210Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952144u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952154u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952164u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952170u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895217Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952184u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895218Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895220Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952218u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952220u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895222Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952234u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952248u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895225Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952264u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895226Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895227Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952288u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952290u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895229Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895230Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895231Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952340u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895234Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952354u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952360u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952368u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895237Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952380u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952388u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952394u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895239Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952408u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895241Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952428u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952430u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952438u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952448u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952470u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895248Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952504u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895251Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952528u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952530u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895253Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952544u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952558u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895256Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952578u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952580u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952588u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952598u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952600u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952608u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895261Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952628u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952634u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895264Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895266Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952684u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952698u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952710u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952714u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895271Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952734u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952740u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895274Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952758u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895276Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952790u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895284Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952870u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895288Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952910u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952918u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952924u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895293Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952944u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952958u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952968u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895296Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952978u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895297Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952988u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952994u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895299Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953010u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953068u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953084u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895308Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953098u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895310Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953118u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953120u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953130u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953138u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953164u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953200u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953208u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953218u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953224u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895322Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953238u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953240u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953254u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953268u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953280u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953284u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895328Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953308u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895331Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953338u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953340u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953358u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953364u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953388u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953398u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953430u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953440u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895344Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953454u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953460u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953474u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953480u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895348Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895349Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953508u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953514u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895351Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953528u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953530u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953544u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953554u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895355Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953568u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895357Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953588u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953590u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953598u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953604u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895361Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953620u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953628u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953640u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895364Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953650u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953660u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895366Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953674u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895367Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953684u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953690u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895369Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953700u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895372Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953744u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953748u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953754u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953764u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895376Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895378Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953844u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953860u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953868u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953874u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953884u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895388Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953890u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953900u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953940u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953954u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953958u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953964u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953970u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953978u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953980u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953988u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953994u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953ED4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FF8u, &recomp_unit_0083, "recomp_unit_0083");
}
} // namespace psprecomp
