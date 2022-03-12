#include <iostream>

using namespace ::std;

int main() {
  int n, highestSpeed = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t1, d1, t2, d2;
    cin >> t1 >> d1;
    if ((d1 - d2) / (t1 - t2) > highestSpeed) {
      highestSpeed = (d1 - d2) / (t1 - t2);
    }
    t2 = t1;
    d2 = d1;
  }
  cout << highestSpeed << endl;
  return 0;
}
