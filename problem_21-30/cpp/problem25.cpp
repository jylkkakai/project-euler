
#include "../../utils.cpp"
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::string fn2 = "0";
  std::string fn1 = "1";
  int idx = 1;
  while (fn1.length() < 1000) {
    std::string t = str_add(fn1, fn2);
    fn2 = fn1;
    fn1 = t;
    idx++;
    // std::cout << idx << ' ' << fn1 << std::endl;
  }
  std::cout << idx << ' ' << fn1 << std::endl;
}
