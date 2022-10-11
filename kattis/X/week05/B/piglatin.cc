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

using d6 = long double;

using p3 = pair<i3, i3>;
using vi3 = vec<i3>;
using vp3 = vec<p3>;

using p6 = pair<i6, i6>;
using p64 = pair<i64, i64>;
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

bool isvowel(char x) {
  if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y') {
    return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif

  str s;
  while (getline(cin, s)) {
    stringstream ss(s);
    string word;
    while (ss >> word) {
      deq<char> eep(col(word));

      if (isvowel(eep[0])) {
        for (auto y : eep) {
          cout << y;
        }
        cout << "yay ";
      } else {
        while (!isvowel(eep[0])) {
          eep.push_back(eep.front());
          eep.pop_front();
        }
        for (auto y : eep) {
          cout << y;
        }
        cout << "ay ";
      }
    }
    cout << endl;
  }

  return 0;
}

/*

*/