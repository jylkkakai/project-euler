#include "utils.h"
#include <iostream>

int main() {

  long sum_of_primes = 0;

  for (size_t i = 2; i < 2000000; i++) {
    if (is_prime(i))
      sum_of_primes += i;
    if (i % 100001 == 0)
      std::cout << i << ' ' << sum_of_primes << std::endl;
  }
  std::cout << sum_of_primes << std::endl;
}
