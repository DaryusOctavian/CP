#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    d6 a, b, c;
    cin >> a >> b >> c;
    i64 res = 0;
    i64 rate = 100.0 * a + 0.5;
    i64 debt = 100.0 * b + 0.5;
    i64 payment = 100.0 * c + 0.5;
    while (debt > 0) {
      debt += (rate * debt) / 10000 + ((rate * debt) % 10000 >= 5000);
      debt -= payment;
      res++;
      if (res > 1200) {
        cout << "impossible" << endl;
        break;
      }
    }
    if (res <= 1200) {
      cout << res << endl;
    }
  }
  return 0;
}