#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 x, y, xUp, yUp;
    i64 a, b;
    char sep;
    cin >> a >> sep >> b;
    x = b + a * 60;
    cin >> a >> sep >> b;
    y = b + a * 60;
    cin >> a >> sep >> b;
    xUp = b + a * 60;
    cin >> a >> sep >> b;
    yUp = b + a * 60;
    
    short times[10000];

    for(i64 i = 0; i < 10000; i++) {
        times[i] = 0;
    }

    for(i64 i = x; i < 10000; i += xUp) {
        times[i] = 1;
    }
    for(i64 i = y; i < 10000; i += yUp) {
        if(times[i]) {
            i64 n = i;
            i64 hours = n / 60;
            n %= 60;
            i64 days = hours / 24;
            hours %= 24;
            cout << days << " " << hours << " " << n << endl;
        }
    }
    return 0;
}