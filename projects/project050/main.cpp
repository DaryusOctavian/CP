#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 k0;
    cin >> k0;
    for(i64 k = 0; k < k0; k++) {
        i64 a, b, c;
        cin >> a >> b >> c;
        i64 n = 0;
        while(c) {
            n += (c % b) * (c % b);
            c /= b;
        }

        cout << a << " " << n << endl;
    }
    return 0;
}