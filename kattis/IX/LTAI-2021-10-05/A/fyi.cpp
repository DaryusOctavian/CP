#include <iostream>
using namespace ::std;

int main() {
  int n;
  cin >> n;
  if ((n / 1000000 == 5) && (n / 100000 % 10 == 5) && (n / 10000 % 10 == 5)) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}