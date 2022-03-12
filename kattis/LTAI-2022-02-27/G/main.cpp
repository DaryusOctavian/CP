#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b, c, d, e, f, g, h, s = 0;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    s = a + b*2 + c*6 + d*30 + e*210 + f*2310 + g*30030 + h*510510;
    cout << 9699689 - s << endl;
    return 0;
}