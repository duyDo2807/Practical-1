#include <iostream>

extern double sum_even(double array[], int n);

int main() {
  double array[7] = {5, 2, 3, 2, 5, 3, 3};
  std::cout << "Sum: " << sum_even(array, 7) << std::endl;
  return 0;
}