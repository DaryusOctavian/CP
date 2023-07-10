#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

using weighted_graph = vector<vector<pair<i64, i64>>>;

const i64 INF = INT64_MAX / 4;

vector<pair<i64, i64>> djikstra(i64 start, weighted_graph& graph) {
  vector<pair<i64, i64>> paths(graph.size(), {INF, -1});
  priority_queue<pair<i64, i64>, vector<pair<i64, i64>>, greater<pair<i64, i64>>> pq;

  pq.push({0, start});
  paths[start] = {0, -1};

  while (!pq.empty()) {
    auto [distance, node] = pq.top();
    pq.pop();

    if (distance > paths[node].first) {
      continue;
    }

    for (auto [dist, next] : graph[node]) {
      i64 next_distance = distance + dist;

      if (next_distance < paths[next].first) {
        paths[next] = {next_distance, node};
        pq.push({next_distance, next});
      }
    }
  }

  vector<pair<i64, i64>> res(graph.size(), {INF, -1});

  pq.push({0, start});
  res[start] = {0, -1};

  while (!pq.empty()) {
    auto [distance, node] = pq.top();
    pq.pop();

    if (distance > res[node].first) {
      continue;
    }

    for (auto [dist, next] : graph[node]) {
      i64 next_distance = distance + dist;

      if (next_distance < res[next].first and paths[next].second != node) {
        res[next] = {next_distance, node};
        pq.push({next_distance, next});
      }
    }
  }

  return res;
}

int main() {
  i64 nodes, edges;
  cin >> nodes >> edges;
  weighted_graph graph(nodes);

  for (i64 i = 0; i < edges; i++) {
    i64 x, y, weight;
    cin >> x >> y >> weight;

    graph[x].push_back({weight, y});
    graph[y].push_back({weight, x});
  }

  auto paths = djikstra(0, graph);

  for (i64 i = 0; i < paths.size(); i++) {
    cout << i << ": " << paths[i].first << " " << paths[i].second << endl;
  }

  return 0;
}