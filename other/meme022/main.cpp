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
    set<i64> st;
    bool found = false;
    for (auto x : a) {
      if (st.find(7777 - x) != st.end()) {
        cout << "Yes" << endl;
        return 0;
      }
      st.insert(x);
    }
    cout << "No" << endl;
    return 0;
  } else if (t == 2) {
    map<i64, i64> mp;
    for (auto x : a) {
      mp[x]++;
    }
    for (auto x : mp) {
      if (x.second > 1) {
        cout << "Contains duplicate" << endl;
        return 0;
      }
    }
    cout << "Unique" << endl;
    return 0;
  } else if (t == 3) {
    map<i64, i64> mp;
    for (auto x : a) {
      mp[x]++;
    }

    for (auto x : mp) {
      if (x.second > n / 2) {
        cout << x.first << endl;
        return 0;
      }
    }
    cout << -1 << endl;
    return 0;
  } else if (t == 4) {
    sort(a.begin(), a.end());
    if (n % 2 == 0) {
      cout << a[n / 2 - 1] << " " << a[n / 2] << endl;
    } else {
      cout << a[n / 2] << endl;
    }
    return 0;
  } else if (t == 5) {
    sort(a.begin(), a.end());
    for (auto x : a) {
      if (x > 99 && x < 1000) {
        cout << x << " ";
      }
    }
    cout << endl;
    return 0;
  }
}