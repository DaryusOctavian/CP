#include <iostream>
using namespace ::std;

int main() {
  int t, n, ld;
  cin >> t;
  for (int i = 0; i < t; i++) {
    ld = 1;
    cin >> n;
    for (int x = 1; x <= n; x++) {
      ld = (ld * x) % 10;
    }
    cout << ld << endl;
  }
  return 0;
}
