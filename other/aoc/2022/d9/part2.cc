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

vp64 eep1 = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vp64 eep2 = {{-1, 1}, {1, 1}, {1, -1}, {-1, -1}};

i64 manhatt(p64 a, p64 b) { return (abs(a.ft - b.ft) + abs(a.sd - b.sd)); }

bool notondiag(p64 a, p64 b) {
  if ((a.sd == b.sd || a.ft == b.ft)) {
    return true;
  }
  return false;
}

void move(char dir, vp64 &snail, set<p64> &s) {
  s.insert(snail.back());

  if (dir == 'U') {
    snail.front().ft--;
  }
  if (dir == 'D') {
    snail.front().ft++;
  }
  if (dir == 'L') {
    snail.front().sd--;
  }
  if (dir == 'R') {
    snail.front().sd++;
  }

  for (i64 i : range((i64)1, sz(snail))) {
    if (manhatt(snail[i - 1], snail[i]) == 2 &&
        notondiag(snail[i - 1], snail[i])) {
      for (auto e : eep1) {
        i64 x = snail[i].ft + e.ft;
        i64 y = snail[i].sd + e.sd;
        if (manhatt(snail[i - 1], {x, y}) < 2) {
          snail[i] = {x, y};
          break;
        }
      }
    } else if (manhatt(snail[i - 1], snail[i]) > 2) {
      for (auto e : eep2) {
        i64 x = snail[i].ft + e.ft;
        i64 y = snail[i].sd + e.sd;
        if (manhatt(snail[i - 1], {x, y}) <= 2) {
          snail[i] = {x, y};
          break;
        }
      }
    }
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  vp64 snail(10, {0, 0});

  set<p64> res;
  while (!cin.eof()) {
    char dir;
    i64 cnt;
    cin >> dir >> cnt;

    for (i64 i : range(cnt)) {
      move(dir, snail, res);
      cout << snail.back() << endl;
    }
    res.insert(snail.back());
  }

  cout << res.size() << endl;

  return 0;
}

/*
0 1 2 3 4 5 6 7
1         .
2       .
3     .
4 . .
5
6
7
A(4, 1);
B(1, 4);

0 1      0 0      0 0      0 0      0 0      0 0      0 0       0 0 0 0 0 0
0 2      0 1      0 0      0 0      0 0      0 0      0 0       0 0 0 0 0 0
0 3      0 2      0 1      0 0      0 0      0 0      0 0       0 0 0 0 0 0
0 4      0 3      0 2      0 1      0 0      0 0      0 0       0 0 0 0 0 0
0 5      0 4      0 3      0 2      0 1      0 0      0 0       0 0 0 0 0 0
-1 5     0 4      0 3      0 2      0 1      0 0      0 0       0 0 0 0 0 0
-2 5     -1 5     -1 4     -1 3     -1 2     -1 1     0 0       0 0 0 0 0 0
-3 5     -2 5     -1 4     -1 3     -1 2     -1 1     0 0       0 0 0 0 0 0
-4 5     -3 5     -2 5     -2 4     -2 3     -2 2     0 0       0 0 0 0 0 0
-5 5     -4 5     -3 5     -2 4     -2 3     -2 2     0 0       0 0 0 0 0 0
-6 5     -5 5     -4 5     -3 5     -3 4     -3 3     0 0       0 0 0 0 0 0
-7 5     -6 5     -5 5     -4 5     -3 4     -3 3     0 0       0 0 0 0 0 0
-8 5     -7 5     -6 5     -5 5     -4 5     -4 4     0 0       0 0 0 0 0 0
-8 4     -7 5     -6 5     -5 5     -4 5     -4 4     0 0       0 0 0 0 0 0
-8 3     -8 4     -7 4     -6 4     -5 4     -4 4     0 0       0 0 0 0 0 0
-8 2     -8 3     -7 4     -6 4     -5 4     -4 4     0 0       0 0 0 0 0 0
-8 1     -8 2     -8 3     -7 3     -6 3     -5 3     0 0       0 0 0 0 0 0
-8 0     -8 1     -8 2     -7 3     -6 3     -5 3     0 0       0 0 0 0 0 0
-8 -1    -8 0     -8 1     -8 2     -7 2     -6 2     0 0       0 0 0 0 0 0
-8 -2    -8 -1    -8 0     -8 1     -7 2     -6 2     0 0       0 0 0 0 0 0
-8 -3    -8 -2    -8 -1    -8 0     -8 1     -7 1     0 0       0 0 0 0 0 0
-7 -3    -8 -2    -8 -1    -8 0     -8 1     -7 1     0 0       0 0 0 0 0 0
-6 -3    -7 -3    -7 -2    -7 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 -3    -6 -3    -7 -2    -7 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 -2    -6 -3    -7 -2    -7 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 -1    -5 -2    -6 -2    -7 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 0     -5 -1    -6 -2    -7 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 1     -5 0     -5 -1    -6 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 2     -5 1     -5 0     -6 -1    -7 0     -7 1     0 0       0 0 0 0 0 0
-5 3     -5 2     -5 1     -5 0     -6 0     -7 1     0 0       0 0 0 0 0 0
-5 4     -5 3     -5 2     -5 1     -6 0     -7 1     0 0       0 0 0 0 0 0
-5 5     -5 4     -5 3     -5 2     -5 1     -6 1     0 0       0 0 0 0 0 0
-5 6     -5 5     -5 4     -5 3     -5 2     -6 1     0 0       0 0 0 0 0 0
-5 7     -5 6     -5 5     -5 4     -5 3     -5 2     0 0       0 0 0 0 0 0
-5 8     -5 7     -5 6     -5 5     -5 4     -5 3     0 0       0 0 0 0 0 0
-5 9     -5 8     -5 7     -5 6     -5 5     -5 4     0 0       0 0 0 0 0 0
-5 10    -5 9     -5 8     -5 7     -5 6     -5 5     0 0       0 0 0 0 0 0
-5 11    -5 10    -5 9     -5 8     -5 7     -5 6     0 0       0 0 0 0 0 0
-5 12    -5 11    -5 10    -5 9     -5 8     -5 7     0 0       0 0 0 0 0 0
-5 13    -5 12    -5 11    -5 10    -5 9     -5 8     0 0       0 0 0 0 0 0
-5 14    -5 13    -5 12    -5 11    -5 10    -5 9     0 0       0 0 0 0 0 0
-4 14    -5 13    -5 12    -5 11    -5 10    -5 9     0 0       0 0 0 0 0 0
-3 14    -4 14    -4 13    -4 12    -4 11    -4 10    0 0       0 0 0 0 0 0
-2 14    -3 14    -4 13    -4 12    -4 11    -4 10    0 0       0 0 0 0 0 0
-1 14    -2 14    -3 14    -3 13    -3 12    -3 11    0 0       0 0 0 0 0 0
0 14     -1 14    -2 14    -3 13    -3 12    -3 11    0 0       0 0 0 0 0 0
1 14     0 14     -1 14    -2 14    -2 13    -2 12    0 0       0 0 0 0 0 0
2 14     1 14     0 14     -1 14    -2 13    -2 12    0 0       0 0 0 0 0 0
3 14     2 14     1 14     0 14     -1 14    -1 13    0 0       0 0 0 0 0 0
4 14     3 14     2 14     1 14     0 14     -1 13    0 0       0 0 0 0 0 0
5 14     4 14     3 14     2 14     1 14     0 14     0 0       0 0 0 0 0 0
5 13     4 14     3 14     2 14     1 14     0 14     0 0       0 0 0 0 0 0
5 12     5 13     4 13     3 13     2 13     1 13     0 0       0 0 0 0 0 0
5 11     5 12     4 13     3 13     2 13     1 13     0 0       0 0 0 0 0 0
5 10     5 11     5 12     4 12     3 12     2 12     0 0       0 0 0 0 0 0
5 9      5 10     5 11     4 12     3 12     2 12     0 0       0 0 0 0 0 0
5 8      5 9      5 10     5 11     4 11     3 11     0 0       0 0 0 0 0 0
5 7      5 8      5 9      5 10     4 11     3 11     0 0       0 0 0 0 0 0
5 6      5 7      5 8      5 9      5 10     4 10     0 0       0 0 0 0 0 0
5 5      5 6      5 7      5 8      5 9      4 10     0 0       0 0 0 0 0 0
5 4      5 5      5 6      5 7      5 8      5 9      0 0       0 0 0 0 0 0
5 3      5 4      5 5      5 6      5 7      5 8      0 0       0 0 0 0 0 0
5 2      5 3      5 4      5 5      5 6      5 7      0 0       0 0 0 0 0 0
5 1      5 2      5 3      5 4      5 5      5 6      0 0       0 0 0 0 0 0
5 0      5 1      5 2      5 3      5 4      5 5      0 0       0 0 0 0 0 0
5 -1     5 0      5 1      5 2      5 3      5 4      0 0       0 0 0 0 0 0
5 -2     5 -1     5 0      5 1      5 2      5 3      0 0       0 0 0 0 0 0
5 -3     5 -2     5 -1     5 0      5 1      5 2      0 0       0 0 0 0 0 0
5 -4     5 -3     5 -2     5 -1     5 0      5 1      0 0       0 0 0 0 0 0
5 -5     5 -4     5 -3     5 -2     5 -1     5 0      0 0       0 0 0 0 0 0
5 -6     5 -5     5 -4     5 -3     5 -2     5 -1     0 0       0 0 0 0 0 0
5 -7     5 -6     5 -5     5 -4     5 -3     5 -2     0 0       0 0 0 0 0 0
5 -8     5 -7     5 -6     5 -5     5 -4     5 -3     0 0       0 0 0 0 0 0
5 -9     5 -8     5 -7     5 -6     5 -5     5 -4     0 0       0 0 0 0 0 0
5 -10    5 -9     5 -8     5 -7     5 -6     5 -5     0 0       0 0 0 0 0 0
5 -11    5 -10    5 -9     5 -8     5 -7     5 -6     0 0       0 0 0 0 0 0
4 -11    5 -10    5 -9     5 -8     5 -7     5 -6     0 0       0 0 0 0 0 0
3 -11    4 -11    4 -10    4 -9     4 -8     4 -7     0 0       0 0 0 0 0 0
2 -11    3 -11    4 -10    4 -9     4 -8     4 -7     0 0       0 0 0 0 0 0
1 -11    2 -11    3 -11    3 -10    3 -9     3 -8     0 0       0 0 0 0 0 0
0 -11    1 -11    2 -11    3 -10    3 -9     3 -8     0 0       0 0 0 0 0 0
-1 -11   0 -11    1 -11    2 -11    2 -10    2 -9     0 0       0 0 0 0 0 0
-2 -11   -1 -11   0 -11    1 -11    2 -10    2 -9     0 0       0 0 0 0 0 0
-3 -11   -2 -11   -1 -11   0 -11    1 -11    1 -10    0 0       0 0 0 0 0 0
-4 -11   -3 -11   -2 -11   -1 -11   0 -11    1 -10    0 0       0 0 0 0 0 0
-5 -11   -4 -11   -3 -11   -2 -11   -1 -11   0 -11    0 0       0 0 0 0 0 0
-6 -11   -5 -11   -4 -11   -3 -11   -2 -11   -1 -11   0 0       0 0 0 0 0 0
-7 -11   -6 -11   -5 -11   -4 -11   -3 -11   -2 -11   0 0       0 0 0 0 0 0
-8 -11   -7 -11   -6 -11   -5 -11   -4 -11   -3 -11   0 0       0 0 0 0 0 0
-9 -11   -8 -11   -7 -11   -6 -11   -5 -11   -4 -11   0 0       0 0 0 0 0 0
-10 -11  -9 -11   -8 -11   -7 -11   -6 -11   -5 -11   0 0       0 0 0 0 0 0
-11 -11  -10 -11  -9 -11   -8 -11   -7 -11   -6 -11   0 0       0 0 0 0 0 0
-12 -11  -11 -11  -10 -11  -9 -11   -8 -11   -7 -11   0 0       0 0 0 0 0 0
-13 -11  -12 -11  -11 -11  -10 -11  -9 -11   -8 -11   0 0       0 0 0 0 0 0
-14 -11  -13 -11  -12 -11  -11 -11  -10 -11  -9 -11   0 0       0 0 0 0 0 0
-15 -11  -14 -11  -13 -11  -12 -11  -11 -11  -10 -11  0 0       0 0 0 0 0 0
-16 -11  -15 -11  -14 -11  -13 -11  -12 -11  -11 -11  0 0       0 0 0 0 0 0
-17 -11  -16 -11  -15 -11  -14 -11  -13 -11  -12 -11  0 0       0 0 0 0 0 0
-18 -11  -17 -11  -16 -11  -15 -11  -14 -11  -13 -11  0 0       0 0 0 0 0 0
-19 -11  -18 -11  -17 -11  -16 -11  -15 -11  -14 -11  0 0       0 0 0 0 0 0
-20 -11  -19 -11  -18 -11  -17 -11  -16 -11  -15 -11  0 0       0 0 0 0 0 0
-21 -11  -20 -11  -19 -11  -18 -11  -17 -11  -16 -11  0 0       0 0 0 0 0 0
-22 -11  -21 -11  -20 -11  -19 -11  -18 -11  -17 -11  0 0       0 0 0 0 0 0
-23 -11  -22 -11  -21 -11  -20 -11  -19 -11  -18 -11  0 0       0 0 0 0 0 0
-24 -11  -23 -11  -22 -11  -21 -11  -20 -11  -19 -11  0 0       0 0 0 0 0 0
-25 -11  -24 -11  -23 -11  -22 -11  -21 -11  -20 -11  0 0       0 0 0 0 0 0
-26 -11  -25 -11  -24 -11  -23 -11  -22 -11  -21 -11  0 0       0 0 0 0 0 0
-27 -11  -26 -11  -25 -11  -24 -11  -23 -11  -22 -11  0 0       0 0 0 0 0 0
-28 -11  -27 -11  -26 -11  -25 -11  -24 -11  -23 -11  0 0       0 0 0 0 0 0
-29 -11  -28 -11  -27 -11  -26 -11  -25 -11  -24 -11  0 0       0 0 0 0 0 0
-30 -11  -29 -11  -28 -11  -27 -11  -26 -11  -25 -11  0 0       0 0 0 0 0 0
-31 -11  -30 -11  -29 -11  -28 -11  -27 -11  -26 -11  0 0       0 0 0 0 0 0
-32 -11  -31 -11  -30 -11  -29 -11  -28 -11  -27 -11  0 0       0 0 0 0 0 0
-33 -11  -32 -11  -31 -11  -30 -11  -29 -11  -28 -11  0 0       0 0 0 0 0 0
-34 -11  -33 -11  -32 -11  -31 -11  -30 -11  -29 -11  0 0       0 0 0 0 0 0
-35 -11  -34 -11  -33 -11  -32 -11  -31 -11  -30 -11  0 0       0 0 0 0 0 0
1
*/