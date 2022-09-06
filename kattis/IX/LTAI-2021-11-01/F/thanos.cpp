#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll a, b, c, x = 0;
    cin >> a >> b >> c;
    while (a <= c) {
      a *= b;
      x++;
    }
    cout << x << endl;
  }
  return 0;
}