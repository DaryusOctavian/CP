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

vector<string> split(string line) {
  vector<string> res;
  istringstream iss(line);
  str crt;
  while (iss >> crt) {
    res.push_back(crt);
  }
  return res;
}

string as_path(vec<string> &path) {
  if (sz(path) == 1) {
    return path[0];
  }
  string res;
  for (int i = 1; i < sz(path); i++) {
    res.push_back('/');
    res.append(path[i]);
  }
  return res;
}
#endif

class Node {
private:
  Node *parent;
  string name;

public:
  Node(Node *_parent, string _name) : parent(_parent), name(_name) {}
  virtual ~Node() {}
  Node *getParent() { return this->parent; }
  string getName() { return this->name; }

  virtual int getSize() = 0;
  virtual bool addChild(Node *child) = 0;
  virtual Node *getChild(string cname) = 0;
  virtual i6 visitP1(vec<string> &path, map<string, i6> &fs) = 0;
};

class DirNode : public Node {
private:
  vector<Node *> children;

public:
  DirNode(Node *_parent, string _name) : Node(_parent, _name) {
    if (_parent == NULL && _name != "/") {
      throw "Invalid folder parent";
    }
  }
  ~DirNode() {
    for (auto c : children) {
      delete c;
    }
  }
  virtual Node *getChild(string cname) {
    for (auto c : children) {
      if (c->getName() == cname) {
        return c;
      }
    }
    return NULL;
  }

  virtual i6 visitP1(vec<string> &path, map<string, i6> &fs) {
    path.push_back(this->getName());
    str dpath = as_path(path);
    if (fs.count(dpath) == 0) {
      i6 size = 0;
      for (auto c : children) {
        size += c->visitP1(path, fs);
      }
      fs[dpath] = size;
    }
    path.pop_back();
    return fs[dpath];
  }

  virtual int getSize() {
    i6 size = 0;
    for (auto c : children) {
      size += c->getSize();
    }
    return size;
  }

  virtual bool addChild(Node *child) {
    if (child == NULL) {
      throw "Child can't be null";
    }
    if (getChild(child->getName()) != NULL) {
      return false;
    }
    children.push_back(child);
    return true;
  }
};

class FileNode : public Node {
private:
  i6 fsize;

public:
  FileNode(Node *_parent, string _name, i6 size)
      : Node(_parent, _name), fsize(size) {
    if (fsize < 0) {
      throw "Invalid file size";
    }
    if (_parent == NULL) {
      throw "Invalid file parent";
    }
  }

  virtual int getSize() { return fsize; }
  virtual bool addChild(Node *child) { throw "Files cannot have children"; }
  virtual Node *getChild(string cname) { throw "Don't do that"; }
  virtual i6 visitP1(vec<string> &path, map<string, i6> &fs) {
    path.push_back(this->getName());
    string pth = as_path(path) + "$";
    fs[pth] = getSize();
    path.pop_back();
    return fs[pth];
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif
  Node *root = new DirNode(NULL, "/");
  Node *crt = root;
  string line;
  while (getline(cin, line)) {
    vec<str> lcmp = split(line);
    if (lcmp[0] == "$") {
      if (lcmp[1] == "ls") {
        continue;
      }
      if (lcmp[1] == "cd") {
        if (lcmp[2] == "/") {
          crt = root;
        } else if (lcmp[2] == "..") {
          crt = crt->getParent();
        } else {
          crt = crt->getChild(lcmp[2]);
        }
      }
    } else {
      if (lcmp[0] == "dir") {
        crt->addChild(new DirNode(crt, lcmp[1]));
      } else {
        i6 fsize = stoll(lcmp[0]);
        crt->addChild(new FileNode(crt, lcmp[1], fsize));
      }
    }
  }
  map<string, i6> fs;
  vector<string> path;
  root->visitP1(path, fs);

  i6 total = 0;
  for (auto &kv : fs) {
    if (kv.second <= 100000 && kv.first[sz(kv.first) - 1] != '$') {
      total += kv.second;
      // cout << kv.first << " " << kv.second << endl;
    }
  }
  cout << total << endl;
  /*
    /a/b =>12456
    /a/b/c$ =>1235
  */

  i6 tot = root->getSize();
  cout << "Total " << tot << endl;
  i6 left = 70000000 - tot;
  cout << "Left " << left << endl;
  i6 need = 30000000 - left;
  cout << "Need " << need << endl;

  i6 best = tot;
  for (auto &kv : fs) {
    if (kv.second >= need && kv.first[sz(kv.first) - 1] != '$') {
      best = min(best, kv.second);
    }
  }
  cout << best << endl;
  delete root;
  return 0;
}

/*
1297683
Total 44804833
Left 25195167
Need 4804833
5756764
*/
