#include <algorithm>
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::string digits = "0123456789";
  for (size_t i = 1; i < 1000000; i++) {
    // std::cout << digits << std::endl;
    std::next_permutation(digits.begin(), digits.end());
  }
  std::cout << digits << std::endl;
}
