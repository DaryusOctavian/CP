#include <iostream>

using namespace std;

typedef int64_t i64;

i64 gcm(i64 x, i64 y) {
    i64 r;
    while(y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

i64 lcm(i64 x, i64 y) {
    return (x / gcm(x, y)) * y;
}

int main() {
    i64 n;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 m, a, res;
        cin >> m >> res;
        for(i64 j = 1; j < m; j++) {
            cin >> a;
            res = lcm(a, res);
        }
        if(res > 1000000000 || res < 0) {
            cout << "More than a billion." << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}