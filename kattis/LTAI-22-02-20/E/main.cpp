#include <iostream>
#include <math.h>

using namespace std;

typedef uint64_t u64;

int main() {
    u64 a, b, c;
    while(cin >> a >> b >> c && a != 0 && b != 0 && c != 0) {
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    return 0;
}