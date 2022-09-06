#include <cmath>
#include <iostream>

using namespace ::std;

typedef int64_t ll;

int main() {
  ll n;
  while (cin >> n) {
    ll sq = (ll)sqrt(n) + 1;
    ll sum = 1;
    for (ll i = 2; i < sq; i++) {
      if (n % i == 0) {
        ll diff = n / i;
        if (i != diff) {
          sum += diff;
        }
        sum += i;
      }
    }
    if (sum == n) {
      cout << n << " perfect" << endl;
    } else if (sum - 3 < n && sum + 3 > n) {
      cout << n << " almost perfect" << endl;
    } else {
      cout << n << " not perfect" << endl;
    }
  }
  return 0;
}
