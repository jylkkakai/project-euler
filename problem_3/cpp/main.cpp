#include <iostream>

bool is_prime(int num) {

  for (size_t i = 2; i < num; i++) {

    if (num % i == 0)
      return false;
  }
  return true;
}
int main() {

  // int n = 13195;
  long n = 600851475143;

  while (n % 2 == 0) {
    n /= 2;
  }
  for (size_t i = 3; i < n; i++) {
    if (n % i == 0 && is_prime(i)) {
      n /= i;
      std::cout << i << ' ';
    }
  }

  std::cout << n << std::endl;
}
