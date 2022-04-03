#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 res = -n;
  res++;
  for (i64 i = 0; i < n; i++) {
    i64 a;
    cin >> a;
    res += a;
  }

  cout << res << endl;
  return 0;
}
