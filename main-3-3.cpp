#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
  int array[7] = {5, 2, 3, 2, 5, 3, 3};
  std::cout << weighted_average(array, 7) << std::endl;
  return 0;
}