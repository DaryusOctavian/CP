#include <iostream>

using namespace ::std;

typedef int64_t ll;

int main() {
  ll n;
  cin >> n;
  ll a, b;
  cin >> a;
  ll a1, b1, r;
  for (int i = 0; i < n - 1; i++) {
    cin >> b;
    a1 = a;
    b1 = b;
    while (b1 != 0) {
      r = a1 % b1;
      a1 = b1;
      b1 = r;
    }
    cout << a / a1 << "/" << b / a1 << endl;
  }
  return 0;
}