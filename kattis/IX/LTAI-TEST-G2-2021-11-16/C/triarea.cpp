#include <iostream>

using namespace ::std;

typedef int64_t i64;
typedef long double ld;

int main() {
  ld a, b;
  cin >> a >> b;
  cout.precision(8);
  cout << fixed;
  cout << (a * b) / 2 << endl;
  return 0;
}
