#ifndef __AHA__HEADER
#define __AHA__HEADER

#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <condition_variable>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <mutex>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

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
#define col(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())
#define rvs(x) reverse(x.begin(), x.end())

#define pq priority_queue
#define fn function
#ifdef LOCAL
#define git stauDBG_MACRO_NO_WARNING
#include <dbg.h>
#else
#define dbg(...)
#endif
#define endl '\n'

template <typename T> using vec = vector<T>;
template <typename T> using deq = deque<T>;
// template <typename K, typename V> using umap = unordered_map<K, V>;
// template <typename K, typename V> using hmap = cc_hash_table<K, V>;

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
using p64 = pair<i64, i64>;
using vi3 = vec<i3>;
using vp3 = vec<p3>;

using p6 = pair<i6, i6>;
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
// using hi6 = hmap<i6, i6>;

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

#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  vp64 wK, wQ, wR, wB, wN, wP, bK, bQ, bR, bB, bN, bP;
  for (i64 i = 0; i < 17; i++) {
    for (i64 j = 0; j < 33; j++) {
      char x;
      cin >> x;
      if (i % 2 && j % 4 == 2) {
        p64 a, b;
        a.ft = 8 - i / 2;
        a.sd = j / 4;
        b.ft = i / 2;
        b.sd = j / 4;
        if (x == 'K') {
          wK.psb(a);
        } else if (x == 'k') {
          bK.psb(b);
        } else if (x == 'Q') {
          wQ.psb(a);
        } else if (x == 'q') {
          bQ.psb(b);
        } else if (x == 'R') {
          wR.psb(a);
        } else if (x == 'r') {
          bR.psb(b);
        } else if (x == 'B') {
          wB.psb(a);
        } else if (x == 'b') {
          bB.psb(b);
        } else if (x == 'N') {
          wN.psb(a);
        } else if (x == 'n') {
          bN.psb(b);
        } else if (x == 'P') {
          wP.psb(a);
        } else if (x == 'p') {
          bP.psb(b);
        }
      }
    }
  }

  srt(wK);
  srt(wQ);
  srt(wR);
  srt(wB);
  srt(wN);
  srt(wP);
  srt(bK);
  // rvs(bK);
  srt(bQ);
  // rvs(bQ);
  srt(bR);
  // rvs(bR);
  srt(bB);
  // rvs(bB);
  srt(bN);
  // rvs(bN);
  srt(bP);
  // 8-rvs(bP);

  cout << "White: ";
  bool eep = true;
  for (i64 i = 0; i < sz(wK); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'K' << (char)(wK[i].sd + 'a') << wK[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(wQ); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'Q' << (char)(wQ[i].sd + 'a') << wQ[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(wR); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'R' << (char)(wR[i].sd + 'a') << wR[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(wB); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'B' << (char)(wB[i].sd + 'a') << wB[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(wN); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'N' << (char)(wN[i].sd + 'a') << wN[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(wP); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << (char)(wP[i].sd + 'a') << wP[i].ft;
    eep = false;
  }
  cout << endl;

  cout << "Black: ";
  eep = true;
  for (i64 i = 0; i < sz(bK); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'K' << (char)(bK[i].sd + 'a') << 8 - bK[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(bQ); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'Q' << (char)(bQ[i].sd + 'a') << 8 - bQ[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(bR); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'R' << (char)(bR[i].sd + 'a') << 8 - bR[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(bB); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'B' << (char)(bB[i].sd + 'a') << 8 - bB[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(bN); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << 'N' << (char)(bN[i].sd + 'a') << 8 - bN[i].ft;
    eep = false;
  }
  for (i64 i = 0; i < sz(bP); i++) {
    if (!eep) {
      cout << ',';
    }
    cout << (char)(bP[i].sd + 'a') << 8 - bP[i].ft;
    eep = false;
  }
  cout << endl;

  return 0;
}

/*
17x33
0123456789
+---+---+---+---+---+---+---+---+
|.r.|:::|.b.|:q:|.k.|:::|.n.|:r:|
+---+---+---+---+---+---+---+---+
|:p:|.p.|:p:|.p.|:p:|.p.|:::|.p.|
+---+---+---+---+---+---+---+---+
|...|:::|.n.|:::|...|:::|...|:p:|
+---+---+---+---+---+---+---+---+
|:::|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|...|:::|...|:::|.P.|:::|...|:::|
+---+---+---+---+---+---+---+---+
|:P:|...|:::|...|:::|...|:::|...|
+---+---+---+---+---+---+---+---+
|.P.|:::|.P.|:P:|...|:P:|.P.|:P:|
+---+---+---+---+---+---+---+---+
|:R:|.N.|:B:|.Q.|:K:|.B.|:::|.R.|
+---+---+---+---+---+---+---+---+
*/