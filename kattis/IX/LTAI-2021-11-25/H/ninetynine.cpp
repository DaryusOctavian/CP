#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  int x = 2;
  while (x < 100) {
    cout << x << endl;
    if (x != 99) {
      cin >> x;
    }
    if (x % 3 == 2) {
      x += 1;
    } else if (x % 3 == 1) {
      x += 2;
    } else {
      x += 1;
    }
  }
  return 0;
}
