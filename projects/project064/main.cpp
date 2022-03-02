#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    i64 c, d;
    cin >> c >> d;

    double res = ((a * c) - (b * d)) / (double(a - b));

    if(res <= 100 && res >= 0) {
        cout.precision(10);
        cout << fixed;
        cout << res << endl;
    } else {
        cout << "impossible" << endl;
    }
}