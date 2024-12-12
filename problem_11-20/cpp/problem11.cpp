#include "utils.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  // std::cout << "Hello, World!" << std::endl;
  std::ifstream f("input11.txt");
  if (!f.is_open()) {
    std::cerr << "Failed to open file!" << std::endl;
    return 1;
  }
  std::string line;
  std::vector<std::vector<std::string>> grid;
  while (getline(f, line)) {
    grid.push_back(split_str(line, " "));
  }
  int max = 0;
  for (size_t i = 0; i < grid.size() - 3; i++) {
    for (size_t j = 0; j < grid[i].size(); j++) {
      int prod1 = 1;
      int prod2 = 1;
      int prod3 = 1;
      int prod4 = 1;
      for (size_t k = 0; k < 4; k++) {
        if (j < grid[i].size() - 3) {
          prod1 *= std::stoi(grid[i][j + k]);
          prod2 *= std::stoi(grid[i + k][j + k]);
        }
        if (j > 2)
          prod3 *= std::stoi(grid[i + k][j - k]);

        prod4 *= std::stoi(grid[i + k][j]);
      }
      if (prod1 > max)
        max = prod1;
      if (prod2 > max)
        max = prod2;
      if (prod3 > max)
        max = prod3;
      if (prod4 > max)
        max = prod4;
    }
  }
  std::cout << max << std::endl;
}
