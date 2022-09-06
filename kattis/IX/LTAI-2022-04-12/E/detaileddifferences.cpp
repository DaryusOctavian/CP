#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    string a, b;
    cin >> a >> b;
    vector<bool> same(a.size());
    for (int i = 0; i < a.size(); i++) {
      same[i] = a[i] == b[i];
    }

    cout << a << endl << b << endl;
    for (auto x : same) {
      if (x) {
        cout << ".";
      } else {
        cout << "*";
      }
    }
    cout << endl << endl;
  }
  return 0;
}
