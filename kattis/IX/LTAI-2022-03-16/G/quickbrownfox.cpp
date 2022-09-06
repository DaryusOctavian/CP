#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  string line;
  cin >> n;
  getline(cin, line);
  vector<bool> chars;
  for (i64 i = 0; i < n; i++) {
    chars.resize(26, false);
    for (i64 j = 0; j < chars.size(); j++) {
      chars[j] = false;
    }

    getline(cin, line);
    for (i64 j = 0; j < line.length(); j++) {
      if (line[j] > 64 && line[j] < 91) {
        chars[line[j] - 65] = true;
      } else if (line[j] > 96 && line[j] < 123) {
        chars[line[j] - 97] = true;
      }
    }

    bool found = false;
    for (i64 j = 0; j < chars.size(); j++) {
      if (!chars[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "pangram" << endl;
    } else {
      cout << "missing ";
      for (i64 j = 0; j < chars.size(); j++) {
        if (!chars[j]) {
          cout << (char)(j + 97);
        }
      }
      cout << endl;
    }
  }
  return 0;
}