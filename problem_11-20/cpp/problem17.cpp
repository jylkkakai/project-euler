#include <iostream>

int main() {
  std::string arr0_19[20] = {"",        "one",       "two",      "three",
                             "four",    "five",      "six",      "seven",
                             "eight",   "nine",      "ten",      "eleven",
                             "twelve",  "thirteen",  "fourteen", "fifteen",
                             "sixteen", "seventeen", "eighteen", "nineteen"};
  std::string arr20_90[10] = {"",      "",      "twenty",  "thirty", "forty",
                              "fifty", "sixty", "seventy", "eighty", "ninety"};
  std::string hundred = "hundred";
  std::string one_thousand = "onethousand";
  std::string andi = "and";
  // int num = 115;

  int sum_letters = 0;

  for (size_t i = 1; i < 1000; i++) {

    int num = i;
    int sum = 0;
    if (num > 99) {
      sum += arr0_19[int(num / 100)].length();
      sum += hundred.length();
      num = num % 100;
      if (num == 0) {
        sum_letters += sum;
        continue;
      }
      sum += andi.length();
    }

    if (num < 20) {
      sum += arr0_19[num].length();
    } else {
      sum += arr20_90[num / 10].length();
      sum += arr0_19[num % 10].length();
    }
    sum_letters += sum;
  }
  std::cout << sum_letters + one_thousand.length() << std::endl;
}
