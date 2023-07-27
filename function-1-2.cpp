#include <iostream>

double array_mean(int array[], int n) {
  double average;
  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
    average = sum / n;
  }
  return average;
}