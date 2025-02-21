#include "../../utils.cpp"
#include <iostream>

int main() {

  std::vector<int> ab_nums;
  for (size_t i = 1; i <= 28123; i++) {
    int sum = sum_divisors(i);
    if (sum > i) {
      ab_nums.push_back(i);
    }
  }

  std::vector<int> sums(28124, 0);
  for (size_t i = 0; i < ab_nums.size(); i++) {
    for (size_t j = 0; j < ab_nums.size(); j++) {
      int val = ab_nums[i] + ab_nums[j];
      if (val < 28124 && sums[val] == 0) {
        sums[val] = val;
      }
    }
  }
  int sum = 0;
  for (size_t i = 0; i <= 28123; i++) {
    if (sums[i] == 0)
      sum += i;
  }
  std::cout << sum << std::endl;
}
