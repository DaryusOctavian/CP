#include <bits/stdc++.h>

using namespace std;

template <typename T> using vec = vector<T>;
template <typename T> using p = pair<T, T>;

using i64 = int64_t;
using d64 = long double;

i64 arr[1000000];
void init_arr() {
    i64 crt = 0;
    for (i64 i = 1; i < 1000000; i++) {
        arr[i] = crt + arr[i - 1];
        crt += 2;
    }
}

int main() {
    init_arr();

    i64 tc;
    cin >> tc;
    while (tc--) {
        i64 n;
        cin >> n;
        map<i64, i64> x_axis, y_axis, first_bisect, second_bisect;
        for (int i = 0; i < n; i++) {
            i64 x, y;
            cin >> x >> y;
            x_axis[x]++;
            y_axis[y]++;
            first_bisect[x - y]++;
            second_bisect[x + y]++;
        }

        i64 res = 0;
        for (auto kvp : x_axis) {
            res += arr[kvp.second];
        }
        for (auto kvp : y_axis) {
            res += arr[kvp.second];
        }
        for (auto kvp : first_bisect) {
            res += arr[kvp.second];
        }
        for (auto kvp : second_bisect) {
            res += arr[kvp.second];
        }

        cout << res << endl;
    }

    return 0;
}