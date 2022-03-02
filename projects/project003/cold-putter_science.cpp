#include <iostream>

using namespace::std;

typedef int64_t i64;

int main() {
    i64 n, x = 0;
    for(i64 i = 0; i < n; i++) {
        i64 a;
        cin >> a;
        if(a < 0) {
            x++;
        }
    }

    cout << x << endl;
    return 0;
}