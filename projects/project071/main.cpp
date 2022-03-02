#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 aH, aM, bH, bM, aUp, bUp;
    i64 x;
    char sep;
    cin >> aH >> sep >> aM >> bH >> sep >> bM;
    cin >> x >> sep >> aUp;
    aUp += x * 60;
    cin >> x >> sep >> bUp;
    bUp += x * 60;

    i64 counter = 0;
    aM += aH * 60;
    bM += bH * 60;
    bool done = false;
    aM += aUp;
    bM += bUp;
    i64 totalMinutes = 0;
    while (counter < 999999) {
        if(aM % 60 == bM % 60) {
            done = true;
            break;
        } else if(aM > bM) {
            bM += bUp;
            totalMinutes += bUp;
        } else if(bM > aM) {
            aM += aUp;
            totalMinutes += aUp;
        }

        counter++;
    }

    if(done) {
        if(aM < bM) {
            swap(aM, bM);
            swap(aH, bH);
        }

        i64 minutes = /*aM - aH*/ totalMinutes * 60;
        i64 hours = minutes / 60;
        minutes %= 60;
        i64 days = hours / 24;
        hours %= 24;

        cout << days << " " << hours << ":" << minutes << endl;
    } else {
        cout << "Never" << endl;
    }
    return 0;
}