#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  char b;
  cin >> n >> b;

  i64 res = 0;

  for (i64 i = 0; i < 4 * n; i++) {
    char x, y;
    bool dom = false;
    cin >> x >> y;
    if (y == b) {
      dom = true;
    }

    if (x == 'A') {
      res += 11;
    } else if (x == 'K') {
      res += 4;
    } else if (x == 'Q') {
      res += 3;
    } else if (x == 'J') {
      res += dom ? 20 : 2;
    } else if (x == 'T') {
      res += 10;
    } else if (x == '9') {
      res += dom ? 14 : 0;
    }
  }

  cout << res << endl;
  return 0;
}