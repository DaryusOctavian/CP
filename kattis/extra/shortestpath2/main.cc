#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using p64 = pair<i64, i64>;
template <typename T> using vec = vector<T>;

const i64 INF = INT64_MAX / 2;

class Edge {
  public:
    i64 next, start_time, period, distance;
};

vector<p64> djikstra(i64 start, vec<vec<Edge>> &graph) {
    vec<p64> res(graph.size(), {INF, -1});  // {time, parent}

    priority_queue<p64, vec<p64>, greater<p64>> pq;  // {time, node}
    pq.push({0, start});
    res[start] = {0, -1};

    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();

        if (res[node].first < time) {
            continue;
        }

        for (auto [next, start_time, period, distance] : graph[node]) {
            i64 next_time;
            if (time < start_time) {
                next_time = start_time;
            } else if (period == 0) {
                next_time = INF - distance;
            } else if ((time - start_time) % period == 0) {
                next_time = time;
            } else {
                next_time = ((time - start_time) / period) * (period);
                next_time += period + start_time;
            }
            next_time += distance;

            if (next_time < res[next].first) {
                pq.push({next_time, next});
                res[next] = {next_time, node};
            }
        }
    }

    return res;
}

int main() {
    while (true) {
        i64 nodes, edges, queries, starting_node;
        cin >> nodes >> edges >> queries >> starting_node;
        if (nodes == 0 and edges == 0 and queries == 0 and starting_node == 0) {
            return 0;
        }

        vec<vec<Edge>> graph(nodes);
        for (i64 i = 0; i < edges; i++) {
            i64 x, y, start_time, period, distance;
            cin >> x >> y >> start_time >> period >> distance;

            graph[x].push_back(Edge{y, start_time, period, distance});
            // graph[y].push_back(Edge{x, start_time, period, distance});
        }

        auto distances = djikstra(starting_node, graph);

        while (queries--) {
            i64 end;
            cin >> end;

            if (distances[end].first >= INF) {
                cout << "Impossible" << endl;
            } else {
                cout << distances[end].first << endl;
            }
        }
        cout << endl;
    }
}