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
        i64 n;
        cin >> n;
        vec<p<i64>> v;
        for (int i = 0; i < n; i++) {
            i64 a, b;
            cin >> a >> b;
            if (a <= 10) {
                v.push_back({b, i + 1});
            }
        }

        sort(v.begin(), v.end());

        cout << v.back().second << endl;
    }
}