#include "utils.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  // std::cout << "Hello, World!" << std::endl;
  std::ifstream f("input13.txt");
  if (!f.is_open()) {
    std::cerr << "Failed to open file!" << std::endl;
    return 1;
  }
  std::string line;
  std::string res = "";
  std::vector<std::vector<std::string>> grid;
  while (getline(f, line)) {
    res = str_add(res, line);
    // std::cout << res << std::endl;
  }
  std::cout << res << std::endl;
}
