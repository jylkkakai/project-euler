#include <cmath>
#include <iostream>

int main() {
  for (size_t i = 0; i < 1000; i++) {
    for (size_t j = i + 1; j < 1000; j++) {
      for (size_t k = j + 1; k < 1000; k++) {
        if (pow(i, 2) + pow(j, 2) == pow(k, 2) && i + j + k == 1000)
          std::cout << i << ' ' << j << ' ' << k << ' ' << pow(i, 2) << ' '
                    << pow(j, 2) << ' ' << pow(k, 2) << ' ' << i + j + k << ' '
                    << i * j * k << std::endl;
      }
    }
  }
}
