#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  ifstream cin{"input.txt"};
  ofstream cout{"main.out"};

  i64 n;
  cin >> n;
  vector<i64> a;
  vector<bool> b(n);

  i64 x;
  while (cin >> x) {
    a.push_back(x);
  }

  bool found = false;
  i64 res = 0;
  for (i64 i = 0; i < a.size() - n; i++) {
    i64 sum = 0;
    for (i64 j = i; j < i + n; j++) {
      sum += a[j];
      b[a[j] % n] = true;
    }

    bool eep = true;
    for (auto e : b) {
      if (!e) {
        eep = false;
        break;
      }
    }

    for (auto e : b) {
      e = false;
    }

    if (eep) {
      found = true;
      res = max(sum, res);
    }
  }

  if (found) {
    cout << res << endl;
  } else {
    cout << "NU EXISTA" << endl;
  }

  return 0;
}