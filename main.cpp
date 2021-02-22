// Example - Style example
// main.cpp
//
// CopyRight (c) 2021 Watasuke
// Email  : <watasuke102@gmail.com>
// Twitter: @Watasuke102
// This software is released under the MIT SUSHI-WARE License.

#include <iostream>
#include <string>

#include "main.h"

int main() {
  int       a;       // this is a
  int       b = 100; // this is b
  const int x = 0;
  if (a == 0) {
    switch (a * b) {
      case 0: std::cout << "1" << std::endl; break;
      default: std::cout << "none" << std::endl; break;
    }
  } else {
    std::cout << "a is not 0" << std::endl;
  }

  example::TestClass TestClass;
  TestClass.PrintStrings(
      "This is first text. Very very long string, so this is not so good",
      "text2");
  return 0;
}
