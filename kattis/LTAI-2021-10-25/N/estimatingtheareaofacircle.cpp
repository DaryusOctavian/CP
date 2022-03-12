#include <iostream>

using namespace ::std;

int main() {
  double n, a, b;
  cin >> n >> a >> b;
  while (n != 0 || a != 0 || b != 0) {
    double res = (b * n * n * 4) / a;
    cout.precision(10);
    cout << n * n * 3.141592654 << " " << res << endl;
    cin >> n >> a >> b;
  }
  return 0;
}
