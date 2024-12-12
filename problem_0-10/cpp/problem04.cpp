#include <iostream>

int main() {
  int lnum = 1000;
  int max = 0;

  for (size_t i = lnum; i > 0; i--) {
    for (size_t j = lnum; j > 0; j--) {

      std::string num = std::to_string(i * j);
      int left = 0;
      int right = num.length() - 1;

      while (right - left > 0) {

        if (num[left] != num[right]) {
          break;
        }
        left++;
        right--;
        if (right - left < 1 && i * j > max) {
          max = i * j;
          std::cout << i << ' ' << j << ' ' << num << std::endl;
        }
      }
    }
  }
}
