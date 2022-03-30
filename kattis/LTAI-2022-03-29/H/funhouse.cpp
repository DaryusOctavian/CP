#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  i64 counter = 0;
  while (n != 0 && m != 0) {
    counter++;
    char eep[m][n];
    for (i64 i = 0; i < m; i++) {
      for (i64 j = 0; j < n; j++) {
        cin >> eep[i][j];
      }
    }

    // find char '*' in array eep
    i64 x, y;
    for (i64 i = 0; i < m; i++) {
      for (i64 j = 0; j < n; j++) {
        if (eep[i][j] == '*') {
          x = i;
          y = j;
          break;
        }
      }
    }

    i64 dir;
    if (y == 0) {
      dir = 0;
    }
    if (x == 0) {
      dir = 1;
    }
    if (y == n - 1) {
      dir = 2;
    }
    if (x == m - 1) {
      dir = 3;
    }

    while (true) {
      if (dir == 0) {
        y++;
      } else if (dir == 1) {
        x++;
      } else if (dir == 2) {
        y--;
      } else if (dir == 3) {
        x--;
      }

      if (eep[x][y] == '/') {
        if (dir == 0) {
          dir = 3;
        } else if (dir == 1) {
          dir = 2;
        } else if (dir == 2) {
          dir = 1;
        } else if (dir == 3) {
          dir = 0;
        }
      }
      if (eep[x][y] == '\\') {
        if (dir == 0) {
          dir = 1;
        } else if (dir == 1) {
          dir = 0;
        } else if (dir == 2) {
          dir = 3;
        } else if (dir == 3) {
          dir = 2;
        }
      }

      if (eep[x][y] == 'x') {
        eep[x][y] = '&';
        break;
      }
    }

    cout << "HOUSE " << counter << endl;
    for (i64 i = 0; i < m; i++) {
      for (i64 j = 0; j < n; j++) {
        cout << eep[i][j];
      }
      cout << endl;
    }
    cin >> n >> m;
  }
  return 0;
}