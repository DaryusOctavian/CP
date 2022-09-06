#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  double r1, r2;
  cin >> r1 >> r2;
  r2 = r1 - r2;

  cout.precision(7);
  cout << fixed;
  cout << ((r2 * r2) / (r1 * r1)) * 100 << endl;
  return 0;
}