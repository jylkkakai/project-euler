#include <iostream>

int main() {

  bool found = false;
  int step = 20;
  int num = 20;

  while (!found) {
    for (size_t i = 3; i <= step; i++) {
      if (num % i != 0)
        break;
      if (i == step) {
        found = true;
        std::cout << num << std::endl;
      }
    }
    // std::cout << num << std::endl;
    num += step;
  }
}
