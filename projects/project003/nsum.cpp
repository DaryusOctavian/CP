#include <iostream>

using namespace::std;

typedef int64_t i64;

int main() {
    i64 n, s = 0;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 a;
        cin >> a;
        s += a;
    }
    cout << s << endl;
    return 0;
}