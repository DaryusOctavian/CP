#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> fa(101, 0), fb(101, 0), facp(101), fbcp(101);
  for (i64 tc = 1; tc <= n; tc++) {
    i64 a, b;
    cin >> a >> b;
    fa[a]++;
    fb[b]++;
    for (i64 i = 0; i <= 100; i++) {
      facp[i] = fa[i];
      fbcp[i] = fb[i];
    }

    i64 l = 1, r = 100, res = 0, temp = tc;
    while (l <= 100 && r > 0) {
      bool found = false;
      while (temp > 0) {
        if (facp[l]) {
          found = true;
          break;
        }
        l++;
      }
      while (r >= 0) {
        if (fbcp[r]) {
          found = true;
          break;
        }
        r--;
      }

      if (found) {
        i64 x = min(facp[l], fbcp[r]);
        res = max(res, l + r);
        facp[l] -= x;
        fbcp[r] -= x;
        temp -= x;
      }
    }

    cout << res << endl;
  }
  return 0;
}