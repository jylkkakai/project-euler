#include <algorithm>
#include <bit>
#include <iostream>

// 40!/(20!*20!)

double factorial(int n) {
  double sum = 1.0;
  for (size_t i = 1; i <= n; i++) {
    sum *= i;
  }
  return sum;
}

int main() {
  std::cout << long(factorial(40) / (factorial(20) * factorial(20)))
            << std::endl;
}
