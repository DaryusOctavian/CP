#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  char x, mp[4][5];
  for (i64 j = 0; j < 2; j++) {
    cin >> x;
    i64 n = x - '0';

    i64 i = 0;
    while (n > 0) {
      if (n % 2) {
        mp[i][j] = '*';
      } else {
        mp[i][j] = '.';
      }

      n /= 2;
    }
  }

  for (i64 i = 0; i < 4; i++) {
    mp[i][2] = ' ';
  }

  for (i64 j = 3; j < 5; j++) {
    cin >> x;
    i64 n = x - '0';

    i64 i = 0;
    while (n > 0) {
      if (n % 2) {
        mp[i][j] = '*';
      } else {
        mp[i][j] = '.';
      }

      n /= 2;
    }
  }

  for (i64 i = 0; i < 4; i++) {
    for (i64 j = 0; j < 5; j++) {
      cout << mp[i][j];
    }
    cout << endl;
  }

  return 0;
}