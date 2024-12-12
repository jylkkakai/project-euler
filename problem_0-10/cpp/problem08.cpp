#include <fstream>
#include <iostream>
#include <string>

int main() {

  std::ifstream f("input.txt");
  if (!f.is_open()) {
    std::cout << "Failed to open file!" << std::endl;
    return 1;
  }
  std::string s;
  std::string number;

  while (getline(f, s)) {
    number += s;
  }
  // std::cout << number << std::endl;
  int adj_dig = 13;
  long max = 1;
  long temp_max = 1;
  // int i = 0;
  for (int i = 0; number.length() - i >= adj_dig; i++) {
    for (int j = 0; j < adj_dig; j++) {
      temp_max *= number[i + j] - 48;
      // temp_max *= std::stoi(std::to_string(number[i + j]), nullptr);
      std::cout << number[i + j] - 48 << " * ";
    }
    std::cout << " = " << temp_max << std::endl;
    // break;
    if (temp_max > max) {
      max = temp_max;
      // std::cout << max << std::endl;
    }
    temp_max = 1;
  }
  std::cout << max << std::endl;
}
