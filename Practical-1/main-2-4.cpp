#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
  int array[5] = {1, 2, 3, 4, 1};
  std::cout << std::boolalpha << is_ascending(array, 5) << std::endl;
}