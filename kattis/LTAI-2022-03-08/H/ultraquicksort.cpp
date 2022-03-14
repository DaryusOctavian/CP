#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> v(n);
  for (i64 i = 0; i < n; i++) {
    cin >> v[i];
  }
  bool found = true;
  i64 res = 0;
  while (found) {
    i64 i = 0;
    found = false;
    for (i = 0; i < n - 1; i++) {
      if (v[i] > v[i + 1]) {
        swap(v[i], v[i + 1]);
        found = true;
        res++;
      }
    }
  }

  cout << res << endl;
  return 0;
} // tle because it's mergesort not bubblesort