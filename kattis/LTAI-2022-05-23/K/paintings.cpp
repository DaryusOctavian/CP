#ifndef __AHA__HEADER
#define __AHA__HEADER

#include <bits/stdc++.h>
using namespace std;
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
#define ft first
#define sd second
#define sz(x) (i6) x.size()
#define psb(x) push_back(x)
#define ppb() pop_back()
#define bg(x) x.begin()
#define ed(x) x.end()
#define col(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())

#define pq priority_queue
#define fn function
#ifdef LOCAL
// #define git stauDBG_MACRO_NO_WARNING
// #include <dbg.h>
#else
#define dbg(...)
#endif
#define endl '\n'

template <typename T> using vec = vector<T>;
template <typename T> using deq = deque<T>;
template <typename K, typename V> using hmap = unordered_map<K, V>;

using str = string;
using vb = vec<bool>;

using i3 = int32_t;
using i6 = int64_t;
using i64 = int64_t;
using u3 = uint32_t;
using u6 = uint64_t;
using u64 = uint64_t;

using d6 = long double;
using d64 = long double;

using p3 = pair<i3, i3>;
using p64 = pair<i64, i64>;
using vi3 = vec<i3>;
using vp3 = vec<p3>;

using p6 = pair<i6, i6>;
using vi6 = vec<i6>;
using vi64 = vec<i64>;
using vp6 = vec<p6>;
using vp64 = vec<p64>;
using vv = vec<vi6>;

using dp6 = deq<p6>;
using di6 = deq<i6>;

using mi6 = map<i6, i6>;
using mp6 = map<p6, i6>;
using si6 = set<i6>;
using hi6 = hmap<i6, i6>;

using bs = bitset<64>;

using graph = vv;
using matrix = vv;

const d6 EPS = 1 / 1000000.0;
const i6 INF = INT64_MAX / 4;
const i6 NINF = -INF;
const i6 ZERO = 0;
const i6 ONE = 1;

namespace std {
template <typename T1, typename T2> struct hash<pair<T1, T2>> {
  std::size_t operator()(const pair<T1, T2> &pair) const noexcept {
    return hash<T1>()(pair.first) ^ hash<T2>()(pair.second);
  }
};
} // namespace std

template <typename T1, typename T2>
istream &operator>>(istream &stream, pair<T1, T2> &p) {
  stream >> p.ft;
  stream >> p.sd;
  return stream;
}

template <typename T1, typename T2>
ostream &operator<<(ostream &stream, const pair<T1, T2> &p) {
  return stream << p.ft << " " << p.sd;
}

template <typename T> istream &operator>>(istream &stream, vec<T> &v) {
  if (v.empty()) {
    u6 len;
    stream >> len;
    v.assign(len, T());
  }
  for (auto i = 0; i < sz(v); i++) {
    stream >> v[i];
  }
  return stream;
}

template <typename T> ostream &operator<<(ostream &stream, const vec<T> &v) {
  if (!v.empty()) {
    stream << v[0];
  }
  for (auto i = 1; i < sz(v); i++) {
    stream << " " << v[i];
  }
  return stream;
}

template <typename T> istream &operator>>(istream &stream, deq<T> &v) {
  if (v.empty()) {
    u6 len;
    stream >> len;
    v.assign(len, T());
  }
  for (auto i = 0; i < sz(v); i++) {
    stream >> v[i];
  }
  return stream;
}

template <typename T> ostream &operator<<(ostream &stream, const deq<T> &v) {
  if (!v.empty()) {
    stream << v[0];
  }
  for (auto i = 1; i < sz(v); i++) {
    stream << " " << v[i];
  }
  return stream;
}
#endif

vp64 exc;
i64 res;
vi64 best, v;
vec<string> m1;
map<string, i64> m2;

void solve(i64 n, i64 pos, vi64 sol) {
  if (pos == n) {
    res++;
    if (res == 1) {
      best = sol;
    }
    return;
  }

  for (auto x : v) {
    bool found = false;
    for (auto y : sol) {
      if (x == y) {
        found = true;
        break;
      }
    }
    if (!found) {
      sol.psb(x);
      bool good = true;
      for (auto y : exc) {
        for (i64 i = 0; i < sz(sol) - 1; i++) {
          if (sol[i] == y.ft && sol[i + 1] == y.sd) {
            good = false;
          }
          if (sol[i] == y.sd && sol[i + 1] == y.ft) {
            good = false;
          }
        }
      }
      if (good) {
        solve(n, pos + 1, sol);
      }
      sol.ppb();
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 a;
    cin >> a;
    v.resize(a);
    m1.resize(a + 1);
    m2.clear();
    for (i64 i = 1; i <= a; i++) {
      string x;
      cin >> x;
      m1[i] = x;
      m2[x] = i;
      v[i - 1] = i;
    }
    i64 b;
    cin >> b;
    exc.resize(b);
    for (auto &i : exc) {
      string x, y;
      cin >> x >> y;
      i.ft = m2[x];
      i.sd = m2[y];
    }

    res = 0;
    best.clear();
    vi64 sol;
    solve(a, 0, sol);

    cout << res << endl;
    for (auto x : best) {
      cout << m1[x] << " ";
    }
    cout << endl;
  }

  return 0;
}