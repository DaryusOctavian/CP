#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

typedef int64_t i64;
typedef long double ld;

ld coclender(pair<i64, i64> x, pair<i64, i64> y, pair<i64, i64> z) {
    return abs(x.first * (y.second - z.second) + y.first * (z.second - x.second) + z.first * (x.second - y.second)) / 2.0;
}

int main() {
    pair<i64, i64> a, b, c, n;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    i64 res = 0, k;
    ld area = coclender(a, b, c);
    cin >> k;
    for(i64 i = 0; i < k; i++) {
        cin >> n.first >> n.second;
        if(abs(area - coclender(a, b, n) - coclender(b, c, n) - coclender(a, c, n)) < 0.1) {
            res++;
        }
    }
    cout.precision(1);
    cout << fixed;
    cout << area << endl;
    cout << res << endl;
    return 0;
}