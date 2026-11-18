#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0220[3629] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219,
};
void recomp_unit_0220_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B74000u;
        entry_id = (entry_delta < 14516u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0220[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B74000;
    case 2u: goto L_08B74018;
    case 3u: goto L_08B7402C;
    case 4u: goto L_08B74038;
    case 5u: goto L_08B74058;
    case 6u: goto L_08B74080;
    case 7u: goto L_08B74094;
    case 8u: goto L_08B740A0;
    case 9u: goto L_08B740C0;
    case 10u: goto L_08B740D4;
    case 11u: goto L_08B740E0;
    case 12u: goto L_08B74100;
    case 13u: goto L_08B74128;
    case 14u: goto L_08B74150;
    case 15u: goto L_08B74178;
    case 16u: goto L_08B741A0;
    case 17u: goto L_08B741C8;
    case 18u: goto L_08B741F0;
    case 19u: goto L_08B74218;
    case 20u: goto L_08B74240;
    case 21u: goto L_08B74268;
    case 22u: goto L_08B74290;
    case 23u: goto L_08B742B8;
    case 24u: goto L_08B742E0;
    case 25u: goto L_08B74308;
    case 26u: goto L_08B7431C;
    case 27u: goto L_08B74328;
    case 28u: goto L_08B74348;
    case 29u: goto L_08B7435C;
    case 30u: goto L_08B74368;
    case 31u: goto L_08B74388;
    case 32u: goto L_08B7439C;
    case 33u: goto L_08B743A8;
    case 34u: goto L_08B743C8;
    case 35u: goto L_08B743F0;
    case 36u: goto L_08B74404;
    case 37u: goto L_08B74410;
    case 38u: goto L_08B74430;
    case 39u: goto L_08B74458;
    case 40u: goto L_08B7446C;
    case 41u: goto L_08B74478;
    case 42u: goto L_08B74498;
    case 43u: goto L_08B744C0;
    case 44u: goto L_08B744E8;
    case 45u: goto L_08B74510;
    case 46u: goto L_08B74538;
    case 47u: goto L_08B74560;
    case 48u: goto L_08B74588;
    case 49u: goto L_08B745B0;
    case 50u: goto L_08B745D8;
    case 51u: goto L_08B74600;
    case 52u: goto L_08B74614;
    case 53u: goto L_08B74620;
    case 54u: goto L_08B74640;
    case 55u: goto L_08B74654;
    case 56u: goto L_08B74660;
    case 57u: goto L_08B74680;
    case 58u: goto L_08B746A8;
    case 59u: goto L_08B746B8;
    case 60u: goto L_08B746E8;
    case 61u: goto L_08B74A84;
    case 62u: goto L_08B74AA4;
    case 63u: goto L_08B74AB4;
    case 64u: goto L_08B74AD0;
    case 65u: goto L_08B74ADC;
    case 66u: goto L_08B74AFC;
    case 67u: goto L_08B74B0C;
    case 68u: goto L_08B74F68;
    case 69u: goto L_08B74F74;
    case 70u: goto L_08B74F94;
    case 71u: goto L_08B74FA8;
    case 72u: goto L_08B74FB4;
    case 73u: goto L_08B74FD4;
    case 74u: goto L_08B75780;
    case 75u: goto L_08B7578C;
    case 76u: goto L_08B757AC;
    case 77u: goto L_08B75BE0;
    case 78u: goto L_08B75BEC;
    case 79u: goto L_08B75C0C;
    case 80u: goto L_08B75C20;
    case 81u: goto L_08B75C2C;
    case 82u: goto L_08B75C4C;
    case 83u: goto L_08B76760;
    case 84u: goto L_08B76780;
    case 85u: goto L_08B767B0;
    case 86u: goto L_08B767C4;
    case 87u: goto L_08B767D4;
    case 88u: goto L_08B767F0;
    case 89u: goto L_08B76828;
    case 90u: goto L_08B76848;
    case 91u: goto L_08B7687C;
    case 92u: goto L_08B76898;
    case 93u: goto L_08B768A4;
    case 94u: goto L_08B768C4;
    case 95u: goto L_08B768D4;
    case 96u: goto L_08B768EC;
    case 97u: goto L_08B76984;
    case 98u: goto L_08B7699C;
    case 99u: goto L_08B769B4;
    case 100u: goto L_08B769CC;
    case 101u: goto L_08B769DC;
    case 102u: goto L_08B76A30;
    case 103u: goto L_08B76A44;
    case 104u: goto L_08B76A58;
    case 105u: goto L_08B76A6C;
    case 106u: goto L_08B76EEC;
    case 107u: goto L_08B76F08;
    case 108u: goto L_08B76F14;
    case 109u: goto L_08B76F34;
    case 110u: goto L_08B76F5C;
    case 111u: goto L_08B76F84;
    case 112u: goto L_08B76FAC;
    case 113u: goto L_08B76FC0;
    case 114u: goto L_08B76FCC;
    case 115u: goto L_08B76FEC;
    case 116u: goto L_08B7701C;
    case 117u: goto L_08B77028;
    case 118u: goto L_08B77048;
    case 119u: goto L_08B77070;
    case 120u: goto L_08B77084;
    case 121u: goto L_08B77090;
    case 122u: goto L_08B770B0;
    case 123u: goto L_08B770C4;
    case 124u: goto L_08B770D0;
    case 125u: goto L_08B770F0;
    case 126u: goto L_08B77104;
    case 127u: goto L_08B77110;
    case 128u: goto L_08B77130;
    case 129u: goto L_08B77144;
    case 130u: goto L_08B77150;
    case 131u: goto L_08B77170;
    case 132u: goto L_08B77184;
    case 133u: goto L_08B77190;
    case 134u: goto L_08B771B0;
    case 135u: goto L_08B771C4;
    case 136u: goto L_08B771D0;
    case 137u: goto L_08B771F0;
    case 138u: goto L_08B77204;
    case 139u: goto L_08B77210;
    case 140u: goto L_08B77230;
    case 141u: goto L_08B77244;
    case 142u: goto L_08B77250;
    case 143u: goto L_08B77270;
    case 144u: goto L_08B77284;
    case 145u: goto L_08B77290;
    case 146u: goto L_08B772B0;
    case 147u: goto L_08B772C4;
    case 148u: goto L_08B772D0;
    case 149u: goto L_08B772F0;
    case 150u: goto L_08B77304;
    case 151u: goto L_08B77310;
    case 152u: goto L_08B77330;
    case 153u: goto L_08B77344;
    case 154u: goto L_08B77350;
    case 155u: goto L_08B77370;
    case 156u: goto L_08B77384;
    case 157u: goto L_08B77390;
    case 158u: goto L_08B773B0;
    case 159u: goto L_08B773C4;
    case 160u: goto L_08B773D0;
    case 161u: goto L_08B773F0;
    case 162u: goto L_08B77404;
    case 163u: goto L_08B77410;
    case 164u: goto L_08B77430;
    case 165u: goto L_08B77444;
    case 166u: goto L_08B77450;
    case 167u: goto L_08B77470;
    case 168u: goto L_08B77484;
    case 169u: goto L_08B77490;
    case 170u: goto L_08B774B0;
    case 171u: goto L_08B774C4;
    case 172u: goto L_08B774D0;
    case 173u: goto L_08B774F0;
    case 174u: goto L_08B77504;
    case 175u: goto L_08B77510;
    case 176u: goto L_08B77530;
    case 177u: goto L_08B77544;
    case 178u: goto L_08B77550;
    case 179u: goto L_08B77570;
    case 180u: goto L_08B77584;
    case 181u: goto L_08B77590;
    case 182u: goto L_08B775B0;
    case 183u: goto L_08B775C4;
    case 184u: goto L_08B775D0;
    case 185u: goto L_08B775F0;
    case 186u: goto L_08B77604;
    case 187u: goto L_08B77610;
    case 188u: goto L_08B77630;
    case 189u: goto L_08B77644;
    case 190u: goto L_08B77650;
    case 191u: goto L_08B77670;
    case 192u: goto L_08B77680;
    case 193u: goto L_08B77694;
    case 194u: goto L_08B776A0;
    case 195u: goto L_08B776C0;
    case 196u: goto L_08B776D4;
    case 197u: goto L_08B776E0;
    case 198u: goto L_08B77700;
    case 199u: goto L_08B77714;
    case 200u: goto L_08B77720;
    case 201u: goto L_08B77740;
    case 202u: goto L_08B77754;
    case 203u: goto L_08B77760;
    case 204u: goto L_08B77780;
    case 205u: goto L_08B77794;
    case 206u: goto L_08B777A0;
    case 207u: goto L_08B777C0;
    case 208u: goto L_08B777D4;
    case 209u: goto L_08B777E0;
    case 210u: goto L_08B77800;
    case 211u: goto L_08B77814;
    case 212u: goto L_08B77820;
    case 213u: goto L_08B77840;
    case 214u: goto L_08B77854;
    case 215u: goto L_08B77860;
    case 216u: goto L_08B77880;
    case 217u: goto L_08B77890;
    case 218u: goto L_08B778A4;
    case 219u: goto L_08B778B0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B74000:
    ctx.set_gpr(5, 2188u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20104));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25664));
    ctx.set_gpr(31, 0x08B74018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74018u) goto L_08B74018;
    return;
L_08B74018:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25692), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74038;
      }
      goto L_08B7402C;
    }
L_08B7402C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74038;
L_08B74038:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25692));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18752));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25680));
    ctx.set_gpr(31, 0x08B74058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74058u) goto L_08B74058;
    return;
L_08B74058:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25712), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25712));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25700));
    ctx.set_gpr(31, 0x08B74080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74080u) goto L_08B74080;
    return;
L_08B74080:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25764), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B740A0;
      }
      goto L_08B74094;
    }
L_08B74094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B740A0;
L_08B740A0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25764));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18620));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25752));
    ctx.set_gpr(31, 0x08B740C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B740C0u) goto L_08B740C0;
    return;
L_08B740C0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25780), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B740E0;
      }
      goto L_08B740D4;
    }
L_08B740D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B740E0;
L_08B740E0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25780));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30460));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25768));
    ctx.set_gpr(31, 0x08B74100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74100u) goto L_08B74100;
    return;
L_08B74100:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25796), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25796));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25784));
    ctx.set_gpr(31, 0x08B74128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74128u) goto L_08B74128;
    return;
L_08B74128:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25812), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25812));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25800));
    ctx.set_gpr(31, 0x08B74150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74150u) goto L_08B74150;
    return;
L_08B74150:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25848), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25848));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25836));
    ctx.set_gpr(31, 0x08B74178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74178u) goto L_08B74178;
    return;
L_08B74178:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25884), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25884));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25872));
    ctx.set_gpr(31, 0x08B741A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B741A0u) goto L_08B741A0;
    return;
L_08B741A0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25908), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25908));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25896));
    ctx.set_gpr(31, 0x08B741C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B741C8u) goto L_08B741C8;
    return;
L_08B741C8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25924), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25924));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25912));
    ctx.set_gpr(31, 0x08B741F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B741F0u) goto L_08B741F0;
    return;
L_08B741F0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25940), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25940));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25928));
    ctx.set_gpr(31, 0x08B74218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74218u) goto L_08B74218;
    return;
L_08B74218:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25956), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25956));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25944));
    ctx.set_gpr(31, 0x08B74240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74240u) goto L_08B74240;
    return;
L_08B74240:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25972), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25972));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25960));
    ctx.set_gpr(31, 0x08B74268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74268u) goto L_08B74268;
    return;
L_08B74268:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25988), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25988));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25976));
    ctx.set_gpr(31, 0x08B74290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74290u) goto L_08B74290;
    return;
L_08B74290:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26004), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26004));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25992));
    ctx.set_gpr(31, 0x08B742B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B742B8u) goto L_08B742B8;
    return;
L_08B742B8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26020), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26020));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26008));
    ctx.set_gpr(31, 0x08B742E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B742E0u) goto L_08B742E0;
    return;
L_08B742E0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26036), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26036));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(31, 0x08B74308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74308u) goto L_08B74308;
    return;
L_08B74308:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26052), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74328;
      }
      goto L_08B7431C;
    }
L_08B7431C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74328;
L_08B74328:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26052));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18488));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26040));
    ctx.set_gpr(31, 0x08B74348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74348u) goto L_08B74348;
    return;
L_08B74348:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26068), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74368;
      }
      goto L_08B7435C;
    }
L_08B7435C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74368;
L_08B74368:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26068));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30460));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26056));
    ctx.set_gpr(31, 0x08B74388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74388u) goto L_08B74388;
    return;
L_08B74388:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26092), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B743A8;
      }
      goto L_08B7439C;
    }
L_08B7439C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B743A8;
L_08B743A8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26092));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18356));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26080));
    ctx.set_gpr(31, 0x08B743C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B743C8u) goto L_08B743C8;
    return;
L_08B743C8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26120), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26120));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26108));
    ctx.set_gpr(31, 0x08B743F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B743F0u) goto L_08B743F0;
    return;
L_08B743F0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26136), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74410;
      }
      goto L_08B74404;
    }
L_08B74404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74410;
L_08B74410:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26136));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18224));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26124));
    ctx.set_gpr(31, 0x08B74430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74430u) goto L_08B74430;
    return;
L_08B74430:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26176), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26176));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26164));
    ctx.set_gpr(31, 0x08B74458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74458u) goto L_08B74458;
    return;
L_08B74458:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26192), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74478;
      }
      goto L_08B7446C;
    }
L_08B7446C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74478;
L_08B74478:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26192));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12152));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26180));
    ctx.set_gpr(31, 0x08B74498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74498u) goto L_08B74498;
    return;
L_08B74498:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26292), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26292));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26196));
    ctx.set_gpr(31, 0x08B744C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B744C0u) goto L_08B744C0;
    return;
L_08B744C0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26296), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26296));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26208));
    ctx.set_gpr(31, 0x08B744E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B744E8u) goto L_08B744E8;
    return;
L_08B744E8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26300), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26300));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26220));
    ctx.set_gpr(31, 0x08B74510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74510u) goto L_08B74510;
    return;
L_08B74510:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26304), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26304));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26232));
    ctx.set_gpr(31, 0x08B74538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74538u) goto L_08B74538;
    return;
L_08B74538:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26308), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26308));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26244));
    ctx.set_gpr(31, 0x08B74560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74560u) goto L_08B74560;
    return;
L_08B74560:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26312), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26312));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26256));
    ctx.set_gpr(31, 0x08B74588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74588u) goto L_08B74588;
    return;
L_08B74588:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26316), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26316));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26268));
    ctx.set_gpr(31, 0x08B745B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B745B0u) goto L_08B745B0;
    return;
L_08B745B0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26320), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26320));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26280));
    ctx.set_gpr(31, 0x08B745D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B745D8u) goto L_08B745D8;
    return;
L_08B745D8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26336), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26336));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26324));
    ctx.set_gpr(31, 0x08B74600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74600u) goto L_08B74600;
    return;
L_08B74600:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26352), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74620;
      }
      goto L_08B74614;
    }
L_08B74614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74620;
L_08B74620:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26352));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18620));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26340));
    ctx.set_gpr(31, 0x08B74640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74640u) goto L_08B74640;
    return;
L_08B74640:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26368), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74660;
      }
      goto L_08B74654;
    }
L_08B74654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74660;
L_08B74660:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26368));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30460));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26356));
    ctx.set_gpr(31, 0x08B74680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74680u) goto L_08B74680;
    return;
L_08B74680:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26384), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26384));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21968));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26372));
    ctx.set_gpr(31, 0x08B746A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B746A8u) goto L_08B746A8;
    return;
L_08B746A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B746B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30796), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30796));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32504));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30784));
    ctx.set_gpr(31, 0x08B746E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B746E8u) goto L_08B746E8;
    return;
L_08B746E8:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31020), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31024), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(74));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31028), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31032), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31036), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31040), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31044), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31048), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31052), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31056), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31060), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31064), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31068), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31072), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31076), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31080), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31084), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31088), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31092), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31096), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31100), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31104), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31108), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31112), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31116), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31120), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31124), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31128), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31132), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31136), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31140), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31144), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31148), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31152), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31156), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31160), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31164), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31168), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31172), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31176), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31180), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31184), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31188), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31192), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31196), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31200), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31204), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31208), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31212), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31216), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(49));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31220), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31224), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31228), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31232), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31236), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31240), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31244), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31248), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31252), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31256), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31260), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31264), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31268), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(62));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31272), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31276), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31280), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31284), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31288), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31292), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31296), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(69));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31300), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31304), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(71));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31308), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31312), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(73));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31316), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31320), ctx.gpr[3]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31948));
    ctx.set_gpr(31, 0x08B74A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 895u, 0x08983430u>(ctx, &aot_mem) && ctx.pc == 0x08B74A84u) goto L_08B74A84;
    return;
L_08B74A84:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31948));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13440));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31936));
    ctx.set_gpr(31, 0x08B74AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74AA4u) goto L_08B74AA4;
    return;
L_08B74AA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B74AB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32196), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74ADC;
      }
      goto L_08B74AD0;
    }
L_08B74AD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74ADC;
L_08B74ADC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32196));
    ctx.set_gpr(5, 2188u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20104));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32184));
    ctx.set_gpr(31, 0x08B74AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74AFCu) goto L_08B74AFC;
    return;
L_08B74AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B74B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
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
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32192), 0u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14124));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32188), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(640));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32184), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32180), ctx.gpr[4]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14156));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32176), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32172), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32168), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14188));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32164), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32160), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32156), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14224));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32152), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32148), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32144), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14260));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32140), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32136), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32132), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14296));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32128), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32124), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32120), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14332));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32116), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32112), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32108), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14380));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32104), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32100), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32096), ctx.gpr[3]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14416));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-32092), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32088), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32084), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14456));
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32080), ctx.gpr[6]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32076), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32072), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14488));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32068), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32064), ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32060), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32056), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32052), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32048), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14568));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32044), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32040), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32036), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14620));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32032), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32028), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32024), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14664));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32020), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32016), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32012), ctx.gpr[5]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14716));
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32008), ctx.gpr[5]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32004), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32000), ctx.gpr[2]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14768));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31996), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31992), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31988), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14816));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31984), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31980), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31976), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14876));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31972), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31968), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31964), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14924));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31960), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31956), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31952), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14972));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31948), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31944), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31940), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15020));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31936), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31932), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31928), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31920), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31916), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15100));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31912), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31908), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31904), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15136));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31900), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31896), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31892), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15204));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31888), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31884), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31880), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15272));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31876), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31872), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31868), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31864), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31860), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31856), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31852), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31848), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30856), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74F74;
      }
      goto L_08B74F68;
    }
L_08B74F68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74F74;
L_08B74F74:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30856));
    ctx.set_gpr(5, 2202u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25028));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30868));
    ctx.set_gpr(31, 0x08B74F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74F94u) goto L_08B74F94;
    return;
L_08B74F94:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30832), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B74FB4;
      }
      goto L_08B74FA8;
    }
L_08B74FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B74FB4;
L_08B74FB4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30832));
    ctx.set_gpr(5, 2207u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9276));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30844));
    ctx.set_gpr(31, 0x08B74FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B74FD4u) goto L_08B74FD4;
    return;
L_08B74FD4:
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31656), 0u);
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(14124));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31652), ctx.gpr[22]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1920));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31648), ctx.gpr[3]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31644), ctx.gpr[21]);
    ctx.set_gpr(20, 2228u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(14156));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31640), ctx.gpr[20]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1080));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31632), ctx.gpr[2]);
    ctx.set_gpr(19, 2228u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(14188));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31628), ctx.gpr[19]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31624), ctx.gpr[18]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31620), ctx.gpr[17]);
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(14224));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31616), ctx.gpr[16]);
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612), ctx.gpr[25]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31608), ctx.gpr[2]);
    ctx.set_gpr(24, 2228u << 16u);
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(14260));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31604), ctx.gpr[24]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31600), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31596), ctx.gpr[2]);
    ctx.set_gpr(15, 2228u << 16u);
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(14296));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31592), ctx.gpr[15]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31588), ctx.gpr[25]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31584), ctx.gpr[2]);
    ctx.set_gpr(14, 2228u << 16u);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(14332));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31580), ctx.gpr[14]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31576), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31572), ctx.gpr[2]);
    ctx.set_gpr(13, 2228u << 16u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(14380));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31568), ctx.gpr[13]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31564), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31560), ctx.gpr[25]);
    ctx.set_gpr(12, 2228u << 16u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(14416));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31556), ctx.gpr[12]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31552), ctx.gpr[25]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31548), ctx.gpr[2]);
    ctx.set_gpr(11, 2228u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14456));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31544), ctx.gpr[11]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31540), ctx.gpr[25]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31536), ctx.gpr[2]);
    ctx.set_gpr(10, 2228u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(14488));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31532), ctx.gpr[10]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31528), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31524), ctx.gpr[2]);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31520), ctx.gpr[9]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31516), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31512), ctx.gpr[2]);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14568));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31508), ctx.gpr[8]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31504), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31500), ctx.gpr[2]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14620));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31496), ctx.gpr[7]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31492), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31488), ctx.gpr[2]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14664));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31484), ctx.gpr[6]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31480), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31476), ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14716));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31472), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31468), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31464), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14768));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31460), ctx.gpr[4]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31456), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31452), ctx.gpr[2]);
    ctx.set_gpr(30, 2228u << 16u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(14816));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31448), ctx.gpr[30]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31444), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31440), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14876));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31436), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31432), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31428), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14924));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31424), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31420), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31416), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31412), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31408), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31404), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15020));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31400), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31396), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31392), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31388), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31384), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31380), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31376), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31372), ctx.gpr[21]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31368), ctx.gpr[18]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31364), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31360), ctx.gpr[17]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31356), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31352), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31348), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31344), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31340), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31336), ctx.gpr[17]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31332), ctx.gpr[2]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31328), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31324), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-31320), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-31316), ctx.gpr[2]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-31312), ctx.gpr[21]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-31308), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-31304), ctx.gpr[22]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-31300), ctx.gpr[23]);
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-31296), ctx.gpr[21]);
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-31292), ctx.gpr[20]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(20, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-31288), ctx.gpr[22]);
    ctx.set_gpr(22, 2226u << 16u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-31284), ctx.gpr[20]);
    ctx.set_gpr(20, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-31280), ctx.gpr[19]);
    ctx.set_gpr(19, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-31276), ctx.gpr[18]);
    ctx.set_gpr(19, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-31272), ctx.gpr[17]);
    ctx.set_gpr(17, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-31268), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31264), ctx.gpr[25]);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-31260), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31256), ctx.gpr[24]);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-31252), ctx.gpr[16]);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-31248), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31244), ctx.gpr[15]);
    ctx.set_gpr(15, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-31240), ctx.gpr[21]);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31236), ctx.gpr[15]);
    ctx.set_gpr(15, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-31232), ctx.gpr[14]);
    ctx.set_gpr(14, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-31228), 0u);
    ctx.set_gpr(15, 2226u << 16u);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-31224), ctx.gpr[14]);
    ctx.set_gpr(14, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-31220), ctx.gpr[13]);
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-31216), ctx.gpr[13]);
    ctx.set_gpr(13, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-31212), ctx.gpr[25]);
    ctx.set_gpr(13, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-31208), ctx.gpr[12]);
    ctx.set_gpr(12, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-31204), ctx.gpr[21]);
    ctx.set_gpr(13, 2226u << 16u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-31200), ctx.gpr[12]);
    ctx.set_gpr(12, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-31196), ctx.gpr[11]);
    ctx.set_gpr(12, 2226u << 16u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-31192), ctx.gpr[11]);
    ctx.set_gpr(12, 2226u << 16u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-31188), ctx.gpr[11]);
    ctx.set_gpr(11, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-31184), ctx.gpr[10]);
    ctx.set_gpr(10, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-31180), ctx.gpr[21]);
    ctx.set_gpr(11, 2226u << 16u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-31176), ctx.gpr[10]);
    ctx.set_gpr(10, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-31172), ctx.gpr[9]);
    ctx.set_gpr(9, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-31168), 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-31164), ctx.gpr[9]);
    ctx.set_gpr(9, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-31160), ctx.gpr[8]);
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-31156), ctx.gpr[21]);
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-31152), ctx.gpr[8]);
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-31148), ctx.gpr[7]);
    ctx.set_gpr(7, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31144), 0u);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-31140), ctx.gpr[7]);
    ctx.set_gpr(7, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31136), ctx.gpr[6]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-31132), 0u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31128), ctx.gpr[6]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-31124), ctx.gpr[5]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31120), 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116), ctx.gpr[5]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31112), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31108), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31104), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31100), ctx.gpr[30]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31096), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31092), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31088), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31084), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31080), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31076), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31072), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31068), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31064), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31060), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31056), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31052), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31048), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31044), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31040), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31036), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31032), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31028), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31024), ctx.gpr[21]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31020), ctx.gpr[18]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31016), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31012), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31008), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31004), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31000), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30996), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30992), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30988), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30984), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30980), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30976), 0u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30972), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30968), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30964), ctx.gpr[21]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30816), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7578C;
      }
      goto L_08B75780;
    }
L_08B75780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B7578C;
L_08B7578C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30816));
    ctx.set_gpr(5, 2188u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11904));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30828));
    ctx.set_gpr(31, 0x08B757ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B757ACu) goto L_08B757AC;
    return;
L_08B757AC:
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30912), 0u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14124));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30908), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(640));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30904), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30900), ctx.gpr[5]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14156));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30896), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(448));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30892), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30888), ctx.gpr[4]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14188));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30884), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30880), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30876), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14224));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30872), ctx.gpr[6]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30868), ctx.gpr[2]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30864), ctx.gpr[7]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14260));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860), ctx.gpr[7]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30856), ctx.gpr[7]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30852), ctx.gpr[7]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14296));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30848), ctx.gpr[7]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30844), 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30840), ctx.gpr[7]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14332));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30836), ctx.gpr[7]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30832), 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30828), ctx.gpr[7]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14380));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30824), ctx.gpr[7]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30820), ctx.gpr[7]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30816), ctx.gpr[2]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14416));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30812), ctx.gpr[7]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30808), ctx.gpr[5]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30804), ctx.gpr[7]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14456));
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30800), ctx.gpr[7]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30796), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14488));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30788), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30784), ctx.gpr[5]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30780), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30776), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30772), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30768), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14568));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30764), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30760), ctx.gpr[5]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30756), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14620));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30752), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30748), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30744), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14664));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30740), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30736), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30732), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14716));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30728), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30724), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30720), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14768));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30716), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30712), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30708), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14816));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30704), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30700), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30696), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14876));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30692), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30688), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30684), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14924));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30680), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30676), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30672), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14972));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30668), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30664), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30660), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15020));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30656), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30652), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30648), ctx.gpr[6]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15056));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30644), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30640), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30636), ctx.gpr[4]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15100));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30632), ctx.gpr[4]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30628), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30624), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15136));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30620), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30616), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30612), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15204));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30608), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30604), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30600), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15272));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30596), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30592), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30588), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30584), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30580), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30576), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30572), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30568), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30776), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B75BEC;
      }
      goto L_08B75BE0;
    }
L_08B75BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B75BEC;
L_08B75BEC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30776));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11300));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30788));
    ctx.set_gpr(31, 0x08B75C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B75C0Cu) goto L_08B75C0C;
    return;
L_08B75C0C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30760), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B75C2C;
      }
      goto L_08B75C20;
    }
L_08B75C20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B75C2C;
L_08B75C2C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30760));
    ctx.set_gpr(5, 2201u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11084));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30772));
    ctx.set_gpr(31, 0x08B75C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B75C4Cu) goto L_08B75C4C;
    return;
L_08B75C4C:
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30488), 0u);
    ctx.set_gpr(22, 2228u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(14124));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30484), ctx.gpr[22]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(640));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30480), ctx.gpr[3]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30476), ctx.gpr[21]);
    ctx.set_gpr(20, 2228u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(14156));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30472), ctx.gpr[20]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30468), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30464), ctx.gpr[2]);
    ctx.set_gpr(19, 2228u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(14188));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30460), ctx.gpr[19]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30456), ctx.gpr[18]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30452), ctx.gpr[17]);
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(14224));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30448), ctx.gpr[16]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30444), ctx.gpr[18]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30440), ctx.gpr[2]);
    ctx.set_gpr(15, 2228u << 16u);
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(14260));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30436), ctx.gpr[15]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30432), ctx.gpr[18]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30428), ctx.gpr[2]);
    ctx.set_gpr(14, 2228u << 16u);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(14296));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30424), ctx.gpr[14]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30420), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30416), ctx.gpr[2]);
    ctx.set_gpr(13, 2228u << 16u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(14332));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30412), ctx.gpr[13]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30408), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30404), ctx.gpr[2]);
    ctx.set_gpr(12, 2228u << 16u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(14380));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30400), ctx.gpr[12]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30396), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30392), ctx.gpr[18]);
    ctx.set_gpr(11, 2228u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14416));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30388), ctx.gpr[11]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30384), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30380), ctx.gpr[2]);
    ctx.set_gpr(10, 2228u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(14456));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30376), ctx.gpr[10]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30372), ctx.gpr[18]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30368), ctx.gpr[2]);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(14488));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30364), ctx.gpr[9]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30360), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30356), ctx.gpr[2]);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30352), ctx.gpr[8]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30348), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30344), ctx.gpr[2]);
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14568));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30340), ctx.gpr[7]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30336), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30332), ctx.gpr[2]);
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14620));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30328), ctx.gpr[6]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30324), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30320), ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14664));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30316), ctx.gpr[5]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30312), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30308), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14716));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30304), ctx.gpr[4]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30300), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30296), ctx.gpr[2]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14768));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30292), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30288), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30284), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14816));
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30280), ctx.gpr[2]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30276), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30272), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(14876));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30268), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30264), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30260), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(14924));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30256), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30252), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30248), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(14972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30244), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30240), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30236), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15020));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30232), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30228), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30224), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30220), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30216), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30212), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30208), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30204), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30200), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30196), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30192), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30188), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30184), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30180), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30176), ctx.gpr[23]);
    ctx.set_gpr(23, 2228u << 16u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(15272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30172), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30168), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30164), ctx.gpr[23]);
    ctx.set_gpr(30, 2228u << 16u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30160), ctx.gpr[30]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30156), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30152), ctx.gpr[23]);
    ctx.set_gpr(25, 2228u << 16u);
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30148), ctx.gpr[25]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30144), ctx.gpr[21]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30140), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30136), ctx.gpr[22]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30132), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30128), ctx.gpr[21]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30124), ctx.gpr[20]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30120), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30116), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30112), ctx.gpr[19]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30108), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30104), ctx.gpr[17]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30100), ctx.gpr[16]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30096), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30092), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30088), ctx.gpr[15]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30084), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30080), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30076), ctx.gpr[14]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30072), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30068), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30064), ctx.gpr[13]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30060), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30056), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30052), ctx.gpr[12]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30048), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30044), ctx.gpr[18]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30040), ctx.gpr[11]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30036), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30032), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30028), ctx.gpr[10]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30024), ctx.gpr[18]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30020), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30016), ctx.gpr[9]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30012), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30008), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30004), ctx.gpr[8]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-30000), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29996), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29992), ctx.gpr[7]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29988), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29984), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29980), ctx.gpr[6]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29976), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29972), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29968), ctx.gpr[5]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29964), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29960), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29956), ctx.gpr[4]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29952), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29948), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29944), ctx.gpr[3]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29940), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29936), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29932), ctx.gpr[2]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29928), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29924), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29920), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29916), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29912), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29908), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29904), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29900), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29896), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29892), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29888), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29884), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29880), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29876), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29872), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29868), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29864), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29860), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29856), ctx.gpr[21]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29852), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29848), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29844), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29840), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29836), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29832), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29828), ctx.gpr[23]);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29824), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29820), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29816), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29812), ctx.gpr[30]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29808), 0u);
    ctx.set_gpr(24, 2226u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29804), ctx.gpr[23]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29800), ctx.gpr[25]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29796), ctx.gpr[21]);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29792), 0u);
    ctx.set_gpr(23, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-29788), ctx.gpr[22]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1920));
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29784), ctx.gpr[23]);
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29780), ctx.gpr[21]);
    ctx.set_gpr(22, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29776), ctx.gpr[20]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1080));
    ctx.set_gpr(20, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29772), ctx.gpr[22]);
    ctx.set_gpr(22, 2226u << 16u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29768), ctx.gpr[20]);
    ctx.set_gpr(20, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29764), ctx.gpr[19]);
    ctx.set_gpr(20, 2226u << 16u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29760), ctx.gpr[19]);
    ctx.set_gpr(19, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-29756), ctx.gpr[17]);
    ctx.set_gpr(19, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-29752), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29748), ctx.gpr[18]);
    ctx.set_gpr(19, 2226u << 16u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-29744), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29740), ctx.gpr[15]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(15, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29736), ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29732), ctx.gpr[15]);
    ctx.set_gpr(15, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29728), ctx.gpr[14]);
    ctx.set_gpr(14, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29724), ctx.gpr[18]);
    ctx.set_gpr(15, 2226u << 16u);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29720), ctx.gpr[14]);
    ctx.set_gpr(14, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29716), ctx.gpr[13]);
    ctx.set_gpr(13, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-29712), 0u);
    ctx.set_gpr(14, 2226u << 16u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29708), ctx.gpr[13]);
    ctx.set_gpr(13, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-29704), ctx.gpr[12]);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(12, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29700), ctx.gpr[13]);
    ctx.set_gpr(12, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29696), ctx.gpr[18]);
    ctx.set_gpr(12, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29692), ctx.gpr[11]);
    ctx.set_gpr(11, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29688), ctx.gpr[18]);
    ctx.set_gpr(12, 2226u << 16u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29684), ctx.gpr[11]);
    ctx.set_gpr(11, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29680), ctx.gpr[10]);
    ctx.set_gpr(10, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29676), ctx.gpr[18]);
    ctx.set_gpr(11, 2226u << 16u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29672), ctx.gpr[10]);
    ctx.set_gpr(10, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29668), ctx.gpr[9]);
    ctx.set_gpr(9, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29664), ctx.gpr[21]);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29660), ctx.gpr[9]);
    ctx.set_gpr(9, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29656), ctx.gpr[8]);
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29652), 0u);
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29648), ctx.gpr[8]);
    ctx.set_gpr(8, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29644), ctx.gpr[7]);
    ctx.set_gpr(7, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29640), ctx.gpr[21]);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29636), ctx.gpr[7]);
    ctx.set_gpr(7, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29632), ctx.gpr[6]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29628), 0u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29624), ctx.gpr[6]);
    ctx.set_gpr(6, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29620), ctx.gpr[5]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29616), ctx.gpr[6]);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29612), ctx.gpr[5]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29608), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29604), ctx.gpr[21]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29600), ctx.gpr[4]);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29596), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29592), ctx.gpr[21]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29588), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29584), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29580), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29576), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29572), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29568), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29564), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29560), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29556), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29552), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29548), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29544), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29540), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29536), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29532), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29528), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29524), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29520), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29516), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29512), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29508), ctx.gpr[21]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29504), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29500), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29496), ctx.gpr[17]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29492), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29488), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29484), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29480), ctx.gpr[2]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29476), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29472), ctx.gpr[17]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29468), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29464), ctx.gpr[30]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29460), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29456), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29452), ctx.gpr[25]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29448), ctx.gpr[21]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27404));
    ctx.set_gpr(3, 2232u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24516));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27380), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27384), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27388), 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B76760u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B76760u) goto L_08B76760;
    return;
L_08B76760:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27404));
    ctx.set_gpr(5, 2207u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9148));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27416));
    ctx.set_gpr(31, 0x08B76780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76780u) goto L_08B76780;
    return;
L_08B76780:
    ctx.set_gpr(16, 2246u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-27364));
    ctx.set_gpr(3, 2232u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24560));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27144), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27324), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27256));
    ctx.set_gpr(31, 0x08B767B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08B767B0u) goto L_08B767B0;
    return;
L_08B767B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B767C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B767C4u) goto L_08B767C4;
    return;
L_08B767C4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B767D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08B767D4u) goto L_08B767D4;
    return;
L_08B767D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2207u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9020));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27376));
    ctx.set_gpr(31, 0x08B767F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B767F0u) goto L_08B767F0;
    return;
L_08B767F0:
    ctx.set_gpr(3, 2232u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24540));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27092), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27108), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27112), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B76828u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B76828u) goto L_08B76828;
    return;
L_08B76828:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(5, 2207u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8908));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27140));
    ctx.set_gpr(31, 0x08B76848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76848u) goto L_08B76848;
    return;
L_08B76848:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7687C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26920), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B768A4;
      }
      goto L_08B76898;
    }
L_08B76898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B768A4;
L_08B768A4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26920));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28248));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26932));
    ctx.set_gpr(31, 0x08B768C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B768C4u) goto L_08B768C4;
    return;
L_08B768C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B768D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28376));
    ctx.set_gpr(31, 0x08B768ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 721u, 0x089FF7D4u>(ctx, &aot_mem) && ctx.pc == 0x08B768ECu) goto L_08B768EC;
    return;
L_08B768EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28248));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B76984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B76984u) goto L_08B76984;
    return;
L_08B76984:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B7699Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B7699Cu) goto L_08B7699C;
    return;
L_08B7699C:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28184));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B769B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B769B4u) goto L_08B769B4;
    return;
L_08B769B4:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28152));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B769CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08B769CCu) goto L_08B769CC;
    return;
L_08B769CC:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x08B769DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08B769DCu) goto L_08B769DC;
    return;
L_08B769DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28056));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08B76A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B76A30u) goto L_08B76A30;
    return;
L_08B76A30:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28040));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08B76A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B76A44u) goto L_08B76A44;
    return;
L_08B76A44:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28024));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08B76A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B76A58u) goto L_08B76A58;
    return;
L_08B76A58:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28008));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08B76A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B76A6Cu) goto L_08B76A6C;
    return;
L_08B76A6C:
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27992), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27988), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27984), 0u);
    ctx.set_gpr(4, 16256u << 16u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27980), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27976), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27972), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27968), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27964), 0u);
    ctx.set_gpr(3, 16368u << 16u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27960), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27956), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27952), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27948), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27944), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27940), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27936), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27932), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27928), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27924), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27920), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27916), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27912), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27908), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27904), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27900), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27896), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27892), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27888), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27884), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27880), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27876), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27872), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27868), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27864), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27860), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27856), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27852), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27848), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27844), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27840), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27836), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27832), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27828), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27824), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27820), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27816), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27812), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27808), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27804), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27800), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27796), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27792), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27788), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27784), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27780), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27776), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27772), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27764), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27760), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27756), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27752), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27748), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27744), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27740), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27736), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27732), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27728), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27724), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27720), ctx.gpr[4]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27688), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27684), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27680), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27676), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27672), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27668), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27664), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27660), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27656), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27652), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27648), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27644), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27640), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27636), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27632), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27628), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27624), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27620), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27616), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27612), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27608), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27604), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27600), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27596), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27592), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27588), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27584), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27580), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27576), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27572), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27568), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27564), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27560), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27556), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27552), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27548), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27544), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27540), ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27536), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27532), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27528), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27524), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27520), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27516), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27512), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27508), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27504), 0u);
    ctx.set_gpr(5, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27500), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27464), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27460), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27456), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27452), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27436), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27432), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27428), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27416), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27412), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27408), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27404), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B76EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22404), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B76F14;
      }
      goto L_08B76F08;
    }
L_08B76F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B76F14;
L_08B76F14:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22404));
    ctx.set_gpr(5, 2189u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22116));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22416));
    ctx.set_gpr(31, 0x08B76F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76F34u) goto L_08B76F34;
    return;
L_08B76F34:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22348), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22348));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1240));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22360));
    ctx.set_gpr(31, 0x08B76F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76F5Cu) goto L_08B76F5C;
    return;
L_08B76F5C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22332));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1372));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22344));
    ctx.set_gpr(31, 0x08B76F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76F84u) goto L_08B76F84;
    return;
L_08B76F84:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22316), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22316));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12312));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22328));
    ctx.set_gpr(31, 0x08B76FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76FACu) goto L_08B76FAC;
    return;
L_08B76FAC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B76FCC;
      }
      goto L_08B76FC0;
    }
L_08B76FC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B76FCC;
L_08B76FCC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22300));
    ctx.set_gpr(5, 2190u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6508));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22312));
    ctx.set_gpr(31, 0x08B76FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B76FECu) goto L_08B76FEC;
    return;
L_08B76FEC:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22272), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22268), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22264), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21860), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77028;
      }
      goto L_08B7701C;
    }
L_08B7701C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77028;
L_08B77028:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21860));
    ctx.set_gpr(5, 2190u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6508));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21872));
    ctx.set_gpr(31, 0x08B77048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77048u) goto L_08B77048;
    return;
L_08B77048:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21844), 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21844));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1504));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21856));
    ctx.set_gpr(31, 0x08B77070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77070u) goto L_08B77070;
    return;
L_08B77070:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77090;
      }
      goto L_08B77084;
    }
L_08B77084:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77090;
L_08B77090:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21804));
    ctx.set_gpr(5, 2214u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29368));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21816));
    ctx.set_gpr(31, 0x08B770B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B770B0u) goto L_08B770B0;
    return;
L_08B770B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21756), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B770D0;
      }
      goto L_08B770C4;
    }
L_08B770C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B770D0;
L_08B770D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21756));
    ctx.set_gpr(5, 2193u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14612));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21768));
    ctx.set_gpr(31, 0x08B770F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B770F0u) goto L_08B770F0;
    return;
L_08B770F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21700), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77110;
      }
      goto L_08B77104;
    }
L_08B77104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77110;
L_08B77110:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21700));
    ctx.set_gpr(5, 2187u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23420));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21712));
    ctx.set_gpr(31, 0x08B77130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77130u) goto L_08B77130;
    return;
L_08B77130:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77150;
      }
      goto L_08B77144;
    }
L_08B77144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77150;
L_08B77150:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21684));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29548));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21696));
    ctx.set_gpr(31, 0x08B77170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77170u) goto L_08B77170;
    return;
L_08B77170:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21668), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77190;
      }
      goto L_08B77184;
    }
L_08B77184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77190;
L_08B77190:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21668));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29548));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21680));
    ctx.set_gpr(31, 0x08B771B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B771B0u) goto L_08B771B0;
    return;
L_08B771B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21652), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B771D0;
      }
      goto L_08B771C4;
    }
L_08B771C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B771D0;
L_08B771D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21652));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29548));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21664));
    ctx.set_gpr(31, 0x08B771F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B771F0u) goto L_08B771F0;
    return;
L_08B771F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21636), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77210;
      }
      goto L_08B77204;
    }
L_08B77204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77210;
L_08B77210:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21636));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29628));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21648));
    ctx.set_gpr(31, 0x08B77230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77230u) goto L_08B77230;
    return;
L_08B77230:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21620), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77250;
      }
      goto L_08B77244;
    }
L_08B77244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77250;
L_08B77250:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21620));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29628));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21632));
    ctx.set_gpr(31, 0x08B77270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77270u) goto L_08B77270;
    return;
L_08B77270:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77290;
      }
      goto L_08B77284;
    }
L_08B77284:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77290;
L_08B77290:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21604));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21616));
    ctx.set_gpr(31, 0x08B772B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B772B0u) goto L_08B772B0;
    return;
L_08B772B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21588), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B772D0;
      }
      goto L_08B772C4;
    }
L_08B772C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B772D0;
L_08B772D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21588));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21600));
    ctx.set_gpr(31, 0x08B772F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B772F0u) goto L_08B772F0;
    return;
L_08B772F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77310;
      }
      goto L_08B77304;
    }
L_08B77304:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77310;
L_08B77310:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21572));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1636));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21584));
    ctx.set_gpr(31, 0x08B77330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77330u) goto L_08B77330;
    return;
L_08B77330:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21556), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77350;
      }
      goto L_08B77344;
    }
L_08B77344:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77350;
L_08B77350:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21556));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1768));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21568));
    ctx.set_gpr(31, 0x08B77370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77370u) goto L_08B77370;
    return;
L_08B77370:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21540), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77390;
      }
      goto L_08B77384;
    }
L_08B77384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77390;
L_08B77390:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21540));
    ctx.set_gpr(5, 2214u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29368));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21552));
    ctx.set_gpr(31, 0x08B773B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B773B0u) goto L_08B773B0;
    return;
L_08B773B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21524), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B773D0;
      }
      goto L_08B773C4;
    }
L_08B773C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B773D0;
L_08B773D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21524));
    ctx.set_gpr(5, 2210u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31932));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21536));
    ctx.set_gpr(31, 0x08B773F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B773F0u) goto L_08B773F0;
    return;
L_08B773F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21508), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77410;
      }
      goto L_08B77404;
    }
L_08B77404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77410;
L_08B77410:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21508));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1900));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21520));
    ctx.set_gpr(31, 0x08B77430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77430u) goto L_08B77430;
    return;
L_08B77430:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21492), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77450;
      }
      goto L_08B77444;
    }
L_08B77444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77450;
L_08B77450:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21492));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1900));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21504));
    ctx.set_gpr(31, 0x08B77470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77470u) goto L_08B77470;
    return;
L_08B77470:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21476), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77490;
      }
      goto L_08B77484;
    }
L_08B77484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77490;
L_08B77490:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21476));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1900));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21488));
    ctx.set_gpr(31, 0x08B774B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B774B0u) goto L_08B774B0;
    return;
L_08B774B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B774D0;
      }
      goto L_08B774C4;
    }
L_08B774C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B774D0;
L_08B774D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21460));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2032));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21472));
    ctx.set_gpr(31, 0x08B774F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B774F0u) goto L_08B774F0;
    return;
L_08B774F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21444), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77510;
      }
      goto L_08B77504;
    }
L_08B77504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77510;
L_08B77510:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21444));
    ctx.set_gpr(5, 2210u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21456));
    ctx.set_gpr(31, 0x08B77530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77530u) goto L_08B77530;
    return;
L_08B77530:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21428), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77550;
      }
      goto L_08B77544;
    }
L_08B77544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77550;
L_08B77550:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21428));
    ctx.set_gpr(5, 2210u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21440));
    ctx.set_gpr(31, 0x08B77570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77570u) goto L_08B77570;
    return;
L_08B77570:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77590;
      }
      goto L_08B77584;
    }
L_08B77584:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77590;
L_08B77590:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21412));
    ctx.set_gpr(5, 2210u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31932));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21424));
    ctx.set_gpr(31, 0x08B775B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B775B0u) goto L_08B775B0;
    return;
L_08B775B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21396), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B775D0;
      }
      goto L_08B775C4;
    }
L_08B775C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B775D0;
L_08B775D0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21396));
    ctx.set_gpr(5, 2210u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31932));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21408));
    ctx.set_gpr(31, 0x08B775F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B775F0u) goto L_08B775F0;
    return;
L_08B775F0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21380), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77610;
      }
      goto L_08B77604;
    }
L_08B77604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77610;
L_08B77610:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21380));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2164));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21392));
    ctx.set_gpr(31, 0x08B77630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77630u) goto L_08B77630;
    return;
L_08B77630:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21364), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77650;
      }
      goto L_08B77644;
    }
L_08B77644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77650;
L_08B77650:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21364));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2164));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21376));
    ctx.set_gpr(31, 0x08B77670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77670u) goto L_08B77670;
    return;
L_08B77670:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21360));
    ctx.set_gpr(31, 0x08B77680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08B77680u) goto L_08B77680;
    return;
L_08B77680:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21284), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B776A0;
      }
      goto L_08B77694;
    }
L_08B77694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B776A0;
L_08B776A0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21284));
    ctx.set_gpr(5, 2214u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29368));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21296));
    ctx.set_gpr(31, 0x08B776C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B776C0u) goto L_08B776C0;
    return;
L_08B776C0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21268), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B776E0;
      }
      goto L_08B776D4;
    }
L_08B776D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B776E0;
L_08B776E0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21268));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29468));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21280));
    ctx.set_gpr(31, 0x08B77700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77700u) goto L_08B77700;
    return;
L_08B77700:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20948), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77720;
      }
      goto L_08B77714;
    }
L_08B77714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77720;
L_08B77720:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20948));
    ctx.set_gpr(5, 2188u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20104));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20960));
    ctx.set_gpr(31, 0x08B77740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77740u) goto L_08B77740;
    return;
L_08B77740:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20924), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77760;
      }
      goto L_08B77754;
    }
L_08B77754:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77760;
L_08B77760:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20924));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2164));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20936));
    ctx.set_gpr(31, 0x08B77780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77780u) goto L_08B77780;
    return;
L_08B77780:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20908), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B777A0;
      }
      goto L_08B77794;
    }
L_08B77794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B777A0;
L_08B777A0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20908));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29548));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20920));
    ctx.set_gpr(31, 0x08B777C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B777C0u) goto L_08B777C0;
    return;
L_08B777C0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B777E0;
      }
      goto L_08B777D4;
    }
L_08B777D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B777E0;
L_08B777E0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20892));
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29548));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20904));
    ctx.set_gpr(31, 0x08B77800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77800u) goto L_08B77800;
    return;
L_08B77800:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77820;
      }
      goto L_08B77814;
    }
L_08B77814:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77820;
L_08B77820:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20876));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1636));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20888));
    ctx.set_gpr(31, 0x08B77840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77840u) goto L_08B77840;
    return;
L_08B77840:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20860), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B77860;
      }
      goto L_08B77854;
    }
L_08B77854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B77860;
L_08B77860:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20860));
    ctx.set_gpr(5, 2215u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2296));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20872));
    ctx.set_gpr(31, 0x08B77880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B77880u) goto L_08B77880;
    return;
L_08B77880:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B77890:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B778A4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11560));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 461u, 0x08AC5794u>(ctx, &aot_mem) && ctx.pc == 0x08B778A4u) goto L_08B778A4;
    return;
L_08B778A4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08B778B0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11456));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC5784u>(ctx, &aot_mem) && ctx.pc == 0x08B778B0u) goto L_08B778B0;
    return;
L_08B778B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0220(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0220_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_220(Runtime &runtime) {
    runtime.register_generated_unit(220u, 0x08B74000u, 16384u, &recomp_unit_0220, &recomp_unit_0220_entry);
    runtime.register_function(0x08B74000u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74018u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7402Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74038u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74058u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74080u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74094u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740A0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740C0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B740E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74100u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74128u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74150u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74178u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B741A0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B741C8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B741F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74218u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74240u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74268u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74290u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B742B8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B742E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74308u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7431Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74328u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74348u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7435Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74368u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74388u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7439Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743A8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743C8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B743F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74404u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74410u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74430u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74458u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7446Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74478u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74498u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B744C0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B744E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74510u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74538u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74560u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74588u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B745B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B745D8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74600u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74614u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74620u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74640u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74654u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74660u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74680u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746A8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746B8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B746E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74A84u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74AA4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74AB4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74AD0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74ADCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74AFCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74B0Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74F68u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74F74u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74F94u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74FA8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74FB4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B74FD4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75780u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7578Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B757ACu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75BE0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75BECu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75C0Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75C20u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75C2Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B75C4Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76760u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76780u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B767B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B767C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B767D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B767F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76828u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76848u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7687Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76898u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B768A4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B768C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B768D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B768ECu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76984u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7699Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B769B4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B769CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B769DCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76A30u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76A44u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76A58u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76A6Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76EECu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76F08u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76F14u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76F34u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76F5Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76F84u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76FACu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76FC0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76FCCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B76FECu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B7701Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77028u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77048u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77070u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77084u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77090u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B770B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B770C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B770D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B770F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77104u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77110u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77130u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77144u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77150u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77170u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77184u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77190u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B771B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B771C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B771D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B771F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77204u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77210u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77230u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77244u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77250u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77270u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77284u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77290u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B772B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B772C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B772D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B772F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77304u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77310u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77330u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77344u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77350u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77370u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77384u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77390u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B773B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B773C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B773D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B773F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77404u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77410u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77430u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77444u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77450u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77470u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77484u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77490u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B774B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B774C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B774D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B774F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77504u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77510u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77530u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77544u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77550u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77570u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77584u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77590u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B775B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B775C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B775D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B775F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77604u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77610u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77630u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77644u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77650u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77670u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77680u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77694u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B776A0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B776C0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B776D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B776E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77700u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77714u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77720u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77740u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77754u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77760u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77780u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77794u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B777A0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B777C0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B777D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B777E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77800u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77814u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77820u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77840u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77854u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77860u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77880u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B77890u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B778A4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x08B778B0u, &recomp_unit_0220, "recomp_unit_0220");
}
} // namespace psprecomp
