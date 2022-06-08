#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 cnt = 0;
  bool found = false;
  while (!cin.eof()) {
    cnt++;
    string s;
    getline(cin, s);
    // find string "FBI" in string s
    for (i64 i = 0; i < s.size() - 2; i++) {
      if (s[i] == 'F' && s[i + 1] == 'B' && s[i + 2] == 'I') {
        cout << cnt << " ";
        found = true;
        break;
      }
    }
  }

  if (!found) {
    cout << "HE GOT AWAY!" << endl;
  }

  return 0;
}