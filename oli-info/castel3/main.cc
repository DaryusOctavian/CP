#include <bits/stdc++.h>

using namespace std;

using i64 = int32_t;

i64 problemType, n;

i64 bfs(i64 pos, vector<vector<i64>> g, vector<bool> &vis,
        pair<i64, i64> &eep) {
  i64 res = 0;
  deque<i64> q;
  q.push_back(pos);

  while (!q.empty()) {
    auto crt = q.front();
    q.pop_front();
    vis[crt] = true;
    res++;
    if (crt % n == eep.second) {
      if (crt / n > eep.first) {
        eep = {crt / n, crt % n};
      }
    } else if (crt % n > eep.second) {
      if (crt / n > eep.first) {
        eep = {crt / n, crt % n};
      }
    }
    cout << crt / n << " " << crt % n << " ";
    cout << eep.first << " " << eep.second << endl;

    for (auto &e : g[crt]) {
      if (!vis[e]) {
        q.push_back(e);
        vis[e] = true;
      }
    }
  }

  return res;
}

int main() {
  ifstream cin{"castel3.in"};
  ofstream cout{"castel3.out"};

  cin >> problemType >> n;

  vector<vector<i64>> g(n * n);
  vector<bool> vis(n * n);
  vector<pair<short, short>> corners;
  corners.reserve(512);

  for (i64 i = 0; i < n; i++) {
    for (i64 j = 0; j < n; j++) {
      unsigned short x;
      cin >> x;
      bitset<4> b(x);
      if (j > 0 && !b[0]) {
        g[i * n + j].push_back(i * n + j - 1);
      }
      if (i + 1 < n && !b[1]) {
        g[i * n + j].push_back((i + 1) * n + j);
      }
      if (j + 1 < n && !b[2]) {
        g[i * n + j].push_back(i * n + j + 1);
      }
      if (i > 0 && !b[3]) {
        g[i * n + j].push_back((i - 1) * n + j);
      }

      if (x == 3 or x == 6 or x == 9 or x == 12) { // 2 sides
        corners.push_back({i, j});
      }
      if (x == 7 or x == 11 or x == 13 or x == 14) { // 3 sides
        corners.push_back({i, j});
      }
      if (x == 15) { // 4 sides
        corners.push_back({i, j});
      }
    }
  }

  i64 count = 0, mx = 0;
  pair<i64, i64> rightmost = {0, 0}, leftmost = {0, 0};
  for (auto &e : corners) {
    if (!vis[e.first * n + e.second]) {
      pair<i64, i64> crtrightmost = {0, 0};
      i64 crt = bfs(e.first * n + e.second, g, vis, crtrightmost);
      if (crt > mx) {
        mx = crt;
        rightmost = crtrightmost;
        leftmost = {e.first, e.second};
      }
      count++;
    }
  }

  if (problemType == 1) {
    cout << count << endl;
  } else if (problemType == 2) {
    cout << mx << endl;
  } else {
    cout << leftmost.first + 1 << " " << leftmost.second + 1 << " "
         << rightmost.first + 1 << " " << rightmost.second + 1;
  }

  // for (i64 i = 0; i < n * n; i++) {
  //   cout << i << ": ";
  //   for (auto &e : g[i]) {
  //     cout << e << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}

/*
bitset<4> b(5);
0101
*/