#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  string line;
  cin >> line;
  vector<i64> v(26, 0);
  for (i64 i = 0; i < line.size(); i++) {
    v[line[i] - 97]++;
  }
  sort(v.begin(), v.end());

  if (v[25] > 1) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }
  return 0;
}