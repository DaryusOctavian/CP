#include <iostream>

using namespace ::std;

typedef int64_t i64;

int main() {
  i64 a, b;
  cin >> a >> b;
  while (!(a == 0 && b == 0)) {
    if (a + b == 13) {
      cout << "Never speak again." << endl;
    } else if (a > b) {
      cout << "To the convention." << endl;
    } else if (a < b) {
      cout << "Left beehind." << endl;
    } else {
      cout << "Undecided." << endl;
    }

    cin >> a >> b;
  }
  return 0;
}