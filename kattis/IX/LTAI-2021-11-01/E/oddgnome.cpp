#include <iostream>

using namespace ::std;

int main() {
  int a, b, n;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> b;
    int m = -1;
    bool found = false;
    for (int j = 0; j < b; j++) {
      cin >> n;
      if (m == -1) {
      } else if (m + 1 != n && !found) {
        cout << j + 1 << endl;
        found = true;
      } else {
      }
      m = n;
    }
  }
  return 0;
}
