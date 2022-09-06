#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  int n, a = -1;
  cin >> n;
  if (n == 1) {
    a = 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      a = n - (n / i);
      break;
    }
  }

  if (a == -1) {
    cout << n - 1 << endl;
  } else {
    cout << a << endl;
  }
  return 0;
}
