#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  int a, b, c, a1, b1, a2, b2, a3, b3;
  cin >> a >> b >> c >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
  int total = 0;
  for (int i = 0; i < 100; i++) {
    if ((i + 1 >= a1 && i + 1 < b1) && (i + 1 >= a2 && i + 1 < b2) &&
        (i + 1 >= a3 && i + 1 < b3)) {
      total += 3 * c;
    } else if (((i + 1 >= a1 && i + 1 < b1) && (i + 1 >= a2 && i + 1 < b2)) ||
               ((i + 1 >= a2 && i + 1 < b2) && (i + 1 >= a3 && i + 1 < b3)) ||
               ((i + 1 >= a1 && i + 1 < b1) && (i + 1 >= a3 && i + 1 < b3))) {
      total += 2 * b;
    } else if ((i + 1 >= a1 && i + 1 < b1) || (i + 1 >= a2 && i + 1 < b2) ||
               (i + 1 >= a3 && i + 1 < b3)) {
      total += a;
    }
  }
  cout << total << endl;
  return 0;
}
