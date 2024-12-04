#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  int sum = 0;
  for (size_t i = 0; i < 10; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }
  std::cout << sum << std::endl;
}
