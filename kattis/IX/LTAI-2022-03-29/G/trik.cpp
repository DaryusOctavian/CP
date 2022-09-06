#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  string imp;
  cin >> imp;
  vector<i64> v(3);
  v.assign({1, 0, 0});

  for (i64 i = 0; i < imp.length(); i++) {
    if (imp[i] == 'A') {
      swap(v[0], v[1]);
    } else if (imp[i] == 'B') {
      swap(v[1], v[2]);
    } else if (imp[i] == 'C') {
      swap(v[0], v[2]);
    }
  }

  if (v[0]) {
    cout << 1 << endl;
  } else if (v[1]) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
  return 0;
}