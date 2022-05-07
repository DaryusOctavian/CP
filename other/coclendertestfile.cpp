#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

void mergesort(vector<i64> &a, int l, int r) {
  if (l >= r)
    return;
  int m = (l + r) / 2;
  mergesort(a, l, m);
  mergesort(a, m + 1, r);
  vector<i64> b(r - l + 1);
  int i = l, j = m + 1, k = 0;
  while (i <= m && j <= r) {
    if (a[i] < a[j])
      b[k++] = a[i++];
    else
      b[k++] = a[j++];
  }
  while (i <= m)
    b[k++] = a[i++];
  while (j <= r)
    b[k++] = a[j++];
  for (i = 0; i < k; i++)
    a[l + i] = b[i];
}

int a[1 >> 16];

void selsort(int *a, int n) {
  for (int i = 0; i < n; i++) {
    int m = i;
    for (int j = i + 1; j < n; j++)
      if (a[j] < a[m])
        m = j;

    int temp = a[i];
    a[i] = a[m];
    a[m] = temp;
  }
}

void numsort(int *a, int n) {
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
}

void bubblesort(int *a, int n) {
  bool swapped = true;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < n - 1; i++)
      if (a[i] > a[i + 1]) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        swapped = true;
      }
  }
}
