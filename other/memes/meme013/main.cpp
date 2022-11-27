#include <bits/stdc++.h>

using namespace ::std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> v(n);
  for (i64 i = 0; i < n; ++i) {
    cin >> v[i];
  }

  i64 x;
  cin >> x;
  i64 l = 0, r = n - 1;
  while (l < r) {
    i64 mid = l + (r - l) / 2;
    if (v[mid] > x) {
      r = mid - 1;
    } else if (v[mid] < x) {
      l = mid + 1;
    } else {
      cout << "Found" << endl;
      return 0;
    }
  }
  cout << "Not Found" << endl;
  return 0;
}