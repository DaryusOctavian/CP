#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

vector<bool> bfs(i64 start, vector<vector<i64>> &graph) {
  deque<i64> q;
  vector<bool> vis(graph.size(), false);
  q.push_back(start);

  vector<bool> res(graph.size(), false);

  while (!q.empty()) {
    i64 node = q.front();
    q.pop_front();
    vis[node] = true;

    i64 repped = false;
    for (auto &child : graph[node]) {
      // if (child < node) {
      //   continue;
      // }
      if (!vis[child]) {
        q.push_back(child);
        vis[child] = true;
        repped = true;
      }
    }

    if (!repped) {
      res[node] = true;
    }
  }

  return res;
}

int main() {
  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 n;
    cin >> n;
    vector<vector<i64>> graph(n + 1);
    for (i64 i = 0; i < n - 1; i++) {
      i64 x, y;
      cin >> x >> y;
      if (x < y) {
        graph[x].push_back(y);
      } else {
        graph[y].push_back(x);
      }
    }

    i64 queries;
    cin >> queries;
    while (queries--) {
      i64 x, y;
      cin >> x >> y;
      auto a = bfs(x, graph);
      auto b = bfs(y, graph);

      i64 sum1 = accumulate(a.begin(), a.end(), 0);
      i64 sum2 = accumulate(b.begin(), b.end(), 0);

      assert(sum1 > 0);
      assert(sum2 > 0);

      cout << sum1 * sum2 << endl;
    }
  }

  return 0;
}