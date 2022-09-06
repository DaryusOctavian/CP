#include <iostream>

using namespace ::std;

int main() {
  int m, p, l, e, r, s, n;
  while (cin >> m && cin >> p && cin >> l) {
    cin >> e >> r >> s >> n;
    for (int i = 0; i < n; i++) {
      int a, b, c;
      c = e * m;
      b = l / r;
      a = p / s;
      m = a;
      p = b;
      l = c;
    }
    cout << m << endl;
  }

  return 0;
}