#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  int number = 6;
  std::cout << "The number of elements in an array that are equal to the "
               "given parameter is "
            << num_count(array, 5, number) << std::endl;
  return 0;
}