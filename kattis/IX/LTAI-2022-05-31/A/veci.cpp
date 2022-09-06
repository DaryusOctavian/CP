#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

vector<short> v;
vector<bool> used;
i64 res = 1e9;
i64 imp = 0;

void solve(i64 pos, i64 n, vector<i64> sol) {
  if (pos == n) {
    i64 temp = 0;
    for (auto x : sol) {
      temp *= 10;
      temp += v[x];
    }
    if (temp > imp) {
      res = min(res, temp);
    }
    return;
  }

  for (i64 i = 0; i < n; i++) {
    if (!used[i]) {
      used[i] = true;
      sol.push_back(i);
      solve(pos + 1, n, sol);
      sol.pop_back();
      used[i] = false;
    }
  }
}

int main() {
  char chr;
  imp = 0;
  while (cin >> chr) {
    v.push_back(chr - '0');
    used.push_back(false);
    imp *= 10;
    imp += chr - '0';
  }

  i64 n = v.size();
  vector<i64> sol;
  solve(0, n, sol);

  if (res == imp) {
    cout << 0 << endl;
  } else {
    cout << res << endl;
  }

  return 0;
}