#pragma once
namespace sorting {

void swap(int &x, int &y) {
  int aux = x;
  x = y;
  y = aux;
}

void insertionSort(int array[], int n) {
  for (int k = 0; k < n; k++) {
    int i = k - 1, j = k;
    while (i >= 0 and array[i] > array[j]) {
      swap(array[i], array[j]);
      i--, j--;
    }
  }
}

void selectionSort(int array[], int n) {
  for (int i = 0; i < n; i++) {
    int min_idx = i;
    for (int j = i; j < n; j++) {
      if (array[j] < array[min_idx]) {
        min_idx = j;
      }
    }

    if (i != min_idx) {
      swap(array[i], array[min_idx]);
    }
  }
}

void bubbleSort(int array[], int n) {
  bool modified = true;
  while (modified) {
    modified = false;

    for (int i = 0; i < n - 1; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        modified = true;
      }
    }
  }
}

}  // namespace sorting