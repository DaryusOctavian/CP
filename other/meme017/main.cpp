#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 a, b;
  cin >> a >> b;
  if (b == 1) {
    if (a == 0) {
      cout << "ALL GOOD" << endl;
    } else {
      cout << "IMPOSSIBLE" << endl;
    }
  } else {
    cout << fixed << setprecision(10) << -(double)a / (b - 1) << endl;
  }
  return 0;
}