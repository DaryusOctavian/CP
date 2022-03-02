#include <iostream>

using namespace std;

typedef int64_t i64;
typedef long double ld;

int main() {
    i64 n, numerator = 1, denominator = 1;
    ld total = 0, prevTotal = 0;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;

        total += (x * numerator) / (ld)denominator;

        if(n - 2 == i) {
            prevTotal = total;
        }

        numerator *= 4;
        denominator *= 5;
    }
    total /= 5;
    prevTotal /= 5;

    cout << fixed;
    cout.precision(8);
    cout << total << endl << prevTotal << endl;
    return 0;
}