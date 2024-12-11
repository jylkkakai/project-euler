#pragma once
#include <cstddef>

bool is_prime(int num) {
  if (num % 2 == 0)
    return num == 2;

  for (size_t i = 3; i <= num / i; i += 2) {

    if (num % i == 0)
      return false;
  }
  return num > 1;
}
