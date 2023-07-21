#include <bits/stdc++.h>

using namespace std;

template <typename T> using vec = vector<T>;
template <typename T> using p = pair<T, T>;

using i64 = int64_t;
using d64 = long double;

string solve(vec<string> &v) {
    string res;

    for (i64 i = 0; i < 8; i++) {
        for (i64 j = 0; j < 8; j++) {
            if (v[i][j] != '.') {
                while (i < 8 and v[i][j] != '.') {
                    res.push_back(v[i][j]);
                    i++;
                }
                return res;
            }
        }
    }
}

int main() {
    i64 tc;
    cin >> tc;
    while (tc--) {
        vec<string> mp(8);
        for (auto &line : mp) {
            cin >> line;
        }

        auto res = solve(mp);

        cout << res << endl;
    }
    return 0;
}