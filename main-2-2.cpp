#include <iostream>

extern int max_element(int array[], int n);

int main() {
  int array[6] = {2, 3, 5, 1, 6, 9};
  std::cout << "The max of the array is " << max_element(array, 6) << std::endl;
  return 0;
}