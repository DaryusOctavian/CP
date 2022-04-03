#include <iostream>

using namespace std;

using i64 = int64_t;
using ld = long double;

int main() {
  i64 n;
  ld s1 = 0, s2 = 0;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    i64 a, b;
    cin >> a >> b;
    s1 += a;
    s2 += b;
  }
  s1 *= 60;

  if (s2 / s1 <= 1) {
    cout << "measurement error" << endl;
  } else {
    cout << fixed;
    cout.precision(10);
    cout << s2 / s1 << endl;
  }
  return 0;
}