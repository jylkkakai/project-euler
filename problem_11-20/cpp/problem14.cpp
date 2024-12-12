#include <iostream>

int main() {
  // std::cout << "Hello, World!" << std::endl;
  int max_count = 0;
  int max_number = 0;
  for (size_t i = 0; i < 1000000; i++) {
    long n = i;
    int count = 1;
    while (n > 1) {
      if (n & 1)
        n = 3 * n + 1;
      else
        n /= 2;
      count++;
    }
    if (count > max_count) {
      max_count = count;
      max_number = i;
      std::cout << max_number << ' ' << max_count << std::endl;
    }
  }
  std::cout << max_number << ' ' << max_count << std::endl;
}
