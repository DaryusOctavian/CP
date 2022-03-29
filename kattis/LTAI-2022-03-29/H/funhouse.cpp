#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  char eep[m][n];
  for (i64 i = 0; i < m; i++) {
    for (i64 j = 0; j < n; j++) {
      cin >> eep[i][j];
    }
  }

  for (i64 i = 0; i < m; i++) {
    for (i64 j = 0; j < n; j++) {
      cout << eep[i][j];
    }
    cout << endl;
  }
  return 0;
}