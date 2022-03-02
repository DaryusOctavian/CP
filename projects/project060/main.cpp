#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    while(n != -1) {
        i64 a, b, b0;
        cin >> a >> b0;
        i64 s = 0;
        s += a * b0;
        for(i64 i = 1; i < n; i++) {
            cin >> a >> b;
            s += a * (b - b0);
            b0 = b;
        }

        cout << s << " miles" << endl;
        cin >> n;
    }
    return 0;
}