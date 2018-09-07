#ifndef CSTE_MATH_CALC_POW_H_INCLUDED
#define CSTE_MATH_CALC_POW_H_INCLUDED

#include "cste_math/config.h"

#include <limits>
#include <cmath>
#include <cassert>

namespace CSTE_MATH_NAMESPACE {

// Raises v by the operand p
template<typename T, typename U>
constexpr T pow(const T& v, const U& p) {
  if constexpr(std::is_integral<U>()) {
    T result = 1;
    for(U i = 0 ; i < p; ++i) {
      result *= v;
    }
    return result;
  }
  else {
    assert(false);
    return v;
  }
}
}

#endif

