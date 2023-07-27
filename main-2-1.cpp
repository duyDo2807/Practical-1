#include <iostream>

extern int min_element(int array[], int n);

int main() {
  int array[6] = {2, 3, 5, 1, 6, 9};
  std::cout << "The min of the array is " << min_element(array, 6) << std::endl;
  return 0;
}