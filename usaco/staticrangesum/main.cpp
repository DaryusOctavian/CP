#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    vector<i64> v(a);
    for (i64 i = 0; i < a; i++) {
        cin >> v[i];
    }

    for(i64 i = 1; i < a; i++) {
        v[i] += v[i - 1];
    }

    for(i64 i = 0; i < b; i++) {
        i64 x, y;
        cin >> x >> y;
        if(x == 0) {
            cout << v[y - 1] << endl;
        } else {
            cout << v[y - 1] - v[x - 1] << endl;
        }
    }
    return 0;
}