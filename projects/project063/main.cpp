#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 b, br, bs, a, ar, as;
    cin >> b >> br >> bs >> a >> as;
    i64 bf = (br - b) * bs;
    i64 res = (bf / as) + 1;
    cout << res + a << endl;
    return 0;
}