#include <iostream>
using namespace ::std;

int checker(int n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

int main() {
  int a, b, x, n, m;
  cin >> a >> b >> x;
  n = a;
  m = b;
  while (checker(n) != x) {
    n++;
  }
  while (checker(m) != x) {
    m--;
  }
  cout << n << endl << m << endl;
  return 0;
}
