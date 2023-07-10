#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using p64 = pair<i64, i64>;

const i64 INF = INT64_MAX / 4;

i64 djikstra(i64 start, i64 end, vector<vector<p64>> &graph) {
  vector<p64> res(graph.size(), {INF, -1});
  res[start] = {0, -1};

  priority_queue<p64, vector<p64>, greater<p64>> pq;
  pq.push({0, start});

  i64 extra = 0;
  i64 ways_to_reach = 1;

  while (!pq.empty()) {
    auto [distance, node] = pq.top();
    pq.pop();

    if (distance > res[node].first) {
      continue;
    }

    for (auto next : graph[node]) {
      i64 next_node = next.second;
      i64 next_distance = distance + next.first;

      if (next_distance == res[next_node].first) {
        if (next_node == end) {
          ways_to_reach++;
        } else {
          extra += next.first;
        }
      }

      if (next_distance < res[next_node].first) {
        res[next_node] = {next_distance, node};
        pq.push({next_distance, next_node});
      }
    }
  }

  return res[end].first * ways_to_reach + extra;
}

int main() {
  i64 nodes, n;
  cin >> nodes >> n;

  vector<vector<p64>> graph(nodes);

  for (i64 i = 0; i < n; i++) {
    i64 x, y, weight;
    cin >> x >> y >> weight;

    graph[x].push_back({weight, y});
    graph[y].push_back({weight, x});
  }

  cout << djikstra(0, nodes - 1, graph) * 2 << endl;

  return 0;
}