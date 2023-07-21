#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> mask(n, 0);

    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    for (int i = n - k; i < n; i++) {
        mask[i] = i - n + k + 1;
    }

    do {
        vector<int> crt(k);
        for (int i = 0; i < n; i++) {
            if (mask[i] > 0) {
                crt[mask[i] - 1] = v[i];
            }
        }
        for (int i = 0; i < k; i++) {
            cout << crt[i] << " ";
        }
        cout << endl;
    } while (next_permutation(mask.begin(), mask.end()));
}

/*
n-k     n-k+1    n-k+2 ...
1       2        3
-n+k+1  -n+k+1   -n+k+1
*/