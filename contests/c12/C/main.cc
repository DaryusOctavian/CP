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

  vi64 pre = {1,    2,    4,    7,    11,   16,   22,   29,   37,   46,   56,
              67,   79,   92,   106,  121,  137,  154,  172,  191,  211,  232,
              254,  277,  301,  326,  352,  379,  407,  436,  466,  497,  529,
              562,  596,  631,  667,  704,  742,  781,  821,  862,  904,  947,
              991,  1036, 1082, 1129, 1177, 1226, 1276, 1327, 1379, 1432, 1486,
              1541, 1597, 1654, 1712, 1771, 1831, 1892, 1954, 2017, 2081, 2146,
              2212, 2279, 2347, 2416, 2486, 2557, 2629, 2702, 2776, 2851, 2927,
              3004, 3082, 3161, 3241, 3322, 3404, 3487, 3571, 3656, 3742, 3829,
              3917, 4006, 4096, 4187, 4279, 4372, 4466, 4561, 4657, 4754, 4852};

  i64 tc;
  cin >> tc;
  while (tc--) {
    i64 n, k;
    cin >> n >> k;

    vi64 res;
    i64 eep = k - n;

    i64 crt = 1, ind = 2;
    while (sz(res) < n) {
      res.psb(crt);
      if ((ind - 1) <= eep) {
        crt += ind;
        eep -= (ind - 1);
        ind++;
      } else {
        crt++;
      }
    }

    cout << res << endl;
  }

  return 0;
}

/*

*/