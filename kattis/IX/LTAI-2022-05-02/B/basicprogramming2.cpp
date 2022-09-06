#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, t;
  cin >> n >> t;
  vector<i64> v(n);
  for (i64 i = 0; i < n; i++) {
    cin >> v[i];
  }

  if (t == 1) {
    map<i64, i64> m;
    for (auto x : v) {
      if (m.count(7777 - x) != 0) {
        cout << "Yes" << endl;
        return 0;
      }
      m[x]++;
    }
    cout << "No" << endl;
  } else if (t == 2) {
    map<i64, i64> m;
    for (i64 i = 0; i < n; i++) {
      m[v[i]]++;
    }
    for (auto x : m) {
      if (x.second > 1) {
        cout << "Contains duplicate" << endl;
        return 0;
      }
    }
    cout << "Unique" << endl;
  } else if (t == 3) {
    map<i64, i64> m;
    for (i64 i = 0; i < n; i++) {
      m[v[i]]++;
    }
    for (auto x : m) {
      if (x.second > n / 2) {
        cout << x.first << endl;
        return 0;
      }
    }
    cout << -1 << endl;
  } else if (t == 4) {
    sort(v.begin(), v.end());
    if (n % 2 == 1) {
      cout << v[n / 2] << endl;
    } else {
      cout << v[n / 2 - 1] << " " << v[n / 2] << endl;
    }
  } else if (t == 5) {
    sort(v.begin(), v.end());
    for (auto x : v) {
      if (x >= 100 && x <= 999) {
        cout << x << " ";
      }
    }
    cout << endl;
  }
}