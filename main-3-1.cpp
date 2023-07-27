#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
  int array[5] = {1, 3, 5, 3, 1};
  std::cout << std::boolalpha << is_fanarray(array, 5) << std::endl;
  return 0;
}