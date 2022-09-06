#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

typedef int64_t i64;
typedef long double ld;

pair<i64, i64> bcalc(pair<i64, i64> a, pair<i64, i64> c) {
    pair<i64, i64> res;
    res.first = c.first;
    res.second = a.second;
    return res;
}

pair<i64, i64> dcalc(pair<i64, i64> a, pair<i64, i64> c) {
    pair<i64, i64> res;
    res.first = a.first;
    res.second = c.second;
    return res;
}

int main() {
    pair<i64, i64> p, a, b, c, d;
    cin >> p.first >> p.second >> a.first >> a.second >> c.first >> c.second;
    b = bcalc(a, c);
    d = dcalc(a, c);

    ld res = 0;
    if(p.first >= a.first && p.first <= b.first) {
        res = min(abs(p.second - a.second), abs(p.second - c.second));
    } else if(p.second >= a.second && p.second <= d.second) {
        res = min(abs(p.first - a.first), abs(p.first - b.first));
    } else {
        i64 xDif = min(abs(a.first - p.first), abs(b.first - p.first));
        i64 yDif = min(abs(a.second - p.second), abs(d.second - p.second));

        res = sqrt(xDif * xDif + yDif * yDif);
    }

    cout << fixed;
    cout.precision(8);
    cout << res << endl;

    // cout << a.first << a.second << endl;
    // cout << b.first << b.second << endl;
    // cout << c.first << c.second << endl;
    // cout << d.first << d.second << endl;
    return 0;
}