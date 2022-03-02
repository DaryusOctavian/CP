#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, c, puterilelu10, e, f, g = 0, rares = 0;
    cin >> a;
    int r = a;
    for (int b = 2; b * b <= a; b++) {
        a = r;
        c = a;
        f = 0;
        puterilelu10 = 1;
        while (a != 0) {
            e = a % b;
            f = f + e * puterilelu10;
            puterilelu10 = puterilelu10 * 10;
            a = a / b;
        }
        g = 0;
        while (f != 0) {
            if (f % 10 == 0) {
                g += 1;
                f = f / 10;
            } else {
                f = 0;
                break;
            }
        }

        if (g > rares) {
            rares = b;
        }
    }
    cout << rares << endl;
    return 0;
}