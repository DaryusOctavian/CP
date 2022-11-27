#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> v(n);
  // read vector
  for (i64 i = 0; i < n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  i64 x;
  cin >> x;
  // binary search for x in v
  i64 l = 0, r = n - 1;
  while (l <= r) {
    i64 m = r + (l - r) / 2;
    if (v[m] == x) {
      cout << m << endl;
      return 0;
    } else if (v[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  return 0;
}