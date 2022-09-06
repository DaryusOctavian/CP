#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 c, p;
  cin >> c >> p;
  vector<i64> v(c);
  for (i64 i = 0; i < c; i++) {
    cin >> v[i];
  }

  if (p == 1) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 3 < c) {
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2] && v[i + 2] == v[i + 3]) {
          ans++;
        }
      }
      ans++;
    }

    cout << ans << endl;
  } else if (p == 2) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 1 < c) {
        if (v[i] == v[i + 1]) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  } else if (p == 3) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 2 < c) {
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2] - 1) {
          ans++;
        }
      }
      if (i + 1 < c) {
        if (v[i] - 1 == v[i + 1]) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  } else if (p == 4) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 2 < c) {
        if (v[i] - 1 == v[i + 1] && v[i + 1] == v[i + 2]) {
          ans++;
        }
      }
      if (i + 1 < c) {
        if (v[i] == v[i + 1] - 1) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  } else if (p == 5) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 1 < c) {
        if (v[i] - 1 == v[i + 1]) {
          ans++;
        }
        if (v[i] == v[i + 1] - 1) {
          ans++;
        }
      }
      if (i + 2 < c) {
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2]) {
          ans++;
        }
        if (v[i] == v[i + 1] + 1 && v[i + 1] + 1 == v[i + 2]) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  } else if (p == 6) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 2 < c) {
        if (v[i] + 1 == v[i + 1] && v[i + 1] == v[i + 2]) {
          ans++;
        }
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2]) {
          ans++;
        }
      }
      if (i + 1 < c) {
        if (v[i] == v[i + 1]) {
          ans++;
        }
        if (v[i] - 2 == v[i + 1]) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  } else if (p == 7) {
    i64 ans = 0;
    for (i64 i = 0; i < c; i++) {
      if (i + 2 < c) {
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2] + 1) {
          ans++;
        }
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2]) {
          ans++;
        }
      }
      if (i + 1 < c) {
        if (v[i] == v[i + 1]) {
          ans++;
        }
        if (v[i] == v[i + 1] - 2) {
          ans++;
        }
      }
    }

    cout << ans << endl;
  }
}