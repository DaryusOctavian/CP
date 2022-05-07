#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> a(n), b;
  for (i64 i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool found = false;
  do {
    found = false;
    if (b.size() == 0) {
      while (a.size() > 0) {
        b.push_back(a.back());
        a.pop_back();
        if (b.size() > 0 && a.size() > 0) {
          if ((b.back() + a.back()) % 2 == 0) {
            b.pop_back();
            a.pop_back();
            found = true;
          }
        }
      }
    } else {
      while (b.size() > 0) {
        a.push_back(b.back());
        b.pop_back();
        if (b.size() > 0 && a.size() > 0) {
          if ((b.back() + a.back()) % 2 == 0) {
            b.pop_back();
            a.pop_back();
            found = true;
          }
        }
      }
    }
  } while (found);
  cout << max(a.size(), b.size()) << endl;
  return 0;
}