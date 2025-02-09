#include "utils.h"
#include <iostream>
#include <string>
#include <vector>

int main() {

  std::string res = "1";
  // std::string ans = "0";
  int ans = 0;
  for (int i = 1; i < 100; i++) {
    std::string temp = res;
    for (int j = 0; j < i; j++) {
      res = str_add(res, temp);
    }
    // std::cout << res << std::endl;
  }
  // std::cout << res << std::endl;
  for (size_t i = 0; i < res.length(); i++) {
    ans += res[i] - 48;
  }
  std::cout << ans << std::endl;
}
