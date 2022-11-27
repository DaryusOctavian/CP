#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, t;
  cin >> n >> t;
  vector<i64> a(n);
  for (i64 i = 0; i < n; ++i) {
    cin >> a[i];
  }

  if (t == 1) {
    cout << 7 << endl;
    return 0;
  } else if (t == 2) {
    if (a[0] > a[1]) {
      cout << "Bigger" << endl;
    } else if (a[0] < a[1]) {
      cout << "Smaller" << endl;
    } else {
      cout << "Equal" << endl;
    }
    return 0;
  } else if (t == 3) {
    i64 mx = max(max(a[0], a[1]), a[2]);
    i64 mn = min(min(a[0], a[1]), a[2]);
    cout << a[0] + a[1] + a[2] - mx - mn << endl;
    return 0;
  } else if (t == 4) {
    i64 sum = 0;
    for (auto x : a) {
      sum += x;
    }
    cout << sum << endl;
    return 0;
  } else if (t == 5) {
    i64 sum = 0;
    for (auto x : a) {
      sum += x % 2 == 0 ? x : 0;
    }
    cout << sum << endl;
    return 0;
  } else if (t == 6) {
    for (auto x : a) {
      x %= 26;
      cout << (char)(x + 'a');
    }
    cout << endl;
    return 0;
  } else if (t == 7) {
    i64 i = 0;
    i64 cnt = 0;
    do {
      i = a[i];
      if (i < 0 || i >= n) {
        cout << "Out" << endl;
        return 0;
      } else if (i == n - 1) {
        cout << "Done" << endl;
        return 0;
      }

      if (++cnt > n * 2) {
        cout << "Cyclic" << endl;
        return 0;
      }
    } while (true);
    return 0;
  }
}