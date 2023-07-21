#include <bits/stdc++.h>

using namespace std;

template <typename T> using vec = vector<T>;

void bfs(int start, vec<vec<int>> &graph, vec<bool> &vis) {
    deque<int> q;

    q.push_back(start);
    vis[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop_front();
        vis[node] = true;

        for (auto next : graph[node]) {
            if (!vis[next]) {
                vis[next] = true;
                q.push_back(next);
            }
        }
    }
}

vec<int> get_components(vec<vec<int>> &graph) {
    vec<int> components;
    vec<bool> vis(graph.size(), false);

    for (int i = 0; i < graph.size(); i++) {
        if (!vis[i]) {
            components.push_back(i);
            bfs(i, graph, vis);
        }
    }

    return components;
}

pair<int, int> get_furthest(int start, vec<vec<int>> &graph, vec<bool> &vis) {
    pair<int, int> res = {0, start};  // {distance, where it came from}

    vis[start] = true;

    for (auto next : graph[start]) {
        if (!vis[next]) {
            vis[next] = true;

            auto crt = get_furthest(next, graph, vis);
            crt.first += 1;
            if (crt.first > res.first) {
                res = crt;
            }

            vis[next] = false;
        }
    }

    return res;
}

int get_diameter(int start, vec<vec<int>> &graph) {
    vec<bool> vis(graph.size(), false);
    auto a = get_furthest(start, graph, vis);
    vis.assign(graph.size(), false);
    auto b = get_furthest(a.second, graph, vis);

    return max(a.first, b.first);
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    vec<vec<int>> graph(nodes);
    for (int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    auto components = get_components(graph);

    vec<int> diameters;
    for (auto node : components) {
        diameters.push_back(get_diameter(node, graph));
    }

    sort(diameters.begin(), diameters.end());

    while (diameters.size() > 1) {
        int wing1 = diameters.back() / 2;
        int wing2 = diameters.back() / 2;
        if (diameters.back() % 2 == 1) {
            wing1 += 1;
        }
        diameters.pop_back();

        int wing3 = diameters.back() / 2;
        int wing4 = diameters.back() / 2;
        if (diameters.back() % 2 == 1) {
            wing3 += 1;
        }
        diameters.pop_back();

        int a = wing1 + wing2;
        int b = wing3 + wing4;
        int c = wing1 + wing3 + 1;
        diameters.push_back(max({a, b, c}));
    }

    cout << diameters.front() << endl;

    return 0;
}