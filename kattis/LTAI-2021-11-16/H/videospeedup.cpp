#include <iostream>

using namespace ::std;

int main() {
  int n, p, k, prevPos = 0, i = 0, a;
  double total = 0;
  cin >> n >> p >> k;
  for (; i < n; i++) {
    cin >> a;
    total += ((a - prevPos) * (100 + p * i)) / 100.0;
    prevPos = a;
  }
  total += ((k - prevPos) * (100 + p * i)) / 100.0;
  cout.precision(8);
  cout << fixed << total << endl;
  return 0;
}
