#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, vol = 7;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    string trash, line;
    cin >> trash >> line;
    if (line == "op!" && vol < 10) {
      vol++;
      continue;
    }
    if (line == "ned!" && vol > 0) {
      vol--;
      continue;
    }
  }

  cout << vol << endl;
  return 0;
}