#include <iostream>

using namespace ::std;

int main() {
  int n, k;
  cin >> n;
  k = n % 4;
  if (k == 0) {
    cout << "Even\n";
  } else if (k == 2) {
    cout << "Odd\n";
  } else {
    cout << "Either\n";
  }
  return 0;
}
