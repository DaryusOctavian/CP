#include <bits/stdc++.h>

using namespace ::std;

typedef int64_t i64;

int main() {
  i64 ycode, mcode, ccode, dnumber, lycode;
  i64 y, m, d;
  vector<i64> mcodev = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5},
              ccodev = {6, 4, 2, 0};
  cin >> y >> m >> d;
  ycode = (y % 100 + (y % 100 / 4)) % 7;
  mcode = mcodev[m - 1];
  ccode = ccodev[y / 100 % 10 % 4];
  dnumber = d;
  lycode = (y) % 4;
  cout << (ycode + mcode + ccode + dnumber - lycode) % 7 << endl;
  return 0;
}

/*
  i64 n;
  cin >> n;
  vector<i64> v(n);

  for (i64 i = 0; i < n; ++i) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (i64 i = 0; i < n; ++i) {
    cout << v[i] << endl;
  }
*/