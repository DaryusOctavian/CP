#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<bool> v(1001, false);
  for (i64 i = 0; i < n; i++) {
    i64 x;
    cin >> x;
    v[x] = true;
  }

  i64 i = 0;
  while (i < 1001) {
    if (v[i]) {
      n = 1;
      while (v[i + 1]) {
        n++;
        i++;
      }
      if (n > 2) {
        cout << i - n + 1 << '-' << i << " ";
      } else if (n == 2) {
        cout << i - 1 << " " << i << " ";
      } else {
        cout << i << " ";
      }
      i++;
    } else {
      i++;
    }
  }
  cout << endl;
  return 0;
}