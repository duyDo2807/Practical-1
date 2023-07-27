#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  int secondarray[5] = {9, 10, 11, 12, 13};
  std::cout << "The sum of the two arrays is "
            << sum_two_arrays(array, secondarray, 5) << std::endl;
  return 0;
}