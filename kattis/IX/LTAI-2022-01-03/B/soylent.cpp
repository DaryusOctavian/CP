#include <fstream>
#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    i64 a;
    cin >> a;
    if (a == 0) {
      cout << 0 << endl;
      continue;
    }
    if (a < 400) {
      cout << 1 << endl;
      continue;
    }
    i64 b = a / 400;
    if (a % 400 == 0) {
      cout << b << endl;
    } else {
      cout << b + 1 << endl;
    }
  }
  return 0;
}