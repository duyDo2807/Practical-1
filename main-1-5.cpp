#include <iostream>

extern int count_evens(int number);

int main() {
  int number = 8;
  std::cout << "The number of even numbers between 1 and a number we supply "
               "(inclusive) is "
            << count_evens(number) << std::endl;
  return 0;
}