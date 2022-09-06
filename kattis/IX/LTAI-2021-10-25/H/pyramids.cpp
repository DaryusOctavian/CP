#include <iostream>

using namespace ::std;

int main() {
  int n, i = 1, a = 0;
  cin >> n;
  while (n >= (i * i)) {
    n -= i * i;
    i += 2;
    a++;
  }
  cout << a << endl;
  return 0;
}