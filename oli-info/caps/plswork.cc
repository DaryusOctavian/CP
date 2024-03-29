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

char caps(char x) {
  if (isupper(x)) {
    x = tolower(x);
  } else {
    x = toupper(x);
  }
  return x;
}

i64 smallestGreaterThan(i64 x, i64 n) {
  while (x < n) {
    x *= 4;
  }
  return x;
}

p64 getIndex(i64 x, i64 crt) {
  i64 unit = crt / 4;
  i64 index = 0, current = 0;

  while (current < x && index < 4) {
    current += unit;
    index++;
  }

  index--;
  current -= unit;

  return {index, current};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  i64 k, q;
  str s, capss;
  cin >> k >> q >> s;
  capss = s;
  for (auto &e : capss) {
    e = caps(e);
  }
  vi64 freq1(52, 0), freq2(52, 0);
  for (i64 i : range(s.length())) {
    if (islower(s[i])) {
      freq1[s[i] - 'a']++;
    } else {
      freq1[s[i] - 'A' + 26]++;
    }
    if (islower(capss[i])) {
      freq2[capss[i] - 'a']++;
    } else {
      freq2[capss[i] - 'A' + 26]++;
    }
  }

  for (i64 yeepa : range(q)) {
    i64 n;
    cin >> n;
    n--;

    i64 crt = smallestGreaterThan(k, n);
    bool inverted = false;
    i64 norms = 0, revs = 0;
    char res = '\0';
    while (true) {
      if (crt < k) {
        res = s[crt];
        if (inverted) {
          res = caps(res);
        }
        break;
      }

      p64 indandu = getIndex(n, crt);
      if (indandu.ft == 1 || indandu.ft == 2) {
        inverted = !inverted;
      }
      crt = n - indandu.sd + 1;
    }

    cout << res << " ";
    i64 ans = 0, cnt = n / k / 4 * 2;
    ans += freq1[res - (islower(res) ? 'a' : 'A')] * cnt;
    ans += freq2[res - (islower(res) ? 'a' : 'A')] * cnt;

    cout << ans << endl;
  }

  return 0;
}

/*
10
48

Ham hAM hAM Ham|hAM Ham Ham hAM|hAM Ham Ham hAM|Ham hAM hAM Ham
 0   1   1   0 | 1   0   0   1 | 1   0   0   1 | 0   1   1   0
       0               1               1               0



2 % 3  = 2
*/
