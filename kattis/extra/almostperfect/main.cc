#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (n / i != i) {
                    sum += (n / i);
                }
            }
        }

        if (n == sum) {
            cout << n << " perfect" << endl;
        } else if (abs(n - sum) <= 2) {
            cout << n << " almost perfect" << endl;
        } else {
            cout << n << " not perfect" << endl;
        }
    }

    return 0;
}
