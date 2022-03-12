#include <bits/stdc++.h>

using namespace ::std;

typedef long long ll;

int main() {
  ll a, b;
  while (cin >> a) {
    cin >> b;
    if (a > b) {
      cout << a - b << endl;
    } else {
      cout << b - a << endl;
    }
  }
  return 0;
}
