#include <iostream>
#include <vector>

int main() {

  int first = 1;
  int sundays = 0;
  std::vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
  for (int i = 1; i < 101; i++) {
    for (int j = 0; j < months.size(); j++) {
      first += months[j];
      if (j == 1 && i % 4 == 0)
        first++;
      if (first % 7 == 0) {
        sundays++;
      }
    }
    first = (first + 31) % 7;
  }
  std::cout << sundays << std::endl;
}
