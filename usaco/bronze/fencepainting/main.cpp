#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

i64 min(i64 a, i64 b) { return a < b ? a : b; }

i64 max(i64 a, i64 b) { return a > b ? a : b; }

int main() {
  ifstream cin("paint.in");
  ofstream cout("paint.out");

  i64 a, b, c, d;
  cin >> a >> b >> c >> d;

  i64 ans = 0;
  ans += b - a;
  ans += d - c;

  i64 intersection = max(min(b, d) - max(a, c), 0);

  ans -= intersection;

  cout << ans << endl;
  return 0;
}