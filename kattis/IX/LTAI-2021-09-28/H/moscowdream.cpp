#include <bits/stdc++.h>

using namespace ::std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > 0 && b > 0 && c > 0 && (a + b + c >= d) && d >= 3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}