#include "../../utils.cpp"
#include <iostream>
#include <numeric>

int main() {

  int sum_amicable = 0;
  for (size_t i = 0; i < 10000; i++) {
    std::vector<int> divs = get_divisors(i);
    int da = std::accumulate(divs.begin(), divs.end(), 0);
    divs = get_divisors(da);
    int db = std::accumulate(divs.begin(), divs.end(), 0);
    if (da != db && db == i) {
      sum_amicable += i;
      std::cout << i << std::endl;
    }
  }
  std::cout << sum_amicable << std::endl;
}
