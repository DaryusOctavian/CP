#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 tc;
  bool possible = true;
  cin >> tc;
  for (i64 tcn = 0; tcn < tc; tcn++) {
    i64 a, b;
    cin >> a >> b;
    vector<pair<i64, i64>> v(b);
    for (i64 i = 0; i < b; i++) {
      cin >> v[i].first >> v[i].second;
    }

    if (v[0].second - v[0].first > a) {
      possible = false;
      continue;
    }
    bool frw = true;
    i64 rw = 0;
    for (i64 i = 1; i < b; i++) {
      if (frw) {
        if (a - (v[i].second - v[i].first) <= v[i].second - v[i].first + 1) {
          rw += a - (v[i].second - v[i].first);
          frw = !frw;
        } else {
          rw += v[i].second - v[i].first + 1;
          frw = !frw;
        }
      } else {
        if (a - (v[i].second - v[i].first) + 1 <= v[i].second - v[i].first) {
          rw += a - (v[i].second - v[i].first) + 1;
          frw = !frw;
        } else {
          rw += v[i].second - v[i].first;
          frw = !frw;
        }
      }

      rw -= v[i].first = v[i - 1].second;
    }
  }
  return 0;
}