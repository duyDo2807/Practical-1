#include <iostream>

extern int median_array(int array[], int n);

int main() {
  int array[7] = {6, 4, 3, 2, 5, 8, 9};
  std::cout << median_array(array, 7) << std::endl;
}