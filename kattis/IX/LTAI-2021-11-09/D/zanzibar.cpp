#include <iostream>

using namespace ::std;

int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int m = 1, n, s = 0;
    while (true) {
      cin >> n;
      if (n == 0) {
        break;
      }
      if (n > 2 * m) {
        s += n - 2 * m;
      }
      m = n;
    }
    cout << s << endl;
  }
}
