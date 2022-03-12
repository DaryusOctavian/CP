#include <iostream>

using namespace ::std;

int main() {
  int a, b, c, d, e, n;
  cin >> a >> b >> c >> d >> e >> n;
  if (n >= a) {
    cout << "A" << endl;
  } else if (n >= b) {
    cout << "B" << endl;
  } else if (n >= c) {
    cout << "C" << endl;
  } else if (n >= d) {
    cout << "D" << endl;
  } else if (n >= e) {
    cout << "E" << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}