#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using p64 = pair<i64, i64>;

const i64 INF = INT64_MAX / 8;

bool fits(p64 pos, vector<vector<i64>> &block) {
  if (pos.first < 0 or pos.second < 0) {
    return false;
  }
  if (pos.first >= block.size() or pos.second >= block.front().size()) {
    return false;
  }

  return true;
}

vector<vector<pair<i64, p64>>> djikstra(p64 start, vector<vector<i64>> &block) {
  i64 next_x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
  i64 next_y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

  vector<vector<pair<i64, p64>>> res(block.size(), vector<pair<i64, p64>>(block.front().size(), {INF, {-1, -1}}));
  res[start.first][start.second].first = block[start.first][start.second];

  priority_queue<pair<i64, p64>, vector<pair<i64, p64>>, greater<pair<i64, p64>>> pq;
  pq.push({block[start.first][start.second], start});

  while (!pq.empty()) {
    auto [distance, pos] = pq.top();
    pq.pop();

    if (distance > res[pos.first][pos.second].first) {
      continue;
    }

    if (pos.first == block.size() - 1) {
      return res;
    }

    for (i64 k = 0; k < 8; k++) {
      p64 next_pos = {pos.first + next_x[k], pos.second + next_y[k]};
      if (!fits(next_pos, block)) {
        continue;
      }

      i64 next_distance = distance + block[next_pos.first][next_pos.second];

      if (next_distance < res[next_pos.first][next_pos.second].first) {
        pq.push({next_distance, next_pos});
        res[next_pos.first][next_pos.second] = {next_distance, pos};
      }
    }
  }

  return res;
}

i64 min_of_line(vector<pair<i64, p64>> &v) {
  i64 res = INF;
  for (auto &e : v) {
    res = min(res, e.first);
  }

  return res;
}

int main() {
  i64 height, width;
  while (cin >> height >> width) {
    if (height == 0 and width == 0) {
      return 0;
    }

    vector<vector<i64>> block(height, vector<i64>(width));
    for (auto &line : block) {
      for (auto &e : line) {
        char x;
        cin >> x;
        e = (x - '0');
      }
    }

    auto res = djikstra({0, 0}, block);
    for (i64 k = 1; k < width; k++) {
      auto crt = djikstra({0, k}, block);
      if (min_of_line(crt.back()) < min_of_line(res.back())) {
        res = crt;
      }
    }

    vector<p64> path;
    p64 pos = {height - 1, 0};
    for (i64 k = 0; k < width; k++) {
      if (res.back()[k].first < res.back()[pos.second].first) {
        pos = {height - 1, k};
      }
    }

    while (!(pos.first == -1 and pos.second == -1)) {
      path.push_back(pos);
      pos = res[pos.first][pos.second].second;
    }

    for (auto &e : path) {
      block[e.first][e.second] = -1;
    }

    for (auto &line : block) {
      for (auto &e : line) {
        if (e == -1) {
          cout << ' ';
        } else {
          cout << e;
        }
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}