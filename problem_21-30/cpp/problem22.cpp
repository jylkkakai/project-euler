#include "../../utils.cpp"
#include "input22.h"
#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  // std::string a = "COLIN";
  std::sort(names.begin(), names.end());
  long name_scores = 0;
  for (size_t i = 0; i < names.size(); i++) {
    int name_sum = 0;
    for (size_t j = 0; j < names[i].length(); j++) {
      name_sum += names[i][j] - 64;
      // std::cout << a[j] - 64 << std::endl;
    }
    name_scores += name_sum * (i + 1);
  }

  std::cout << name_scores << std::endl;
}
