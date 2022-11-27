/*
________  ________  ________  ________  ________ _________
|\   ___ \|\   __  \|\   ____\|\   __  \|\   ____\___   ___\
\ \  \_|\ \ \  \|\  \ \  \___|\ \  \|\  \ \  \___\|___ \  \_|
 \ \  \ \ \ \   _  _\ \_____  \ \  \  \ \  \       \ \  \
  \ \  \_\ \ \  \  \|____|\  \ \  \  \ \  \____   \ \  \
   \ \_______\ \__\ _\ ____\_\  \ \_______\ \_______\  \ \__\
    \|_______|\|__|\|__|\_________\|_______|\|_______|   \|__|
                       \|_________|
*/
#ifndef __AHA__HEADER
#define __AHA__HEADER

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
#define ft first
#define sd second
#define sz(x) (i6) x.size()
#define psb(x) push_back(x)
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pp(x) pop_back(x)
#define bg(x) x.begin()
#define ed(x) x.end()
#define col(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())
#define revsort(x) sort(x.rbegin(), x.rend())
#define rvs(x) reverse(x.begin(), x.end())

#define pq priority_queue
#define fn function
#ifdef LOCAL
// #define git stauDBG_MACRO_NO_WARNING
// #include <dbg.h>
using i128 = __int128_t;
#else
#define dbg(...)
#endif
#define endl '\n'

template <typename T> using vec = vector<T>;
template <typename T> using deq = deque<T>;
template <typename K, typename V> using umap = unordered_map<K, V>;

template <typename K, typename V> using hmap = cc_hash_table<K, V>;

using str = string;
using vb = vec<bool>;

using byte = int8_t;
using i3 = int32_t;
using i6 = int64_t;
using i64 = int64_t;
using u3 = uint32_t;
using u6 = uint64_t;
using u64 = uint64_t;

using d6 = long double;
using d64 = long double;

using p3 = pair<i3, i3>;
using vi3 = vec<i3>;
using vp3 = vec<p3>;

using p6 = pair<i6, i6>;
using p64 = pair<i64, i64>;
using vi6 = vec<i6>;
using vi64 = vec<i64>;
using vd6 = vec<d6>;
using vd64 = vec<d64>;
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
using bitmask = u64;

using graph = vv;
using matrix = vv;

const d6 EPS = 1 / 1000000.0;
const i6 INF = INT64_MAX / 4;
const i6 NINF = -INF;
const i6 ZERO = 0;
const i6 _0 = ZERO;
const i6 ONE = 1;
const i6 _1 = ONE;

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

template <typename T> inline T pop(vector<T> &stack) {
  T top = stack.back();
  stack.pop_back();
  return top;
}

template <typename T> inline T popb(deq<T> &que) {
  T top = que.back();
  que.pop_back();
  return top;
}

template <typename T> inline T popf(deq<T> &que) {
  T top = que.front();
  que.pop_front();
  return top;
}

template <typename T>
struct number_iterator : std::iterator<random_access_iterator_tag, T> {
  T v;
  number_iterator(T _v) : v(_v) {}
  operator T &() { return v; }
  T operator*() const { return v; }
};
template <typename T> struct number_range {
  T b, e;
  number_range(T b, T e) : b(b), e(e) {}
  number_iterator<T> begin() { return b; }
  number_iterator<T> end() { return e; }
};

template <typename T> number_range<T> range(T e) {
  return number_range<T>(0, e);
}

template <typename T> number_range<T> range(T b, T e) {
  return number_range<T>(b, e);
}
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  vi64 pre{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

  i64 n;
  cin >> n;
  vi64 v(n);
  for (auto &e : v) {
    str s;
    i64 a, b;
    char junk;
    cin >> s >> a >> junk >> b;

    e = pre[a] + b;
  }

  srt(v);
  i64 res = 0, mx = 0;
  bool after = false;
  if (367 - v.back() + v.front() > mx) {
    mx = 367 - v.back() + v.front();
    res = v.front() - 1;
  } else if (367 - v.back() + v.front() == mx) {
    if (!after) {
      if (v.front() - 1 > 331) {
        mx = 367 - v.back() + v.front();
        res = v.front() - 1;
        after = true;
      }
    }
  }
  for (i64 i = 1; i < n; i++) {
    if (v[i] - v[i - 1] > mx) {
      mx = v[i] - v[i - 1];
      res = v[i] - 1;
      after = false;
    } else if (v[i] - v[i - 1] == mx) {
      if (!after) {
        if (v[i] - 1 > 331) {
          mx = v[i] - v[i - 1];
          res = v[i] - 1;
          after = true;
        }
      }
    }
  }
  if (res <= 0) {
    res += 365;
  }

  for (i64 i = 1; i < sz(pre); i++) {
    if (pre[i] >= res) {
      i64 e1, e2 = i - 1;
      if (e2 < 10) {
        cout << "0" << e2;
      } else {
        cout << e2;
      }

      cout << "-";

      e1 = res - pre[e2];
      if (e1 < 10) {
        cout << "0" << e1;
      } else {
        cout << e1;
      }
      break;
    }
  }

  return 0;
}

/*
331
*/