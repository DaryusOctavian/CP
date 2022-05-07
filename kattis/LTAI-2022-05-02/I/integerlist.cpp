#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 tc;
  cin >> tc;
point:
  while (tc--) {
    string s;
    char garbage;
    i64 n;
    cin >> s >> n;
    deque<i64> v;
    cin >> garbage;
    for (i64 i = 0; i < n; i++) {
      i64 x;
      cin >> x;
      v.push_back(x);
      if (!(i == n - 1)) {
        cin >> garbage;
      }
    }
    cin >> garbage;

    bool toright = false;
    for (auto &c : s) {
      if (c == 'R') {
        toright = !toright;
      } else if (c == 'D') {
        if (v.empty()) {
          cout << "error" << endl;
          goto point;
        }
        if (toright) {
          v.pop_back();
        } else {
          v.pop_front();
        }
      }
    }

    if (!toright) {
      cout << '[';
      for (i64 i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
          cout << ',';
        }
      }
      cout << "]" << endl;
    } else {
      cout << '[';
      for (i64 i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
        if (i != 0) {
          cout << ',';
        }
      }
      cout << "]" << endl;
    }
  }
}