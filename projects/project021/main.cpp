#include <iostream>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    double a;
    cin >> a;
    cout << fixed;
    cout.precision(8);
    cout << min(0.25, a * a * 0.25) << endl;
    return 0;
}