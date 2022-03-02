#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b, c;
    cin >> a >> b >> c;
    i64 s = a + b, total = 0;
    while(s >= c) {
        i64 yes = s % c;
        total += s / c;
        s /= c;
        s += yes;
    }

    cout << total << endl;
    return 0;
}
