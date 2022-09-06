#include <iostream>

using namespace ::std;

typedef int64_t ll;

int main() {
  ll n, sum = 0, i = 2;
  cin >> n;
  while (i * i <= n) {
    if (n % i == 0) {
      sum++;
      n /= i;
    } else {
      i++;
    }
  }
  cout << sum + 1 << endl;
  return 0;
}
