#include <cmath>
#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n0, n;
  cin >> n0;
  n = n0;
  i64 size = sqrt(n0) + 2;
  i64 x[size];
  bool prime = true;
  for (i64 i = 0; i < size; i++) {
    x[i] = 0;
  }
  if (n % 2 == 0) {
    prime = false;
  }
  while (n % 2 == 0) {
    x[2]++;
    n /= 2;
  }
  for (i64 i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      prime = false;
    }
    while (n % i == 0) {
      x[i]++;
      n /= i;
    }
  }

  i64 res = -1, greater = -1;
  for (i64 i = size - 1; i > 0; i--) {
    if (greater <= x[i]) {
      res = i;
      greater = x[i];
    }
  }

  if (prime) {
    res = n0;
  }

  // cout << n << " " << n0 << " " << res << endl;
  // cout << size << endl;
  // cout << prime << endl;
  // for(i64 i = 0; i < size; i++) {
  //     cout << x[i] << " ";
  // }

  cout << res << endl;
  return 0;
}