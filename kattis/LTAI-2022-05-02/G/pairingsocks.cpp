#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> a(2 * n), b;
  map<i64, i64> m;
  for (i64 i = 0; i < 2 * n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }
  for (auto &p : m) {
    if (p.second % 2 == 1) {
      cout << "impossible" << endl;
      return 0;
    }
  }

  i64 res = 0;
  while (a.size() > 0 || b.size() > 0) {
    /*
    if ((a.size() > 0 && b.size() > 0) && a.back() == b.back()) {
      a.pop_back();
      b.pop_back();
      res++;
    } else
  */
    if (a.size() > b.size()) {
      while (true) {
        if (a.size() > 0 && b.size() > 0) {
          if (a.back() == b.back()) {
            a.pop_back();
            b.pop_back();
            res++;
            break;
          }
        }
        if (!(a.size() > 0 || b.size() > 0)) {
          break;
        } else {
          if (a.size() > 0) {
            b.push_back(a.back());
            a.pop_back();
            res++;
          } else {
            break;
          }
        }
      }
    } else {
      while (true) {
        if (a.size() > 0 && b.size() > 0) {
          if (a.back() == b.back()) {
            a.pop_back();
            b.pop_back();
            res++;
            break;
          }
        }
        if (!(a.size() > 0 || b.size() > 0)) {
          break;
        } else {
          if (b.size() > 0) {
            a.push_back(b.back());
            b.pop_back();
            res++;
          } else {
            break;
          }
        }
      }
    }
    if (res > 1e7) {
      cout << "impossible" << endl;
      return 0;
    }
  }
  cout << res << endl;
  return 0;
}