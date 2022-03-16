#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

int main() {
  i64 a, b;
  cin >> a >> b;
  cout << ceil(a / sin((b / 180.0) * M_PI)) << endl;
  return 0;
}
