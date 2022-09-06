#include <bits/stdc++.h>

using namespace ::std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == 0 && b == 0) {
    cout << "Not a moose" << endl;
  } else if (a == b) {
    cout << "Even " << a * 2 << endl;
  } else {
    if (a > b) {
      cout << "Odd " << a * 2 << endl;
    } else {
      cout << "Odd " << b * 2 << endl;
    }
  }
  return 0;
}