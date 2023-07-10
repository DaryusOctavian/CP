#include <bits/stdc++.h>

using namespace std;

#define let auto

using i64 = int64_t;
using p64 = pair<i64, i64>;
template <typename T>
using vec = vector<T>;

const i64 INF = INT64_MAX / 4;
const i64 TANK_CAPACITY = 101;

i64 djikstra(i64 start, i64 end, i64 capacity, vec<vec<p64>> &roads, vec<i64> &prices) {
  vec<vec<p64>> res(roads.size(), vec<p64>(TANK_CAPACITY, {INF, -1}));              // {node, fuel} -> {price, parent}
  priority_queue<pair<i64, p64>, vec<pair<i64, p64>>, greater<pair<i64, p64>>> pq;  // {price, {fuel, node}}

  res[start][0] = {0, -1};
  pq.push({0, {0, start}});

  while (!pq.empty()) {
    let[price, fnn] = pq.top();
    let[fuel, node] = fnn;
    pq.pop();

    if (res[node][fuel].first < price) {
      continue;
    }

    if (node == end) {
      return price;
    }

    if (fuel < capacity and ((price + prices[node]) < res[node][fuel + 1].first)) {
      pq.push({price + prices[node], {fuel + 1, node}});
      res[node][fuel + 1].first = price + prices[node];
    }

    for (let[next, cost] : roads[node]) {
      if (cost <= fuel and (price < res[next][fuel - cost].first)) {
        pq.push({price, {fuel - cost, next}});
        res[next][fuel - cost] = {price, node};
      }
    }
  }

  return INF;
}

int main() {
  i64 cities, roads;
  cin >> cities >> roads;
  vec<i64> prices(cities);
  for (let &price : prices) {
    cin >> price;
  }
  vec<vec<p64>> mp(cities);
  for (i64 i = 0; i < roads; i++) {
    i64 x, y, distance;
    cin >> x >> y >> distance;

    mp[x].push_back({y, distance});
    mp[y].push_back({x, distance});
  }

  i64 queries;
  cin >> queries;
  while (queries--) {
    i64 capacity, start, end;
    cin >> capacity >> start >> end;

    let quickest = djikstra(start, end, capacity, mp, prices);

    if (quickest < INF) {
      cout << quickest << endl;
    } else {
      cout << "impossible" << endl;
    }
  }

  return 0;
}