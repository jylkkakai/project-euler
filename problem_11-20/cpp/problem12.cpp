#include <iostream>

int num_of_divisors(int num) {
  int divisors = 1;
  for (size_t i = 1; i <= num / 2; i++) {
    if (num % i == 0)
      divisors++;
  }
  return divisors;
}
int num_of_divisors2(int num) {
  int divisors = 0;
  for (size_t i = 1; i <= num; i++) {
    if (num % i == 0) {
      divisors++;
      num /= i;
      std::cout << i << ' ' << num << std::endl;
    }
  }
  return divisors;
}

int main() {

  int max_divisors = 0;
  long number = 0;
  int i = 1;
  while (max_divisors <= 500) {
    number += i;
    if (number % 20 == 0) {
      // if (!(number & 1)) {
      int divisors = num_of_divisors(number);
      if (divisors > max_divisors) {
        max_divisors = divisors;
        std::cout << number << ' ' << divisors << std::endl;
      }
    }
    if (i % 1000 == 0)
      std::cout << i << std::endl;
    // std::cout << "--------------" << std::endl;
    i++;
  }

  std::cout << max_divisors << std::endl;
}
