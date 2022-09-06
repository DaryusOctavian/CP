#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n = 0;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    i64 a, b;
    cin >> a >> b;
    a--;
    b--;
    i64 x = a, y = b;
    while (y) {
      i64 r = x % y;
      x = y;
      y = r;
    }
    i64 yes = (a / x) * b;
    i64 res;
    res = yes + 1 - (((yes / a) - 1) * ((yes / b) - 1) / 2);
    cout << res << endl;
  }
  return 0;
}
