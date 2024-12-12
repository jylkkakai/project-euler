#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  int sum = 0;
  int fib = 1;
  int prev_fib = 0;
  while (fib < 4000000) {

    if ((fib & 1) == 0)
      sum += fib;

    // std::cout << fib << ' ' << sum << std::endl;
    int next_fib = fib + prev_fib;
    prev_fib = fib;
    fib = next_fib;
  }
  std::cout << sum << std::endl;
}
