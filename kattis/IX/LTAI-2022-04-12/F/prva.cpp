#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

/*
  i64 ans = 0;
  vector<i64> ps(26, 0);
  for (i64 i = 0; i < s.size(); i++) {
    // if (s[i] >= 'a' && s[i] <= 'z') {
    ps[s[i] - 'a']++;
    // }
  }

  for (i64 i = 0; i < 26; i++) {
    if (ps[i] > 0) {
      ans++;
    }
  }

  return ans;

*/

i64 counter(string s) {
  i64 res = 0;
  for (auto x : s) {
    res += x - 'a';
  }

  return res;
}

int main() {
  i64 a, b;
  cin >> a >> b;
  char mp[a][b];
  for (i64 i = 0; i < a; i++) {
    for (i64 j = 0; j < b; j++) {
      cin >> mp[i][j];
    }
  }

  string currLine, strRes;
  i64 res = 1e18;
  for (i64 i = 0; i < a; i++) {
    for (i64 j = 0; j < b; j++) {
      if (mp[i][j] == '#') {
        if (currLine.size() > 1) {
          if (counter(currLine) < res) {
            res = counter(currLine);
            strRes = currLine;
          }
        }
        currLine.clear();
      } else {
        currLine += mp[i][j];
      }
    }
    if (currLine.size() > 1) {
      if (counter(currLine) < res) {
        res = counter(currLine);
        strRes = currLine;
      }
    }
    currLine.clear();
  }

  for (i64 i = 0; i < b; i++) {
    for (i64 j = 0; j < a; j++) {
      if (mp[j][i] == '#') {
        if (currLine.size() > 1) {
          if (counter(currLine) < res) {
            res = counter(currLine);
            strRes = currLine;
          }
        }
        currLine.clear();
      } else {
        currLine += mp[j][i];
      }
    }
    if (currLine.size() > 1) {
      if (counter(currLine) < res) {
        res = counter(currLine);
        strRes = currLine;
      }
    }
    currLine.clear();
  }

  cout << strRes << endl;
  return 0;
}

/*
Alexia --->> 1st
Oanna --->> 2nd
Alexandra --->> 3rd
Antonio Carlos da Silva Corona --->> 4th
*/