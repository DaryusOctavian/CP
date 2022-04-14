#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  char apples[n][m];
  for (i64 i = 0; i < n; i++) {
    for (i64 j = 0; j < m; j++) {
      cin >> apples[i][j];
    }
  }

  for (i64 j = 0; j < m; j++) {
    i64 spaces = 0;
    for (i64 i = n - 1; i >= 0; i--) {
      if (apples[i][j] == '.')
        spaces++;
      else if (apples[i][j] == '#')
        spaces = 0;
      else if (spaces > 0) {
        apples[i][j] = '.';
        apples[i + spaces][j] = 'a';
      }
    }
  }

  for (i64 i = 0; i < n; i++) {
    for (i64 j = 0; j < m; j++) {
      cout << apples[i][j];
    }
    cout << endl;
  }
  return 0;
}