#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, w, h, l;
  cin >> n >> w >> h;
  double d = sqrt(w * w + h * h);
  for (int i = 0; i < n; i++) {
    cin >> l;
    if (l <= d)
      cout << "DA\n";
    else
      cout << "NE\n";
  }
}