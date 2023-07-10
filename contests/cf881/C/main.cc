#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 n;
    cin >> n;
    i64 res = 0;
    while (n != 0) {
      res += n;
      n /= 2;
    }

    cout << res << endl;
  }

  return 0;
}