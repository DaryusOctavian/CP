/*
________  ________  ________  ________  ________ _________
|\   ___ \|\   __  \|\   ____\|\   __  \|\   ____\___   ___\
\ \  \_|\ \ \  \|\  \ \  \___|\ \  \|\  \ \  \___\|___ \  \_|
 \ \  \ \ \ \   _  _\ \_____  \ \  \\  \ \  \       \ \  \
  \ \  \_\ \ \  \  \|____|\  \ \  \\  \ \  \____   \ \  \
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
#define rvs(x) reverse(x.begin(), x.end())

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
template <typename K, typename V> using umap = unordered_map<K, V>;

template <typename K, typename V> using hmap = cc_hash_table<K, V>;

using str = string;
using vb = vec<bool>;

using byte = int8_t;
using i3 = int32_t;
using i6 = int64_t;
using i64 = int64_t;
using i128 = __int128_t;
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
#endif

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
    p64 startpos, endpos, midman;
    char x1;
    i64 x2;
    cin >> x1 >> x2;
    startpos = {x2 - 1, x1 - 'A'};
    cin >> x1 >> x2;
    endpos = {x2 - 1, x1 - 'A'};

    if ((startpos.ft + startpos.sd) % 2 != (endpos.ft + endpos.sd) % 2) {
      cout << "Impossible" << endl;
      continue;
    }

    i64 i = startpos.ft, j = startpos.sd;
    while (i > 0 && j < 8) {
      i--;
      j++;
    }
    while (i + j != endpos.ft + endpos.sd) {
      i++;
      j--;
    }

    if (startpos == endpos) {
      cout << 0 << " " << (char)(startpos.sd + 'A') << " " << startpos.ft + 1
           << endl;
    } else if (i == endpos.ft && j == endpos.sd) {
      cout << 1 << " " << (char)(startpos.sd + 'A') << " " << startpos.ft + 1
           << " " << (char)(j + 'A') << " " << i + 1 << endl;
    } else {
      midman = {i, j};
      while (i > 0 && j > 0) {
        i--;
        j--;
      }
      while (endpos.ft != i && endpos.sd == j) {
        i++;
        j++;
      }

      cout << 2 << " " << (char)(startpos.sd + 'A') << " " << startpos.ft + 1
           << " " << (char)(midman.sd + 'A') << " " << midman.ft + 1 << " "
           << (char)(j + 'A') << " " << i + 1 << endl;
    }
  }

  return 0;
}

/*
(0,0)(0,1)(0,2)(0,3)(0,4)(0,5)(0,6)(0,7)
(1,0)(1,1)(1,2)(1,3)(1,4)(1,5)(1,6)(1,7)
(2,0)(2,1)(2,2)(2,3)(2,4)(2,5)(2,6)(2,7)
(3,0)(3,1)(3,2)(3,3)(3,4)(3,5)(3,6)(3,7)
(4,0)(4,1)(4,2)(4,3)(4,4)(4,5)(4,6)(4,7)
(5,0)(5,1)(5,2)(5,3)(5,4)(5,5)(5,6)(5,7)
(6,0)(6,1)(6,2)(6,3)(6,4)(6,5)(6,6)(6,7)
(7,0)(7,1)(7,2)(7,3)(7,4)(7,5)(7,6)(7,7)
*/