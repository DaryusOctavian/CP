#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int b, k;
  double g, t;
  cin >> b >> k >> g;
  t = floor(k / g);
  b = b - 1;
  cout << ceil(b / t);
}