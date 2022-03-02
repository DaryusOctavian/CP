#include <iostream>
#include <fstream>

using namespace std;

typedef int64_t i64;

ifstream fin ("input.txt");

int main() {
    i64 a;
    cin >> a;
    for (i64 k = 0; k < a; k++) {
        i64 b;
        cin >> b;
        i64 x[b];
        i64 sum = 0;
        for (i64 i = 0; i < b; i++) {
            cin >> x[i];
            sum += x[i];
        }

        double average = (double) sum / b;
        i64 count = 0;
        for (i64 i = 0; i < b; i++) {
            if(x[i] > average) {
                count++;
            }
        }
        double res = (double)count / (double)b;
        res *= 100;
        cout << fixed;
        cout.precision(3);
        cout << res << "%" << endl;
    }
    return 0;
}