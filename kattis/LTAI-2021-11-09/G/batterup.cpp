#include <iostream>

using namespace ::std;

int main() {
  int divz = 0, a, sum = 0;
  double n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a < 0) {
      divz++;
    } else {
      sum += a;
    }
  }
  double res;
  res = sum / (n - divz);
  cout << res << endl;
  return 0;
}
