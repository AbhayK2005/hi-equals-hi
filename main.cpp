#include <iostream>

#include "src/hello.hpp"

int main() {
  int a = str_cmp_case_insensitive("String one", "string two");
  cout << a << endl;
  int b = str_cmp_case_insensitive("String one", "string one");
  cout << b << endl;
  int c = str_cmp_case_insensitive("string two", "string one");
  cout << c << endl;
  return 0;
}
