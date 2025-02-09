#pragma once
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

bool is_prime(int num) {
  if (num % 2 == 0)
    return num == 2;

  for (size_t i = 3; i <= num / i; i += 2) {

    if (num % i == 0)
      return false;
  }
  return num > 1;
}

std::vector<std::string> split_str(std::string s, std::string delim) {
  std::vector<std::string> tokens;
  size_t delim_pos = s.find(delim);
  while (delim_pos != std::string::npos) {
    tokens.push_back(s.substr(0, delim_pos));
    s.erase(0, delim_pos + delim.length());
    delim_pos = s.find(delim);
  }
  tokens.push_back(s);
  return tokens;
}

std::string str_add(std::string str1, std::string str2) {
  std::string a;
  std::string b;
  int carry = 0;
  a = str1;
  b = str2;
  if (str2.length() > str1.length()) {
    a = str2;
    b = str1;
  }
  int ai = a.length() - 1;
  int bi = b.length() - 1;
  while (bi >= 0) {
    int sum = a[ai] - 48 + b[bi] - 48 + carry;
    a[ai] = std::to_string(sum % 10)[0];
    carry = sum / 10;

    if (bi == 0 && ai == 0 && carry != 0) {
      // std::cout << carry << std::endl;
      a.insert(0, std::to_string(carry));
      carry = 0;
    }
    ai--;
    bi--;
  }
  while (carry) {
    int sum = a[ai] - 48 + carry;
    a[ai] = std::to_string(sum % 10)[0];
    carry = sum / 10;
    if (ai == 0 && carry != 0) {
      a.insert(0, std::to_string(carry));
      carry = 0;
    }
    ai--;
  }

  return a;
}

std::vector<int> get_divisors(int x) {
  std::vector<int> divisors;
  for (size_t i = 1; i <= x / 2; i++) {
    if (x % i == 0)
      divisors.push_back(i);
  }
  return divisors;
}
