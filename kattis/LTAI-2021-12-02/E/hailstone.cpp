#include <iostream>

using namespace ::std;

typedef int64_t ll;

int main() {
  ll n, sum = 1;
  cin >> n;
  while (n != 1) {
    if (n % 2 == 0) {
      sum += n;
      n /= 2;
    } else {
      sum += n;
      n = (3 * n) + 1;
    }
  }

  cout << sum << endl;
  return 0;
}