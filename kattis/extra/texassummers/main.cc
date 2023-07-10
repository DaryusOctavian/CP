#include <bits/stdc++.h>

using namespace std;

using sz = __uint128_t;

const sz INF = ((sz)1 << 126);

struct Point {
  int x, y;
};

inline int manhattan_distance(Point a, Point b) {
  return abs(a.x - b.x) + abs(a.y - b.y) - 1;
}

vector<pair<int, sz>> djikstra(int start, int end, vector<vector<sz>> &graph) {
  vector<pair<int, sz>> distances(graph.size(), {-1, INF});
  priority_queue<pair<int, sz>, vector<pair<int, sz>>, greater<pair<int, sz>>> pq;

  distances[start] = {-1, 0};
  pq.push({0, start});

  while (!pq.empty()) {
    auto [distance, node] = pq.top();
    pq.pop();

    if (node == end) {
      return distances;
    }

    if (distance > distances[node].second) {
      continue;
    }

    for (int next_node = 0; next_node < graph.size(); next_node++) {
      if (node == next_node) {
        continue;
      }

      sz next_distance = distance + graph[node][next_node];
      if (next_distance < distances[next_node].second) {
        pq.push({next_distance, next_node});
        distances[next_node] = {node, next_distance};
      }
    }
  }

  return distances;
}

int main() {
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  n = n + 2;
  Point points[n];
  for (int i = 0; i < n; i++) {
    cin >> points[i].x >> points[i].y;
  }

  vector<vector<sz>> graph(n, vector<sz>(n));
  for (int i = 0; i < n; i++) {
    graph[i][i] = 0;
    for (int j = i + 1; j < n; j++) {
      sz distance = manhattan_distance(points[i], points[j]);
      if (distance > 125) {
        distance = INF;
      } else {
        distance = ((sz)1 << distance);
      }

      graph[i][j] = distance;
      graph[j][i] = distance;
    }
  }

  auto distances = djikstra(n - 2, n - 1, graph);

  vector<int> res;
  res.reserve(1024);
  for (int current_node = n - 1; current_node != -1; current_node = distances[current_node].first) {
    res.push_back(current_node);
  }

  for (int i = res.size() - 2; i > 0; i--) {
    cout << res[i] << endl;
  }

  if (res.size() == 2) {
    cout << "-" << endl;
  }

  return 0;
}