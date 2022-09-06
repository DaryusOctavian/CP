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

/*
9)in appearence, the jellyfish is descrived as resembling two upside-down dishes
10) because of the como -->enemies
11) -->winter
12) -->wind
13) -->(sandy) beaches
14) -->(person's) head
15) -->shallow
16) -->heart rate/pulse
17) -->internal organ
*/