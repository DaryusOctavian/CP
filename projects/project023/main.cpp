#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 c;
    cin >> c;
    for (i64 k = 0; k < c; k++) {
        i64 CS, E;
        cin >> CS >> E;
        i64 ACS[CS];
        i64 AE[E];
        for (i64 i = 0; i < CS; i++) {
            cin >> ACS[i];
        }
        for (i64 i = 0; i < E; i++) {
            cin >> AE[i];
        }

        long double CSAverage = 0.0;
        long double EAverage = 0.0;
        for (i64 i = 0; i < CS; i++) {
            CSAverage += ACS[i];
        }
        CSAverage /= CS;
        for (i64 i = 0; i < E; i++) {
            EAverage += AE[i];
        }
        EAverage /= E;

        i64 res = 0;
        for (i64 i = 0; i < CS; i++) {
            if(CSAverage > (long double)ACS[i] && (double)ACS[i] > EAverage) {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}