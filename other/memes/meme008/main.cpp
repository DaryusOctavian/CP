#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 a[n][n];
  for (i64 i = 0; i < n; i++) {
    for (i64 j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  sort(a, a + n * n);
  return 0;
}