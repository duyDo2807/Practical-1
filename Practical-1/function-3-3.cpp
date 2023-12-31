#include <iostream>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }

  double weighted_sum = 0.0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (array[i] == 0) {
      continue;
    }

    int current_element = array[i];
    double occur = 0;

    for (int j = i; j < n; j++) {
      if (array[j] == current_element) {
        occur++;
        array[j] = 0;
      }
    }
    weighted_sum = weighted_sum + (((current_element * occur) / n) * occur);
    count = count + occur;
  }
  if (count == 0) {
    return 0;
  }

  return weighted_sum;
}