#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> v(n);
  for (i64 i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "mumble") {
      v[i] = -1;
    } else {
      v[i] = stoi(s);
    }
  }

  i64 i = 0;
  i64 nu = -1;
  while (i < n) {
    if (v[i] == -1) {
      i++;
      continue;
    } else {
      nu = v[i];
      i++;
      break;
    }
  }
  while (i < n) {
    if (v[i] == -1) {
      i++;
      nu++;
      continue;
    }
    if (v[i] == ++nu) {
      i++;
    } else {
      cout << "something is fishy" << endl;
      return 0;
    }
  }
  cout << "makes sense" << endl;
}