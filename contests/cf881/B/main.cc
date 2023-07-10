#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

bool sign(i64 x) {
  if (x < 0) {
    return false;
  }

  return true;
}

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 n;
    cin >> n;
    vector<i64> v;
    v.reserve(n);
    for (i64 i = 0; i < n; i++) {
      i64 x;
      cin >> x;
      if (x != 0) {
        v.push_back(x);
      }
    }

    i64 changes = 0, sum = 0;
    vector<i64> to_be_changed;
    if (!v.empty()) {
      to_be_changed.reserve(v.size());
      to_be_changed.push_back(v.back());
      sum = (sign(v.back()) ? v.back() : -v.back());
      v.pop_back();
    }
    while (!v.empty()) {
      if (sign(v.back()) != sign(to_be_changed.back())) {
        to_be_changed.push_back(v.back());
      }

      sum += (sign(v.back()) ? v.back() : -v.back());

      v.pop_back();
    }

    for (auto &e : to_be_changed) {
      if (!sign(e)) {
        changes++;
      }
    }

    cout << sum << " " << changes << endl;
  }

  return 0;
}