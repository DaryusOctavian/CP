#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b, c;
    cin >> a >> b >> c;
    i64 res = (b + c) / a;
    if(res % 2 == 0) {
        cout << "paul" << endl;
    } else {
        cout << "opponent" << endl;
    }
    return 0;
}