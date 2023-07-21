#include <bits/stdc++.h>

using namespace std;

template <typename T> using vec = vector<T>;
template <typename T> using p = pair<T, T>;

using i64 = int64_t;
using d64 = long double;

i64 lcm(i64 a, i64 b) {
    return ((a / __gcd(a, b)) * (b / __gcd(a, b)));
}

int main() {
    i64 tc;
    cin >> tc;
    while (tc--) {
        i64 n;
        cin >> n;
        vec<i64> v(n);
        for (auto &e : v) {
            cin >> e;
        }
        sort(v.rbegin(), v.rend());
        while (v.back() == 1) {
            v.pop_back();
        }
        if (v.empty()) {
            cout << n << endl;
            continue;
        }

        while (v.size() > 1) {
            i64 a = v.back();
            v.pop_back();
            i64 b = v.back();
            v.pop_back();

            i64 crt = lcm(a, b);
            if (crt <= n) {
                v.push_back(crt);
            } else {
                v.push_back(a);
            }
        }
    }

    return 0;
}