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

class country {
public:
  i64 g = 0, s = 0, b = 0;
  string name = "";

  country(str st = "", i64 x = 0, i64 y = 0, i64 z = 0) {
    name = st;
    g = x;
    s = y;
    b = z;
  }

  bool operator==(country x) {
    d64 a, b, c;
    a = (d64)g / (d64)x.g;
    b = (d64)s / (d64)x.s;
    c = (d64)b / (d64)x.b;

    if (a == b && b == c && a == c) {
      return true;
    }
    return false;
  }

  bool operator<(country x) {
    if (g < x.g || s < x.s || b < x.b) {
      return true;
    }
    return false;
  }

  bool operator>(country x) {
    if (g > x.g || s > x.s || b > x.b) {
      return true;
    }
    return false;
  }

  bool operator!=(country x) {
    if (!(g == x.g && s == x.s && b == x.b)) {
      return true;
    }
    if (name != x.name) {
      return false;
    }
    return false;
  }

  country operator=(country x) {
    name = x.name;
    g = x.g;
    s = x.s;
    b = x.b;
    return country(name, g, s, b);
  }

  i64 sum() { return g + s + b; }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  i64 tc;
  while (true) {
    cin >> tc;
    if (tc == 0) {
      return 0;
    }

    country canada;
    vec<country> v;
    v.reserve(tc - 1);
    for (i64 iii : range(tc)) {
      str name;
      i64 a, b, c;

      cin >> name >> a >> b >> c;
      if (name == "Canada") {
        canada = country(name, a, b, c);
      } else {
        v.push_back(country(name, a, b, c));
      }
    }

    bool found = false;
    country c1("", 0, 0, 0), c2("", 1e18, 1e18, 1e18);
    bitset<3> bs(7);
    for (auto &c : v) {
      if (c.g >= canada.g) {
        bs[0] = false;
      }
      if (c.s >= canada.s) {
        bs[1] = false;
      }
      if (c.b >= canada.b) {
        bs[2] = false;
      }
      c1.g = max(c1.g, c.g);
      c1.s = max(c1.s, c.s);
      c1.b = max(c1.b, c.b);
      c2.g = min(c2.g, c.g);
      c2.s = min(c2.s, c.s);
      c2.b = min(c2.b, c.b);
    }

    // if (!(bs == 0)) {
    //   found = true;
    // }

    if (!(c1 == canada) && (c1 < canada)) {
      found = true;
    }
    if (!(c2 == canada) && (c2 > canada)) {
      found = true;
    }

    if (found) {
      cout << "Canada wins!\n";
    } else {
      cout << "Canada cannot win.\n";
    }
  }

  return 0;
}

/*
1 1 1
2 3 4
5 5 5
*/