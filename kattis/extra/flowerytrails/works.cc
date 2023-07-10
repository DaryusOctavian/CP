#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

const i64 INF = INT64_MAX / 4;

vector<i64> djikstra(i64 start, vector<vector<pair<i64, i64>>> &graph) {
  vector<i64> res(graph.size(), INF);
  priority_queue<pair<i64, i64>, vector<pair<i64, i64>>, greater<pair<i64, i64>>> pq;
  pq.push({0, start});

  while (!pq.empty()) {
    auto [distance, node] = pq.top();
    pq.pop();

    if (distance > res[node]) {
      continue;
    }
    res[node] = distance;

    for (auto [dist, next] : graph[node]) {
      i64 next_distance = dist + distance;

      if (next_distance < res[next]) {
        res[next] = next_distance;
        pq.push({next_distance, next});
      }
    }
  }

  return res;
}

int main() {
  i64 nodes, edges;
  cin >> nodes >> edges;

  vector<vector<pair<i64, i64>>> graph(nodes);

  for (i64 i = 0; i < edges; i++) {
    i64 x, y, weight;
    cin >> x >> y >> weight;

    graph[x].push_back({weight, y});
    graph[y].push_back({weight, x});
  }

  auto distances = djikstra(0, graph);

  deque<i64> q;
  q.push_back(nodes - 1);

  i64 res = 0;
  while (!q.empty()) {
    i64 node = q.front();
    q.pop_front();

    for (auto &[weight, next] : graph[node]) {
      if (weight != -1 and weight + distances[next] == distances[node]) {
        res += weight;
        weight = -1;

        if (next != 0) {
          q.push_back(next);
        }
      }
    }
  }

  cout << res * 2 << endl;

  return 0;
}