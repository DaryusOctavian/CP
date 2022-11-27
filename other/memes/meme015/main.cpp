#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
  i64 tc;
  d6 s = 0;
  cin >> tc;
  while (tc--) {
    d6 a, b;
    cin >> a >> b;
    s += a * b;
  }
  cout << fixed << setprecision(6) << s << endl;
  return 0;
}