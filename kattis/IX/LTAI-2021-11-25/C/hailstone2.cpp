#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  ll n, s = 1;
  cin >> n;
  while (n != 1) {
    s++;
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
  }
  cout << s << endl;
  return 0;
}
