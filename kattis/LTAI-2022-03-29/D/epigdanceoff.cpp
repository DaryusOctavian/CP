#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  vector<string> d(n);

  for (i64 i = 0; i < n; i++) {
    cin >> d[i];
  }

  i64 res = 0;
  for (i64 i = 0; i < m; i++) {
    bool ok = true;
    for (i64 j = 0; j < n; j++) {
      if (d[j][i] != '_') {
        ok = false;
        break;
      }
    }
    if (ok)
      res++;
  }

  cout << res + 1 << endl;
  return 0;
}
