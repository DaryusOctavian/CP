#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 n;
    cin >> n;
    vector<i64> v(n);

    for (auto &e : v) {
      cin >> e;
    }

    sort(v.begin(), v.end());

    i64 res = 0;
    for (i64 i = 0; i < n / 2; i++) {
      i64 j = n - i - 1;
      if (i == j) {
        break;
      }

      res += (v[j] - v[i]);
    }

    cout << res << endl;
  }
  return 0;
}