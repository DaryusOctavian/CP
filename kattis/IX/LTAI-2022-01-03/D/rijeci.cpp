#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n = 0;
  cin >> n;
  i64 a = 1, b = 1, c = 0;
  if (n == 1) {
    cout << 0 << " " << 1 << endl;
  } else if (n == 2) {
    cout << 1 << " " << 1 << endl;
  } else {
    for (i64 i = 2; i < n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    cout << a << " " << b << endl;
  }
  return 0;
}