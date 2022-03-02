#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 x = 1, power = 1;
    while(n) {
        x *= 10;
        x += n % 2;
        n /= 2;
    }
    cout << x << endl;
    while(x > 1) {
        n += (x % 10) * power;
        power *= 2;
        x /= 10;
    }
    cout << n << endl;
    return 0;
} // overflow, try string