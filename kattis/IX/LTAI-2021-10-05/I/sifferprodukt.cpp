#include <iostream>

using namespace ::std;

typedef int64_t i64;

int reducer(i64 n) {
  i64 x = 1;
  while (n) {
    if (n % 10 != 0) {
      x *= n % 10;
    }
    n /= 10;
  }
  return x;
}

int main() {
  i64 x;
  cin >> x;
  while (x > 9) {
    x = reducer(x);
  }
  cout << x << endl;
  return 0;
}