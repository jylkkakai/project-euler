#include <iostream>

bool is_prime(int num) {

  for (size_t i = 2; i < num; i++) {

    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {

  int n = 1;
  int number = 3;

  while (n < 10001) {
    if (is_prime(number)) {
      n++;
      if (n % 100 == 0 || n == 10001)
        std::cout << n << ' ' << number << std::endl;
    }
    number += 2;
  }
}
