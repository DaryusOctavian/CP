#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 x, y, xUp, yUp;
    i64 a, b;
    char sep;
    string days[7] = {"Saturday\n", "Sunday\n", "Monday\n", "Tuesday\n", "Wednesday\n", "Thursday\n", "Friday\n"};
    cin >> a >> sep >> b;
    x = b + a * 60;
    cin >> a >> sep >> b;
    y = b + a * 60;
    cin >> a >> sep >> b;
    xUp = b + a * 60;
    cin >> a >> sep >> b;
    yUp = b + a * 60;
    
    bool times[1000000];

    for(i64 i = 0; i < 1000000; i++) {
        times[i] = false;
    }

    for(i64 i = x; i < 1000000; i += xUp) {
        times[i] = true;
    }
    for(i64 i = y; i < 1000000; i += yUp) {
        if(times[i]) {
            i64 n = i;
            i64 hours = n / 60;
            n %= 60;
            i64 day = hours / 24;
            hours %= 24;
            cout << days[day % 7];
            if(hours < 10) {
                cout << "0" << hours << ":";
            } else {
                cout << hours << ":";
            }

            if(n < 10){
                cout << "0" << n << endl;
            } else {
                cout << n << endl;
            }
            return 0;
        }
    }
    cout << "Never" << endl;
    return 0;
}