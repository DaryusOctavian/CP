#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, t;
  cin >> n >> t;
  i64 s, x = 0;
  cin >> s;
  if (s <= t) {
    x++;
  }
  for (i64 i = 1; i < n; i++) {
    i64 a;
    cin >> a;
    s += a;
    if (s <= t) {
      x++;
    }
  }
  cout << x << endl;
  return 0;
}
