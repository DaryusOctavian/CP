#include <bits/stdc++.h>

using namespace std;

template <typename T> using vec = vector<T>;
template <typename T> using p = pair<T, T>;

using i64 = int64_t;
using d64 = long double;

int main() {
    i64 tc;
    cin >> tc;
    while (tc--) {
        i64 n, k;
        cin >> n >> k;

        i64 input[n];
        for (int i = 0; i < n; i++) {
            cin >> input[i];
        }
        sort(input, input + n);

        vec<vec<i64>> v(1);
        for (i64 i = 0; i < n; i++) {
            i64 x = input[i];
            if (v.back().empty()) {
                v.back().push_back(x);
            } else if (abs(v.back().back() - x) <= k) {
                v.back().push_back(x);
            } else {
                v.push_back(vec<i64>());
                v.back().push_back(x);
            }
        }

        i64 best = 0;
        for (auto &e : v) {
            best = max(best, (i64)e.size());
        }
        cout << n - best << endl;
    }

    return 0;
}