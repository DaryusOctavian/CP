#include <iostream>

using namespace ::std;

int main() {
  int n, a, b, x = 0, y = 999999;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a > x) {
      x = a;
    }
    if (b < y) {
      y = b;
    }
  }
  if (y < x) {
    cout << "edward is right" << endl;
  } else {
    cout << "gunilla has a point" << endl;
  }
}
