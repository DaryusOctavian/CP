template <class T> class segtree {
private:
  i64 n, st;
  fn<T(T, T)> f;
  T def_value;
  vec<T> seg;

  i64 nextp(i64 n) {
    i64 res = 1;
    while (res < n) {
      res *= 2;
    }

    return res;
  }

public:
  segtree(i64 len, fn<T(T, T)> fun, T dv) {
    f = fun;
    def_value = dv;
    st = nextp(n);
    seg.assign(2 * st, def_value);
  }

  void update(i64 pos, T val) {
    i64 crt = seg.size() / 2 + pos;
    seg[crt] = val;
    crt /= 2;
    while (crt > 0) {
      seg[crt] = f(seg[2 * crt], seg[2 * crt + 1]);
      crt /= 2;
    }
  }

  T query(int ql, int qr) { return do_query(1, 0, seg.size() / 2 - 1, ql, qr); }
  T do_query(int pos, int l, int r, int ql, int qr) {
    if (l == ql && r == qr) {
      return seg[pos];
    }
    int mid = (r + l) / 2;
    T res = def_value;
    if (ql <= mid) {
      res = f(res, do_query(2 * pos, l, mid, ql, min(qr, mid)));
    }
    if (qr > mid) {
      res = f(res, do_query(2 * pos + 1, mid + 1, r, max(ql, mid + 1), qr));
    }
    return res;
  }
};