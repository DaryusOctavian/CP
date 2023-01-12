/*
  _______                        ______               __
 /       \                      /      \             /  |
 $$$$$$$  |  ______    _______ /$$$$$$  |  _______  _$$ |_
 $$ |  $$ | /      \  /       |$$ |  $$ | /       |/ $$   |
 $$ |  $$ |/$$$$$$  |/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/
 $$ |  $$ |$$ |  $$/ $$      \ $$ |  $$ |$$ |        $$ | __
 $$ |__$$ |$$ |       $$$$$$  |$$ \__$$ |$$ \_____   $$ |/  |
 $$    $$/ $$ |      /     $$/ $$    $$/ $$       |  $$  $$/
 $$$$$$$/  $$/       $$$$$$$/   $$$$$$/   $$$$$$$/    $$$$/
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
using i6 = int64_t;
using i64 = int64_t;
using u64 = uint64_t;
using d64 = long double;

using p64 = pair<i64, i64>;
using vi64 = vec<i64>;
using vd64 = vec<d64>;
using vp64 = vec<p64>;
using vv = vec<vi64>;

using dp64 = deq<p64>;
using di64 = deq<i64>;

using mi64 = map<i64, i64>;
using mpi64 = map<p64, i64>;
using si64 = set<i64>;
using hi64 = hmap<i64, i64>;

using bs = bitset<64>;
using bitmask = u64;

using graph = vv;
using matrix = vv;

const d64 EPS = 1 / 1000000.0;
const i64 INF = INT64_MAX / 4;
const i64 NINF = -INF;
const i64 ZERO = 0;
const i64 _0 = ZERO;
const i64 ONE = 1;
const i64 _1 = ONE;

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
    u64 len;
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
    u64 len;
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

char caps(char c) {
  if (islower(c)) {
    return toupper(c);
  } else {
    return tolower(c);
  }
}

i64 getIndexFromRange(p64 range, i64 pos) {
  i64 unit = (range.sd - range.ft + 1) / 4;
  i64 crt = range.ft;
  i64 index = 0;

  while (true) {
    if (crt <= pos && pos < crt + unit) {
      break;
    }
    index++;
    crt += unit;
  }

  //   index--;

  return index;
}

i64 greatestSmallerThan(i64 x, i64 crt, i64 &depth) {
  do {
    x *= 4;
    depth++;
  } while (x <= crt);

  return x;
}

void operation(i64 &x, i64 &y) {
  i64 prevx = x;
  i64 prevy = y;

  x *= 2;
  x += prevy * 2;
  y *= 2;
  y += prevx * 2;

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

  ifstream cin{"caps.in"};
  ofstream cout{"caps.out"};

  i64 k, q;
  str s;
  cin >> k >> q >> s;
  vi64 freq1(52, 0);
  vi64 freq2(52, 0);
  str capsS = s;
  for (auto &c : capsS) {
    c = caps(c);
  }
  for (char c : s) {
    if (islower(c)) {
      freq1[c - 'a']++;
      freq2[c - 'a' + 26]++;
    } else {
      freq1[c - 'A' + 26]++;
      freq2[c - 'A']++;
    }
  }
  for (i64 yokakui : range(q)) {
    i64 n;
    cin >> n;
    n--;

    i64 depth = 0;
    p64 range = {0, greatestSmallerThan(k, n, depth) - 1};
    bool inverted = false;
    i64 unit = (range.sd - range.ft + 1) / 4;
    i64 index;

    i64 ones = 0, zeroes = 0;
    while (unit >= k) {
      unit = (range.sd - range.ft + 1) / 4;
      index = getIndexFromRange(range, n);
      if (index == 1 || index == 2) {
        inverted = !inverted;
      }

      if (index == 0) {
        range = {range.ft, range.ft + unit - 1};
        operation(ones, zeroes);
      } else if (index == 1) {
        range = {range.ft + unit, range.ft + 2 * unit - 1};
        operation(ones, zeroes);
        zeroes++;
      } else if (index == 2) {
        range = {range.ft + 2 * unit, range.ft + 3 * unit - 1};
        operation(ones, zeroes);
        zeroes++;
        ones++;
      } else {
        range = {range.ft + 3 * unit, range.ft + 4 * unit - 1};
        operation(ones, zeroes);
        zeroes++;
        ones += 2;
      }
      unit = (range.sd - range.ft + 1) / 4;
    }
    char c = s[n - range.ft];
    if (inverted) {
      c = caps(c);
    }
    cout << c << " ";

    // if (inverted) {
    //   if (index == 0 || index == 3) {
    //     inverted = false;
    //   }
    // } else {
    //   if (index == 1 || index == 2) {
    //     inverted = true;
    //   }
    // }

    // i64 trueN = n + 1;
    // i64 multiplier = n / (k * 4);
    // index = multiplier % 4;
    // index++;
    // index %= 4;
    // multiplier -= (multiplier % 4);
    i64 cindex;
    if (islower(c)) {
      cindex = c - 'a';
    } else {
      cindex = c - 'A' + 26;
    }
    i64 count = 0;
    // count += freq1[cindex] * 2 * multiplier;
    // count += freq2[cindex] * 2 * multiplier;

    if (index == 0) {
      if (!inverted) {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (s[i] == c ? 1 : 0);
        }
        // count += freq1[cindex] * zeroes + freq2[cindex] * ones;
      } else {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (capsS[i] == c ? 1 : 0);
        }
        // count += freq2[cindex] * zeroes + freq1[cindex] * ones;
      }
    } else if (index == 1) {
      if (!inverted) {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (s[i] == c ? 1 : 0);
        }
        // count += freq1[cindex] * zeroes + freq2[cindex] * ones;
      } else {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (capsS[i] == c ? 1 : 0);
        }
        // count += freq2[cindex] * zeroes + freq1[cindex] * ones;
      }
    } else if (index == 2) {
      if (!inverted) {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (s[i] == c ? 1 : 0);
        }
        // count += freq1[cindex] * zeroes + freq2[cindex] * ones;
      } else {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (capsS[i] == c ? 1 : 0);
        }
        // count += freq2[cindex] * zeroes + freq1[cindex] * ones;
      }
    } else {
      if (!inverted) {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (s[i] == c ? 1 : 0);
        }
        // count += freq1[cindex] * zeroes + freq2[cindex] * ones;
      } else {
        for (i64 i = 0; i <= n - range.ft; i++) {
          count += (capsS[i] == c ? 1 : 0);
        }
        // count += freq2[cindex] * zeroes + freq1[cindex] * ones;
      }
    }
    // if (depth % 4 == 1) {
    //   count += freq1[cindex] * zeroes + freq2[cindex] * ones;
    // } else {
    //   count += freq2[cindex] * zeroes + freq1[cindex] * ones;
    // }

    if (index == 0) {
      count += freq1[cindex] * zeroes + freq2[cindex] * ones;
    } else if (index == 1) {
      if (inverted) {
        count += freq1[cindex] * max(zeroes, ones) +
                 freq2[cindex] * min(zeroes, ones);
      } else {
        count += freq2[cindex] * max(zeroes, ones) +
                 freq1[cindex] * min(zeroes, ones);
      }
    } else if (index == 2) {
      count += freq1[cindex] * zeroes + freq2[cindex] * ones;
    } else {
      if (inverted) {
        count += freq1[cindex] * max(zeroes, ones) +
                 freq2[cindex] * min(zeroes, ones);
      } else {
        count += freq2[cindex] * max(zeroes, ones) +
                 freq1[cindex] * min(zeroes, ones);
      }
    }

    cout << count << endl;
  }

  return 0;
}

/*
3
32

0             11              23           |   35              47
cacBacC CACbACc CACbACc cacBacC CACbACc cacBacC cacBacC CACbACc CACbACc cacBacC
cacBacC CACbACc

0s = 11
1s = 10

0 1 1 0|1 0 0 1|1 0 0 1|0 1 1 0   0 1 1 0|1 0 0 1|1 0 0 1|0 1 1 0
   0       1       1       0         0       1       1       0
*/
