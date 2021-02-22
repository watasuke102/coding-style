// Example - Style example
// main.h
//
// CopyRight (c) 2021 Watasuke
// Email  : <watasuke102@gmail.com>
// Twitter: @Watasuke102
// This software is released under the MIT SUSHI-WARE License.

#ifndef EXAMPLE_MAIN_H_
#define EXAMPLE_MAIN_H_

#include <string>

namespace example {
class TestClass {
 private:
  int test_counter_ = 0;

 public:
  void IncrementCounter();
  void SetCounter(int);
  void PrintStrings(std::string, std::string);
};
} // namespace example

#endif // EXAMPLE_MAIN_H_
