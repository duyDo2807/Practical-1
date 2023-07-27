#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
  int array[11] = {2, 5, 9, 2, 9, 5, 9, 9, 5, 5, 2};
  two_five_nine(array, 11);
  return 0;
}