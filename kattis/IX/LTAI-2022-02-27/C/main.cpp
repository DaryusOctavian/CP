#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n, m;
    cin >> n >> m;
    vector<i64> l(m, 0), r(m, 0);
    for(i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        if(i % 2 == 0) {
            r[x - 1]++;
        } else {
            l[m - x]++;
        }
    }

    i64 sum = 0;
    for(i64 i = m - 1; i >= 0; i--) {
        sum += r[i];
        r[i] = sum;
    }
    sum = 0;
    for(i64 i = 0; i < m; i++) {
        sum += l[i];
        l[i] = sum;
    }

    i64 res = 1e9, k = 0;
    for(i64 i = 0; i < m; i++) {
        if(r[i] + l[i] < res) {
            res = r[i] + l[i];
            k = 1;
        } else if(r[i] + l[i] == res) {
            k++;
        }
    }

    cout << res << " " << k << endl;
    return 0;
}