#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0010[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29,
    0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0,
    0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 87, 0, 88, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 92, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 185, 0, 0, 186, 0, 0, 187, 188, 189, 0,
    0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 200, 0, 0, 201, 0, 0, 202, 203, 204, 0, 0, 205, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 215, 0, 0, 216, 0, 0, 217, 218, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 227, 228, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 260, 0, 261, 0, 0, 262, 263, 0, 0, 264, 265, 0, 0, 266, 0, 0, 267, 0, 268,
    0, 269, 0, 0, 270, 0, 271, 272, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 277, 278, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0,
    0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0,
    0, 317, 0, 318, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 335, 0, 0, 0, 336, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 345,
    0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0,
    356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0,
    0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 376, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0,
    483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518,
    0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524,
    0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    529, 530, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0,
    547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 557,
    0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0,
    0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0,
    0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0,
    0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 0,
    0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0,
    0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 606, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 0,
    0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 619, 620, 0, 621, 0, 0, 0, 0, 622,
    0, 623, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0,
    642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 658,
    0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0,
    0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0,
    675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0,
    0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0,
    702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 709,
    0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0,
    0, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0,
    726, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 734, 0, 0,
    735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0,
    0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 751,
    0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0,
    0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0,
    0, 766, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0,
    778, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0,
    786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0,
    0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0,
    795, 0, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0,
    0, 0, 0, 804, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 815,
    0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0,
    0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0,
    0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 839, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0,
    0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 849,
    0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0,
    0, 0, 859, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 865, 0, 0, 0, 0, 0, 0, 0,
    0, 866, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0, 870, 0, 0, 0, 871,
    0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0,
    0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 883, 884, 0, 0, 0, 885, 0, 0, 886,
};
void recomp_unit_0010_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0882C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0010[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882C000;
    case 2u: goto L_0882C014;
    case 3u: goto L_0882C024;
    case 4u: goto L_0882C03C;
    case 5u: goto L_0882C040;
    case 6u: goto L_0882C04C;
    case 7u: goto L_0882C058;
    case 8u: goto L_0882C064;
    case 9u: goto L_0882C078;
    case 10u: goto L_0882C088;
    case 11u: goto L_0882C098;
    case 12u: goto L_0882C0A0;
    case 13u: goto L_0882C0A4;
    case 14u: goto L_0882C0B0;
    case 15u: goto L_0882C0DC;
    case 16u: goto L_0882C0EC;
    case 17u: goto L_0882C0FC;
    case 18u: goto L_0882C130;
    case 19u: goto L_0882C178;
    case 20u: goto L_0882C188;
    case 21u: goto L_0882C190;
    case 22u: goto L_0882C19C;
    case 23u: goto L_0882C1AC;
    case 24u: goto L_0882C1BC;
    case 25u: goto L_0882C1C4;
    case 26u: goto L_0882C1CC;
    case 27u: goto L_0882C1DC;
    case 28u: goto L_0882C1EC;
    case 29u: goto L_0882C1FC;
    case 30u: goto L_0882C204;
    case 31u: goto L_0882C214;
    case 32u: goto L_0882C22C;
    case 33u: goto L_0882C23C;
    case 34u: goto L_0882C244;
    case 35u: goto L_0882C254;
    case 36u: goto L_0882C25C;
    case 37u: goto L_0882C274;
    case 38u: goto L_0882C28C;
    case 39u: goto L_0882C2A0;
    case 40u: goto L_0882C2A8;
    case 41u: goto L_0882C2B4;
    case 42u: goto L_0882C2B8;
    case 43u: goto L_0882C2C4;
    case 44u: goto L_0882C2D4;
    case 45u: goto L_0882C2EC;
    case 46u: goto L_0882C300;
    case 47u: goto L_0882C308;
    case 48u: goto L_0882C318;
    case 49u: goto L_0882C330;
    case 50u: goto L_0882C338;
    case 51u: goto L_0882C350;
    case 52u: goto L_0882C358;
    case 53u: goto L_0882C36C;
    case 54u: goto L_0882C37C;
    case 55u: goto L_0882C384;
    case 56u: goto L_0882C3A8;
    case 57u: goto L_0882C3B8;
    case 58u: goto L_0882C3EC;
    case 59u: goto L_0882C41C;
    case 60u: goto L_0882C42C;
    case 61u: goto L_0882C434;
    case 62u: goto L_0882C43C;
    case 63u: goto L_0882C44C;
    case 64u: goto L_0882C45C;
    case 65u: goto L_0882C46C;
    case 66u: goto L_0882C474;
    case 67u: goto L_0882C484;
    case 68u: goto L_0882C48C;
    case 69u: goto L_0882C498;
    case 70u: goto L_0882C4AC;
    case 71u: goto L_0882C4BC;
    case 72u: goto L_0882C4C4;
    case 73u: goto L_0882C4D4;
    case 74u: goto L_0882C4E4;
    case 75u: goto L_0882C4EC;
    case 76u: goto L_0882C520;
    case 77u: goto L_0882C538;
    case 78u: goto L_0882C554;
    case 79u: goto L_0882C58C;
    case 80u: goto L_0882C59C;
    case 81u: goto L_0882C5AC;
    case 82u: goto L_0882C5B4;
    case 83u: goto L_0882C5C4;
    case 84u: goto L_0882C5DC;
    case 85u: goto L_0882C5EC;
    case 86u: goto L_0882C5F4;
    case 87u: goto L_0882C604;
    case 88u: goto L_0882C60C;
    case 89u: goto L_0882C620;
    case 90u: goto L_0882C624;
    case 91u: goto L_0882C630;
    case 92u: goto L_0882C638;
    case 93u: goto L_0882C63C;
    case 94u: goto L_0882C64C;
    case 95u: goto L_0882C66C;
    case 96u: goto L_0882C688;
    case 97u: goto L_0882C698;
    case 98u: goto L_0882C6A8;
    case 99u: goto L_0882C6CC;
    case 100u: goto L_0882C708;
    case 101u: goto L_0882C718;
    case 102u: goto L_0882C728;
    case 103u: goto L_0882C730;
    case 104u: goto L_0882C740;
    case 105u: goto L_0882C758;
    case 106u: goto L_0882C768;
    case 107u: goto L_0882C770;
    case 108u: goto L_0882C780;
    case 109u: goto L_0882C788;
    case 110u: goto L_0882C79C;
    case 111u: goto L_0882C7A0;
    case 112u: goto L_0882C7AC;
    case 113u: goto L_0882C7B4;
    case 114u: goto L_0882C7CC;
    case 115u: goto L_0882C7D4;
    case 116u: goto L_0882C7E0;
    case 117u: goto L_0882C804;
    case 118u: goto L_0882C818;
    case 119u: goto L_0882C84C;
    case 120u: goto L_0882C85C;
    case 121u: goto L_0882C86C;
    case 122u: goto L_0882C894;
    case 123u: goto L_0882C8CC;
    case 124u: goto L_0882C8E4;
    case 125u: goto L_0882C8EC;
    case 126u: goto L_0882C8F8;
    case 127u: goto L_0882C908;
    case 128u: goto L_0882C918;
    case 129u: goto L_0882C928;
    case 130u: goto L_0882C934;
    case 131u: goto L_0882C940;
    case 132u: goto L_0882C954;
    case 133u: goto L_0882C964;
    case 134u: goto L_0882C974;
    case 135u: goto L_0882C984;
    case 136u: goto L_0882C99C;
    case 137u: goto L_0882C9AC;
    case 138u: goto L_0882C9BC;
    case 139u: goto L_0882C9C4;
    case 140u: goto L_0882C9D4;
    case 141u: goto L_0882C9E4;
    case 142u: goto L_0882C9F0;
    case 143u: goto L_0882CA04;
    case 144u: goto L_0882CA1C;
    case 145u: goto L_0882CA24;
    case 146u: goto L_0882CA3C;
    case 147u: goto L_0882CA4C;
    case 148u: goto L_0882CA54;
    case 149u: goto L_0882CA58;
    case 150u: goto L_0882CA68;
    case 151u: goto L_0882CA88;
    case 152u: goto L_0882CAA0;
    case 153u: goto L_0882CAAC;
    case 154u: goto L_0882CAB8;
    case 155u: goto L_0882CAC4;
    case 156u: goto L_0882CAD4;
    case 157u: goto L_0882CAE0;
    case 158u: goto L_0882CAEC;
    case 159u: goto L_0882CAF8;
    case 160u: goto L_0882CB08;
    case 161u: goto L_0882CB14;
    case 162u: goto L_0882CB20;
    case 163u: goto L_0882CB2C;
    case 164u: goto L_0882CB3C;
    case 165u: goto L_0882CB48;
    case 166u: goto L_0882CB54;
    case 167u: goto L_0882CB60;
    case 168u: goto L_0882CB70;
    case 169u: goto L_0882CB80;
    case 170u: goto L_0882CBB8;
    case 171u: goto L_0882CBE4;
    case 172u: goto L_0882CBEC;
    case 173u: goto L_0882CBFC;
    case 174u: goto L_0882CC08;
    case 175u: goto L_0882CC14;
    case 176u: goto L_0882CC1C;
    case 177u: goto L_0882CC40;
    case 178u: goto L_0882CC50;
    case 179u: goto L_0882CC5C;
    case 180u: goto L_0882CC6C;
    case 181u: goto L_0882CC78;
    case 182u: goto L_0882CCB8;
    case 183u: goto L_0882CCC0;
    case 184u: goto L_0882CCD4;
    case 185u: goto L_0882CCD8;
    case 186u: goto L_0882CCE4;
    case 187u: goto L_0882CCF0;
    case 188u: goto L_0882CCF4;
    case 189u: goto L_0882CCF8;
    case 190u: goto L_0882CD04;
    case 191u: goto L_0882CD0C;
    case 192u: goto L_0882CD30;
    case 193u: goto L_0882CD40;
    case 194u: goto L_0882CD4C;
    case 195u: goto L_0882CD5C;
    case 196u: goto L_0882CD68;
    case 197u: goto L_0882CDA8;
    case 198u: goto L_0882CDB0;
    case 199u: goto L_0882CDC4;
    case 200u: goto L_0882CDC8;
    case 201u: goto L_0882CDD4;
    case 202u: goto L_0882CDE0;
    case 203u: goto L_0882CDE4;
    case 204u: goto L_0882CDE8;
    case 205u: goto L_0882CDF4;
    case 206u: goto L_0882CDFC;
    case 207u: goto L_0882CE20;
    case 208u: goto L_0882CE30;
    case 209u: goto L_0882CE3C;
    case 210u: goto L_0882CE4C;
    case 211u: goto L_0882CE58;
    case 212u: goto L_0882CE98;
    case 213u: goto L_0882CEA0;
    case 214u: goto L_0882CEB4;
    case 215u: goto L_0882CEB8;
    case 216u: goto L_0882CEC4;
    case 217u: goto L_0882CED0;
    case 218u: goto L_0882CED4;
    case 219u: goto L_0882CED8;
    case 220u: goto L_0882CEE4;
    case 221u: goto L_0882CEEC;
    case 222u: goto L_0882CF10;
    case 223u: goto L_0882CF20;
    case 224u: goto L_0882CF34;
    case 225u: goto L_0882CF48;
    case 226u: goto L_0882CF54;
    case 227u: goto L_0882CF58;
    case 228u: goto L_0882CF5C;
    case 229u: goto L_0882CF68;
    case 230u: goto L_0882CF98;
    case 231u: goto L_0882CFB4;
    case 232u: goto L_0882CFC0;
    case 233u: goto L_0882CFCC;
    case 234u: goto L_0882CFD8;
    case 235u: goto L_0882CFE0;
    case 236u: goto L_0882CFE8;
    case 237u: goto L_0882D004;
    case 238u: goto L_0882D020;
    case 239u: goto L_0882D02C;
    case 240u: goto L_0882D034;
    case 241u: goto L_0882D044;
    case 242u: goto L_0882D060;
    case 243u: goto L_0882D06C;
    case 244u: goto L_0882D074;
    case 245u: goto L_0882D098;
    case 246u: goto L_0882D0B8;
    case 247u: goto L_0882D0C4;
    case 248u: goto L_0882D0D0;
    case 249u: goto L_0882D0E8;
    case 250u: goto L_0882D0F0;
    case 251u: goto L_0882D10C;
    case 252u: goto L_0882D118;
    case 253u: goto L_0882D120;
    case 254u: goto L_0882D148;
    case 255u: goto L_0882D164;
    case 256u: goto L_0882D170;
    case 257u: goto L_0882D17C;
    case 258u: goto L_0882D1A4;
    case 259u: goto L_0882D1B0;
    case 260u: goto L_0882D1B4;
    case 261u: goto L_0882D1BC;
    case 262u: goto L_0882D1C8;
    case 263u: goto L_0882D1CC;
    case 264u: goto L_0882D1D8;
    case 265u: goto L_0882D1DC;
    case 266u: goto L_0882D1E8;
    case 267u: goto L_0882D1F4;
    case 268u: goto L_0882D1FC;
    case 269u: goto L_0882D204;
    case 270u: goto L_0882D210;
    case 271u: goto L_0882D218;
    case 272u: goto L_0882D21C;
    case 273u: goto L_0882D220;
    case 274u: goto L_0882D234;
    case 275u: goto L_0882D240;
    case 276u: goto L_0882D248;
    case 277u: goto L_0882D258;
    case 278u: goto L_0882D25C;
    case 279u: goto L_0882D270;
    case 280u: goto L_0882D29C;
    case 281u: goto L_0882D2A8;
    case 282u: goto L_0882D2C4;
    case 283u: goto L_0882D2E0;
    case 284u: goto L_0882D34C;
    case 285u: goto L_0882D39C;
    case 286u: goto L_0882D3AC;
    case 287u: goto L_0882D3BC;
    case 288u: goto L_0882D3CC;
    case 289u: goto L_0882D3D8;
    case 290u: goto L_0882D3E0;
    case 291u: goto L_0882D3F0;
    case 292u: goto L_0882D404;
    case 293u: goto L_0882D410;
    case 294u: goto L_0882D420;
    case 295u: goto L_0882D434;
    case 296u: goto L_0882D44C;
    case 297u: goto L_0882D454;
    case 298u: goto L_0882D468;
    case 299u: goto L_0882D474;
    case 300u: goto L_0882D498;
    case 301u: goto L_0882D49C;
    case 302u: goto L_0882D4B0;
    case 303u: goto L_0882D4C0;
    case 304u: goto L_0882D4D0;
    case 305u: goto L_0882D4DC;
    case 306u: goto L_0882D4E8;
    case 307u: goto L_0882D4F4;
    case 308u: goto L_0882D500;
    case 309u: goto L_0882D514;
    case 310u: goto L_0882D534;
    case 311u: goto L_0882D53C;
    case 312u: goto L_0882D548;
    case 313u: goto L_0882D550;
    case 314u: goto L_0882D558;
    case 315u: goto L_0882D564;
    case 316u: goto L_0882D570;
    case 317u: goto L_0882D584;
    case 318u: goto L_0882D58C;
    case 319u: goto L_0882D590;
    case 320u: goto L_0882D59C;
    case 321u: goto L_0882D5A8;
    case 322u: goto L_0882D5BC;
    case 323u: goto L_0882D5C8;
    case 324u: goto L_0882D5D4;
    case 325u: goto L_0882D5E8;
    case 326u: goto L_0882D604;
    case 327u: goto L_0882D610;
    case 328u: goto L_0882D620;
    case 329u: goto L_0882D654;
    case 330u: goto L_0882D65C;
    case 331u: goto L_0882D6C4;
    case 332u: goto L_0882D6D8;
    case 333u: goto L_0882D6E0;
    case 334u: goto L_0882D6FC;
    case 335u: goto L_0882D710;
    case 336u: goto L_0882D720;
    case 337u: goto L_0882D724;
    case 338u: goto L_0882D730;
    case 339u: goto L_0882D740;
    case 340u: goto L_0882D74C;
    case 341u: goto L_0882D758;
    case 342u: goto L_0882D764;
    case 343u: goto L_0882D76C;
    case 344u: goto L_0882D778;
    case 345u: goto L_0882D77C;
    case 346u: goto L_0882D788;
    case 347u: goto L_0882D794;
    case 348u: goto L_0882D7A0;
    case 349u: goto L_0882D7AC;
    case 350u: goto L_0882D7B8;
    case 351u: goto L_0882D7C4;
    case 352u: goto L_0882D7D4;
    case 353u: goto L_0882D7E0;
    case 354u: goto L_0882D7E8;
    case 355u: goto L_0882D7F4;
    case 356u: goto L_0882D800;
    case 357u: goto L_0882D80C;
    case 358u: goto L_0882D818;
    case 359u: goto L_0882D824;
    case 360u: goto L_0882D830;
    case 361u: goto L_0882D834;
    case 362u: goto L_0882D840;
    case 363u: goto L_0882D84C;
    case 364u: goto L_0882D854;
    case 365u: goto L_0882D85C;
    case 366u: goto L_0882D86C;
    case 367u: goto L_0882D878;
    case 368u: goto L_0882D884;
    case 369u: goto L_0882D890;
    case 370u: goto L_0882D89C;
    case 371u: goto L_0882D8A8;
    case 372u: goto L_0882D8B4;
    case 373u: goto L_0882D8C0;
    case 374u: goto L_0882D8CC;
    case 375u: goto L_0882D8D8;
    case 376u: goto L_0882D8DC;
    case 377u: goto L_0882D8EC;
    case 378u: goto L_0882D908;
    case 379u: goto L_0882D90C;
    case 380u: goto L_0882D948;
    case 381u: goto L_0882D960;
    case 382u: goto L_0882D980;
    case 383u: goto L_0882D9A0;
    case 384u: goto L_0882D9B8;
    case 385u: goto L_0882D9C0;
    case 386u: goto L_0882D9C8;
    case 387u: goto L_0882D9DC;
    case 388u: goto L_0882D9E8;
    case 389u: goto L_0882D9FC;
    case 390u: goto L_0882DA44;
    case 391u: goto L_0882DA4C;
    case 392u: goto L_0882DA54;
    case 393u: goto L_0882DA64;
    case 394u: goto L_0882DA78;
    case 395u: goto L_0882DA8C;
    case 396u: goto L_0882DAA0;
    case 397u: goto L_0882DAB4;
    case 398u: goto L_0882DAC8;
    case 399u: goto L_0882DADC;
    case 400u: goto L_0882DAF0;
    case 401u: goto L_0882DB04;
    case 402u: goto L_0882DB1C;
    case 403u: goto L_0882DB34;
    case 404u: goto L_0882DB44;
    case 405u: goto L_0882DB58;
    case 406u: goto L_0882DB70;
    case 407u: goto L_0882DB88;
    case 408u: goto L_0882DB98;
    case 409u: goto L_0882DBAC;
    case 410u: goto L_0882DBC4;
    case 411u: goto L_0882DBDC;
    case 412u: goto L_0882DBEC;
    case 413u: goto L_0882DC00;
    case 414u: goto L_0882DC18;
    case 415u: goto L_0882DC30;
    case 416u: goto L_0882DC40;
    case 417u: goto L_0882DC54;
    case 418u: goto L_0882DC6C;
    case 419u: goto L_0882DC84;
    case 420u: goto L_0882DC94;
    case 421u: goto L_0882DCA8;
    case 422u: goto L_0882DCC0;
    case 423u: goto L_0882DCD8;
    case 424u: goto L_0882DCE8;
    case 425u: goto L_0882DCFC;
    case 426u: goto L_0882DD14;
    case 427u: goto L_0882DD2C;
    case 428u: goto L_0882DD3C;
    case 429u: goto L_0882DD50;
    case 430u: goto L_0882DD68;
    case 431u: goto L_0882DD80;
    case 432u: goto L_0882DD90;
    case 433u: goto L_0882DDA0;
    case 434u: goto L_0882DDCC;
    case 435u: goto L_0882DE14;
    case 436u: goto L_0882DE1C;
    case 437u: goto L_0882DE24;
    case 438u: goto L_0882DE58;
    case 439u: goto L_0882DE70;
    case 440u: goto L_0882DE88;
    case 441u: goto L_0882DE98;
    case 442u: goto L_0882DEA8;
    case 443u: goto L_0882DEC0;
    case 444u: goto L_0882DED8;
    case 445u: goto L_0882DEE8;
    case 446u: goto L_0882DEF8;
    case 447u: goto L_0882DF10;
    case 448u: goto L_0882DF28;
    case 449u: goto L_0882DF38;
    case 450u: goto L_0882DF48;
    case 451u: goto L_0882DF60;
    case 452u: goto L_0882DF78;
    case 453u: goto L_0882DF88;
    case 454u: goto L_0882DF98;
    case 455u: goto L_0882DFB0;
    case 456u: goto L_0882DFC8;
    case 457u: goto L_0882DFD8;
    case 458u: goto L_0882DFE8;
    case 459u: goto L_0882E000;
    case 460u: goto L_0882E018;
    case 461u: goto L_0882E028;
    case 462u: goto L_0882E038;
    case 463u: goto L_0882E050;
    case 464u: goto L_0882E068;
    case 465u: goto L_0882E078;
    case 466u: goto L_0882E088;
    case 467u: goto L_0882E0A0;
    case 468u: goto L_0882E0B8;
    case 469u: goto L_0882E0C8;
    case 470u: goto L_0882E0D8;
    case 471u: goto L_0882E108;
    case 472u: goto L_0882E130;
    case 473u: goto L_0882E138;
    case 474u: goto L_0882E140;
    case 475u: goto L_0882E150;
    case 476u: goto L_0882E164;
    case 477u: goto L_0882E17C;
    case 478u: goto L_0882E194;
    case 479u: goto L_0882E1A4;
    case 480u: goto L_0882E1B4;
    case 481u: goto L_0882E1D0;
    case 482u: goto L_0882E1F8;
    case 483u: goto L_0882E200;
    case 484u: goto L_0882E208;
    case 485u: goto L_0882E214;
    case 486u: goto L_0882E22C;
    case 487u: goto L_0882E244;
    case 488u: goto L_0882E254;
    case 489u: goto L_0882E268;
    case 490u: goto L_0882E288;
    case 491u: goto L_0882E290;
    case 492u: goto L_0882E298;
    case 493u: goto L_0882E2A0;
    case 494u: goto L_0882E2B0;
    case 495u: goto L_0882E2B8;
    case 496u: goto L_0882E2D0;
    case 497u: goto L_0882E2D8;
    case 498u: goto L_0882E2E0;
    case 499u: goto L_0882E310;
    case 500u: goto L_0882E320;
    case 501u: goto L_0882E32C;
    case 502u: goto L_0882E338;
    case 503u: goto L_0882E340;
    case 504u: goto L_0882E350;
    case 505u: goto L_0882E35C;
    case 506u: goto L_0882E398;
    case 507u: goto L_0882E3A8;
    case 508u: goto L_0882E3B4;
    case 509u: goto L_0882E3CC;
    case 510u: goto L_0882E3E0;
    case 511u: goto L_0882E3E8;
    case 512u: goto L_0882E3F0;
    case 513u: goto L_0882E3F8;
    case 514u: goto L_0882E410;
    case 515u: goto L_0882E418;
    case 516u: goto L_0882E46C;
    case 517u: goto L_0882E474;
    case 518u: goto L_0882E47C;
    case 519u: goto L_0882E488;
    case 520u: goto L_0882E49C;
    case 521u: goto L_0882E4B4;
    case 522u: goto L_0882E4D0;
    case 523u: goto L_0882E4E4;
    case 524u: goto L_0882E4FC;
    case 525u: goto L_0882E510;
    case 526u: goto L_0882E52C;
    case 527u: goto L_0882E544;
    case 528u: goto L_0882E558;
    case 529u: goto L_0882E580;
    case 530u: goto L_0882E584;
    case 531u: goto L_0882E590;
    case 532u: goto L_0882E5A8;
    case 533u: goto L_0882E5DC;
    case 534u: goto L_0882E5E4;
    case 535u: goto L_0882E5EC;
    case 536u: goto L_0882E5F4;
    case 537u: goto L_0882E614;
    case 538u: goto L_0882E61C;
    case 539u: goto L_0882E624;
    case 540u: goto L_0882E62C;
    case 541u: goto L_0882E634;
    case 542u: goto L_0882E64C;
    case 543u: goto L_0882E654;
    case 544u: goto L_0882E65C;
    case 545u: goto L_0882E664;
    case 546u: goto L_0882E66C;
    case 547u: goto L_0882E680;
    case 548u: goto L_0882E688;
    case 549u: goto L_0882E6A0;
    case 550u: goto L_0882E6A8;
    case 551u: goto L_0882E6B0;
    case 552u: goto L_0882E6C4;
    case 553u: goto L_0882E6D0;
    case 554u: goto L_0882E6E4;
    case 555u: goto L_0882E6EC;
    case 556u: goto L_0882E6F4;
    case 557u: goto L_0882E6FC;
    case 558u: goto L_0882E70C;
    case 559u: goto L_0882E714;
    case 560u: goto L_0882E750;
    case 561u: goto L_0882E758;
    case 562u: goto L_0882E760;
    case 563u: goto L_0882E768;
    case 564u: goto L_0882E774;
    case 565u: goto L_0882E78C;
    case 566u: goto L_0882E7A0;
    case 567u: goto L_0882E7D8;
    case 568u: goto L_0882E7E4;
    case 569u: goto L_0882E7F8;
    case 570u: goto L_0882E80C;
    case 571u: goto L_0882E820;
    case 572u: goto L_0882E834;
    case 573u: goto L_0882E848;
    case 574u: goto L_0882E85C;
    case 575u: goto L_0882E870;
    case 576u: goto L_0882E8DC;
    case 577u: goto L_0882E910;
    case 578u: goto L_0882E954;
    case 579u: goto L_0882E95C;
    case 580u: goto L_0882E964;
    case 581u: goto L_0882E96C;
    case 582u: goto L_0882E984;
    case 583u: goto L_0882E990;
    case 584u: goto L_0882E9A8;
    case 585u: goto L_0882E9C0;
    case 586u: goto L_0882E9D0;
    case 587u: goto L_0882E9D8;
    case 588u: goto L_0882E9F4;
    case 589u: goto L_0882EA04;
    case 590u: goto L_0882EA10;
    case 591u: goto L_0882EA3C;
    case 592u: goto L_0882EA44;
    case 593u: goto L_0882EA58;
    case 594u: goto L_0882EA6C;
    case 595u: goto L_0882EA74;
    case 596u: goto L_0882EA88;
    case 597u: goto L_0882EA94;
    case 598u: goto L_0882EAA8;
    case 599u: goto L_0882EAB0;
    case 600u: goto L_0882EABC;
    case 601u: goto L_0882EAD0;
    case 602u: goto L_0882EAEC;
    case 603u: goto L_0882EB10;
    case 604u: goto L_0882EB28;
    case 605u: goto L_0882EB74;
    case 606u: goto L_0882EB78;
    case 607u: goto L_0882EB84;
    case 608u: goto L_0882EBB8;
    case 609u: goto L_0882EBD0;
    case 610u: goto L_0882EBD8;
    case 611u: goto L_0882EBE8;
    case 612u: goto L_0882EBF0;
    case 613u: goto L_0882EC04;
    case 614u: goto L_0882EC10;
    case 615u: goto L_0882EC24;
    case 616u: goto L_0882EC44;
    case 617u: goto L_0882EC4C;
    case 618u: goto L_0882EC54;
    case 619u: goto L_0882EC5C;
    case 620u: goto L_0882EC60;
    case 621u: goto L_0882EC68;
    case 622u: goto L_0882EC7C;
    case 623u: goto L_0882EC84;
    case 624u: goto L_0882EC88;
    case 625u: goto L_0882EC98;
    case 626u: goto L_0882ECB0;
    case 627u: goto L_0882ECFC;
    case 628u: goto L_0882ED18;
    case 629u: goto L_0882ED28;
    case 630u: goto L_0882ED38;
    case 631u: goto L_0882ED5C;
    case 632u: goto L_0882ED6C;
    case 633u: goto L_0882ED80;
    case 634u: goto L_0882ED94;
    case 635u: goto L_0882EDB0;
    case 636u: goto L_0882EDC4;
    case 637u: goto L_0882EDD0;
    case 638u: goto L_0882EE28;
    case 639u: goto L_0882EE68;
    case 640u: goto L_0882EE70;
    case 641u: goto L_0882EE78;
    case 642u: goto L_0882EE80;
    case 643u: goto L_0882EE9C;
    case 644u: goto L_0882EEC0;
    case 645u: goto L_0882EED0;
    case 646u: goto L_0882EEE0;
    case 647u: goto L_0882EF18;
    case 648u: goto L_0882EF28;
    case 649u: goto L_0882EF40;
    case 650u: goto L_0882EF54;
    case 651u: goto L_0882EF60;
    case 652u: goto L_0882EF7C;
    case 653u: goto L_0882EFAC;
    case 654u: goto L_0882EFC0;
    case 655u: goto L_0882EFD0;
    case 656u: goto L_0882EFE4;
    case 657u: goto L_0882EFEC;
    case 658u: goto L_0882EFFC;
    case 659u: goto L_0882F00C;
    case 660u: goto L_0882F014;
    case 661u: goto L_0882F024;
    case 662u: goto L_0882F030;
    case 663u: goto L_0882F040;
    case 664u: goto L_0882F054;
    case 665u: goto L_0882F060;
    case 666u: goto L_0882F068;
    case 667u: goto L_0882F078;
    case 668u: goto L_0882F094;
    case 669u: goto L_0882F0AC;
    case 670u: goto L_0882F0B8;
    case 671u: goto L_0882F0C0;
    case 672u: goto L_0882F0D0;
    case 673u: goto L_0882F0E4;
    case 674u: goto L_0882F0F4;
    case 675u: goto L_0882F100;
    case 676u: goto L_0882F110;
    case 677u: goto L_0882F11C;
    case 678u: goto L_0882F12C;
    case 679u: goto L_0882F134;
    case 680u: goto L_0882F13C;
    case 681u: goto L_0882F150;
    case 682u: goto L_0882F15C;
    case 683u: goto L_0882F164;
    case 684u: goto L_0882F17C;
    case 685u: goto L_0882F18C;
    case 686u: goto L_0882F198;
    case 687u: goto L_0882F1AC;
    case 688u: goto L_0882F1D0;
    case 689u: goto L_0882F1DC;
    case 690u: goto L_0882F1E4;
    case 691u: goto L_0882F1F0;
    case 692u: goto L_0882F214;
    case 693u: goto L_0882F220;
    case 694u: goto L_0882F23C;
    case 695u: goto L_0882F248;
    case 696u: goto L_0882F25C;
    case 697u: goto L_0882F298;
    case 698u: goto L_0882F2A4;
    case 699u: goto L_0882F2AC;
    case 700u: goto L_0882F2B8;
    case 701u: goto L_0882F2F4;
    case 702u: goto L_0882F300;
    case 703u: goto L_0882F318;
    case 704u: goto L_0882F334;
    case 705u: goto L_0882F340;
    case 706u: goto L_0882F350;
    case 707u: goto L_0882F35C;
    case 708u: goto L_0882F368;
    case 709u: goto L_0882F37C;
    case 710u: goto L_0882F388;
    case 711u: goto L_0882F390;
    case 712u: goto L_0882F39C;
    case 713u: goto L_0882F3B0;
    case 714u: goto L_0882F3BC;
    case 715u: goto L_0882F3D0;
    case 716u: goto L_0882F3DC;
    case 717u: goto L_0882F3F0;
    case 718u: goto L_0882F40C;
    case 719u: goto L_0882F418;
    case 720u: goto L_0882F420;
    case 721u: goto L_0882F42C;
    case 722u: goto L_0882F448;
    case 723u: goto L_0882F454;
    case 724u: goto L_0882F464;
    case 725u: goto L_0882F478;
    case 726u: goto L_0882F480;
    case 727u: goto L_0882F490;
    case 728u: goto L_0882F4A4;
    case 729u: goto L_0882F4B0;
    case 730u: goto L_0882F4BC;
    case 731u: goto L_0882F4D4;
    case 732u: goto L_0882F4E0;
    case 733u: goto L_0882F4E8;
    case 734u: goto L_0882F4F4;
    case 735u: goto L_0882F500;
    case 736u: goto L_0882F518;
    case 737u: goto L_0882F524;
    case 738u: goto L_0882F52C;
    case 739u: goto L_0882F538;
    case 740u: goto L_0882F544;
    case 741u: goto L_0882F550;
    case 742u: goto L_0882F578;
    case 743u: goto L_0882F584;
    case 744u: goto L_0882F58C;
    case 745u: goto L_0882F598;
    case 746u: goto L_0882F5A4;
    case 747u: goto L_0882F5CC;
    case 748u: goto L_0882F5D8;
    case 749u: goto L_0882F5E0;
    case 750u: goto L_0882F5F4;
    case 751u: goto L_0882F5FC;
    case 752u: goto L_0882F604;
    case 753u: goto L_0882F614;
    case 754u: goto L_0882F624;
    case 755u: goto L_0882F650;
    case 756u: goto L_0882F658;
    case 757u: goto L_0882F66C;
    case 758u: goto L_0882F684;
    case 759u: goto L_0882F698;
    case 760u: goto L_0882F6A0;
    case 761u: goto L_0882F6B0;
    case 762u: goto L_0882F6C4;
    case 763u: goto L_0882F6CC;
    case 764u: goto L_0882F6DC;
    case 765u: goto L_0882F6F8;
    case 766u: goto L_0882F704;
    case 767u: goto L_0882F710;
    case 768u: goto L_0882F718;
    case 769u: goto L_0882F724;
    case 770u: goto L_0882F730;
    case 771u: goto L_0882F73C;
    case 772u: goto L_0882F754;
    case 773u: goto L_0882F768;
    case 774u: goto L_0882F77C;
    case 775u: goto L_0882F7C0;
    case 776u: goto L_0882F7C8;
    case 777u: goto L_0882F7F0;
    case 778u: goto L_0882F800;
    case 779u: goto L_0882F80C;
    case 780u: goto L_0882F820;
    case 781u: goto L_0882F830;
    case 782u: goto L_0882F840;
    case 783u: goto L_0882F850;
    case 784u: goto L_0882F864;
    case 785u: goto L_0882F874;
    case 786u: goto L_0882F880;
    case 787u: goto L_0882F894;
    case 788u: goto L_0882F8A8;
    case 789u: goto L_0882F8BC;
    case 790u: goto L_0882F8D0;
    case 791u: goto L_0882F8E4;
    case 792u: goto L_0882F8F8;
    case 793u: goto L_0882F90C;
    case 794u: goto L_0882F974;
    case 795u: goto L_0882F980;
    case 796u: goto L_0882F98C;
    case 797u: goto L_0882F99C;
    case 798u: goto L_0882F9A8;
    case 799u: goto L_0882F9B4;
    case 800u: goto L_0882F9C4;
    case 801u: goto L_0882F9D4;
    case 802u: goto L_0882F9E0;
    case 803u: goto L_0882F9F4;
    case 804u: goto L_0882FA0C;
    case 805u: goto L_0882FA10;
    case 806u: goto L_0882FA34;
    case 807u: goto L_0882FA40;
    case 808u: goto L_0882FA74;
    case 809u: goto L_0882FA9C;
    case 810u: goto L_0882FAAC;
    case 811u: goto L_0882FAC0;
    case 812u: goto L_0882FAC8;
    case 813u: goto L_0882FAD8;
    case 814u: goto L_0882FAEC;
    case 815u: goto L_0882FAFC;
    case 816u: goto L_0882FB10;
    case 817u: goto L_0882FB20;
    case 818u: goto L_0882FB2C;
    case 819u: goto L_0882FB48;
    case 820u: goto L_0882FB58;
    case 821u: goto L_0882FB74;
    case 822u: goto L_0882FB84;
    case 823u: goto L_0882FB98;
    case 824u: goto L_0882FBA8;
    case 825u: goto L_0882FBBC;
    case 826u: goto L_0882FBCC;
    case 827u: goto L_0882FBE4;
    case 828u: goto L_0882FBF4;
    case 829u: goto L_0882FC1C;
    case 830u: goto L_0882FC2C;
    case 831u: goto L_0882FC4C;
    case 832u: goto L_0882FC5C;
    case 833u: goto L_0882FC74;
    case 834u: goto L_0882FC84;
    case 835u: goto L_0882FC94;
    case 836u: goto L_0882FCA0;
    case 837u: goto L_0882FCB0;
    case 838u: goto L_0882FCBC;
    case 839u: goto L_0882FCD4;
    case 840u: goto L_0882FCD8;
    case 841u: goto L_0882FCE8;
    case 842u: goto L_0882FCF4;
    case 843u: goto L_0882FD0C;
    case 844u: goto L_0882FD20;
    case 845u: goto L_0882FD38;
    case 846u: goto L_0882FD40;
    case 847u: goto L_0882FD58;
    case 848u: goto L_0882FD70;
    case 849u: goto L_0882FD7C;
    case 850u: goto L_0882FD94;
    case 851u: goto L_0882FDA4;
    case 852u: goto L_0882FDA8;
    case 853u: goto L_0882FDB8;
    case 854u: goto L_0882FDC4;
    case 855u: goto L_0882FDD0;
    case 856u: goto L_0882FDE0;
    case 857u: goto L_0882FDEC;
    case 858u: goto L_0882FDF8;
    case 859u: goto L_0882FE08;
    case 860u: goto L_0882FE14;
    case 861u: goto L_0882FE24;
    case 862u: goto L_0882FE30;
    case 863u: goto L_0882FE44;
    case 864u: goto L_0882FE5C;
    case 865u: goto L_0882FE60;
    case 866u: goto L_0882FE84;
    case 867u: goto L_0882FEA4;
    case 868u: goto L_0882FED4;
    case 869u: goto L_0882FEE4;
    case 870u: goto L_0882FEEC;
    case 871u: goto L_0882FEFC;
    case 872u: goto L_0882FF0C;
    case 873u: goto L_0882FF1C;
    case 874u: goto L_0882FF28;
    case 875u: goto L_0882FF40;
    case 876u: goto L_0882FF54;
    case 877u: goto L_0882FF6C;
    case 878u: goto L_0882FF74;
    case 879u: goto L_0882FF8C;
    case 880u: goto L_0882FFA4;
    case 881u: goto L_0882FFB0;
    case 882u: goto L_0882FFC8;
    case 883u: goto L_0882FFD8;
    case 884u: goto L_0882FFDC;
    case 885u: goto L_0882FFEC;
    case 886u: goto L_0882FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882C000:
    ctx.set_gpr(22, ctx.gpr[18] & 255u);
    ctx.set_gpr(5, ctx.gpr[22] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882C014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C014u) goto L_0882C014;
    return;
L_0882C014:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C0A4;
      }
      goto L_0882C024;
    }
L_0882C024:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C040;
      }
      goto L_0882C03C;
    }
L_0882C03C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882C040;
L_0882C040:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C058;
      }
      goto L_0882C04C;
    }
L_0882C04C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C03C;
      }
      goto L_0882C058;
    }
L_0882C058:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C0A0;
      }
      goto L_0882C064;
    }
L_0882C064:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7460));
    ctx.set_gpr(31, 0x0882C078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C078u) goto L_0882C078;
    return;
L_0882C078:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882C088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C088u) goto L_0882C088;
    return;
L_0882C088:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882C098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C098u) goto L_0882C098;
    return;
L_0882C098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C0FC;
      }
      goto L_0882C0A0;
    }
L_0882C0A0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0882C0A4;
L_0882C0A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C024;
      }
      goto L_0882C0B0;
    }
L_0882C0B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x0882C0DCu);
    // nop
    goto L_0882E418;
L_0882C0DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882C0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C0ECu) goto L_0882C0EC;
    return;
L_0882C0EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882C0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C0FCu) goto L_0882C0FC;
    return;
L_0882C0FC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C130:
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C190;
      }
      goto L_0882C178;
    }
L_0882C178:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7568));
    ctx.set_gpr(31, 0x0882C188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882C188u) goto L_0882C188;
    return;
L_0882C188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C204;
      }
      goto L_0882C190;
    }
L_0882C190:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1C4;
      }
      goto L_0882C19C;
    }
L_0882C19C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7596));
    ctx.set_gpr(31, 0x0882C1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C1ACu) goto L_0882C1AC;
    return;
L_0882C1AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C1BCu) goto L_0882C1BC;
    return;
L_0882C1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C1C4;
    }
L_0882C1C4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C204;
      }
      goto L_0882C1CC;
    }
L_0882C1CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 16384u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C204;
      }
      goto L_0882C1DC;
    }
L_0882C1DC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7620));
    ctx.set_gpr(31, 0x0882C1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C1ECu) goto L_0882C1EC;
    return;
L_0882C1EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C1FCu) goto L_0882C1FC;
    return;
L_0882C1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C204;
    }
L_0882C204:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882C214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C214u) goto L_0882C214;
    return;
L_0882C214:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C22Cu) goto L_0882C22C;
    return;
L_0882C22C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C23Cu) goto L_0882C23C;
    return;
L_0882C23C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C25C;
      }
      goto L_0882C244;
    }
L_0882C244:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882C254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C254u) goto L_0882C254;
    return;
L_0882C254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C25C;
    }
L_0882C25C:
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0882C274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 932u, 0x08817F38u>(ctx, &aot_mem) && ctx.pc == 0x0882C274u) goto L_0882C274;
    return;
L_0882C274:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C2A8;
      }
      goto L_0882C28C;
    }
L_0882C28C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7644));
    ctx.set_gpr(31, 0x0882C2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C2A0u) goto L_0882C2A0;
    return;
L_0882C2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C2A8;
    }
L_0882C2A8:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C2B8;
      }
      goto L_0882C2B4;
    }
L_0882C2B4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0882C2B8;
L_0882C2B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C2B4;
      }
      goto L_0882C2C4;
    }
L_0882C2C4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0882C2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 932u, 0x08817F38u>(ctx, &aot_mem) && ctx.pc == 0x0882C2D4u) goto L_0882C2D4;
    return;
L_0882C2D4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C308;
      }
      goto L_0882C2EC;
    }
L_0882C2EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7684));
    ctx.set_gpr(31, 0x0882C300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C300u) goto L_0882C300;
    return;
L_0882C300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C308;
    }
L_0882C308:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C358;
      }
      goto L_0882C318;
    }
L_0882C318:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882C330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 104u, 0x0883CC30u>(ctx, &aot_mem) && ctx.pc == 0x0882C330u) goto L_0882C330;
    return;
L_0882C330:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C358;
      }
      goto L_0882C338;
    }
L_0882C338:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882C350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 104u, 0x0883CC30u>(ctx, &aot_mem) && ctx.pc == 0x0882C350u) goto L_0882C350;
    return;
L_0882C350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C384;
      }
      goto L_0882C358;
    }
L_0882C358:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7724));
    ctx.set_gpr(31, 0x0882C36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C36Cu) goto L_0882C36C;
    return;
L_0882C36C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882C37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C37Cu) goto L_0882C37C;
    return;
L_0882C37C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C3B8;
      }
      goto L_0882C384;
    }
L_0882C384:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882C3A8u);
    // nop
    goto L_0882E5DC;
L_0882C3A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882C3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C3B8u) goto L_0882C3B8;
    return;
L_0882C3B8:
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
L_0882C3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C434;
      }
      goto L_0882C41C;
    }
L_0882C41C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7744));
    ctx.set_gpr(31, 0x0882C42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882C42Cu) goto L_0882C42C;
    return;
L_0882C42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C474;
      }
      goto L_0882C434;
    }
L_0882C434:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C474;
      }
      goto L_0882C43C;
    }
L_0882C43C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C474;
      }
      goto L_0882C44C;
    }
L_0882C44C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7768));
    ctx.set_gpr(31, 0x0882C45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C45Cu) goto L_0882C45C;
    return;
L_0882C45C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C46Cu) goto L_0882C46C;
    return;
L_0882C46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C538;
      }
      goto L_0882C474;
    }
L_0882C474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C48C;
      }
      goto L_0882C484;
    }
L_0882C484:
    ctx.set_gpr(2, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_0882C48C;
L_0882C48C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882C4C4;
      }
      goto L_0882C498;
    }
L_0882C498:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7792));
    ctx.set_gpr(31, 0x0882C4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C4ACu) goto L_0882C4AC;
    return;
L_0882C4AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C4BCu) goto L_0882C4BC;
    return;
L_0882C4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C538;
      }
      goto L_0882C4C4;
    }
L_0882C4C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882C4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C4D4u) goto L_0882C4D4;
    return;
L_0882C4D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882C4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C4E4u) goto L_0882C4E4;
    return;
L_0882C4E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C538;
      }
      goto L_0882C4EC;
    }
L_0882C4EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 237u, 0x08829298u>(ctx, &aot_mem) && ctx.pc == 0x0882C520u) goto L_0882C520;
    return;
L_0882C520:
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882C538u);
    // nop
    goto L_0882EBB8;
L_0882C538:
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
L_0882C554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C59C;
      }
      goto L_0882C58C;
    }
L_0882C58C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7820));
    ctx.set_gpr(31, 0x0882C59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882C59Cu) goto L_0882C59C;
    return;
L_0882C59C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C5B4;
      }
      goto L_0882C5AC;
    }
L_0882C5AC:
    ctx.set_gpr(2, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_0882C5B4;
L_0882C5B4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882C5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C5C4u) goto L_0882C5C4;
    return;
L_0882C5C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C5DCu) goto L_0882C5DC;
    return;
L_0882C5DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882C5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C5ECu) goto L_0882C5EC;
    return;
L_0882C5EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C60C;
      }
      goto L_0882C5F4;
    }
L_0882C5F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C604u) goto L_0882C604;
    return;
L_0882C604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C6A8;
      }
      goto L_0882C60C;
    }
L_0882C60C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C624;
      }
      goto L_0882C620;
    }
L_0882C620:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0882C624;
L_0882C624:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C620;
      }
      goto L_0882C630;
    }
L_0882C630:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882C63C;
      }
      goto L_0882C638;
    }
L_0882C638:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0882C63C;
L_0882C63C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882C64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C64Cu) goto L_0882C64C;
    return;
L_0882C64C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882C66Cu) goto L_0882C66C;
    return;
L_0882C66C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882C688u);
    // nop
    goto L_0882E910;
L_0882C688:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C698u) goto L_0882C698;
    return;
L_0882C698:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882C6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C6A8u) goto L_0882C6A8;
    return;
L_0882C6A8:
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
L_0882C6CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C718;
      }
      goto L_0882C708;
    }
L_0882C708:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7848));
    ctx.set_gpr(31, 0x0882C718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882C718u) goto L_0882C718;
    return;
L_0882C718:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C730;
      }
      goto L_0882C728;
    }
L_0882C728:
    ctx.set_gpr(2, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_0882C730;
L_0882C730:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882C740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C740u) goto L_0882C740;
    return;
L_0882C740:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C758u) goto L_0882C758;
    return;
L_0882C758:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882C768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C768u) goto L_0882C768;
    return;
L_0882C768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C788;
      }
      goto L_0882C770;
    }
L_0882C770:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C780u) goto L_0882C780;
    return;
L_0882C780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C86C;
      }
      goto L_0882C788;
    }
L_0882C788:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C7A0;
      }
      goto L_0882C79C;
    }
L_0882C79C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0882C7A0;
L_0882C7A0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C79C;
      }
      goto L_0882C7AC;
    }
L_0882C7AC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882C7D4;
      }
      goto L_0882C7B4;
    }
L_0882C7B4:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7876));
    ctx.set_gpr(31, 0x0882C7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882C7CCu) goto L_0882C7CC;
    return;
L_0882C7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C7E0;
      }
      goto L_0882C7D4;
    }
L_0882C7D4:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0882C7E0;
L_0882C7E0:
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0882C804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 270u, 0x088294D0u>(ctx, &aot_mem) && ctx.pc == 0x0882C804u) goto L_0882C804;
    return;
L_0882C804:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882C818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C818u) goto L_0882C818;
    return;
L_0882C818:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882C84Cu);
    // nop
    goto L_0882E910;
L_0882C84C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C85Cu) goto L_0882C85C;
    return;
L_0882C85C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882C86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882C86Cu) goto L_0882C86C;
    return;
L_0882C86C:
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
L_0882C894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C8F8;
      }
      goto L_0882C8CC;
    }
L_0882C8CC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0882C8E4u) goto L_0882C8E4;
    return;
L_0882C8E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C8F8;
      }
      goto L_0882C8EC;
    }
L_0882C8EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_0882C8F8;
L_0882C8F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x0882C908u);
    // nop
    goto L_0882CA88;
L_0882C908:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C954;
      }
      goto L_0882C918;
    }
L_0882C918:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x0882C928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 157u, 0x08820A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C928u) goto L_0882C928;
    return;
L_0882C928:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882C954;
      }
      goto L_0882C934;
    }
L_0882C934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C954;
      }
      goto L_0882C940;
    }
L_0882C940:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7900));
    ctx.set_gpr(31, 0x0882C954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 191u, 0x08820D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C954u) goto L_0882C954;
    return;
L_0882C954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 32768u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA54;
      }
      goto L_0882C964;
    }
L_0882C964:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x0882C974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C974u) goto L_0882C974;
    return;
L_0882C974:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C984u) goto L_0882C984;
    return;
L_0882C984:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882C99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C99Cu) goto L_0882C99C;
    return;
L_0882C99C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA24;
      }
      goto L_0882C9AC;
    }
L_0882C9AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0882C9BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C9BCu) goto L_0882C9BC;
    return;
L_0882C9BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882CA3C;
      }
      goto L_0882C9C4;
    }
L_0882C9C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA04;
      }
      goto L_0882C9D4;
    }
L_0882C9D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x0882C9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 157u, 0x08820A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C9E4u) goto L_0882C9E4;
    return;
L_0882C9E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882CA04;
      }
      goto L_0882C9F0;
    }
L_0882C9F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7900));
    ctx.set_gpr(31, 0x0882CA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 191u, 0x08820D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CA04u) goto L_0882CA04;
    return;
L_0882CA04:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882CA1Cu);
    // nop
    goto L_0882EE28;
L_0882CA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA3C;
      }
      goto L_0882CA24;
    }
L_0882CA24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882CA3Cu);
    // nop
    goto L_0882EE28;
L_0882CA3C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0882CA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882CA4Cu) goto L_0882CA4C;
    return;
L_0882CA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CA58;
      }
      goto L_0882CA54;
    }
L_0882CA54:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_0882CA58;
L_0882CA58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882CA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CA68u) goto L_0882CA68;
    return;
L_0882CA68:
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
L_0882CA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAA0;
    }
L_0882CAA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAAC;
    }
L_0882CAAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CAC4;
      }
      goto L_0882CAB8;
    }
L_0882CAB8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAC4;
    }
L_0882CAC4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAD4;
    }
L_0882CAD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAE0;
    }
L_0882CAE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CAF8;
      }
      goto L_0882CAEC;
    }
L_0882CAEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CAF8;
    }
L_0882CAF8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CB08;
    }
L_0882CB08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CB14;
    }
L_0882CB14:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB2C;
      }
      goto L_0882CB20;
    }
L_0882CB20:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CB2C;
    }
L_0882CB2C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CB3C;
    }
L_0882CB3C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB60;
      }
      goto L_0882CB48;
    }
L_0882CB48:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB70;
      }
      goto L_0882CB54;
    }
L_0882CB54:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB70;
      }
      goto L_0882CB60;
    }
L_0882CB60:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7924));
    ctx.set_gpr(31, 0x0882CB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 191u, 0x08820D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CB70u) goto L_0882CB70;
    return;
L_0882CB70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CB80:
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
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882CBEC;
      }
      goto L_0882CBB8;
    }
L_0882CBB8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(203)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, ctx.gpr[2] >> 3u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882CBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882CBE4u) goto L_0882CBE4;
    return;
L_0882CBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF68;
      }
      goto L_0882CBEC;
    }
L_0882CBEC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(203)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882CDFC;
      }
      goto L_0882CBFC;
    }
L_0882CBFC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882CD0C;
      }
      goto L_0882CC08;
    }
L_0882CC08:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0882CC1C;
      }
      goto L_0882CC14;
    }
L_0882CC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEEC;
      }
      goto L_0882CC1C;
    }
L_0882CC1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CC50;
      }
      goto L_0882CC40;
    }
L_0882CC40:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CC5C;
      }
      goto L_0882CC50;
    }
L_0882CC50:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    goto L_0882CC5C;
L_0882CC5C:
    ctx.set_gpr(6, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCF8;
      }
      goto L_0882CC6C;
    }
L_0882CC6C:
    ctx.set_gpr(12, ctx.gpr[7] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCB8;
      }
      goto L_0882CC78;
    }
L_0882CC78:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(14, ctx.gpr[12] & 1u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(13, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(32639));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[13] & 31u)));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, ctx.gpr[14] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_0882CCB8;
L_0882CCB8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882CCD4;
      }
      goto L_0882CCC0;
    }
L_0882CCC0:
    ctx.set_gpr(6, ctx.gpr[9] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCD8;
      }
      goto L_0882CCD4;
    }
L_0882CCD4:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    goto L_0882CCD8;
L_0882CCD8:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0882CCF0;
      }
      goto L_0882CCE4;
    }
L_0882CCE4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCF4;
      }
      goto L_0882CCF0;
    }
L_0882CCF0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_0882CCF4;
L_0882CCF4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0882CCF8;
L_0882CCF8:
    ctx.set_gpr(12, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CC6C;
      }
      goto L_0882CD04;
    }
L_0882CD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF68;
      }
      goto L_0882CD0C;
    }
L_0882CD0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CD40;
      }
      goto L_0882CD30;
    }
L_0882CD30:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CD4C;
      }
      goto L_0882CD40;
    }
L_0882CD40:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-2));
    goto L_0882CD4C;
L_0882CD4C:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDE8;
      }
      goto L_0882CD5C;
    }
L_0882CD5C:
    ctx.set_gpr(12, ctx.gpr[7] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDA8;
      }
      goto L_0882CD68;
    }
L_0882CD68:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(14, ctx.gpr[12] & 3u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(13, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(16191));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[13] & 31u)));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, ctx.gpr[14] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_0882CDA8;
L_0882CDA8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882CDC4;
      }
      goto L_0882CDB0;
    }
L_0882CDB0:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDC8;
      }
      goto L_0882CDC4;
    }
L_0882CDC4:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    goto L_0882CDC8;
L_0882CDC8:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0882CDE0;
      }
      goto L_0882CDD4;
    }
L_0882CDD4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDE4;
      }
      goto L_0882CDE0;
    }
L_0882CDE0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_0882CDE4;
L_0882CDE4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0882CDE8;
L_0882CDE8:
    ctx.set_gpr(12, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CD5C;
      }
      goto L_0882CDF4;
    }
L_0882CDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF68;
      }
      goto L_0882CDFC;
    }
L_0882CDFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE30;
      }
      goto L_0882CE20;
    }
L_0882CE20:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE3C;
      }
      goto L_0882CE30;
    }
L_0882CE30:
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-4));
    goto L_0882CE3C;
L_0882CE3C:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CED8;
      }
      goto L_0882CE4C;
    }
L_0882CE4C:
    ctx.set_gpr(12, ctx.gpr[7] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE98;
      }
      goto L_0882CE58;
    }
L_0882CE58:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(14, ctx.gpr[12] & 15u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3855));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[13] & 31u)));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, ctx.gpr[14] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(13, ctx.gpr[12] & 255u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_0882CE98;
L_0882CE98:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882CEB4;
      }
      goto L_0882CEA0;
    }
L_0882CEA0:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEB8;
      }
      goto L_0882CEB4;
    }
L_0882CEB4:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    goto L_0882CEB8;
L_0882CEB8:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0882CED0;
      }
      goto L_0882CEC4;
    }
L_0882CEC4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CED4;
      }
      goto L_0882CED0;
    }
L_0882CED0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_0882CED4;
L_0882CED4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0882CED8;
L_0882CED8:
    ctx.set_gpr(12, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CE4C;
      }
      goto L_0882CEE4;
    }
L_0882CEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF68;
      }
      goto L_0882CEEC;
    }
L_0882CEEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF5C;
      }
      goto L_0882CF10;
    }
L_0882CF10:
    ctx.set_gpr(22, ctx.gpr[16] & 255u);
    ctx.set_gpr(3, ctx.gpr[22] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF34;
      }
      goto L_0882CF20;
    }
L_0882CF20:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882CF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882CF34u) goto L_0882CF34;
    return;
L_0882CF34:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882CF54;
      }
      goto L_0882CF48;
    }
L_0882CF48:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF58;
      }
      goto L_0882CF54;
    }
L_0882CF54:
    ctx.set_gpr(16, (ctx.gpr[16] >> 1u) & 0x000000FFu);
    goto L_0882CF58;
L_0882CF58:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882CF5C;
L_0882CF5C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CF10;
      }
      goto L_0882CF68;
    }
L_0882CF68:
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
L_0882CF98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D120;
      }
      goto L_0882CFB4;
    }
L_0882CFB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D074;
      }
      goto L_0882CFC0;
    }
L_0882CFC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D034;
      }
      goto L_0882CFCC;
    }
L_0882CFCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882CFE8;
      }
      goto L_0882CFD8;
    }
L_0882CFD8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882CFE0;
    }
L_0882CFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D248;
      }
      goto L_0882CFE8;
    }
L_0882CFE8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D020;
      }
      goto L_0882D004;
    }
L_0882D004:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0882D020;
L_0882D020:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D004;
      }
      goto L_0882D02C;
    }
L_0882D02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882D034;
    }
L_0882D034:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D060;
      }
      goto L_0882D044;
    }
L_0882D044:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882D060;
L_0882D060:
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D044;
      }
      goto L_0882D06C;
    }
L_0882D06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882D074;
    }
L_0882D074:
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D0B8;
      }
      goto L_0882D098;
    }
L_0882D098:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0882D0B8;
L_0882D0B8:
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D098;
      }
      goto L_0882D0C4;
    }
L_0882D0C4:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D10C;
      }
      goto L_0882D0D0;
    }
L_0882D0D0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882D0F0;
      }
      goto L_0882D0E8;
    }
L_0882D0E8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0882D0F0;
L_0882D0F0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0882D10C;
L_0882D10C:
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D0D0;
      }
      goto L_0882D118;
    }
L_0882D118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882D120;
    }
L_0882D120:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[5] - ctx.gpr[8]);
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D164;
      }
      goto L_0882D148;
    }
L_0882D148:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    goto L_0882D164;
L_0882D164:
    ctx.set_gpr(5, ctx.gpr[14] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D148;
      }
      goto L_0882D170;
    }
L_0882D170:
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D234;
      }
      goto L_0882D17C;
    }
L_0882D17C:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[13] - ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882D1B0;
      }
      goto L_0882D1A4;
    }
L_0882D1A4:
    ctx.set_gpr(8, 0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D1B4;
      }
      goto L_0882D1B0;
    }
L_0882D1B0:
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    goto L_0882D1B4;
L_0882D1B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882D1C8;
      }
      goto L_0882D1BC;
    }
L_0882D1BC:
    ctx.set_gpr(6, 0u - ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D1CC;
      }
      goto L_0882D1C8;
    }
L_0882D1C8:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    goto L_0882D1CC;
L_0882D1CC:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882D1DC;
      }
      goto L_0882D1D8;
    }
L_0882D1D8:
    ctx.set_gpr(5, 0u - ctx.gpr[5]);
    goto L_0882D1DC;
L_0882D1DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D204;
      }
      goto L_0882D1E8;
    }
L_0882D1E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D1FC;
      }
      goto L_0882D1F4;
    }
L_0882D1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D204;
      }
      goto L_0882D1FC;
    }
L_0882D1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D220;
      }
      goto L_0882D204;
    }
L_0882D204:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D218;
      }
      goto L_0882D210;
    }
L_0882D210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D21C;
      }
      goto L_0882D218;
    }
L_0882D218:
    ctx.set_gpr(12, ctx.gpr[11] + 0u);
    goto L_0882D21C;
L_0882D21C:
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    goto L_0882D220;
L_0882D220:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    goto L_0882D234;
L_0882D234:
    ctx.set_gpr(5, ctx.gpr[14] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D17C;
      }
      goto L_0882D240;
    }
L_0882D240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882D248;
    }
L_0882D248:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7944));
    ctx.set_gpr(31, 0x0882D258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882D258u) goto L_0882D258;
    return;
L_0882D258:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0882D25C;
L_0882D25C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5D4;
      }
      goto L_0882D29C;
    }
L_0882D29C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D3AC;
      }
      goto L_0882D2A8;
    }
L_0882D2A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0882D2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 318u, 0x088213E8u>(ctx, &aot_mem) && ctx.pc == 0x0882D2C4u) goto L_0882D2C4;
    return;
L_0882D2C4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D39C;
      }
      goto L_0882D2E0;
    }
L_0882D2E0:
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3932));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3904));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D39C;
      }
      goto L_0882D34C;
    }
L_0882D34C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3988));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3960));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D2C4;
      }
      goto L_0882D39C;
    }
L_0882D39C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5D4;
      }
      goto L_0882D3AC;
    }
L_0882D3AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D590;
      }
      goto L_0882D3BC;
    }
L_0882D3BC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_0882D3CC;
L_0882D3CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4C0;
      }
      goto L_0882D3D8;
    }
L_0882D3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D468;
      }
      goto L_0882D3E0;
    }
L_0882D3E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D3F0u) goto L_0882D3F0;
    return;
L_0882D3F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882D404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 683u, 0x08822C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D404u) goto L_0882D404;
    return;
L_0882D404:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882D410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 235u, 0x08829238u>(ctx, &aot_mem) && ctx.pc == 0x0882D410u) goto L_0882D410;
    return;
L_0882D410:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882D420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 47u, 0x0882033Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D420u) goto L_0882D420;
    return;
L_0882D420:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882D434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882D434u) goto L_0882D434;
    return;
L_0882D434:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882D44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0882D44Cu) goto L_0882D44C;
    return;
L_0882D44C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D468;
      }
      goto L_0882D454;
    }
L_0882D454:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7980));
    ctx.set_gpr(31, 0x0882D468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D468u) goto L_0882D468;
    return;
L_0882D468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D3E0;
      }
      goto L_0882D474;
    }
L_0882D474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D49C;
      }
      goto L_0882D498;
    }
L_0882D498:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_0882D49C;
L_0882D49C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0882D4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x0882D4B0u) goto L_0882D4B0;
    return;
L_0882D4B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    goto L_0882D4C0;
L_0882D4C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882D4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 260u, 0x088395F8u>(ctx, &aot_mem) && ctx.pc == 0x0882D4D0u) goto L_0882D4D0;
    return;
L_0882D4D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D534;
      }
      goto L_0882D4DC;
    }
L_0882D4DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D500;
      }
      goto L_0882D4E8;
    }
L_0882D4E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D500;
      }
      goto L_0882D4F4;
    }
L_0882D4F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D514;
      }
      goto L_0882D500;
    }
L_0882D500:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8004));
    ctx.set_gpr(31, 0x0882D514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D514u) goto L_0882D514;
    return;
L_0882D514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] | 32u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D58C;
      }
      goto L_0882D534;
    }
L_0882D534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D564;
      }
      goto L_0882D53C;
    }
L_0882D53C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D550;
      }
      goto L_0882D548;
    }
L_0882D548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D558;
      }
      goto L_0882D550;
    }
L_0882D550:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8028));
    goto L_0882D558;
L_0882D558:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D564u) goto L_0882D564;
    return;
L_0882D564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D3CC;
      }
      goto L_0882D570;
    }
L_0882D570:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8004));
    ctx.set_gpr(31, 0x0882D584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D584u) goto L_0882D584;
    return;
L_0882D584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D3CC;
      }
      goto L_0882D58C;
    }
L_0882D58C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_0882D590;
L_0882D590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5A8;
      }
      goto L_0882D59C;
    }
L_0882D59C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D5BC;
      }
      goto L_0882D5A8;
    }
L_0882D5A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8048));
    ctx.set_gpr(31, 0x0882D5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D5BCu) goto L_0882D5BC;
    return;
L_0882D5BC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0882D5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 211u, 0x08839310u>(ctx, &aot_mem) && ctx.pc == 0x0882D5C8u) goto L_0882D5C8;
    return;
L_0882D5C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_0882D5D4;
L_0882D5D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D5E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x0882D604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 703u, 0x08822D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D604u) goto L_0882D604;
    return;
L_0882D604:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6E0;
      }
      goto L_0882D610;
    }
L_0882D610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D654;
      }
      goto L_0882D620;
    }
L_0882D620:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3988)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3960)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D65C;
      }
      goto L_0882D654;
    }
L_0882D654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    goto L_0882D65C;
L_0882D65C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3932));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3904));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882D6FC;
      }
      goto L_0882D6C4;
    }
L_0882D6C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(31, 0x0882D6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882D6D8u) goto L_0882D6D8;
    return;
L_0882D6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6FC;
      }
      goto L_0882D6E0;
    }
L_0882D6E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    goto L_0882D6FC;
L_0882D6FC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D724;
      }
      goto L_0882D710;
    }
L_0882D710:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D724;
      }
      goto L_0882D720;
    }
L_0882D720:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0882D724;
L_0882D724:
    ctx.set_gpr(7, ctx.gpr[2] & 4096u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D730;
    }
L_0882D730:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882D764;
      }
      goto L_0882D740;
    }
L_0882D740:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D758;
      }
      goto L_0882D74C;
    }
L_0882D74C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D758;
    }
L_0882D758:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D764;
    }
L_0882D764:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D794;
      }
      goto L_0882D76C;
    }
L_0882D76C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D77C;
      }
      goto L_0882D778;
    }
L_0882D778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0882D77C;
L_0882D77C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D788;
    }
L_0882D788:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D794;
    }
L_0882D794:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D7A0;
    }
L_0882D7A0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D7B8;
      }
      goto L_0882D7AC;
    }
L_0882D7AC:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    goto L_0882D7B8;
L_0882D7B8:
    ctx.set_gpr(6, ctx.gpr[2] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D7C4;
    }
L_0882D7C4:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882D7E0;
      }
      goto L_0882D7D4;
    }
L_0882D7D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D7E0;
    }
L_0882D7E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D80C;
      }
      goto L_0882D7E8;
    }
L_0882D7E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D800;
      }
      goto L_0882D7F4;
    }
L_0882D7F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D800;
    }
L_0882D800:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D80C;
    }
L_0882D80C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D818;
    }
L_0882D818:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D830;
      }
      goto L_0882D824;
    }
L_0882D824:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D834;
      }
      goto L_0882D830;
    }
L_0882D830:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    goto L_0882D834;
L_0882D834:
    ctx.set_gpr(4, ctx.gpr[2] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D840;
    }
L_0882D840:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D854;
      }
      goto L_0882D84C;
    }
L_0882D84C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D86C;
      }
      goto L_0882D854;
    }
L_0882D854:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D86C;
      }
      goto L_0882D85C;
    }
L_0882D85C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882D890;
      }
      goto L_0882D86C;
    }
L_0882D86C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D884;
      }
      goto L_0882D878;
    }
L_0882D878:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D884;
    }
L_0882D884:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D890;
    }
L_0882D890:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8C0;
      }
      goto L_0882D89C;
    }
L_0882D89C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D8B4;
      }
      goto L_0882D8A8;
    }
L_0882D8A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D8B4;
    }
L_0882D8B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D8C0;
    }
L_0882D8C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882D8D8;
      }
      goto L_0882D8CC;
    }
L_0882D8CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D8DC;
      }
      goto L_0882D8D8;
    }
L_0882D8D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(48));
    goto L_0882D8DC;
L_0882D8DC:
    ctx.set_gpr(4, 16u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D90C;
      }
      goto L_0882D8EC;
    }
L_0882D8EC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D90C;
      }
      goto L_0882D908;
    }
L_0882D908:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0882D90C;
L_0882D90C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D948u) goto L_0882D948;
    return;
L_0882D948:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882D960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D960u) goto L_0882D960;
    return;
L_0882D960:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0882D980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 318u, 0x088213E8u>(ctx, &aot_mem) && ctx.pc == 0x0882D980u) goto L_0882D980;
    return;
L_0882D980:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D9A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9C0;
      }
      goto L_0882D9B8;
    }
L_0882D9B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9C8;
      }
      goto L_0882D9C0;
    }
L_0882D9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9E8;
      }
      goto L_0882D9C8;
    }
L_0882D9C8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0882D9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882D9DCu) goto L_0882D9DC;
    return;
L_0882D9DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882D9E8;
L_0882D9E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D9FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA4C;
      }
      goto L_0882DA44;
    }
L_0882DA44:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA54;
      }
      goto L_0882DA4C;
    }
L_0882DA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DDA0;
      }
      goto L_0882DA54;
    }
L_0882DA54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882DA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DA64u) goto L_0882DA64;
    return;
L_0882DA64:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882DA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DA78u) goto L_0882DA78;
    return;
L_0882DA78:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0882DA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DA8Cu) goto L_0882DA8C;
    return;
L_0882DA8C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0882DAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DAA0u) goto L_0882DAA0;
    return;
L_0882DAA0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0882DAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DAB4u) goto L_0882DAB4;
    return;
L_0882DAB4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0882DAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DAC8u) goto L_0882DAC8;
    return;
L_0882DAC8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0882DADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DADCu) goto L_0882DADC;
    return;
L_0882DADC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x0882DAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DAF0u) goto L_0882DAF0;
    return;
L_0882DAF0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB04u) goto L_0882DB04;
    return;
L_0882DB04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882DB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB1Cu) goto L_0882DB1C;
    return;
L_0882DB1C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB34u) goto L_0882DB34;
    return;
L_0882DB34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DB44u) goto L_0882DB44;
    return;
L_0882DB44:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB58u) goto L_0882DB58;
    return;
L_0882DB58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882DB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB70u) goto L_0882DB70;
    return;
L_0882DB70:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB88u) goto L_0882DB88;
    return;
L_0882DB88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DB98u) goto L_0882DB98;
    return;
L_0882DB98:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DBACu) goto L_0882DBAC;
    return;
L_0882DBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0882DBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DBC4u) goto L_0882DBC4;
    return;
L_0882DBC4:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DBDCu) goto L_0882DBDC;
    return;
L_0882DBDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DBECu) goto L_0882DBEC;
    return;
L_0882DBEC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC00u) goto L_0882DC00;
    return;
L_0882DC00:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC18u) goto L_0882DC18;
    return;
L_0882DC18:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DC30u) goto L_0882DC30;
    return;
L_0882DC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DC40u) goto L_0882DC40;
    return;
L_0882DC40:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC54u) goto L_0882DC54;
    return;
L_0882DC54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC6Cu) goto L_0882DC6C;
    return;
L_0882DC6C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DC84u) goto L_0882DC84;
    return;
L_0882DC84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DC94u) goto L_0882DC94;
    return;
L_0882DC94:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DCA8u) goto L_0882DCA8;
    return;
L_0882DCA8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DCC0u) goto L_0882DCC0;
    return;
L_0882DCC0:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DCD8u) goto L_0882DCD8;
    return;
L_0882DCD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DCE8u) goto L_0882DCE8;
    return;
L_0882DCE8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DCFCu) goto L_0882DCFC;
    return;
L_0882DCFC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD14u) goto L_0882DD14;
    return;
L_0882DD14:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DD2Cu) goto L_0882DD2C;
    return;
L_0882DD2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DD3Cu) goto L_0882DD3C;
    return;
L_0882DD3C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD50u) goto L_0882DD50;
    return;
L_0882DD50:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD68u) goto L_0882DD68;
    return;
L_0882DD68:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882DD80u) goto L_0882DD80;
    return;
L_0882DD80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882DD90u) goto L_0882DD90;
    return;
L_0882DD90:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882DDA0;
L_0882DDA0:
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
L_0882DDCC:
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DE1C;
      }
      goto L_0882DE14;
    }
L_0882DE14:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DE24;
      }
      goto L_0882DE1C;
    }
L_0882DE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E0D8;
      }
      goto L_0882DE24;
    }
L_0882DE24:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(240), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0882DE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DE58u) goto L_0882DE58;
    return;
L_0882DE58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DE70u) goto L_0882DE70;
    return;
L_0882DE70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DE88u) goto L_0882DE88;
    return;
L_0882DE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DE98u) goto L_0882DE98;
    return;
L_0882DE98:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882DEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DEA8u) goto L_0882DEA8;
    return;
L_0882DEA8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DEC0u) goto L_0882DEC0;
    return;
L_0882DEC0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DED8u) goto L_0882DED8;
    return;
L_0882DED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DEE8u) goto L_0882DEE8;
    return;
L_0882DEE8:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882DEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DEF8u) goto L_0882DEF8;
    return;
L_0882DEF8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF10u) goto L_0882DF10;
    return;
L_0882DF10:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DF28u) goto L_0882DF28;
    return;
L_0882DF28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DF38u) goto L_0882DF38;
    return;
L_0882DF38:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882DF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF48u) goto L_0882DF48;
    return;
L_0882DF48:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF60u) goto L_0882DF60;
    return;
L_0882DF60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DF78u) goto L_0882DF78;
    return;
L_0882DF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DF88u) goto L_0882DF88;
    return;
L_0882DF88:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882DF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF98u) goto L_0882DF98;
    return;
L_0882DF98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DFB0u) goto L_0882DFB0;
    return;
L_0882DFB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882DFC8u) goto L_0882DFC8;
    return;
L_0882DFC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882DFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882DFD8u) goto L_0882DFD8;
    return;
L_0882DFD8:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882DFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DFE8u) goto L_0882DFE8;
    return;
L_0882DFE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882E000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E000u) goto L_0882E000;
    return;
L_0882E000:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882E018u) goto L_0882E018;
    return;
L_0882E018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882E028u) goto L_0882E028;
    return;
L_0882E028:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0882E038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E038u) goto L_0882E038;
    return;
L_0882E038:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882E050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E050u) goto L_0882E050;
    return;
L_0882E050:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882E068u) goto L_0882E068;
    return;
L_0882E068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882E078u) goto L_0882E078;
    return;
L_0882E078:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0882E088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E088u) goto L_0882E088;
    return;
L_0882E088:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882E0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E0A0u) goto L_0882E0A0;
    return;
L_0882E0A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882E0B8u) goto L_0882E0B8;
    return;
L_0882E0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882E0C8u) goto L_0882E0C8;
    return;
L_0882E0C8:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E0D8;
L_0882E0D8:
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
L_0882E108:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E138;
      }
      goto L_0882E130;
    }
L_0882E130:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E140;
      }
      goto L_0882E138;
    }
L_0882E138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E1B4;
      }
      goto L_0882E140;
    }
L_0882E140:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882E150u) goto L_0882E150;
    return;
L_0882E150:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882E164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E164u) goto L_0882E164;
    return;
L_0882E164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E17Cu) goto L_0882E17C;
    return;
L_0882E17C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882E194u) goto L_0882E194;
    return;
L_0882E194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0882E1A4u) goto L_0882E1A4;
    return;
L_0882E1A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E1B4;
L_0882E1B4:
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
L_0882E1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E200;
      }
      goto L_0882E1F8;
    }
L_0882E1F8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E208;
      }
      goto L_0882E200;
    }
L_0882E200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E268;
      }
      goto L_0882E208;
    }
L_0882E208:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882E214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E214u) goto L_0882E214;
    return;
L_0882E214:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0882E22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E22Cu) goto L_0882E22C;
    return;
L_0882E22C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882E244u) goto L_0882E244;
    return;
L_0882E244:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0882E254u) goto L_0882E254;
    return;
L_0882E254:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E268;
L_0882E268:
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
L_0882E288:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E298;
      }
      goto L_0882E290;
    }
L_0882E290:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2A0;
      }
      goto L_0882E298;
    }
L_0882E298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2B0;
      }
      goto L_0882E2A0;
    }
L_0882E2A0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E2B0;
L_0882E2B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E2B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2D8;
      }
      goto L_0882E2D0;
    }
L_0882E2D0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2E0;
      }
      goto L_0882E2D8;
    }
L_0882E2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3CC;
      }
      goto L_0882E2E0;
    }
L_0882E2E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[9]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882E320;
      }
      goto L_0882E310;
    }
L_0882E310:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E340;
      }
      goto L_0882E320;
    }
L_0882E320:
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E338;
      }
      goto L_0882E32C;
    }
L_0882E32C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E340;
      }
      goto L_0882E338;
    }
L_0882E338:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882E340;
L_0882E340:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E35C;
      }
      goto L_0882E350;
    }
L_0882E350:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882E35C;
L_0882E35C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3B4;
      }
      goto L_0882E398;
    }
L_0882E398:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8112));
    ctx.set_gpr(31, 0x0882E3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882E3A8u) goto L_0882E3A8;
    return;
L_0882E3A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3CC;
      }
      goto L_0882E3B4;
    }
L_0882E3B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_0882E3CC;
L_0882E3CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E3E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3F0;
      }
      goto L_0882E3E8;
    }
L_0882E3E8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3F8;
      }
      goto L_0882E3F0;
    }
L_0882E3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E410;
      }
      goto L_0882E3F8;
    }
L_0882E3F8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E410;
L_0882E410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E418:
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
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E474;
      }
      goto L_0882E46C;
    }
L_0882E46C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E47C;
      }
      goto L_0882E474;
    }
L_0882E474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5A8;
      }
      goto L_0882E47C;
    }
L_0882E47C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882E488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882E488u) goto L_0882E488;
    return;
L_0882E488:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E49Cu) goto L_0882E49C;
    return;
L_0882E49C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882E4B4u) goto L_0882E4B4;
    return;
L_0882E4B4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[30]));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882E4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882E4D0u) goto L_0882E4D0;
    return;
L_0882E4D0:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E4E4u) goto L_0882E4E4;
    return;
L_0882E4E4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882E4FCu) goto L_0882E4FC;
    return;
L_0882E4FC:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882E510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E510u) goto L_0882E510;
    return;
L_0882E510:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E584;
      }
      goto L_0882E52C;
    }
L_0882E52C:
    ctx.set_gpr(19, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0882E544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882E544u) goto L_0882E544;
    return;
L_0882E544:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E558u) goto L_0882E558;
    return;
L_0882E558:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882E580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882E580u) goto L_0882E580;
    return;
L_0882E580:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0882E584;
L_0882E584:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E52C;
      }
      goto L_0882E590;
    }
L_0882E590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_0882E5A8;
L_0882E5A8:
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
L_0882E5DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5EC;
      }
      goto L_0882E5E4;
    }
L_0882E5E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5F4;
      }
      goto L_0882E5EC;
    }
L_0882E5EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E614;
      }
      goto L_0882E5F4;
    }
L_0882E5F4:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(212), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[11]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 16384u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E614;
L_0882E614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E61C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E62C;
      }
      goto L_0882E624;
    }
L_0882E624:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E634;
      }
      goto L_0882E62C;
    }
L_0882E62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E64C;
      }
      goto L_0882E634;
    }
L_0882E634:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E64C;
L_0882E64C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E654:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E664;
      }
      goto L_0882E65C;
    }
L_0882E65C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E66C;
      }
      goto L_0882E664;
    }
L_0882E664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E680;
      }
      goto L_0882E66C;
    }
L_0882E66C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E680;
L_0882E680:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E6A8;
      }
      goto L_0882E6A0;
    }
L_0882E6A0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E6B0;
      }
      goto L_0882E6A8;
    }
L_0882E6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E6D0;
      }
      goto L_0882E6B0;
    }
L_0882E6B0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0882E6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882E6C4u) goto L_0882E6C4;
    return;
L_0882E6C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E6D0;
L_0882E6D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E6E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E6F4;
      }
      goto L_0882E6EC;
    }
L_0882E6EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E6FC;
      }
      goto L_0882E6F4;
    }
L_0882E6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E70C;
      }
      goto L_0882E6FC;
    }
L_0882E6FC:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882E70C;
L_0882E70C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E758;
      }
      goto L_0882E750;
    }
L_0882E750:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E760;
      }
      goto L_0882E758;
    }
L_0882E758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E8DC;
      }
      goto L_0882E760;
    }
L_0882E760:
    ctx.set_gpr(31, 0x0882E768u);
    // nop
    goto L_0882E6E4;
L_0882E768:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32484)));
    ctx.set_gpr(31, 0x0882E774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E774u) goto L_0882E774;
    return;
L_0882E774:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882E78Cu);
    // nop
    goto L_0882E108;
L_0882E78C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u | 45455u);
    ctx.set_gpr(31, 0x0882E7A0u);
    // nop
    goto L_0882E1D0;
L_0882E7A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31270));
    ctx.set_gpr(7, 0u | 32900u);
    ctx.set_gpr(8, 0u | 64000u);
    ctx.set_gpr(9, 0u | 33000u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(30000));
    ctx.set_gpr(11, 0u | 60000u);
    ctx.set_gpr(31, 0x0882E7D8u);
    // nop
    goto L_0882DDCC;
L_0882E7D8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.set_gpr(31, 0x0882E7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E7E4u) goto L_0882E7E4;
    return;
L_0882E7E4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32476)));
    ctx.set_gpr(31, 0x0882E7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E7F8u) goto L_0882E7F8;
    return;
L_0882E7F8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32472)));
    ctx.set_gpr(31, 0x0882E80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E80Cu) goto L_0882E80C;
    return;
L_0882E80C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32468)));
    ctx.set_gpr(31, 0x0882E820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E820u) goto L_0882E820;
    return;
L_0882E820:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32496)));
    ctx.set_gpr(31, 0x0882E834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E834u) goto L_0882E834;
    return;
L_0882E834:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32464)));
    ctx.set_gpr(31, 0x0882E848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E848u) goto L_0882E848;
    return;
L_0882E848:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32460)));
    ctx.set_gpr(31, 0x0882E85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E85Cu) goto L_0882E85C;
    return;
L_0882E85C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32456)));
    ctx.set_gpr(31, 0x0882E870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882E870u) goto L_0882E870;
    return;
L_0882E870:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882E8DCu);
    // nop
    goto L_0882D9FC;
L_0882E8DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E910:
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
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E964;
      }
      goto L_0882E954;
    }
L_0882E954:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E964;
      }
      goto L_0882E95C;
    }
L_0882E95C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E96C;
      }
      goto L_0882E964;
    }
L_0882E964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB84;
      }
      goto L_0882E96C;
    }
L_0882E96C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA04;
      }
      goto L_0882E984;
    }
L_0882E984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E9D8;
      }
      goto L_0882E990;
    }
L_0882E990:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] << 4u);
    ctx.set_gpr(31, 0x0882E9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E9A8u) goto L_0882E9A8;
    return;
L_0882E9A8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] << 4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882E9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882E9C0u) goto L_0882E9C0;
    return;
L_0882E9C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882E9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882E9D0u) goto L_0882E9D0;
    return;
L_0882E9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA04;
      }
      goto L_0882E9D8;
    }
L_0882E9D8:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[2] << 4u);
    ctx.set_gpr(31, 0x0882E9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E9F4u) goto L_0882E9F4;
    return;
L_0882E9F4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] | 16384u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_0882EA04;
L_0882EA04:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB78;
      }
      goto L_0882EA10;
    }
L_0882EA10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[18] << 4u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[30]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB74;
      }
      goto L_0882EA3C;
    }
L_0882EA3C:
    ctx.set_gpr(31, 0x0882EA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882EA44u) goto L_0882EA44;
    return;
L_0882EA44:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[30] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882EA74;
      }
      goto L_0882EA58;
    }
L_0882EA58:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8176));
    ctx.set_gpr(31, 0x0882EA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882EA6Cu) goto L_0882EA6C;
    return;
L_0882EA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB74;
      }
      goto L_0882EA74;
    }
L_0882EA74:
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA94;
      }
      goto L_0882EA88;
    }
L_0882EA88:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EAA8;
      }
      goto L_0882EA94;
    }
L_0882EA94:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EABC;
      }
      goto L_0882EAA8;
    }
L_0882EAA8:
    ctx.set_gpr(31, 0x0882EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882EAB0u) goto L_0882EAB0;
    return;
L_0882EAB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0882EABC;
L_0882EABC:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882EAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EAD0u) goto L_0882EAD0;
    return;
L_0882EAD0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0882EAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EAECu) goto L_0882EAEC;
    return;
L_0882EAEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB28;
      }
      goto L_0882EB10;
    }
L_0882EB10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882EB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EB28u) goto L_0882EB28;
    return;
L_0882EB28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_0882EB74;
L_0882EB74:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0882EB78;
L_0882EB78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EA10;
      }
      goto L_0882EB84;
    }
L_0882EB84:
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
L_0882EBB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EBE8;
      }
      goto L_0882EBD0;
    }
L_0882EBD0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EBE8;
      }
      goto L_0882EBD8;
    }
L_0882EBD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EBF0;
      }
      goto L_0882EBE8;
    }
L_0882EBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC10;
      }
      goto L_0882EBF0;
    }
L_0882EBF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0882EC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EC04u) goto L_0882EC04;
    return;
L_0882EC04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882EC10;
L_0882EC10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EC24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC4C;
      }
      goto L_0882EC44;
    }
L_0882EC44:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC54;
      }
      goto L_0882EC4C;
    }
L_0882EC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC98;
      }
      goto L_0882EC54;
    }
L_0882EC54:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC60;
      }
      goto L_0882EC5C;
    }
L_0882EC5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    goto L_0882EC60;
L_0882EC60:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC88;
      }
      goto L_0882EC68;
    }
L_0882EC68:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0882EC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EC7Cu) goto L_0882EC7C;
    return;
L_0882EC7C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC88;
      }
      goto L_0882EC84;
    }
L_0882EC84:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0882EC88;
L_0882EC88:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0882EC98;
L_0882EC98:
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
L_0882ECB0:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] << 4u);
    ctx.set_gpr(31, 0x0882ECFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ECFCu) goto L_0882ECFC;
    return;
L_0882ECFC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(6, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x0882ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882ED18u) goto L_0882ED18;
    return;
L_0882ED18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x0882ED28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882ED28u) goto L_0882ED28;
    return;
L_0882ED28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDC4;
      }
      goto L_0882ED38;
    }
L_0882ED38:
    ctx.set_gpr(3, ctx.gpr[22] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0882ED5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0882ED5Cu) goto L_0882ED5C;
    return;
L_0882ED5C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882ED6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ED6Cu) goto L_0882ED6C;
    return;
L_0882ED6C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0882ED80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ED80u) goto L_0882ED80;
    return;
L_0882ED80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882ED94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882ED94u) goto L_0882ED94;
    return;
L_0882ED94:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[3] << 4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0882EDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EDB0u) goto L_0882EDB0;
    return;
L_0882EDB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0882EDC4;
L_0882EDC4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882ED38;
      }
      goto L_0882EDD0;
    }
L_0882EDD0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] | 8192u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
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
L_0882EE28:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EE78;
      }
      goto L_0882EE68;
    }
L_0882EE68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EE78;
      }
      goto L_0882EE70;
    }
L_0882EE70:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EE80;
      }
      goto L_0882EE78;
    }
L_0882EE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EF7C;
      }
      goto L_0882EE80;
    }
L_0882EE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x0882EE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EE9Cu) goto L_0882EE9C;
    return;
L_0882EE9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x0882EEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EEC0u) goto L_0882EEC0;
    return;
L_0882EEC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x0882EED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882EED0u) goto L_0882EED0;
    return;
L_0882EED0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EF54;
      }
      goto L_0882EEE0;
    }
L_0882EEE0:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882EF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EF18u) goto L_0882EF18;
    return;
L_0882EF18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0882EF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882EF28u) goto L_0882EF28;
    return;
L_0882EF28:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0882EF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882EF40u) goto L_0882EF40;
    return;
L_0882EF40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0882EF54;
L_0882EF54:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EEE0;
      }
      goto L_0882EF60;
    }
L_0882EF60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_0882EF7C;
L_0882EF7C:
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
L_0882EFAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EFC0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EFE4;
      }
      goto L_0882EFD0;
    }
L_0882EFD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882EFE4;
L_0882EFE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EFEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F00C;
      }
      goto L_0882EFFC;
    }
L_0882EFFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_0882F00C;
L_0882F00C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F014:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F060;
      }
      goto L_0882F024;
    }
L_0882F024:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F060;
      }
      goto L_0882F030;
    }
L_0882F030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F054;
      }
      goto L_0882F040;
    }
L_0882F040:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F054;
L_0882F054:
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F040;
      }
      goto L_0882F060;
    }
L_0882F060:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F068:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F0B8;
      }
      goto L_0882F078;
    }
L_0882F078:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F0AC;
      }
      goto L_0882F094;
    }
L_0882F094:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_0882F0AC;
L_0882F0AC:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F094;
      }
      goto L_0882F0B8;
    }
L_0882F0B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F0C0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F15C;
      }
      goto L_0882F0D0;
    }
L_0882F0D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F0F4;
      }
      goto L_0882F0E4;
    }
L_0882F0E4:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8204));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F134;
      }
      goto L_0882F0F4;
    }
L_0882F0F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F110;
      }
      goto L_0882F100;
    }
L_0882F100:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8460));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F134;
      }
      goto L_0882F110;
    }
L_0882F110:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F12C;
      }
      goto L_0882F11C;
    }
L_0882F11C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8716));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F134;
      }
      goto L_0882F12C;
    }
L_0882F12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F15C;
      }
      goto L_0882F134;
    }
L_0882F134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F150;
      }
      goto L_0882F13C;
    }
L_0882F13C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0882F150;
L_0882F150:
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F13C;
      }
      goto L_0882F15C;
    }
L_0882F15C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F164:
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882F334;
      }
      goto L_0882F17C;
    }
L_0882F17C:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882F23C;
      }
      goto L_0882F18C;
    }
L_0882F18C:
    ctx.set_gpr(6, ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1E4;
      }
      goto L_0882F198;
    }
L_0882F198:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1D0;
      }
      goto L_0882F1AC;
    }
L_0882F1AC:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F1D0;
L_0882F1D0:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1AC;
      }
      goto L_0882F1DC;
    }
L_0882F1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F220;
      }
      goto L_0882F1E4;
    }
L_0882F1E4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F214;
      }
      goto L_0882F1F0;
    }
L_0882F1F0:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F214;
L_0882F214:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1F0;
      }
      goto L_0882F220;
    }
L_0882F220:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F318;
      }
      goto L_0882F23C;
    }
L_0882F23C:
    ctx.set_gpr(6, ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2AC;
      }
      goto L_0882F248;
    }
L_0882F248:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F298;
      }
      goto L_0882F25C;
    }
L_0882F25C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F298;
L_0882F298:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F25C;
      }
      goto L_0882F2A4;
    }
L_0882F2A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F300;
      }
      goto L_0882F2AC;
    }
L_0882F2AC:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2F4;
      }
      goto L_0882F2B8;
    }
L_0882F2B8:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F2F4;
L_0882F2F4:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2B8;
      }
      goto L_0882F300;
    }
L_0882F300:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(48));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0882F318;
L_0882F318:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 251u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F478;
      }
      goto L_0882F334;
    }
L_0882F334:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882F478;
      }
      goto L_0882F340;
    }
L_0882F340:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882F3D0;
      }
      goto L_0882F350;
    }
L_0882F350:
    ctx.set_gpr(6, ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F390;
      }
      goto L_0882F35C;
    }
L_0882F35C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F37C;
      }
      goto L_0882F368;
    }
L_0882F368:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F37C;
L_0882F37C:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F368;
      }
      goto L_0882F388;
    }
L_0882F388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3BC;
      }
      goto L_0882F390;
    }
L_0882F390:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3B0;
      }
      goto L_0882F39C;
    }
L_0882F39C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F3B0;
L_0882F3B0:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F39C;
      }
      goto L_0882F3BC;
    }
L_0882F3BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F464;
      }
      goto L_0882F3D0;
    }
L_0882F3D0:
    ctx.set_gpr(6, ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F420;
      }
      goto L_0882F3DC;
    }
L_0882F3DC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F40C;
      }
      goto L_0882F3F0;
    }
L_0882F3F0:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F40C;
L_0882F40C:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F3F0;
      }
      goto L_0882F418;
    }
L_0882F418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F454;
      }
      goto L_0882F420;
    }
L_0882F420:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F448;
      }
      goto L_0882F42C;
    }
L_0882F42C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0882F448;
L_0882F448:
    ctx.set_gpr(8, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F42C;
      }
      goto L_0882F454;
    }
L_0882F454:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0882F464;
L_0882F464:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 251u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882F478;
L_0882F478:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F480:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[7] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F490;
    }
L_0882F490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F52C;
      }
      goto L_0882F4A4;
    }
L_0882F4A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F4E8;
      }
      goto L_0882F4B0;
    }
L_0882F4B0:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F4D4;
      }
      goto L_0882F4BC;
    }
L_0882F4BC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    goto L_0882F4D4;
L_0882F4D4:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F4BC;
      }
      goto L_0882F4E0;
    }
L_0882F4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F4E8;
    }
L_0882F4E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F4F4;
    }
L_0882F4F4:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F518;
      }
      goto L_0882F500;
    }
L_0882F500:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0882F518;
L_0882F518:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F500;
      }
      goto L_0882F524;
    }
L_0882F524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F52C;
    }
L_0882F52C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F538;
    }
L_0882F538:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F58C;
      }
      goto L_0882F544;
    }
L_0882F544:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F578;
      }
      goto L_0882F550;
    }
L_0882F550:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    goto L_0882F578;
L_0882F578:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F550;
      }
      goto L_0882F584;
    }
L_0882F584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F58C;
    }
L_0882F58C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F5D8;
      }
      goto L_0882F598;
    }
L_0882F598:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5CC;
      }
      goto L_0882F5A4;
    }
L_0882F5A4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0882F5CC;
L_0882F5CC:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5A4;
      }
      goto L_0882F5D8;
    }
L_0882F5D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F604;
      }
      goto L_0882F5F4;
    }
L_0882F5F4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0882F5FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F5FCu) goto L_0882F5FC;
    return;
L_0882F5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F614;
      }
      goto L_0882F604;
    }
L_0882F604:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8972));
    ctx.set_gpr(31, 0x0882F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882F614u) goto L_0882F614;
    return;
L_0882F614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0882F650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 436u, 0x08811BE0u>(ctx, &aot_mem) && ctx.pc == 0x0882F650u) goto L_0882F650;
    return;
L_0882F650:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0882F66C;
      }
      goto L_0882F658;
    }
L_0882F658:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9000));
    ctx.set_gpr(31, 0x0882F66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882F66Cu) goto L_0882F66C;
    return;
L_0882F66C:
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
L_0882F684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F6A0;
      }
      goto L_0882F698;
    }
L_0882F698:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0882F6A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F6A0u) goto L_0882F6A0;
    return;
L_0882F6A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F6B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F6CC;
      }
      goto L_0882F6C4;
    }
L_0882F6C4:
    ctx.set_gpr(31, 0x0882F6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x0882F6CCu) goto L_0882F6CC;
    return;
L_0882F6CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F704;
      }
      goto L_0882F6F8;
    }
L_0882F6F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F710;
      }
      goto L_0882F704;
    }
L_0882F704:
    ctx.set_gpr(3, 2179u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2524));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_0882F710;
L_0882F710:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F724;
      }
      goto L_0882F718;
    }
L_0882F718:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F730;
      }
      goto L_0882F724;
    }
L_0882F724:
    ctx.set_gpr(3, 2179u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2384));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    goto L_0882F730;
L_0882F730:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F768;
      }
      goto L_0882F73C;
    }
L_0882F73C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9012));
    ctx.set_gpr(31, 0x0882F754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882F754u) goto L_0882F754;
    return;
L_0882F754:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9068));
    ctx.set_gpr(31, 0x0882F768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882F768u) goto L_0882F768;
    return;
L_0882F768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F77C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA40;
      }
      goto L_0882F7C0;
    }
L_0882F7C0:
    ctx.set_gpr(31, 0x0882F7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 318u, 0x0883180Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F7C8u) goto L_0882F7C8;
    return;
L_0882F7C8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0882F7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 386u, 0x08831D40u>(ctx, &aot_mem) && ctx.pc == 0x0882F7F0u) goto L_0882F7F0;
    return;
L_0882F7F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F820;
      }
      goto L_0882F800;
    }
L_0882F800:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0882F80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F80Cu) goto L_0882F80C;
    return;
L_0882F80C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882F820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 470u, 0x08832344u>(ctx, &aot_mem) && ctx.pc == 0x0882F820u) goto L_0882F820;
    return;
L_0882F820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F840;
      }
      goto L_0882F830;
    }
L_0882F830:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882F840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 477u, 0x088323FCu>(ctx, &aot_mem) && ctx.pc == 0x0882F840u) goto L_0882F840;
    return;
L_0882F840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F864;
      }
      goto L_0882F850;
    }
L_0882F850:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0882F864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 507u, 0x08832660u>(ctx, &aot_mem) && ctx.pc == 0x0882F864u) goto L_0882F864;
    return;
L_0882F864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F974;
      }
      goto L_0882F874;
    }
L_0882F874:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x0882F880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F880u) goto L_0882F880;
    return;
L_0882F880:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x0882F894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F894u) goto L_0882F894;
    return;
L_0882F894:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x0882F8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8A8u) goto L_0882F8A8;
    return;
L_0882F8A8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x0882F8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8BCu) goto L_0882F8BC;
    return;
L_0882F8BC:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0882F8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8D0u) goto L_0882F8D0;
    return;
L_0882F8D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x0882F8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8E4u) goto L_0882F8E4;
    return;
L_0882F8E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x0882F8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8F8u) goto L_0882F8F8;
    return;
L_0882F8F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x0882F90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882F90Cu) goto L_0882F90C;
    return;
L_0882F90C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882F974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 533u, 0x088327BCu>(ctx, &aot_mem) && ctx.pc == 0x0882F974u) goto L_0882F974;
    return;
L_0882F974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA34;
      }
      goto L_0882F980;
    }
L_0882F980:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA10;
      }
      goto L_0882F98C;
    }
L_0882F98C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882F99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 157u, 0x08820A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F99Cu) goto L_0882F99C;
    return;
L_0882F99C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F9A8;
    }
L_0882F9A8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F9B4;
    }
L_0882F9B4:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F9C4;
    }
L_0882F9C4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F9F4;
      }
      goto L_0882F9D4;
    }
L_0882F9D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882F9F4;
      }
      goto L_0882F9E0;
    }
L_0882F9E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F9F4;
    }
L_0882F9F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0882FA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 300u, 0x0883166Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FA0Cu) goto L_0882FA0C;
    return;
L_0882FA0C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_0882FA10;
L_0882FA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F98C;
      }
      goto L_0882FA34;
    }
L_0882FA34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_0882FA40;
L_0882FA40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FA74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0882FA9Cu);
    // nop
    goto L_0882F77C;
L_0882FA9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FAC8;
      }
      goto L_0882FAAC;
    }
L_0882FAAC:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0882FAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 450u, 0x08832180u>(ctx, &aot_mem) && ctx.pc == 0x0882FAC0u) goto L_0882FAC0;
    return;
L_0882FAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FAEC;
      }
      goto L_0882FAC8;
    }
L_0882FAC8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882FAEC;
      }
      goto L_0882FAD8;
    }
L_0882FAD8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9124));
    ctx.set_gpr(31, 0x0882FAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882FAECu) goto L_0882FAEC;
    return;
L_0882FAEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB74;
      }
      goto L_0882FAFC;
    }
L_0882FAFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB58;
      }
      goto L_0882FB10;
    }
L_0882FB10:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882FB58;
      }
      goto L_0882FB20;
    }
L_0882FB20:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB48;
      }
      goto L_0882FB2C;
    }
L_0882FB2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0882FB48;
L_0882FB48:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB2C;
      }
      goto L_0882FB58;
    }
L_0882FB58:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x0882FB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 629u, 0x08832ED8u>(ctx, &aot_mem) && ctx.pc == 0x0882FB74u) goto L_0882FB74;
    return;
L_0882FB74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB98;
      }
      goto L_0882FB84;
    }
L_0882FB84:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(31, 0x0882FB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 648u, 0x08833014u>(ctx, &aot_mem) && ctx.pc == 0x0882FB98u) goto L_0882FB98;
    return;
L_0882FB98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBBC;
      }
      goto L_0882FBA8;
    }
L_0882FBA8:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x0882FBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 666u, 0x08833158u>(ctx, &aot_mem) && ctx.pc == 0x0882FBBCu) goto L_0882FBBC;
    return;
L_0882FBBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 256u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FBCC;
    }
L_0882FBCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882FBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 757u, 0x08833754u>(ctx, &aot_mem) && ctx.pc == 0x0882FBE4u) goto L_0882FBE4;
    return;
L_0882FBE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC1C;
      }
      goto L_0882FBF4;
    }
L_0882FBF4:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(181)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x0882FC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 763u, 0x088337F8u>(ctx, &aot_mem) && ctx.pc == 0x0882FC1Cu) goto L_0882FC1C;
    return;
L_0882FC1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 16384u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC4C;
      }
      goto L_0882FC2C;
    }
L_0882FC2C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(31, 0x0882FC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 786u, 0x08833A20u>(ctx, &aot_mem) && ctx.pc == 0x0882FC4Cu) goto L_0882FC4C;
    return;
L_0882FC4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC74;
      }
      goto L_0882FC5C;
    }
L_0882FC5C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x0882FC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833B24u>(ctx, &aot_mem) && ctx.pc == 0x0882FC74u) goto L_0882FC74;
    return;
L_0882FC74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FCA0;
      }
      goto L_0882FC84;
    }
L_0882FC84:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0882FC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 804u, 0x08833BC8u>(ctx, &aot_mem) && ctx.pc == 0x0882FC94u) goto L_0882FC94;
    return;
L_0882FC94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_0882FCA0;
L_0882FCA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 8192u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FCE8;
      }
      goto L_0882FCB0;
    }
L_0882FCB0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FCD8;
      }
      goto L_0882FCBC;
    }
L_0882FCBC:
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 481u, 0x08832468u>(ctx, &aot_mem) && ctx.pc == 0x0882FCD4u) goto L_0882FCD4;
    return;
L_0882FCD4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882FCD8;
L_0882FCD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FCBC;
      }
      goto L_0882FCE8;
    }
L_0882FCE8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDA8;
      }
      goto L_0882FCF4;
    }
L_0882FCF4:
    ctx.set_gpr(16, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882FD38;
      }
      goto L_0882FD0C;
    }
L_0882FD0C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9168));
    ctx.set_gpr(31, 0x0882FD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882FD20u) goto L_0882FD20;
    return;
L_0882FD20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDA4;
      }
      goto L_0882FD38;
    }
L_0882FD38:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FD70;
      }
      goto L_0882FD40;
    }
L_0882FD40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882FD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 737u, 0x088335D0u>(ctx, &aot_mem) && ctx.pc == 0x0882FD58u) goto L_0882FD58;
    return;
L_0882FD58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDA4;
      }
      goto L_0882FD70;
    }
L_0882FD70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882FDA4;
      }
      goto L_0882FD7C;
    }
L_0882FD7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882FD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 720u, 0x088334BCu>(ctx, &aot_mem) && ctx.pc == 0x0882FD94u) goto L_0882FD94;
    return;
L_0882FD94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0882FDA4;
L_0882FDA4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882FDA8;
L_0882FDA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FCF4;
      }
      goto L_0882FDB8;
    }
L_0882FDB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE84;
      }
      goto L_0882FDC4;
    }
L_0882FDC4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE60;
      }
      goto L_0882FDD0;
    }
L_0882FDD0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882FDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 157u, 0x08820A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FDE0u) goto L_0882FDE0;
    return;
L_0882FDE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882FE5C;
      }
      goto L_0882FDEC;
    }
L_0882FDEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE5C;
      }
      goto L_0882FDF8;
    }
L_0882FDF8:
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE5C;
      }
      goto L_0882FE08;
    }
L_0882FE08:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE5C;
      }
      goto L_0882FE14;
    }
L_0882FE14:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE44;
      }
      goto L_0882FE24;
    }
L_0882FE24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882FE44;
      }
      goto L_0882FE30;
    }
L_0882FE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE5C;
      }
      goto L_0882FE44;
    }
L_0882FE44:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0882FE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 300u, 0x0883166Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FE5Cu) goto L_0882FE5C;
    return;
L_0882FE5C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_0882FE60;
L_0882FE60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FDD0;
      }
      goto L_0882FE84;
    }
L_0882FE84:
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
L_0882FEA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FEE4;
      }
      goto L_0882FED4;
    }
L_0882FED4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9204));
    ctx.set_gpr(31, 0x0882FEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882FEE4u) goto L_0882FEE4;
    return;
L_0882FEE4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 12u, 0x088300ACu>(ctx, &aot_mem); return;
      }
      goto L_0882FEEC;
    }
L_0882FEEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF1C;
      }
      goto L_0882FEFC;
    }
L_0882FEFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF1C;
      }
      goto L_0882FF0C;
    }
L_0882FF0C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0882FF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 804u, 0x08833BC8u>(ctx, &aot_mem) && ctx.pc == 0x0882FF1Cu) goto L_0882FF1C;
    return;
L_0882FF1C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FFDC;
      }
      goto L_0882FF28;
    }
L_0882FF28:
    ctx.set_gpr(16, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882FF6C;
      }
      goto L_0882FF40;
    }
L_0882FF40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9168));
    ctx.set_gpr(31, 0x0882FF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882FF54u) goto L_0882FF54;
    return;
L_0882FF54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FFD8;
      }
      goto L_0882FF6C;
    }
L_0882FF6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882FFA4;
      }
      goto L_0882FF74;
    }
L_0882FF74:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882FF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 737u, 0x088335D0u>(ctx, &aot_mem) && ctx.pc == 0x0882FF8Cu) goto L_0882FF8C;
    return;
L_0882FF8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FFD8;
      }
      goto L_0882FFA4;
    }
L_0882FFA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882FFD8;
      }
      goto L_0882FFB0;
    }
L_0882FFB0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882FFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 720u, 0x088334BCu>(ctx, &aot_mem) && ctx.pc == 0x0882FFC8u) goto L_0882FFC8;
    return;
L_0882FFC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0882FFD8;
L_0882FFD8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882FFDC;
L_0882FFDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF28;
      }
      goto L_0882FFEC;
    }
L_0882FFEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 12u, 0x088300ACu>(ctx, &aot_mem); return;
      }
      goto L_0882FFF8;
    }
L_0882FFF8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 11u, 0x08830088u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 2u, 0x08830004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0010(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0010_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_10(Runtime &runtime) {
    runtime.register_generated_unit(10u, 0x0882C000u, 16384u, &recomp_unit_0010, &recomp_unit_0010_entry);
    runtime.register_function(0x0882C000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C024u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C03Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C040u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C04Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C058u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C064u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C078u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C088u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C098u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C130u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C178u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C188u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C190u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C19Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C22Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C23Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C244u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C274u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C28Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C318u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C330u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C338u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C350u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C358u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C36Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C384u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C41Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C42Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C434u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C43Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C44Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C45Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C46Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C474u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C484u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C48Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C520u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C554u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C59Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C60Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C620u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C638u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C63Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C64Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C66Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C698u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C708u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C718u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C728u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C740u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C770u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C780u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C788u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C79Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C804u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C818u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C84Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C85Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C86Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C894u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C908u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C918u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C928u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C934u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C940u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C954u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C964u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C974u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C984u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C99Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CA88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CED0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CED8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D004u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D020u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D02Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D034u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D044u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D06Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D074u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D098u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D10Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D118u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D120u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D148u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D170u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D17Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D210u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D218u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D21Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D220u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D234u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D240u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D248u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D258u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D270u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D29Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D34Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D39Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D404u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D410u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D434u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D44Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D468u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D474u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D498u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D49Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D500u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D514u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D534u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D53Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D548u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D550u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D564u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D570u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D590u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D59Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D610u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D620u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D654u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D710u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D720u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D724u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D740u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D74Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D764u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D76Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D778u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D77Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D788u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D794u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D7F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D800u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D80Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D818u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D824u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D834u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D840u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D84Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D854u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D85Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D86Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D878u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D884u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D890u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D89Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D908u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D948u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D960u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DADCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DED8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E018u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E028u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E038u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E050u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E078u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E088u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E108u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E130u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E138u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E140u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E150u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E17Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E194u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E200u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E208u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E22Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E244u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E268u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E288u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E290u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E298u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E320u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E32Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E338u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E350u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E35Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E398u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E410u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E418u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E46Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E474u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E47Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E488u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E49Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E510u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E544u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E580u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E590u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E614u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E61Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E62Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E634u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E64Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E654u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E664u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E66Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E680u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E70Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E714u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E750u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E760u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E774u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E78Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E80Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E820u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E834u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E848u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E85Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E910u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E954u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E95Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E964u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E96Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E984u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E990u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EABCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EED0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F00Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F024u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F030u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F040u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F054u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F078u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F094u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F100u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F110u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F11Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F12Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F134u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F13Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F150u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F15Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F17Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F18Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F198u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F214u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F220u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F23Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F248u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F298u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F318u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F334u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F350u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F35Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F368u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F388u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F390u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F39Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F3F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F40Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F418u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F42Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F448u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F464u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F478u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F480u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F490u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F500u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F518u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F524u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F544u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F550u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F578u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F598u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F604u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F614u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F624u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F650u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F658u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F66Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F684u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F698u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F704u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F710u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F718u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F724u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F73Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F754u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F77Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F800u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F80Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F820u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F840u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F850u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F874u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F894u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F974u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F99Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFF8u, &recomp_unit_0010, "recomp_unit_0010");
}
} // namespace psprecomp
