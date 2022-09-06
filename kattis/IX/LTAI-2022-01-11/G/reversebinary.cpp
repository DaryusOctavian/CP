#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 res = 0;
  while (n > 0) {
    res *= 2;
    res += n % 2;
    n /= 2;
  }

  cout << res << endl;
  return 0;
}