#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::cout << "Hello, World!" << std::endl;

  int max_len = 0;
  for (size_t i = 2; i < 1000; i++) {
    std::string number = "";
    int rec = 1;
    int counter = 0;
    std::vector<int> remainders;
    while (1) {
      int div = rec * 10 / i;
      rec = rec * 10 % i;

      if (std::find(remainders.begin(), remainders.end(), rec) !=
          remainders.end())
        break;
      number.append(std::to_string(div));
      remainders.push_back(rec);
    }
    for (size_t j = 0; j < remainders.size(); j++) {
      int len = 0;
      if (remainders[j] == rec) {
        len = remainders.size() - j + 1;
        if (len > max_len) {
          max_len = len;
          // std::cout << i << ' ' << "0." << number << ' ' << max_len
          //           << std::endl;
        }
        break;
      }
    }
  }
  std::cout << max_len << std::endl;
}
