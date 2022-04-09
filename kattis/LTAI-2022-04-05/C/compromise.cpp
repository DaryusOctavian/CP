#include <bits/stdc++.h>
#include <bitset>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
  i64 tc;
  cin >> tc;
  vector<i64> a;
  for (i64 tcn = 0; tcn < tc; tcn++) {
    i64 n, m;
    cin >> n >> m;
    a.clear();
    a.resize(m, false);

    for (i64 i = 0; i < n; i++) {
      string line;
      cin >> line;
      for (i64 x = 0; x < m; x++) {
        if (line[x] == '1') {
          a[x]++;
        }
      }
    }

    for (i64 i = 0; i < m; i++) {
      ((d6)a[i] / n) >= 0.5 ? cout << "1" : cout << "0";
    }
    cout << endl;
  }
}
