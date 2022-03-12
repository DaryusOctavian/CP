#include <bits/stdc++.h>

using namespace ::std;

typedef int64_t i64;
typedef long double ld;

int prod(i64 x) {
  i64 prod = 1;
  while (x) {
    if (x % 10 != 0) {
      prod *= (x % 10);
    }
    x /= 10;
  }
  return prod;
}

int main() {
  i64 x;
  cin >> x;
  while (x > 9) {
    x = prod(x);
  }
  cout << x << endl;
  return 0;
}
