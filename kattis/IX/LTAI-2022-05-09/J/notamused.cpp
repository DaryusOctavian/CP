#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
  string s;
  i64 day = 0;
  map<string, i64> m;
  while (!cin.eof()) {
    cin >> s;
    if (s == "OPEN") {
      day++;
    } else if (s == "CLOSE") {
      cout << "Day " << day << endl;
      for (auto x : m) {
        cout << x.first << " $" << setprecision(2) << fixed << (d6)x.second / 10
             << endl;
      }
      m.clear();
      cout << endl;
      s = "nope";
    } else {
      if (s == "ENTER") {
        cin >> s;
        i64 x;
        cin >> x;
        m[s] -= x;
      } else {
        cin >> s;
        i64 x;
        cin >> x;
        m[s] += x;
      }
    }
  }
}