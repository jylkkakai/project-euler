#include "utils.h"
#include <iostream>

int main() {
  // std::cout << "Hello, World!" << std::endl;
  std::string sum = "2";
  int p = 1000;
  for (size_t i = 1; i < p; i++) {
    sum = str_add(sum, sum);
  }

  int sum_digits = 0;
  for (size_t i = 0; i < sum.length(); i++) {
    // std::cout << sum[i] - 48;
    sum_digits += sum[i] - 48;
  }
  // std::cout << "\n";
  // std::cout << sum.length() << "\n";
  std::cout << sum_digits << "\n";
}
