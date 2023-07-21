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
        i64 a, b, c;
        cin >> a >> b >> c;
        if (a + b > 9 or b + c > 9 or a + c > 9) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}