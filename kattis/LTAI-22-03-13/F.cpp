#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  deque<i64> as, bs;
  pair<i64, i64> ma, mb;
  ma.first = 1e3, ma.second = -1e3, mb.first = -1e3, mb.second = 1e3;
  for (i64 i = 0; i < n; i++) {
    i64 a, b;
    cin >> a >> b;
    if (a >= ma.second) {
      ma.second = a;
      as.push_back(a);
    } else if (a <= ma.first) {
      ma.first = a;
      as.push_front(a);
    } else {
      as.push_back(a);
      sort(as.begin(), as.end());
    }

    if (b >= mb.first) {
      mb.first = b;
      bs.push_front(b);
    } else if (b <= mb.second) {
      mb.second = b;
      bs.push_back(b);
    } else {
      bs.push_back(b);
      sort(bs.rbegin(), bs.rend());
    }

    i64 res = 0;
    for (i64 j = 0; j < i + 1; j++) {
      res = max(res, as.at(j) + bs.at(j));
    }

    cout << res << endl;
  }

  return 0;
}