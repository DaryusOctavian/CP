#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    i64 x;
    cin >> x;
    i64 s1 = 0, a = x;
    while (a) {
      s1 += a % 10;
      a /= 10;
    }

    i64 s;
    if (s1 == 1) {
      cout << 0 << endl;
    } else {
      do {
        x--;
        a = x;
        s = 0;
        while (a) {
          s += a % 10;
          a /= 10;
        }
      } while (s1 != (s + 1));

      cout << x << endl;
    }
  }

  return 0;
}
