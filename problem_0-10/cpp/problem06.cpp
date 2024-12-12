#include <cmath>
#include <iostream>

int main() {

  int nums = 100;
  int sum_of_square = 0;
  int square_of_sums = 0;

  for (size_t i = 0; i <= nums; i++) {
    sum_of_square += i;
    square_of_sums += pow(i, 2);
  }
  std::cout << "Sum: " << int(pow(sum_of_square, 2)) << std::endl;
  std::cout << "Square sum: " << square_of_sums << std::endl;
  std::cout << "Difference: " << int(pow(sum_of_square, 2) - square_of_sums)
            << std::endl;
}
