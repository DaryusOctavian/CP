#include <iostream>

using namespace ::std;

typedef int64_t ll;

int main() {
  ll a, b, r, s;
  cin >> a >> b >> s;
  ll a1 = a, b1 = b;
  while (b1 != 0) {
    r = a1 % b1;
    a1 = b1;
    b1 = r;
  }

  if ((a / a1) * b <= s) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}
