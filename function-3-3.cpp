#include <iostream>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }

  double weighted_sum = 0.0;
  int total_count = 0;

  for (int i = 0; i < n; i++) {
    if (array[i] == 0) {
      continue;  // Skip elements that have been processed to avoid double
                 // counting
    }

    int current_element = array[i];
    double occurrences = 0;

    // Count the occurrences of the current element
    for (int j = i; j < n; j++) {
      if (array[j] == current_element) {
        occurrences++;
      }
    }

    // Add the weighted value of the current element to the sum
    weighted_sum += (current_element * occurrences) / n;

    // Increment the total count with the occurrences to avoid division by zero
    total_count += occurrences;

    // Set occurrences of the current element to 0 to avoid double counting
    for (int j = i; j < n; j++) {
      if (array[j] == current_element) {
        array[j] = 0;
      }
    }
  }

  // Avoid division by zero
  if (total_count == 0) {
    return 0;
  }

  return weighted_sum;
}